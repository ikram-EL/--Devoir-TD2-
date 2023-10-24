//
// Created by IKRAM EL OMARI on 22/10/2023.
//

#include "Complex.h"
#include <iostream>
using namespace std;

// obtenir la partie réelle
double Complex::getReal()
{
    return real;
}
//  obtenir la partie imaginaire
double Complex::getImag()
{
    return imag;
}
void Complex::setReal(double realPart) {
    real = realPart;
}
void Complex::setImag(double imaginaryPart) {
    imag = imaginaryPart;
}

Complex Complex::add(Complex& other )
{
    Complex d;
    d.real = real + other.real ;
    d.imag = imag + other.imag ;
    return d;
}
void Complex:: display(){
    cout<<real<<"+"<<imag<<"i"<<endl;
}
bool Complex :: isEqual(Complex& other) {
    return(real == other.real && imag == other.imag);
}
Complex  Complex::substract(Complex& other){
    Complex S;
    S.real = real - other.real;
    S.imag = imag - other.imag;
    return S;
}
Complex  Complex::multipy(Complex& other){
    Complex M;
    M.real = real * other.real - imag * other.imag;
    M.imag = real * other.imag + imag * other.real;
    return M;
}

Complex Complex:: divide(Complex& other){
double divisor = other.real * other.real + other.imag * other.imag;
double newReal = (real * other.real + imag * other.imag) / divisor;
double newImag = (imag * other.real - real * other.imag) / divisor;
return Complex(newReal, newImag);
    }
