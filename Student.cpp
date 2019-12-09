#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "Student.h"

Student * Student::create_from_keyboard()
{
    Student * instance = new Student;

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
