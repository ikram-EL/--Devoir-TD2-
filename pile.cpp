//
// Created by IKRAM EL OMARI on 24/10/2023.
//

#include "pile.h"
#include <iostream>
using namespace std;

pile::pile(int capacite) : capacite(capacite), taille(0) {
    element = new int[capacite];
}
void pile::push(int value) {
    if (taille < capacite) {
        element[taille] = value;
        taille++;
    }
}
void pile::pop() {
    if (taille > 0) {
        taille--;
    }
}
void pile::afficher()  {
    for (int i = taille - 1; i >= 0; i--) {
        cout << element[i] << " ";
    }
    cout <<endl;
}
