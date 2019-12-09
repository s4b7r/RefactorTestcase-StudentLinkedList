#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

#include "io.h"

char * get_name_from_keyboard(char * store) {
    printf("Name eingeben: ");
    scanf("%s", store);
    return store;
}

void print_all_students(struct linked_list * list) {
    LinkedList_Element * element;

    element = list->head;
    while (element != 0) {
        element->print_details();
        printf("\n");
        element = element->next;
    }
}
