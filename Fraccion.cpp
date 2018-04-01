//
// Created by Catalina Domínguez on 3/30/18.
//

#include "Fraccion.h"

Fraccion::Fraccion(){
    this->num=0;
    this->den=0;
}

Fraccion::Fraccion(int num, int den){
    this->num=num;
    this->den=den;
}

//Suma de fracciones
Fraccion operator + (const Fraccion &fr1, const Fraccion &fr2){
    Fraccion fr;
    fr.den = fr1.den * fr2.den;
    fr.num = (fr.den / fr1.den * fr1.num) + (fr.den / fr2.den * fr2.num);
    return fr;
}

//Resta de fracciones
Fraccion operator - (const Fraccion &fr1, const Fraccion &fr2){
    Fraccion fr;
    fr.den = fr1.den * fr2.den;
    fr.num = (fr.den / fr1.den * fr1.num) - (fr.den / fr2.den * fr2.num);
    return fr;
}

//Multiplicación de fracciones
Fraccion operator * (const Fraccion &fr1, const Fraccion &fr2){
    Fraccion fr;
    fr.num = fr1.num * fr2.num;
    fr.den = fr1.den * fr2.den;
    return fr;
}

//División de fracciones
Fraccion operator / (const Fraccion &fr1, const Fraccion &fr2){
    Fraccion fr;
    fr.num = fr1.num * fr2.den;
    fr.den = fr1.den * fr2.num;
    return fr;
}

//Operadores lógicos de comprobación
//Si fracción 2 cumple con la condición del operador lógico correspondiente
//siendo comparada con la fracción 1, devolvemos true
bool operator < (const Fraccion &fr1, const Fraccion &fr2){
    float r1 = float(fr1.num ) / float(fr1.den);
    float r2 = float(fr2.num) / float(fr2.den);
    bool res = r1 < r2;
    return res;
}

bool operator > (const Fraccion &fr1, const Fraccion &fr2){
    float r1 = float(fr1.num) / float(fr1.den);
    float r2 = float(fr2.num) / float(fr2.den);
    bool res = r1 > r2;
    return res;
}

bool operator <= (const Fraccion &fr1, const Fraccion &fr2){
    float r1 = float(fr1.num) / float(fr1.den);
    float r2 = float(fr2.num) / float(fr2.den);
    bool res = r1 <= r2;
    return res;
}

bool operator >= (const Fraccion &fr1, const Fraccion &fr2){
    float r1 = float(fr1.num) / float(fr1.den);
    float r2 = float(fr2.num) / float(fr2.den);
    bool res = r1 >= r2;
    return res;
}

bool operator == (const Fraccion &fr1, const Fraccion &fr2){
    float r1 = float(fr1.num) / float(fr1.den);
    float r2 = float(fr2.num) / float(fr2.den);
    bool res = r1 == r2;
    return res;
}

bool operator != (const Fraccion &fr1, const Fraccion &fr2){
    float r1 = float(fr1.num) / float(fr1.den);
    float r2 = float(fr2.num) / float(fr2.den);
    bool res = r1 != r2;
    return res;
}

//Devuelve una cadena con el formato num/den
std::string Fraccion::to_String() {
    return std::to_string(num) +"/" +std::to_string(den);
}