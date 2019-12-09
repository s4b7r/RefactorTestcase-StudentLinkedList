#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LinkedList.h"
#include "io.h"

int main(int argc, char ** argv) {
    struct linked_list list;
    int input;
    char input_string[50];

    list.head = 0;

    do {
        printf("\n\nMenu\n");
        printf("0: Ende\n");
        printf("1: Student hinzufuegen\n");
        printf("2: Student loeschen\n");
        printf("3: Student anzeigen\n");
        printf("4: Alle anzeigen\n");
        printf("5: Student hinzufuegen (sortiert nach Matrikel Nummer)\n");
        printf("Bitte waehlen: ");

        scanf("%d", &input);
        printf("\n");
        switch (input)
        {
        case 1:
            insert_student_from_keyboard_into_list(&list);
            break;
        case 2:
            remove_student_by_name(&list, get_name_from_keyboard(input_string));
            break;
        case 3:
            print_student_by_name(&list, get_name_from_keyboard(input_string));
            break;
        case 4:
            print_all_students(&list);
            break;
        case 5:
            insert_student_from_keyboard_sorted_by_matrikel(&list, LinkedList_Element::create_from_keyboard());
            break;
        default:
            break;
        }
    } while (input != 0);

    return 0;
}
