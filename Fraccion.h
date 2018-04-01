//
// Created by Catalina Domínguez on 3/30/18.
//

#ifndef PO_CDOMINGUEZ_T03_FRACCION_H
#define PO_CDOMINGUEZ_T03_FRACCION_H

#include <iostream>

class Fraccion {
    friend Fraccion operator + (const Fraccion &fr1, const Fraccion &fr2);
    friend Fraccion operator - (const Fraccion &fr1, const Fraccion &fr2);
    friend Fraccion operator * (const Fraccion &fr1, const Fraccion &fr2);
    friend Fraccion operator / (const Fraccion &fr1, const Fraccion &fr2);
    friend bool operator < (const Fraccion &fr1, const Fraccion &fr2);
    friend bool operator > (const Fraccion &fr1, const Fraccion &fr2);
    friend bool operator <= (const Fraccion &fr1, const Fraccion &fr2);
    friend bool operator >= (const Fraccion &fr1, const Fraccion &fr2);
    friend bool operator == (const Fraccion &fr1, const Fraccion &fr2);
    friend bool operator != (const Fraccion &fr1, const Fraccion &fr2);

//Atributos
public:
    int num;
    int den;

//Constructor
    Fraccion();
    Fraccion(int num, int den);

//Método para convertir a String
    std::string to_String();

};


#endif //PO_CDOMINGUEZ_T03_FRACCION_H
