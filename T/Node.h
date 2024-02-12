﻿#pragma once

struct Node
{
    char m_english[15];
	char m_russian[15];
    char lastname[15];
    char marks[15];

	Node* m_parent;

    Node* m_left;  
    Node* m_right;
	

    char* GetEnglish();
    char* GetRussian();
    char* GetLastName();
    char* GetMarks();
};