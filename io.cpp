#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

#include "io.h"

LinkedList_Element * create_student_from_keyboard() {
    LinkedList_Element * student;

    student = new LinkedList_Element;

    printf("Daten eingeben:\n");
    printf("Name: ");
    scanf("%s", student->name);
    printf("Matrikelnummer: ");
    scanf("%d", &(student->matrikel_no));
    printf("Jahr der Immatrikulation: ");
    scanf("%d", &(student->immat_year));
    printf("Studiengang: ");
    scanf("%s", student->study);

    return student;
}

void insert_student_from_keyboard_into_list(struct linked_list * list) {
    insert_element_into_list(list, create_student_from_keyboard());
}

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
