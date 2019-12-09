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
    this->content->print_details();
}

LinkedList_Element::~LinkedList_Element()
{
    delete this->content;
}