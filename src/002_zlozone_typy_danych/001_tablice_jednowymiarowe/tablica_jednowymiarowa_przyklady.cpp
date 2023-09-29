// Spróbuj na: https://www.w3schools.com/cpp/trycpp.asp?filename=demo_compiler

#include <iostream>
#include <vector>

int main() {
    // Przykłady tablic jednowymiarowych w C++

    // Tablica liczb całkowitych
    std::vector<int> tablicaCalkowitych = {1, 2, 3, 4, 5};

    // Tablica łańcuchów znaków (tekstów)
    std::vector<std::string> tablicaTekstow = {"jabłko", "banan", "gruszka"};

    // Tablica liczb zmiennoprzecinkowych
    std::vector<double> tablicaZmiennoprzecinkowych = {3.14, 2.718, 1.618};


    // Wyświetlenie tablic
    std::cout << "Tablica liczb całkowitych:";
    for (int liczba : tablicaCalkowitych) {
        std::cout << " " << liczba;
    }
    std::cout << std::endl;

    std::cout << "Tablica tekstów:";
    for (const std::string& tekst : tablicaTekstow) {
        std::cout << " " << tekst;
    }
    std::cout << std::endl;

    std::cout << "Tablica liczb zmiennoprzecinkowych:";
    for (double liczba : tablicaZmiennoprzecinkowych) {
        std::cout << " " << liczba;
    }
    std::cout << std::endl;



    return 0;
}
