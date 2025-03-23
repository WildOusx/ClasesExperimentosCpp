// Clase 2 14/03/25

#include <iostream>
#include <math.h>

int main(){

    float radio;
    float lado1, lado2;
    float area;
    int opcion;

    std::cout << "Ingrese la operacion que desee realizar: \n";

    std::cout << "\n1. Para calcular el area de un cuadrado";
    std::cout << "\n2. Para calcular el area de una circunferencia\n";
    std::cin  >> opcion;

    if (opcion == 1)
    {
        std::cout << "\nIngrese el primer lado: ";
        std::cin  >> lado1;
        
        std::cout << "\nIngrese el segundo lado: ";
        std::cin  >> lado2;

        area = lado1 * lado2; 
    }
    
    else if (opcion == 2)
    {
        std::cout << "\nIngrese el radio de la circunferencia: ";
        std::cin  >> radio;

        area = M_PI * (radio * radio);
    }
    
    std::cout << "\nEl area de la figura es: "<< area;

    return 0;

}