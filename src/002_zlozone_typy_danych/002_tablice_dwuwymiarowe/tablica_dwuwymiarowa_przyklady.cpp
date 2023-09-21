// Spróbuj na: https://www.w3schools.com/cpp/trycpp.asp?filename=demo_compiler

#include <iostream>
using namespace std;

int main() {
    // Przykład dwuwymiarowej tablicy w języku C++
    char szachy[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };

    // Wypisanie wartości w piątym wierszu i czwartej kolumnie
    cout << szachy[4][3];  // Wypisze: ' '

    double wspolrzedne[3][2] = {
        {52.2297, 21.0122}, // Warszawa, Polska
        {48.8566, 2.3522},  // Paryż, Francja
        {40.7128, -74.0060} // Nowy Jork, USA
    };

    return 0;
}
