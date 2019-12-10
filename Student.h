#pragma once

#include "LinkedList_ElementContent.h"

class Student :
    public LinkedList_ElementContent
{
public:
    static Student * create_from_keyboard();

    int get_index();
    void print_details();

    char name[50];
    int matrikel_no;
    int immat_year;
    char study[50];
};