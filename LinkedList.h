#pragma once

class LinkedList_Element
{
public:
    static LinkedList_Element * create_from_keyboard();

    void print_details();

    LinkedList_Element * next;

    char name[50];
    int matrikel_no;
    int immat_year;
    char study[50];
};

class LinkedList {
public:
    void print_all_elements();

    LinkedList_Element * head;
};

void insert_element_into_list(LinkedList * list, LinkedList_Element * element);
void remove_element_from_list(LinkedList * list, LinkedList_Element * element);
LinkedList_Element * find_student_by_name(LinkedList * list, char * name);
void remove_student_by_name(LinkedList * list, char * name);
void insert_student_from_keyboard_sorted_by_matrikel(LinkedList * list, LinkedList_Element * new_student);
