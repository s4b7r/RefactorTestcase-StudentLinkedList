#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

#include "io.h"

struct linked_list_element * create_student_from_keyboard() {
    struct linked_list_element * student;

    student = (struct linked_list_element *) malloc(sizeof(struct linked_list_element));

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

void print_student_details(struct linked_list_element * student) {
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
    struct linked_list_element * element;

    element = list->head;
    while (element != 0) {
        print_student_details(element);
        printf("\n");
        element = element->next;
    }
}
