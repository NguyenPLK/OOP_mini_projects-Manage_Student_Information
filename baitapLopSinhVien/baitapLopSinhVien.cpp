// baitapLopSinhVien.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SinhVien.h"

int main()
{
    StudentSpace::SinhVien sinhVien1;
    StudentSpace::SinhVien sinhVien2("123","Nguyen","12",2.5);
    std::cout << sinhVien2.getName();
}
