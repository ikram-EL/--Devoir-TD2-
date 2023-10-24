//
// Created by IKRAM EL OMARI on 23/10/2023.
//

#include "Animal.h"
#include <iostream>
using namespace std;
//setValue
    void  Animal ::set_value(int age ,  const string& nom) {
        this->age=age;
       this->nom=nom;
    }
   void Zebra ::set_value(int age ,  const string& nom,  const string& Lieu_origine) {
       this->age=age;
       this->nom =nom;
        this->Lieu_origine=Lieu_origine;
    }
    void Dolphin ::set_value(int age ,const string& nom,const string& Lieu_origine) {
        this->age=age;
    this->nom=nom;
    this->Lieu_origine=Lieu_origine;
    }


  void Zebra :: get_value() {
      cout<<"nom :"<< nom<<endl;
      cout<<"age :"<< age<<endl;
      cout<<"lieu d'origine :"<< Lieu_origine<<endl; }

      void Dolphin :: get_value() {
          cout<<"nom :"<< nom<<endl;
          cout<<"age :"<< age<<endl;
          cout<<"lieu d'origine :"<< Lieu_origine<<endl;

}