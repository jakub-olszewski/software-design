# Otwarcie pliku do odczytu
with open('dane.txt', 'r', encoding='utf-8') as file:
    # Odczyt zawartości pliku
    content = file.read()

    # Wyświetlenie zawartości na ekranie
    print(content)
