// StackListPractice.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "PilaArray.h";

using namespace std;

int main()
{

    PilaArray pila;
    TipoDeDato x;
    const TipoDeDato CLAVE = -1;
    int option = 0;
    bool exit = false;

    do {
        try
        {
            cout << "Elija una opcion: " << endl;
            cout << "1- Insertar valor" << endl;
            cout << "2- quitar valor" << endl;
            cout << "3- mostrar el valor en la cima de la pila" << endl;
            cout << "Salir: -1" << endl;
            cin >> option;

            switch (option)
            {
            case 1:
                cout << "ingresa un valor a la pila: ";
                cin >> x;
                pila.insertar(x);
                pila.imprimirPila();
                cout << endl;

                break;
            case 2:
                system("cls");
                cout << "La pila antes de eliminar el ultimo valor: ";
                pila.imprimirPila();

                cout << endl << "Cima ANTES de eliminar: " << pila.getCima() << endl;
                cout << "Se ha quitado el elemento: " << pila.quitar() << endl;
                cout << "Cima DESPUES de eliminar: " << pila.getCima() << endl;
                cout << "La pila ha quedado asi: ";
                pila.imprimirPila();
                cout << endl;
                break;
            case 3:
                system("cls");
                if (!pila.pilaVacia()) {
                    cout << "El valor de la cima de la pila es: " << pila.getCima();
                }
                else {
                    cout << "La pila esta vacia. No hay nada que mostrar" <<endl;
                }
                break;

             case -1:
               system("cls");
               exit = true;
               if (!pila.pilaVacia()) {
                   cout << "Pila: ";
                   pila.imprimirPila();
                   pila.limpiarPila();
               }
               else {
                   cout << "La pila esta vacia. No hay nada que mostrar";
               }

             break;

            default:
                system("cls");
                cout << "La opcion ingresada no es valida";
                break;
            }
        }
        catch (const char* error)
        {
            system("cls");
            cout << "Excepcion: " << error <<endl;
        }
        
    } while (exit != true);
    return 0;
}

