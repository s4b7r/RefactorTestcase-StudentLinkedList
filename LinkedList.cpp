#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "LinkedList.h"

void LinkedList::insert_element_into_list(LinkedList_Element * element) {
    element->next = this->head;
    this->head = element;
}

void LinkedList::insert_student_from_keyboard_sorted_by_matrikel(LinkedList_Element * new_student) {
    LinkedList_Element * element;
    LinkedList_Element * previous;

    element = this->head;
    previous = 0;
    while (element != 0 && element->content->matrikel_no < new_student->content->matrikel_no) {
        previous = element;
        element = element->next;
    }
    if (previous == 0) {
        new_student->next = this->head;
        this->head = new_student;
    }
    else {
        new_student->next = element;
        previous->next = new_student;
    }
}

void LinkedList::print_all_elements() {
    LinkedList_Element * element;

    element = this->head;
    while (element != 0) {
        element->print_details();
        printf("\n");
        element = element->next;
    }
}

LinkedList_Element * LinkedList::find_student_by_name(char * name) {
    LinkedList_Element * element;

    element = this->head;
    while (element != 0 && strcmp(element->content->name, name) != 0) {
        element = element->next;
    }

    return element;
}

void LinkedList::remove_element_from_list(LinkedList_Element * element) {
    LinkedList_Element * previous_element;

    if (this->head == element) {
        this->head = element->next;
        delete element;
    }
    else {
        previous_element = this->head;
        while (previous_element->next != element) {
            previous_element = previous_element->next;
        }

        previous_element->next = element->next;
        delete element;
    }
}

void LinkedList::remove_student_by_name(char * name) {
    remove_element_from_list(this->find_student_by_name(name));
}
