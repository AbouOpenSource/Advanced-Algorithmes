#include <iostream>
#include "Student.h"
#include "MyFactory.h"

int main() {

    Student exampl("Benoit","Yacouba","Sage");
    std::cout << int(exampl) << std::endl;
    MyFactory<Student> test;
    test.insert(new Student("SANOU","Yacouba","Sage"));
    test.insert(new Student("SANOU","Issiaka","Professeur"));
    test.insert(new Student("SANOU","Issouf","Test"));
    test.insert(new Student("SANOU","Yacouba","Sage"));
    test.insert(new Student("SANOU","Yacouba","Sage"));
    test.print();
    test.find(new Student("SANOU","Yacouba","Sage") );






    return 0;
}