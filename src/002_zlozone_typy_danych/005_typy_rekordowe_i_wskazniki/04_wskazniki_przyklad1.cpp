// Try it ! https://www.jdoodle.com/online-compiler-c++/
#include <iostream>
using namespace std;

int main() {
    // Deklaracja zmiennej num typu int i inicjalizacja jej wartością 123
    int num = 123;

    // Deklaracja wskaźnika numWsk typu int i przypisanie mu adresu zmiennej num
    int *numWsk = &num;

    // Deklaracja zmiennej num2 typu double i inicjalizacja jej wartością 596.2
    double num2 = 596.2;

    // Deklaracja wskaźnika num2Wsk typu double (bez inicjalizacji)
    double *num2Wsk;

    // Przypisanie wartości zmiennej num2 do wskaźnika num2Wsk
    num2Wsk = &num2;

    // Wyświetlenie adresu komórki w pamięci zmiennej numWsk oraz wartości na którą wskazuje (*numWsk)
    cout << "Adres numWsk: " << numWsk << ", Wartość num2Wsk: " << *num2Wsk << "." << endl;

    // Wyświetlenie adresu komórki w pamięci zmiennej num2Wsk oraz wartości na którą wskazuje (*num2Wsk)
    cout << "Adres num2Wsk: " << num2Wsk << ", Wartość num2: " << *num2Wsk << "." << endl;

    return 0;
}
