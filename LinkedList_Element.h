#pragma once

#include "Student.h"

class LinkedList_Element
{
public:
    static LinkedList_Element * create_from_keyboard();

    LinkedList_Element(Student * content);
    ~LinkedList_Element();

    void print_details();

    LinkedList_Element * next;
    Student * content;
};
