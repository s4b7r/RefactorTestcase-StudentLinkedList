#pragma once

class LinkedList_Element
{
public:
    static LinkedList_Element * create_from_keyboard();

    class LinkedList_Element * next;

    char name[50];
    int matrikel_no;
    int immat_year;
    char study[50];
};

struct linked_list {
    LinkedList_Element * head;
};

void insert_element_into_list(struct linked_list * list, LinkedList_Element * element);
void remove_element_from_list(struct linked_list * list, LinkedList_Element * element);
LinkedList_Element * find_student_by_name(struct linked_list * list, char * name);
void remove_student_by_name(struct linked_list * list, char * name);
void insert_student_from_keyboard_sorted_by_matrikel(struct linked_list * list, LinkedList_Element * new_student);
