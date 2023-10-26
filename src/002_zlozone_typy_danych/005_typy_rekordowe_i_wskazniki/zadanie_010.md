# Zadanie 010

Twoim zadaniem jest stworzenie struktur do reprezentacji dwóch różnych rodzajów zamówień w systemie zamówień online: zamówień indywidualnych i zamówień hurtowych.

### Wytyczne:
1. Utwórz strukturę ZamowienieIndywidualne, która powinna zawierać następujące pola:

* unikalny numer zamówienia.
```cpp
numerZamowienia (int)
``` 
* nazwa produktu zamówionego indywidualnie.
```cpp
nazwaProduktu (std::string)
``` 
* ilość produktów zamówionych indywidualnie.
```cpp
ilosc (int)
``` 
* cena jednostkowa produktu.
```cpp
cenaJednostkowa (double) 
``` 
2. Utwórz strukturę ZamowienieHurtowe, która powinna zawierać następujące pola:
* unikalny numer zamówienia.
```cpp
numerZamowienia (int)
``` 
* nazwa produktu zamówionego hurtowo.
```cpp
nazwaProduktu (std::string)
``` 
*  ilość produktów zamówionych hurtowo.
```cpp
ilosc (int)
``` 
*  cena za sztukę produktu hurtowego.
```cpp
cenaZaSztuke (double)
``` 
*  minimalna ilość produktów wymagana do zamówienia hurtowego.
```cpp
minimalnaIlosc (int)
``` 
\
\
Dokonaj odpowiedniego wymoru,  struct lub union, aby zaimplementować rodzaje zamówień. Możesz zdecydować, że jedno z rozwiązań będzie lepsze w kontekście tego zadania.

Napisz funkcję WyswietlZamowienie, która przyjmuje jako argument wskaźnik do zamówienia (typu ZamowienieIndywidualne lub ZamowienieHurtowe) i wyświetla informacje o zamówieniu.

W funkcji main utwórz kilka przykładowych zamówień, zarówno indywidualnych, jak i hurtowych, i wyświetl je za pomocą funkcji WyswietlZamowienie.


Program powinien umożliwiać interaktywną pracę użytkownika z książką adresową, umożliwiając dodawanie, usuwanie i edytowanie kontaktów. Wykorzystaj struktury, unie i wskaźniki do efektywnego zarządzania danymi.



Uwaga. Pliki należy przesłać na classroom. Pamiętaj, że czas jest ograniczony.



