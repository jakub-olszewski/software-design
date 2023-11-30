#include <iostream>
#include <stack>

// Funkcja do wyświetlania zawartości stosu
void print(const std::stack<int>& myStack) {
    std::cout << "Zawartosc stosu: ";
    std::stack<int> tempStack = myStack;  // Tworzymy kopię stosu, aby nie zmieniać oryginalnego
    while (!tempStack.empty()) {
        std::cout << tempStack.top() << " ";
        tempStack.pop();
    }
    std::cout << std::endl;
}

int main() {

    // Tworzenie pustego stosu
    std::stack<int> myStack;

    // Sprawdzenie, czy stos jest pusty
    if (myStack.empty()) {
        std::cout << "Stos jest pusty." << std::endl;
    }

    // Dodanie elementów do stosu
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    print(myStack);

    // Sprawdzenie rozmiaru stosu
    std::cout << "Rozmiar stosu: " << myStack.size() << std::endl;

    // Odczytanie wartości elementu na górze stosu
    std::cout << "Wartosc na gorze stosu: " << myStack.top() << std::endl;

    // Usunięcie elementu z góry stosu
    std::cout << "Usuniecie elementu z gory stosu " << std::endl;
    myStack.pop();

   print(myStack);

    // Odczytanie nowej wartości na górze stosu
    std::cout << "Wartosc na gorze stosu po usunieciu: " << myStack.top() << std::endl;

    // Sprawdzenie, czy stos jest teraz pusty
    if (!myStack.empty()) {
        std::cout << "Stos nie jest pusty." << std::endl;
    }

    print(myStack);

    system("pause");
    return 0;
}
