/* Try it ! https://www.jdoodle.com/online-compiler-c++/

===================================================
                 Wskaźnik do funkcji
===================================================

 Ten przykład pokazuje, jak utworzyć wskaźnik do funkcji
 i jak używać go do wywoływania różnych funkcji.

*/

#include <iostream>
using namespace std;

int Dodaj(int a, int b) {
    return a + b;
}

int Odejmij(int a, int b) {
    return a - b;
}

int main() {
    int (*wskaznikFunkcji)(int, int); // Wskaźnik do funkcji

    wskaznikFunkcji = Dodaj; // Wskaznik wskazuje na funkcję Dodaj
    cout << "Wynik Dodaj: " << wskaznikFunkcji(5, 3) << endl;

    wskaznikFunkcji = Odejmij; // Wskaźnik wskazuje na funkcję Odejmij
    cout << "Wynik Odejmij: " << wskaznikFunkcji(5, 3) << endl;

    return 0;
}
