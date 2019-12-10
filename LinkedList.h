#pragma once

#include "LinkedList_Element.h"

template <class T>
class LinkedList {
public:
    void print_all_elements();
    void insert_element_into_list(LinkedList_Element<T> * element);
    void remove_element_from_list(LinkedList_Element<T> * element);
    LinkedList_Element<T> * find_student_by_name(char * name);
    void remove_student_by_name(char * name);
    void insert_student_from_keyboard_sorted_by_matrikel(LinkedList_Element<T> * new_student);

    LinkedList_Element<T> * head = 0;
};

template <class T>
void LinkedList<T>::insert_element_into_list(LinkedList_Element<T> * element) {
    element->next = this->head;
    this->head = element;
}

template <class T>
void LinkedList<T>::insert_student_from_keyboard_sorted_by_matrikel(LinkedList_Element<T> * new_student) {
    LinkedList_Element<T> * element;
    LinkedList_Element<T> * previous;

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

template <class T>
void LinkedList<T>::print_all_elements() {
    LinkedList_Element<T> * element;

    element = this->head;
    while (element != 0) {
        element->print_details();
        printf("\n");
        element = element->next;
    }
}

template <class T>
LinkedList_Element<T> * LinkedList<T>::find_student_by_name(char * name) {
    LinkedList_Element<T> * element;

    element = this->head;
    while (element != 0 && strcmp(element->content->name, name) != 0) {
        element = element->next;
    }

    return element;
}

template <class T>
void LinkedList<T>::remove_element_from_list(LinkedList_Element<T> * element) {
    LinkedList_Element<T> * previous_element;

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

template <class T>
void LinkedList<T>::remove_student_by_name(char * name) {
    remove_element_from_list(this->find_student_by_name(name));
}
