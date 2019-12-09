#pragma once

#include "LinkedList_Element.h"
#include "Student.h"

class LinkedList {
public:
    void print_all_elements();
    void insert_element_into_list(LinkedList_Element<Student> * element);
    void remove_element_from_list(LinkedList_Element<Student> * element);
    LinkedList_Element<Student> * find_student_by_name(char * name);
    void remove_student_by_name(char * name);
    void insert_student_from_keyboard_sorted_by_matrikel(LinkedList_Element<Student> * new_student);

    LinkedList_Element<Student> * head = 0;
};


