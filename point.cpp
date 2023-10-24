//
// Created by IKRAM EL OMARI on 24/10/2023.
//

#include "point.h"
#include<iostream>
using namespace std;

void point :: deplacer(float dx, float dy){
    x+=dx;
    y+=dy;

}
void point :: afficher(){
    cout<<"les coordonnées :  ("<<x<<" , "<<y<<" )"<<endl;

}
