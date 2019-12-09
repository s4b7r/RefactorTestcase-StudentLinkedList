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

class LinkedList {
public:
    void print_all_elements();
    void insert_element_into_list(LinkedList_Element * element);
    void remove_element_from_list(LinkedList_Element * element);
    LinkedList_Element * find_student_by_name(char * name);
    void remove_student_by_name(char * name);
    void insert_student_from_keyboard_sorted_by_matrikel(LinkedList_Element * new_student);

    LinkedList_Element * head;
};


