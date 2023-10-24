//
// Created by IKRAM EL OMARI on 22/10/2023.
//
#ifndef UNTITLED4_COMPLEX_H
#define UNTITLED4_COMPLEX_H
#include <iostream>
using namespace std;


class Complex {
private:
    double real;
    double imag;
public:
    // Constructeur avec des arguments
    Complex (double realPart = 0, double imaginaryPart = 0)   //    ou bien    Complex(double realPart, double imaginaryPart) : real(realPart), imag(imaginaryPart) {}
    {
        real = realPart;
        imag = imaginaryPart;
    }
    // obtenir la partie réelle
    double getReal();
    //  obtenir la partie imaginaire
    double getImag();
    void setReal(double);
    void setImag(double);
    Complex add(Complex&);
    void  display();
    bool isEqual(Complex&);
    Complex substract(Complex&);
    Complex multipy(Complex&);
    Complex divide(Complex&);


};


#endif //UNTITLED4_COMPLEX_H
