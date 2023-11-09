try:
    with open('dane.txt', 'r', encoding='utf-8') as file:
        # Odczyt zawartości pliku
        content = file.read()

        # Wyświetlenie zawartości na ekranie
        print(content)

except FileNotFoundError:
    print("Plik 'dane.txt' nie istnieje. Sprawdź, czy podałeś właściwą ścieżkę do pliku lub czy plik istnieje.")
except PermissionError:
    print("Brak dostępu do pliku 'dane.txt'. Upewnij się, że masz odpowiednie uprawnienia do odczytu pliku.")
except Exception as e:
    print(f"Wystąpił błąd: {str(e)}")
