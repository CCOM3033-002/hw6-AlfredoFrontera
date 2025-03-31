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

// Función principal
int main() {
    cout << fixed << setprecision(2); // Mostrar resultados con 2 decimales

    cout << "Este programa calcula el volumen y el área de la superficie de tres figuras.\n\n";

    char figura;
    do {
        cout << "Escoja una figura:\n";
        cout << "  a. Cilindro\n";
        cout << "  b. Esfera\n";
        cout << "  c. Prisma rectangular\n";
        cout << "Selección: ";
        cin >> figura;
    } while (figura != 'a' && figura != 'b' && figura != 'c');

    char calculo;
    do {
        cout << "\nEscoja entre los siguientes opciones:\n";
        cout << "  a. Volumen\n";
        cout << "  b. Área de la superficie\n";
        cout << "Selección: ";
        cin >> calculo;
    } while (calculo != 'a' && calculo != 'b');

    float radio, altura, largo, ancho;

    switch (figura) {
        case 'a': // Cilindro
            do {
                cout << "Entre el radio del cilindro: ";
                cin >> radio;
            } while (radio < 0);
            do {
                cout << "Entre la altura del cilindro: ";
                cin >> altura;
            } while (altura < 0);

            if (calculo == 'a')
                cout << "El volumen del cilindro es " << calcular(radio, altura, true) << endl;
            else
                cout << "El área del cilindro es " << area(radio, altura, true) << endl;
            break;

        case 'b': // Esfera
            do {
                cout << "Entre el radio de la esfera: ";
                cin >> radio;
            } while (radio < 0);

            if (calculo == 'a')
                cout << "El volumen de la esfera es " << calcular(radio, 'e') << endl;
            else
                cout << "El área de la esfera es " << area(radio, 'e') << endl;
            break;

        case 'c': // Prisma
            do {
                cout << "Entre el largo del prisma: ";
                cin >> largo;
            } while (largo < 0);
            do {
                cout << "Entre el ancho del prisma: ";
                cin >> ancho;
            } while (ancho < 0);
            do {
                cout << "Entre la altura del prisma: ";
                cin >> altura;
            } while (altura < 0);

            if (calculo == 'a')
                cout << "El volumen del prisma es " << calcular(largo, ancho, altura) << endl;
            else
                cout << "El área del prisma es " << area(largo, ancho, altura) << endl;
            break;
    }

    return 0;
}
