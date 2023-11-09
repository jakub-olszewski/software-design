try:
    with open('dane.txt', 'w') as file:
        # Zapisanie tekstu do pliku
        file.write('To jest przykładowy tekst, który zostanie zapisany do pliku.')
    print('Zapisano dane do pliku.')

except IOError as e:
    print('Błąd zapisu do pliku:', e)
except Exception as ex:
    print('Wystąpił nieoczekiwany błąd:', ex)
