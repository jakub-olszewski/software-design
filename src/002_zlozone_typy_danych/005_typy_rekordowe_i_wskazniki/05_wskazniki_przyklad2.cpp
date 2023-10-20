// Try it ! https://www.jdoodle.com/online-compiler-c++/
//===================================================
//                 Wskaźnik do zmiennej
//===================================================

#include <iostream>
using namespace std;

int main() {
    int liczba = 42;
    int *wskaznik = &liczba; // Wskaźnik wskazuje na adres zmiennej "liczba"

    cout << "Wartość liczba: " << liczba << endl;
    cout << "Adres liczba: " << &liczba << endl;
    cout << "Wartość wskaznik: " << *wskaznik << endl; // Wyłuskanie wskaźnika
    cout << "Adres wskaznik: " << wskaznik << endl;

    return 0;
}
