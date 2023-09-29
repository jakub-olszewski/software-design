#include <iostream>

int main() {
    // Tworzenie dynamicznej tablicy liczb całkowitych
    int* dynamicArray = new int[5]; // Inicjowanie tablicy na 5 elementów

    // Przypisywanie wartości do tablicy
    dynamicArray[0] = 10;
    dynamicArray[1] = 20;
    dynamicArray[2] = 30;
    dynamicArray[3] = 40;
    dynamicArray[4] = 50;

    // Wyświetlanie zawartości tablicy
    for (int i = 0; i < 5; i++) {
        std::cout << dynamicArray[i] << " ";
    }

    // Zwolnienie zaalokowanej pamięci
    delete[] dynamicArray;

    return 0;
}
