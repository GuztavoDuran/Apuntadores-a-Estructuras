#include <iostream>
#include <conio.h>
using namespace std;
struct Alumno{
    char nombre [20];
    int edad;
    struct Alumno *ptr;
} alumno_1, alumno_2, *inicio;
int main(){
    inicio =& alumno_1;//se guarda en la posicion 1
    inicio -> ptr =& alumno_2;// se guarda en la posicion 2
    //se piden los datos del alumno_1
    cin.ignore();
    cout << "\ninserte edad 1: " ; cin >> inicio->edad;
    cout << "inserte nombre 1: " ; cin >> inicio->nombre;
    // se piden los datos del alumno_2
    cin.ignore();
    cout << "inserte edad 2: " ; cin >> inicio->ptr->edad;
    cout << "inserte nombre 2: " ; cin >> inicio->ptr->nombre;
    struct Alumno alumno_3;//se declara una nueva estructura
    inicio->ptr->ptr =& alumno_3;//se le asigna el lugar en la memoria
    //se piden los datos del alumno_3
    cin.ignore();
    cout << "inserte edad 3: " ; cin >> inicio->ptr->ptr->edad;
    cout << "inserte nombre 3: " ; cin >> inicio->ptr->ptr->nombre;
    /*      inicio->ptr->ptr->edad;
                        equivale a escribir
            (inicio + 2)->edad;
                        el 2 equivale a la posicion n en la que se guardan los datos
    */
    struct Alumno alumno_4;
    ((inicio+3)->ptr) =& alumno_4;
    //se piden los datos del alumno_4
    cin.ignore();
    cout << "inserte edad 4: "; cin >> (inicio+3)->edad;
    cout << "inserte nombre 4; "; cin >> (inicio+3)->nombre;

    cout << "\nMOSTRANDO DATOS ..."  << endl;
    cout << "Edad 1:  " << inicio->edad << endl;
    cout << "Nombre 1:" << inicio->nombre << endl;
    cout << "Edad 2:  " << inicio->ptr->edad << endl;
    cout << "Nombre 2:" << inicio->ptr->nombre << endl;
    cout << "Edad 3:  " << inicio->ptr->ptr->edad << endl;
    cout << "Nombre 3:" << inicio->ptr->ptr->nombre << endl;
    cout << "Edad 4:  " << (inicio+3)->edad << endl;
    cout << "Nombre 4:" << (inicio+3)->nombre << endl;
    cin.get();
    return 0;
}
