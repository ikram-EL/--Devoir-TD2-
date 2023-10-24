#include <iostream>
#include <iostream>
#include "pile.h"
using namespace std;
int main() {

    pile P1(5);
    pile P2(3);

    P1.push(10);
    P1.push(20);
    P1.push(30);

    P2.push(5);
    P2.push(15);

    P1.afficher();
    P2.afficher();

    P1.pop();
    P2.pop();

    cout << "Après le dépilement : " <<endl;
    P1.afficher();
    P2.afficher();

    return 0;
    }