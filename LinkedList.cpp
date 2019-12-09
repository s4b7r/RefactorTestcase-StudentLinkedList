#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "LinkedList.h"

void insert_element_into_list(LinkedList * list, LinkedList_Element * element) {
    element->next = list->head;
    list->head = element;
}

void remove_element_from_list(LinkedList * list, LinkedList_Element * element) {
    LinkedList_Element * previous_element;

    if (list->head == element) {
        list->head = element->next;
        delete element;
    }
    else {
        previous_element = list->head;
        while (previous_element->next != element) {
            previous_element = previous_element->next;
        }

        previous_element->next = element->next;
        delete element;
    }
}

LinkedList_Element * find_student_by_name(LinkedList * list, char * name) {
    LinkedList_Element * element;

    element = list->head;
    while (element != 0 && strcmp(element->name, name) != 0) {
        element = element->next;
    }

    return element;
}

void remove_student_by_name(LinkedList * list, char * name) {
    remove_element_from_list(list, find_student_by_name(list, name));
}


void insert_student_from_keyboard_sorted_by_matrikel(LinkedList * list, LinkedList_Element * new_student) {
    LinkedList_Element * element;
    LinkedList_Element * previous;

    element = list->head;
    previous = 0;
    while (element != 0 && element->matrikel_no < new_student->matrikel_no) {
        previous = element;
        element = element->next;
    }
    if (previous == 0) {
        new_student->next = list->head;
        list->head = new_student;
    }
    else {
        new_student->next = element;
        previous->next = new_student;
    }
}

LinkedList_Element * LinkedList_Element::create_from_keyboard() {
    LinkedList_Element * instance = new LinkedList_Element;

    printf("Daten eingeben:\n");
    printf("Name: ");
    scanf("%s", instance->name);
    printf("Matrikelnummer: ");
    scanf("%d", &(instance->matrikel_no));
    printf("Jahr der Immatrikulation: ");
    scanf("%d", &(instance->immat_year));
    printf("Studiengang: ");
    scanf("%s", instance->study);

    return instance;
}

void LinkedList_Element::print_details() {
    printf("Name: %s\n", this->name);
    printf("Matrikelnummer: %d\n", this->matrikel_no);
    printf("Jahr der Immatrikulation: %d\n", this->immat_year);
    printf("Studiengang: %s\n", this->study);
}
