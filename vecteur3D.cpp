//
// Created by IKRAM EL OMARI on 24/10/2023.
//

#include "vecteur3D.h"
#include <iostream>
using namespace std;

//  affichage des 3 composantes du vecteur
void  vecteur3D :: Afficher(){
    cout<<"( "<<X<<" , "<<Y<<" , "<<Z<<" )"<<endl;
}
//somme deux vecteurs
vecteur3D vecteur3D ::somme(vecteur3D& other){
   vecteur3D A;
   A.X= X + other.X;
    A.Y= Y + other.Y;
    A.Z= Z + other.Z;
    return A;
}
//produit scalaire
    float vecteur3D:: produit_scalaire(vecteur3D& other){
      float B;
      B=X*other.X + Y*other.Y + Z*other.Z;
     return B;
}
//si 2 vecteurs ont memes comppsantes
    bool vecteur3D :: coincide(vecteur3D& other){
        return (X==other.X) && (Y==other.Y) && (Z==other.Z);
}
   //norme d'un vecteur
    float vecteur3D :: norme(){
   float N = sqrt(X*X + Y*Y + Z*Z);
    return N;
}
//vecteur a norme plus grand
vecteur3D vecteur3D :: normaux(vecteur3D& other ){
 return this->norme()>= other.norme() ? *this : other;
    }
