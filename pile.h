//
// Created by IKRAM EL OMARI on 24/10/2023.
//

#ifndef UNTITLED16_PILE_H
#define UNTITLED16_PILE_H


class pile {
    private:
        int* element;
        int taille;
        int capacite;

    public:
        pile(int capacite);
        void push(int);
        void pop();
        void afficher();
    };


#endif //UNTITLED16_PILE_H
