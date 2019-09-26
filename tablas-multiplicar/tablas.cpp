/*
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 26 de septiembre de 2019
 * Resumen: Programa interactivo que presenta por pantalla las tablas de
 *          multiplicar seleccionadas por el operador.
 */
#include <iostream>
#include <iomanip>
using namespace std;

/*
 *  Pre:  ---
 *  Post: Ha presentado en la pantalla la tabla de multiplicar del «n», de acuerdo
 *        con el siguiente formato:
 *
 *        LA TABLA DEL n
 *        n x 0 = 0
 *        n x 1 = n
 *        n x 2 = ...
 *             ...
 *        n x 9 = ...
 *        n x 10 = ...
 */
void presentarTabla(int n) {
    // Escribe el encabezamiento de la tabla de multiplicar del «n»
    cout << endl;
    cout << "LA TABLA DEL " << n << endl;

    // Escribe las 11 líneas de la tabla de multiplicar del «n»
    int i = 0;
    while (i <= 10) {
        cout << setw(3) << n
             << " x " << setw(2) << i
             << " = " << setw(3) << n * i
             << endl;
        i++;
    }
}

/*
 * Programa que pregunta reiteradamente al usuario por un número entero,
 * escribiéndola a continuación, salvo cuando la respuesta del usuairo es 0, en
 * cuyo caso el programa termina.
 */
int main() {
    // Plantea la primera pregunta al operador
    cout << "¿Qué tabla desea escribir (0 para acabar)?: ";

    // Asigna a «multiplicando» el primer valor entero escrito por el operador
    int multiplicando;
    cin  >>  multiplicando;

    // Itera hasta que el operador responda con un valor nulo
    while (multiplicando != 0) {
        // Escribe en la pantalla la tabla de multiplicar de «multiplicando»
        presentarTabla(multiplicando);
        cout << endl;

        // Plantea una nueva pregunta al operador
        cout << "¿Qué tabla desea escribir (0 para acabar)?: ";

        // Asigna a «multiplicando» el nuevo valor entero escrito por el operador
        cin >> multiplicando;
    }

    return 0;
}
