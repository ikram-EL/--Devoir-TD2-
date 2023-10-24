//
// Created by IKRAM EL OMARI on 24/10/2023.
//

#ifndef UNTITLED10_VECTEUR3D_H
#define UNTITLED10_VECTEUR3D_H
#include <iostream>
using namespace std;

class vecteur3D {
private:
    float X;
    float Y;
    float Z;
public:
    vecteur3D (float x =0 , float y=0 , float z=0) { // constructeur
    X=x;
    Y=y;
    Z=z;
    }
    void Afficher();
    vecteur3D somme(vecteur3D&);
    float produit_scalaire(vecteur3D&);
    bool coincide(vecteur3D&);
    float  norme();
    vecteur3D normaux(vecteur3D& other);

};


#endif //UNTITLED10_VECTEUR3D_H
