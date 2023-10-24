//
// Created by IKRAM EL OMARI on 24/10/2023.
//

#ifndef UNTITLED13_POINT_H
#define UNTITLED13_POINT_H


class point {
private:
    float x;
    float y;
public:
    point (float x,float y) {
        this->x =x;
        this->y=y;
    }
    void deplacer(float, float);
    void afficher();

};


#endif //UNTITLED13_POINT_H
