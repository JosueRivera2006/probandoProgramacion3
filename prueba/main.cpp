#include <iostream>
using namespace std;

int main() {
    bool bandera = true;
    while (bandera) {
        int op;
        cout << "---Bienvenido a la Práctica---" << endl;
        cout << "0. Ejercicio 1" << endl;
        cout << "1. Ejercicio 2" << endl;
        cout << "2. Ejercicio 3" << endl;
        cout << "3. Ejercicio 4" << endl;
        cout << "4. Salir" << endl;
        cout << "Eliga una opción: " << endl;
        cin >> op;
        if(op == 0) {
            int velocidad;
            double multa;
            cout << "Ingrese la velocidad captada: " << endl;
            cin >> velocidad;
            if(velocidad < 80) {
                multa = 0;
            } else if(velocidad < 120) {
                multa = 600;
            } else {
                multa = velocidad*7;
            }
            cout << "Su multa es de: L." << multa << endl;
        } else if (op == 1) {
            int election;
            int a;
            int b;
            int resultado = 0;
            cout << "Ingrese la operación (1. Suma 2. Resta 3. Multiplicación 4. División): " << endl;
            cin >> election;
            cout << "Ingrese valor de a: " << endl;
            cin >> a;
            cout << "Ingrese valor de b: " << endl;
            cin >> b;
            if(election == 1) {
                resultado = a+b;
            } else if (election == 2) {
                resultado = a-b;
            } else if (election == 3) {
                resultado = a*b;
            } else if (election == 4) {
                resultado = a/b;
            }
            if (election >= 1 && election <= 4) {
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Esa opción no es válida..." << endl;
            }
        } else if(op == 2) {
            int a;
            int b;
            int c;
            cout << "Ingrese el lado a: " << endl;
            cin >> a;
            cout << "Ingrese el lado b: " << endl;
            cin >> b;
            cout << "Ingrese el lado c: " << endl;
            cin >> c;
            int hipotenusaC = c*c;
            int ladosAB = a*a + b*b;
            if(hipotenusaC < ladosAB) {
                cout << hipotenusaC << "|" << ladosAB << endl << "Por lo tanto, el triangulo es acutángulo." << endl;
            } else if (hipotenusaC > ladosAB) {
                cout << hipotenusaC << "|" << ladosAB << endl << "Por lo tanto, el triangulo es obtusángulo." << endl;
            } else {
                cout << hipotenusaC << "|" << ladosAB << endl << "Por lo tanto, el triangulo es rectángulo." << endl;
            }
        } else if(op == 3) {
            int arreglo[5];
            int ordenado[5];
            for (int tamano = 0; tamano < 5; tamano++) {
                cout << "Ingrese un número: " << endl;
                cin >> arreglo[tamano];
            }
            for (int tamano = 0; tamano < 5; tamano++) {
                cout << arreglo[tamano] << ", ";
            }
            int lugar = 0;
            int numMax = arreglo[0];
            int numMin = arreglo[0];
            for (int posicion = 0; posicion < 5; posicion++) {
                if(numMax < arreglo[posicion]) {
                    numMax = arreglo[posicion];
                }
            }
            for (int posicion = 0; posicion < 5; posicion++) {
                for (int posicion2 = 0; posicion2 < 5; posicion2++) {
                    if(numMin > arreglo[posicion2]) {
                        numMin = arreglo[posicion2];
                        lugar = posicion2;
                    }
                }
                arreglo[lugar] = numMax;
                ordenado[posicion] = numMin;
                numMin = numMax;
            }
            cout << endl << "***ARREGLO ORDENADO***" << endl;
            for (int tamano = 0; tamano < 5; tamano++) {
                cout << ordenado[tamano] << ", ";
            }
            cout << endl;
        } else if(op == 4) {
            cout << "Saliendo del programa..." << endl;
            bandera = false;
        } else {
            cout << "Esa no es una opción válida..." << endl;
        }
    }
}
