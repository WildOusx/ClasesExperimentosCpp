// Primer ejercicio

// Calcular el area de formas geometricas: circulo, rectangulo y triangulo
// Mostrar los datos en pantalla, validarlos y preguntar al usuario si quiere seguir con el programa


#include <iostream>
#include <math.h> // Use la libreria math.h para una mejor precision al calcular el area del circulo
#include <stdlib.h> // Use stdlib para limpiar pantalla
#include <limits> // Use la libreria limits para la validacion de datos ingresados

// Las siguientes tres funciones son para los calculos puntuales de las figuras

float calculoCirculo (float radio){ 
    return M_PI * (radio * radio);
}

float calculoRectangulo (float base, float altura){ 
    return base * altura;
}

float calculoTriangulo (float base, float altura){
    return (base * altura) / 2;
}

int main(){

    float radio;
    float base, altura;
    float area;
    int opcion, opcion2;

    
    do{
        system ("cls"); // Uso del system para limpiar pantalla cada vez que el usuario desee continuar haciendo operaciones en la calculadora
        
        std::cout << "Bienvenido al calculo de area de figuras geometricas!\n";

        std::cout << "\n1) Calcular el area de un circulo\n";
        std::cout << "\n2) Calcular el area de un rectangulo\n";
        std::cout << "\n3) Calcular el area de un triangulo\n";
        
        do{

            std::cout << "\nQue operacion desea realizar? (1-3): ";
            std::cin  >> opcion;
            
            // Este if funciona como validacion de letras y numeros para las opciones del menu
            
            if (std::cin.fail() || opcion < 1 || opcion > 3) { // Primero analiza lo ingresado por teclado, si son letras o numeros diferentes a los propuestos
                                                              // esta linea los tomara como erroneos              
                std::cin.clear(); // Despues limpia los datos ingresados
                
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // En esta parte descartamos la maxima cantidad de datos ingresados posibles
                                                                                   
                std::cout << "\nIngresa una opcion valida!\n"; // Por ultimo agregamos el mensaje de que se ha ingresado una opcion invalida
                
                continue;
            }
            
            if (opcion >= 1 && opcion <= 3){
                
                switch (opcion){ // Aplicamos un switch para un mejor manejo en el menu
                    
                    case 1:
                        system("cls");

                        std::cout << "Calculando area del circulo!\n";
                        
                        std::cout << "\nIngrese el valor del radio: ";
                        std::cin  >> radio;

                        area = calculoCirculo(radio);

                        std::cout << "\n-->El area del circulo es de: "<< area << std::endl; // Usamos el endl para una mejor fluidez en pantalla 
                                                                                         // al dar respuesta de los calculos
                    break;
                    
                    case 2:
                        system("cls");

                        std::cout << "Calculando area del rectangulo!\n";

                        std::cout << "\nIngrese el valor de la altura: ";
                        std::cin  >> altura;

                        std::cout << "\nIngrese el valor de la base: ";
                        std::cin  >> base;

                        area = calculoRectangulo(base, altura);

                        std::cout << "\n-->El area del rectangulo es de: "<< area << std::endl;

                    break;
                    
                    case 3:
                        system("cls");

                        std::cout << "Calculando area del triangulo!\n";

                        std::cout << "\nIngrese el valor de la altura: ";
                        std::cin  >> altura;

                        std::cout << "\nIngrese el valor de la base: ";
                        std::cin  >> base;

                        area = calculoTriangulo(base, altura);
                    
                        std::cout << "\n-->El area del triangulo es de: "<< area << std::endl;

                    break;
                    
                    
                    default:
                        system("cls");
                    
                        std::cout << "Bienvenido al calculo de area de figuras geometricas!\n";

                        std::cout << "\n1) Calcular el area de un circulo\n";
                        std::cout << "\n2) Calcular el area de un rectangulo\n";
                        std::cout << "\n3) Calcular el area de un triangulo\n";
                        
                        std::cout << "Que operacion desea realizar? (1-3): \n";
                    
                    break;
                }
            }
        } while (opcion < 1 || opcion > 3); // Este do while actua para que los parametros ingresados sean siempre entre las opciones 1 y 3
        
        do { // Con este do while preguntamos al usuario si desea continuar usando la calculadora o salir del programa
            std::cout << "\n\nDesea realizar otro calculo?\n";
            
            std::cout << "\nPresione 1 para continuar\n";
            std::cout << "\nPresione 2 para salir de la calculadora\n";
            std::cin >> opcion2;

            if (std::cin.fail() || opcion2 < 1 || opcion2 > 2) {
                
                std::cin.clear();
                
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                
                std::cout << "\nIngresa una opcion valida!\n";
                
                continue;
            }

        } while (opcion2 < 1 || opcion2 > 2);
        
    }while (opcion2 == 1); // El do while mas externo actua que si al terminar una operacion deseamos salir de la calculadora, este lo haga sin problemas

    std::cout << "\nGracias por usar la calculadora!\n"; // Mensaje de despedida al usuario
    
    return 0;

}