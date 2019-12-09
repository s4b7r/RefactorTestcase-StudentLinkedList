#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "LinkedList.h"

LinkedList_Element * LinkedList_Element::create_from_keyboard() {
    return new LinkedList_Element(Student::create_from_keyboard());
}

LinkedList_Element::LinkedList_Element(Student * content) :
    content(content)
{
}

void LinkedList_Element::print_details() {
    printf("Name: %s\n", this->content->name);
    printf("Matrikelnummer: %d\n", this->content->matrikel_no);
    printf("Jahr der Immatrikulation: %d\n", this->content->immat_year);
    printf("Studiengang: %s\n", this->content->study);
}

LinkedList_Element::~LinkedList_Element()
{
    delete this->content;
}