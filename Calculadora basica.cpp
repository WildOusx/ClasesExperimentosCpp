// Segundo ejercicio

// Crear una calculadora que solicite al usuario dos numeros y una operacion matematica (+, -, *, /)
// Realizar la operacion, mostrar el resultado, si se intenta dividir entre cero mostrar mensaje de error

#include <iostream>
#include <stdlib.h> // Uso de libreria stdlib para limpiar pantalla
#include <limits> // Uso de libreria para validar los datos ingresados

// Estas cuatro funciones son para el calculo de las operaciones matematicas solicitadas

float calculoSuma(float numero1, float numero2){
    return numero1 + numero2;
}

float calculoResta(float numero1, float numero2){
    return numero1 - numero2;
}

float calculoMultiplicacion(float numero1, float numero2){
    return numero1 * numero2;
}

float calculoDivision(float numero1, float numero2){
    return numero1 / numero2;
}

// Esta funcion actua como pregunta si deseamos continuar o no el programa

int preguntarSiContinuar(){
    int opcion2;
    do{       
        std::cout << "\n\nDesea realizar otro calculo?\n";
        std::cout << "\nPresione 1 para continuar\n";
        std::cout << "\nPresione 2 para salir de la calculadora\n";
        std::cin  >> opcion2;
        if (std::cin.fail() || opcion2 < 1 || opcion2 > 2) { // Respectiva validacion de datos en la funcion
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nIngresa una opcion valida!\n";
            continue;
        }
    }while (opcion2 < 1 || opcion2 > 2);
    return opcion2;
}

int main(){

    float numero1, numero2;
    float respuesta;
    int opcion, opcion2;


    do{
        system ("cls"); // Limpieza de pantalla para una menor fluidez

        std::cout << "Bienvenido a la calculadora basica!\n";

        std::cout << "\n1) Suma";
        std::cout << "\n2) Resta";
        std::cout << "\n3) Resta";
        std::cout << "\n4) Division\n";

        do{
            
            std::cout << "\nQue operacion desea realizar? (1-4): ";
            std::cin  >> opcion;

            if (std::cin.fail() || opcion < 1 || opcion > 4) { // Validacion de las opciones
                        
                std::cin.clear();
                
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                
                std::cout << "\nIngresa una opcion valida!\n";
                
                continue;
            }

            if (opcion >= 1 && opcion <= 4){
                
                switch (opcion){
                
                    case 1:
                        std::cout << "\nIngrese el primer numero: ";
                        std::cin  >> numero1;

                        std::cout << "\nIngrese el segundo numero: ";
                        std::cin  >> numero2;
                    
                        respuesta = calculoSuma(numero1, numero2);

                        std::cout << "\n-->La respuesta es: " << respuesta << std::endl;

                    break;
                    
                    case 2:
                        std::cout << "\nIngrese el primer numero: ";
                        std::cin  >> numero1;

                        std::cout << "\nIngrese el segundo numero: ";
                        std::cin  >> numero2;
                        
                        respuesta = calculoResta(numero1, numero2);
                        
                        std::cout << "\n-->La respuesta es: " << respuesta << std::endl;
                    
                    break;
                    
                    case 3:
                        std::cout << "\nIngrese el primer numero: ";
                        std::cin  >> numero1;

                        std::cout << "\nIngrese el segundo numero: ";
                        std::cin  >> numero2;
                        
                        respuesta = calculoMultiplicacion(numero1, numero2);
                        
                        std::cout << "\n-->La respuesta es: " << respuesta << std::endl;

                    break;
                    
                    case 4:
                        std::cout << "\nIngrese el primer numero: ";
                        std::cin  >> numero1;

                        std::cout << "\nIngrese el segundo numero: ";
                        std::cin  >> numero2;
                        
                        if (numero2 == 0) // En esta parte nos aseguramos de que el segundo numero ingresado en la division no sea un cero
                        {
                            std::cout << "\nNo se puede dividir entre cero!\n";
                            
                            std::cout << "\nIngrese el segundo numero: ";
                            std::cin  >> numero2;
                        }

                        respuesta = calculoDivision(numero1, numero2);
                        
                        std::cout << "\n-->La respuesta es: " << respuesta << std::endl;
                
                    break;
                    
                    default:
                        system ("cls");
                    
                        std::cout << "Bienvenido a la calculadora basica!\n";

                        std::cout << "\n1) Suma";
                        std::cout << "\n2) Resta";
                        std::cout << "\n3) Resta";
                        std::cout << "\n4) Division\n";
                        
                        std::cout << "\nQue operacion desea realizar? (1-4): ";
                        
                    break;
                }
            
            }
        
        } while (opcion < 1 || opcion > 4); // Este do while funciona para que los parametros siempre esten entre 1 y 4

        opcion2 = preguntarSiContinuar(); // Aplicando la funcion

    } while (opcion2 == 1); // Si deseamos continuar en el programa este do while nos mantendra en el bucle hasta que deseemos
    
    std::cout << "\nGracias por usar la calculadora!\n"; // Mensaje de despedida
    
    return 0;

}