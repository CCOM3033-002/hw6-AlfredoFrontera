// Alfredo F. Frontera Del Valle
// Laboratorio: Figuras en 3D
// Número de estudiante: 801-21-1568
// Colaboraciones: Ninguna

#include <iostream>
#include <cmath>     // Para usar M_PI y funciones como pow()
#include <iomanip>   // Para setprecision
using namespace std;

// Función sobrecargada para calcular el volumen de una esfera
float calcular(float radio, char figura) {
    return (4.0 / 3.0) * M_PI * pow(radio, 3);
}

