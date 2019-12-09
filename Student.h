#pragma once

class Student
{
public:
    static Student * create_from_keyboard();

    void print_details();

    char name[50];
    int matrikel_no;
    int immat_year;
    char study[50];
};