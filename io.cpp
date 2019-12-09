#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

#include "io.h"

void print_student_details(LinkedList_Element * student) {
    printf("Name: %s\n", student->name);
    printf("Matrikelnummer: %d\n", student->matrikel_no);
    printf("Jahr der Immatrikulation: %d\n", student->immat_year);
    printf("Studiengang: %s\n", student->study);
}

void print_student_by_name(struct linked_list * list, char * name) {
    print_student_details(find_student_by_name(list, name));
}

char * get_name_from_keyboard(char * store) {
    printf("Name eingeben: ");
    scanf("%s", store);
    return store;
}

void print_all_students(struct linked_list * list) {
    LinkedList_Element * element;

    element = list->head;
    while (element != 0) {
        print_student_details(element);
        printf("\n");
        element = element->next;
    }
}
