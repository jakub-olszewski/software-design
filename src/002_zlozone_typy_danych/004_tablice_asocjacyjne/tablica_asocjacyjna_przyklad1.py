# Tworzenie słownika, w którym kluczem jest numer PESEL, a wartością jest słownik z danymi osoby
people = {}

# Tworzenie słownika z danymi osoby
john = {
    "name": "John",
    "age": "30",
    "city": "New York"
}

# Dodawanie słownika z danymi osoby do głównego słownika
people["12345678901"] = john

# Wyświetlanie informacji o osobie na podstawie numeru PESEL
pesel = "12345678901"
print("PESEL:", pesel)
print("Name:", people[pesel]["name"])
print("Age:", people[pesel]["age"])
print("City:", people[pesel]["city"])
