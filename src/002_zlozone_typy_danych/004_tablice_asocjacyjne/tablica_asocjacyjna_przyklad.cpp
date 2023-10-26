#include <iostream>
#include <map>

int main() {
    // Tworzenie tablicy asocjacyjnej (mapy) w C++
    std::map<std::string, std::string> person;
    person["name"] = "John";
    person["age"] = "30";
    person["city"] = "New York";

    // Wyświetlanie zawartości tablicy asocjacyjnej
    std::cout << person["name"] << std::endl;
    std::cout << person["age"] << std::endl;
    std::cout << person["city"] << std::endl;

    // Dodawanie nowych elementów do tablicy asocjacyjnej
    person["email"] = "john@example.com";

    // Wyświetlanie zaktualizowanej zawartości tablicy asocjacyjnej
    std::cout << person["email"] << std::endl;

    return 0;
}
