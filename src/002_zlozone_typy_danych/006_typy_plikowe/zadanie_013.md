# Zadanie 013

#### Na classroom należy przesłać plik imie.nazwisko.zip !

Napisz program, który wczytuje liczby z pliku CSV, wykonuje na nich operacje sumy, różnicy, mnożenia i dzielenia, a następnie zapisuje wynik w pliku "result.csv". Program powinien umożliwiać użytkownikowi wybór pliku źródłowego oraz podanie nazwy pliku wynikowego. W przypadku błędów w pliku źródłowym lub podczas operacji matematycznych, program powinien w pliku wynikowym umieścić znak "-" jako wynik operacji.

### Wytyczne:
* Zdefiniuj strukturę Dane, która zawiera pole liczba typu int.
* Stwórz dynamiczną tablicę wskaźników do struktur Dane.
* Napisz funkcję, która wczytuje dane z pliku CSV. Plik ten powinien zawierać liczby całkowite oddzielone przecinkami. Program powinien być w stanie obsłużyć różne rozmiary plików wejściowych.
* Zaimplementuj funkcję, która przeprowadza operacje na wczytanych liczbach: sumowanie, odejmowanie, mnożenie i dzielenie.
* Umożliw użytkownikowi podanie nazwy pliku źródłowego i pliku wynikowego.
* Zapisz wynikowe operacje do pliku "result.csv". Wynikowe operacje powinny mieć formę: suma, różnica, mnożenie, dzielenie.
* W przypadku błędów zamiast wyniku operacji, zapisz "-" do pliku wynikowego.
* Pamiętaj o zwolnieniu pamięci po zakończeniu działania programu.

\
Przykładowe działanie - Program powinien wykonać następujące operacje:
1. Suma: 5 + 3 = 8
2. Różnica: 8 - 2 = 6
3. Mnożenie: -5 * 7 = -35
4. Dzielenie: Dzielenie przez zero, zapisz "-"
\

### Pliki nazwij:
* operacje_na_plikach.cs - dla Csharp
* operacje_na_plikach.py - dla Python
* result.csv

#### Na classroom należy przesłać plik imie.nazwisko.zip !


Uwaga. Pliki należy przesłać na classroom. Pamiętaj, że czas jest ograniczony.