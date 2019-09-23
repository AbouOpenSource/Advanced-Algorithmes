//
// Created by abou on 23/09/2019.
//

#ifndef HASHTABLE_STUDENT_H
#define HASHTABLE_STUDENT_H

#define hash_size 20
#include <string>

class Student {
public:
        std::string name;
        std::string surname;
        std::string group;
        unsigned int hash_value;
public :
    Student (const std::string &pname, const std::string &psurname, const std::string &pgroup)
    :name(pname),surname(psurname),group(pgroup){

}
    operator int() const{
    int hash=0;
    for(char a: surname){
        hash+= (int) a;
    }
    return hash%hash_size;
}
friend std::ostream& operator << ( std::ostream &out, const Student &p){
    out << p.name+p.surname;
    return out;
}
/*
friend operator ==(Student &a, Student &b){
}*/
};
#endif //HASHTABLE_STUDENT_H
