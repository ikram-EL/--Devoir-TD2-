//
// Created by IKRAM EL OMARI on 23/10/2023.
//

#ifndef UNTITLED5_ANIMAL_H
#define UNTITLED5_ANIMAL_H
#include<string>
#include <iostream>

using namespace std;

    class Animal {
    public:
     int age;
     string nom;
    public:
        void set_value(int age , const string& nom);

        };


    class Zebra : public Animal {
    public:
        string Lieu_origine ;
        void set_value(int age , const string& nom,const   string& Lieu_origine);
        void get_value();

};
    class Dolphin : public Animal{
    public:
        string Lieu_origine ;
        void set_value(int age , const string& nom,const  string& Lieu_origine);
        void get_value();
    };



#endif //UNTITLED5_ANIMAL_H
