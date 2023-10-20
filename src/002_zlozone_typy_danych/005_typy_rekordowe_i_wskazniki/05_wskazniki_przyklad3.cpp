// Try it ! https://www.jdoodle.com/online-compiler-c++/
//===================================================
//                 Wskaźnik do tablicy
//===================================================

#include <iostream>
using namespace std;

int main() {
    int tablica[5] = {1, 2, 3, 4, 5};
    int *wskaznik = tablica; // Wskaźnik wskazuje na początek tablicy

    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << *wskaznik << endl;
        wskaznik++; // Przesunięcie wskaźnika na kolejny element tablicy
    }

    return 0;
}
