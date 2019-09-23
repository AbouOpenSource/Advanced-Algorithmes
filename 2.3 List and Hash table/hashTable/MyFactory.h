//
// Created by abou on 23/09/2019.
//

#ifndef HASHTABLE_MYFACTORY_H
#define HASHTABLE_MYFACTORY_H

#include <array>
#include <iostream>
#define hash_size 20

using namespace std;


template <class T>
class MyFactory {
   std::array<T*, hash_size>  hash_table;
public:

    MyFactory(){
        init();
}


    void init(){
        for (int i = 0; i < hash_size; ++i) {
            hash_table[i]=nullptr;
        }
};


    bool insert(T* s){
        int position = int(*s);
        if(hash_table[position]== nullptr){
            hash_table[position]=s;
            return true;
        }else
        {
            std::cerr <<"Not an empty space"<< std::endl;
            return false;
        }
    };


    void print(){

        auto cht = hash_table.begin();
        int n=0;
        while(cht!= hash_table.end()){

            if(*cht== nullptr){
                cout<< "["<<n++<<"] empty"<<endl;
            }else{
                std::cout << "[" << n << "]" << *(*cht) <<std::endl;

            }
            cht++;
        }
    };
    bool find(T* filter){
        int position = int(*filter);
        return hash_table[position] != nullptr && filter->surname == hash_table[position]->surname;
    };

};


#endif //HASHTABLE_MYFACTORY_H
