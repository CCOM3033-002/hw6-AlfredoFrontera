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

// Función sobrecargada para calcular el volumen de un prisma rectangular
float calcular(float largo, float ancho, float alto) {
    return largo * ancho * alto;
}

// Función sobrecargada para calcular el volumen de un cilindro
float calcular(float radio, float altura, bool esCilindro) {
    return M_PI * pow(radio, 2) * altura;
}

// Función sobrecargada para calcular el área superficial de una esfera
float area(float radio, char figura) {
    return 4 * M_PI * pow(radio, 2);
}

// Función sobrecargada para calcular el área superficial de un prisma rectangular
float area(float largo, float ancho, float alto) {
    return 2 * (largo * ancho + largo * alto + ancho * alto);
}

// Función sobrecargada para calcular el área superficial de un cilindro
float area(float radio, float altura, bool esCilindro) {
    return 2 * M_PI * radio * (radio + altura);
}
