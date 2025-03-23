// Tercera clase

// Hacer un menu de funciones con los ejercicios propuestos


#include <iostream>
#include <math.h> // Use la libreria math.h para una mejor precision al calcular el area del circulo
#include <stdlib.h> // Use stdlib para limpiar pantalla
#include <limits> // Use la libreria limits para la validacion de datos ingresados
#include <cstdlib> // Use esta libreria para los numeros aleatorios
#include <time.h> // Use esta libreria para que cada vez que usemos el programa no se repita el mismo numero aleatorio

int validacionDatos(int opcion){
    if (std::cin.fail() || opcion < 1 || opcion > 3) {            
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');       
    std::cout << "\nIngresa una opcion valida!\n";
    }
}

float calculoCirculo (){
    float radio; 
    std::cout << "\nIngrese radio de la figura: ";
    std::cin  >> radio;
    return M_PI * (radio * radio);
}

float calculoRectangulo (){
    float base, altura;
    std::cout << "\nIngrese el valor de la altura: ";
    std::cin  >> altura;
    std::cout << "\nIngrese el valor de la base: ";
    std::cin  >> base;
    return base * altura;
}

float calculoTriangulo (){
    float base, altura;
    std::cout << "\nIngrese el valor de la altura: ";
    std::cin  >> altura;
    std::cout << "\nIngrese el valor de la base: ";
    std::cin  >> base;
    return (base * altura) / 2;
}

float calculoSuma(){
    float numero1, numero2;
    std::cout << "\nIngrese el primer numero: ";
    std::cin  >> numero1;
    std::cout << "\nIngrese el segundo numero: ";
    std::cin  >> numero2;
    return numero1 + numero2;
}

float calculoResta(){
    float numero1, numero2;
    std::cout << "\nIngrese el primer numero: ";
    std::cin  >> numero1;
    std::cout << "\nIngrese el segundo numero: ";
    std::cin  >> numero2;
    return numero1 - numero2;
}

float calculoMultiplicacion(){
    float numero1, numero2;
    std::cout << "\nIngrese el primer numero: ";
    std::cin  >> numero1;
    std::cout << "\nIngrese el segundo numero: ";
    std::cin  >> numero2;
    return numero1 * numero2;
}

float calculoDivision(){
    float numero1, numero2;
    std::cout << "\nIngrese el primer numero: ";
    std::cin  >> numero1;
    std::cout << "\nIngrese el segundo numero: ";
    std::cin  >> numero2;
    if (numero2 == 0){
        std::cout << "\nNo se puede dividir entre cero!\n";                
        std::cout << "\nIngrese el segundo numero: ";
        std::cin  >> numero2;
    }
    return numero1 / numero2;
}

float Adivinanza (float numero){
    srand((unsigned int)time(NULL));
    numero = 1 + rand() % 100; 	
    std::cout << numero << std::endl; 
    return  numero;
}

int preguntarSiContinuar(){
    int opcion2;
    do{       
        std::cout << "\n\nDesea continuar en el programa?\n";
        std::cout << "\nPresione 1 para continuar\n";
        std::cout << "\nPresione 2 para salir al menu principal\n";
        std::cin  >> opcion2;
        if (std::cin.fail() || opcion2 < 1 || opcion2 > 2){ 
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nIngresa una opcion valida!\n";
            continue;
        }
    }while (opcion2 < 1 || opcion2 > 2);
    return opcion2;
}

void programaCalcularArea(){

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
            
            if (std::cin.fail() || opcion < 1 || opcion > 3) {

                std::cin.clear(); 
                
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                                                                   
                std::cout << "\nIngresa una opcion valida!\n"; 
                
                continue;
            }
            
            if (opcion >= 1 && opcion <= 3){
                
                switch (opcion){
                    
                    case 1:
                        system("cls");

                        std::cout << "Calculando area del circulo!\n";

                        std::cout << "\n-->El area del circulo es de: "<< calculoCirculo() << std::endl;

                    break;
                    
                    case 2:
                        system("cls");

                        std::cout << "Calculando area del rectangulo!\n";

                        std::cout << "\n-->El area del rectangulo es de: "<< calculoRectangulo() << std::endl;

                    break;
                    
                    case 3:
                        system("cls");

                        std::cout << "Calculando area del triangulo!\n";
                    
                        std::cout << "\n-->El area del triangulo es de: "<< calculoTriangulo() << std::endl;

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
        } while (opcion < 1 || opcion > 3);

        opcion2 = preguntarSiContinuar();
    } while (opcion2 == 1);

    std::cout << "\nGracias por usar la calculadora!\n";

}

void programaCalculadoraBasica(){

    int opcion, opcion2;

    do{
        system ("cls");

        std::cout << "Bienvenido a la calculadora basica!\n";

        std::cout << "\n1) Suma\n";
        std::cout << "\n2) Resta\n";
        std::cout << "\n3) Multiplicacion\n";
        std::cout << "\n4) Division\n";

        do{
            
            std::cout << "\nQue operacion desea realizar? (1-4): ";
            std::cin  >> opcion;

            if (std::cin.fail() || opcion < 1 || opcion > 4) {
                        
                std::cin.clear();
                
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                
                std::cout << "\nIngresa una opcion valida!\n";
                
                continue;
            }

            if (opcion >= 1 && opcion <= 4){
                
                switch (opcion){
                
                    case 1:
                        system("cls");

                        std::cout << "Calculando Suma\n";

                        std::cout << "\n-->La respuesta es: " << calculoSuma() << std::endl;

                    break;
                    
                    case 2:
                        system("cls");

                        std::cout << "Calculando resta\n";
                        
                        std::cout << "\n-->La respuesta es: " << calculoResta() << std::endl;
                    
                    break;
                    
                    case 3:
                        system("cls");

                        std::cout << "Calculando multiplicacion\n";
                        
                        std::cout << "\n-->La respuesta es: " << calculoMultiplicacion() << std::endl;

                    break;
                    
                    case 4:
                        system("cls");

                        std::cout << "Calculando division\n";
                        
                        std::cout << "\n-->La respuesta es: " << calculoDivision() << std::endl;
                
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
        
        } while (opcion < 1 || opcion > 4);
        
        opcion2 = preguntarSiContinuar();
    
    } while (opcion2 == 1);

    std::cout << "\nGracias por usar la calculadora!\n";
}

void programaAdivinanza(){
    int numero=0;
    int intentos=0;
    int adivinanza;
    int opcion2; 

    do{    
        system("cls");
        
        srand((unsigned int)time(NULL));

        numero = 1 + rand() % 100;
        
        std::cout << numero << std::endl;

        std::cout << "\nAdivina el numero!!!!\n";

        std::cout << "\nLa maquina te dira si es menor o mayor el numero que pongas!!!\n";
        
        do{
            intentos = intentos + 1;
            
            std::cout << "\nNumero: ";
            std::cin  >> adivinanza;

            if (std::cin.fail()) {
                        
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
            
        } while (adivinanza != numero);
        
        std::cout << "\n\n!!!ACERTASTE!!!" << std::endl;
        
        std::cout << "\n-->Numero de intentos: " << intentos << std::endl;
        
        opcion2 = preguntarSiContinuar();
    
    } while (opcion2 == 1);
}

int main(){

    int opcion1;
    
    do{
    
        system ("cls"); // Limpieza de pantalla para una menor fluidez

        std::cout << "Bienvenido a la calculadora y juego!\n";

        std::cout << "\n1) Calcular areas\n";
        std::cout << "\n2) Calculadora basica (+,-,*,/)\n";
        std::cout << "\n3) Juego de adivinanza\n";
        std::cout << "\nQue opcion desea hacer? (1-3): ";
        std::cin  >> opcion1;

        if (std::cin.fail() || opcion1 < 1 || opcion1 > 3){ // Validacion de las opciones
                            
            std::cin.clear();
            
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            
            std::cout << "\nIngresa una opcion valida!\n";

            continue;
        }

        if (opcion1 >= 1 || opcion1 <= 3){
            
            switch (opcion1){
            
                case 1:
                    programaCalcularArea();
                break;
                
                case 2:
                    programaCalculadoraBasica();
                break;

                case 3:
                    programaAdivinanza();
                break;

                default:
                    std::cout << "Opcion incorrecta";
                break;
            }
        }

    } while (true);
        
    return 0;

}