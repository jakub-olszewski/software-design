#include <iostream>
#include <list>

// Funkcja do wyświetlania zawartości listy
void printList(const std::list<int> &myList) {
    std::cout << "Zawartosc listy: ";
    for (const auto &element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Tworzenie listy w C++
    std::list<int> myList;

    // Dodawanie elementów na koniec listy
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    printList(myList);

    // Dodawanie elementów na początek listy
    myList.push_front(0);

    printList(myList);

    // Dodawanie elementu na określonej pozycji
    std::list<int>::iterator it = myList.begin(); // iterator na początek listy
    ++it; // przesunięcie iteratora na drugi element
    myList.insert(it, 100);

    // Wywołanie funkcji do wyświetlenia zawartości listy
    printList(myList);

    // iterator na koniec listy
    myList.insert(myList.end(), 2023);

    printList(myList);

    system("pause");
    return 0;
}
