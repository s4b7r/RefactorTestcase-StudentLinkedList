#pragma once

template <class T>
class LinkedList_Element
{
public:
    static LinkedList_Element<T> * create_from_keyboard();

    LinkedList_Element(T * content);
    ~LinkedList_Element();

    void print_details();

    LinkedList_Element<T> * next;
    T * content;
};

template <class T>
LinkedList_Element<T> * LinkedList_Element<T>::create_from_keyboard() {
    return new LinkedList_Element<T>(T::create_from_keyboard());
}

template<class T>
LinkedList_Element<T>::LinkedList_Element(T * content) :
    content(content)
{
}

template <class T>
void LinkedList_Element<T>::print_details() {
    this->content->print_details();
}

template <class T>
LinkedList_Element<T>::~LinkedList_Element()
{
    delete this->content;
}
