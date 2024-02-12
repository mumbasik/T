#include <conio.h>
#include <iostream>

#include "Functions.h"

using namespace std;

void Insert(Tree& tree)
{
    system("cls");
    cout << "Enter a quantity of elements to add: ";

    unsigned int count = 0U;
    cin >> count;

    for (unsigned int i = 0U; i < count; ++i)
    {
        Node* temp = new Node;

        cout << endl << "Enter a name " << i + 1 << endl;
        cin >> temp->GetEnglish();

        cout << endl << "Enter a surename " << i + 1 << endl;
        cin >> temp->GetRussian();
        cout << endl << "Enter a lastname" << i + 1 << endl;
        cin >> temp->GetLastName();
        cout << endl << "Enter marks" << i + 1 << endl;
        cin >> temp->GetMarks();

        tree.Insert(temp);
    }
}

void Print(const Tree& tree)
{
    system("cls");

    tree.Print(tree.GetRoot());

    _getch();
}

void PrintMenu()
{
    char menu[] = "1. Insert node\n2. Remove node\n3. Print node\n4. Search node\n5. Exit\n";

    system("cls");

    cout << menu;
}

void Remove(Tree& tree)
{
    system("cls");
    cout << "Enter a name to delete" << endl;

    char buffer[15] = {};
    cin >> buffer;

    Node* node = tree.Search(tree.GetRoot(), buffer);

    tree.Remove(node);
}

void Search(const Tree& tree)
{
    system("cls");
    cout << "Enter a name to search" << endl;

    char buffer[15] = {};
    cin >> buffer;

    Node* node = tree.Search(tree.GetRoot(), buffer);

    if (node != nullptr)
    {
        cout << node->GetEnglish();
    }
    else
    {
        cout << "Name is not found" << endl;
    }
    if (node != nullptr) {
        cout << node->GetRussian();
    }
    else
    {
        cout << "Surename not found" << endl;
    }
    if (node != nullptr) {
        cout << node->GetLastName();
    }
    else {
        cout << "Lastname not found" << endl;
    }
    

    _getch();
}