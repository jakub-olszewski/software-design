// Spróbuj na: https://www.w3schools.com/cpp/trycpp.asp?filename=demo_compiler
#include <iostream>
#include <string>

int main() {
    // Przykłady różnych typów danych w C++

    // Typ numeryczny (liczba całkowita)
    int liczbaCalkowita = 42;

    // Typ numeryczny (liczba zmiennoprzecinkowa)
    float liczbaZmiennoprzecinkowa = 3.14;

    // Typ logiczny (wartość logiczna true/false)
    bool flaga = true;

    // Typ znakowy (znak)
    char znak = 'A';

    // Typ łańcuchowy (ciąg znaków)
    std::string napis = "Hello, World!";

    // Konkatenacja łańcuchów
    std::string komunikat = "Witaj, " + std::string("świecie!");

    // Wyświetlenie danych
    std::cout << "Liczba całkowita: " << liczbaCalkowita << std::endl;
    std::cout << "Liczba zmiennoprzecinkowa: " << liczbaZmiennoprzecinkowa << std::endl;
    std::cout << "Flaga logiczna: " << flaga << std::endl;
    std::cout << "Znak: " << znak << std::endl;
    std::cout << "Napis: " << napis << std::endl;
    std::cout << "Komunikat po konkatenacji: " << komunikat << std::endl;

    return 0;
}
