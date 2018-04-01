#include <iostream>
#include "Fraccion.h"

int main() {
    Fraccion f1 (1, 2);
    Fraccion f2 (1, 3);

    Fraccion sumf = f1 + f2;
    Fraccion resf = f1 - f2;
    Fraccion mulf = f1 * f2;
    Fraccion divf = f1 / f2;

  bool valor;

    std::cout<<"Fracción 1: " << f1.to_String()<<"\n";
    std::cout<<"Fracción 2: " << f2.to_String()<<"\n";
    std::cout<<"Suma de fracciones: " <<sumf.to_String()<<"\n";
    std::cout<<"Resta de fracciones: " <<resf.to_String()<<"\n";
    std::cout<<"Multiplicación de fracciones: " <<mulf.to_String()<<"\n";
    std::cout<<"División de fracciones: " <<divf.to_String()<<"\n";
    std::cout<<"¿La fracción 1 es menor que la fracción 2? ";
        if (f1<f2){
            valor = true;
            std::cout<<"Sí"<<"\n";
        }else{
            valor = false;
            std::cout<<"No"<<"\n";
        }
   std::cout<<"¿La fracción 1 es mayor que la fracción 2? ";
        if (f1>f2){
            std::cout<<"Sí"<<"\n";
        }else{
            std::cout<<"No"<<"\n";
        }
    std::cout<<"¿La fracción 1 es menor o igual que la fracción 2? ";
        if (f1<=f2){
            std::cout<<"Sí"<<"\n";
        }else{
            std::cout<<"No"<<"\n";
        }
    std::cout<<"¿La fracción 1 es mayor o igual que la fracción 2? ";
        if (f1>=f2){
            std::cout<<"Sí"<<"\n";
        }else{
            std::cout<<"No"<<"\n";
        }
    std::cout<<"¿La fracción 1 es igual a la fracción 2? ";
        if (f1==f2){
            std::cout<<"Sí"<<"\n";
        }else{
            std::cout<<"No"<<"\n";
        }
    std::cout<<"¿La fracción 1 es diferente a la fracción 2? ";
        if (f1!=f2){
            std::cout<<"Sí"<<"\n";
        }else{
            std::cout<<"No"<<"\n";
        }
}