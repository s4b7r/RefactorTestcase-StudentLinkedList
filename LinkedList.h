#pragma once

struct linked_list_element {
	struct linked_list_element * next;

	char name[50];
	int matrikel_no;
	int immat_year;
	char study[50];
};

struct linked_list {
	struct linked_list_element * head;
};


void insert_element_into_list(struct linked_list * list, struct linked_list_element * element);
void remove_element_from_list(struct linked_list * list, struct linked_list_element * element);
struct linked_list_element * find_student_by_name(struct linked_list * list, char * name);
void remove_student_by_name(struct linked_list * list, char * name);
void insert_student_from_keyboard_sorted_by_matrikel(struct linked_list * list);
