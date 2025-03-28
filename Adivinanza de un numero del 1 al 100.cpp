// Tercer ejercicio

// Generar un numero aleatorio entre 1 y 100
// Permitir al usuario adivinarlo, indicando si el numero ingresado es mayor o menor
// Al final, muestra el numero de intentos usados para adivinarlo correctamente

#include <iostream>
#include <cstdlib> // Use esta libreria para los numeros aleatorios
#include <time.h> // Use esta libreria para que cada vez que usemos el programa no se repita el mismo numero aleatorio
#include <limits> // Use limits para validar los datos
#include <stdlib.h> // Use esta libreria para limpiar pantalla cada vez que queramos jugar de nuevo
// No se uso la libreria random por su dificultad al emplearlo en el codigo

int preguntarSiContinuar(){
    int opcion2;
    do{       
        std::cout << "\n\nBIEN JUGADO!!!\n";
        std::cout << "\nPresiona 1 para seguir jugando\n";
        std::cout << "\nPresione 2 para salir del juego\n";
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

    int numero=0;
    int intentos=0;
    int adivinanza;
    int opcion2; 

    do{
        system("cls");
        
        srand((unsigned int)time(NULL)); //Aca iniciamos el generador de numeros aleatorios, el time null de un tipo de dato epoch (dato en linea de tiempo) 
                                        // a dato legible con el unsigned int para que el srand lo vuelva aleatorio
        numero = 1 + rand() % 100; 	// Con esta linea nos aseguramos que el dato dado por srand este en los parametros del 1 al 100
        
        std::cout << numero << std::endl; // Verificacion en pantalla de que el numero es aleatorio

        std::cout << "\nAdivina el numero!!!!\n";

        std::cout << "\nLa maquina te dira si es menor o mayor el numero que pongas!!!\n";

        intentos = 0;
        
        do{
            intentos = intentos + 1;
            
            std::cout << "\nNumero: ";
            std::cin  >> adivinanza;

            if (std::cin.fail()) { // Validacion de las opciones
                        
                std::cin.clear();
                
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                
                std::cout << "\nTe atrape con las letras, ES UN NUMERO >:( !!!\n";
                
                continue;
            }

            if (adivinanza < numero)
            {
                std::cout << "\nEl numero es menor!!!!\n";
            }
            
            else if (adivinanza > numero)
            {
                std::cout << "\nEl numero es mayor!!!!\n";
            }
            
        } while (adivinanza != numero); // Este ciclo nos permite contar cuantas veces el usuario ha intentado adivinar el numero
        
        std::cout << "\n\n!!!ACERTASTE!!!" << std::endl;
        
        std::cout << "\n-->Numero de intentos: " << intentos << std::endl; // Cantidad de intentos para finalizar el programa
        
        opcion2 = preguntarSiContinuar();
        
    } while (opcion2 == 1);
    
    return 0;

}
