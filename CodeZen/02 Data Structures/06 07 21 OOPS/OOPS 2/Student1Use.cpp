#include <iostream>
using namespace std;
#include "include/Student.hpp"

int main()
{
    char name[] = "abcd";
    Student s1(20, name);
    s1.display();

    name[3] = 'e';
    Student s2(24, name);
    s2.display();

    // s1's name is using a pointer(that's why it has changed)
    s1.display();
}