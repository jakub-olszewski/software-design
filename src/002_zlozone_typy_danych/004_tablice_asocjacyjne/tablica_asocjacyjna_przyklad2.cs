#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

int main() {
    // Tworzenie mapy w C++ z numerem PESEL jako kluczem
    std::map<std::string, std::unordered_map<std::string, std::string>> people;

    // Tworzenie słownika z danymi osoby
    std::unordered_map<std::string, std::string> john;
    john["name"] = "John";
    john["age"] = "30";
    john["city"] = "New York";

    // Dodawanie słownika z danymi osoby do mapy
    people["12345678901"] = john;

    // Wyświetlanie informacji o osobie na podstawie numeru PESEL
    std::string pesel = "12345678901";
    std::cout << "PESEL: " << pesel << std::endl;
    std::cout << "Name: " << people[pesel]["name"] << std::endl;
    std::cout << "Age: " << people[pesel]["age"] << std::endl;
    std::cout << "City: " << people[pesel]["city"] << std::endl;

    return 0;
}