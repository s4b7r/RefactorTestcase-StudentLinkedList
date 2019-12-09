#pragma once

#include "LinkedList.h"

void insert_student_from_keyboard_into_list(struct linked_list * list);
void print_student_details(LinkedList_Element * student);
void print_student_by_name(struct linked_list * list, char * name);
char * get_name_from_keyboard(char * store);
void print_all_students(struct linked_list * list);
