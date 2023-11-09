try:
    with open('dane.txt', 'w') as file:
        # Zapisanie tekstu do pliku linia po linii
        lines = [
            'To jest pierwsza linia.',
            'To jest druga linia.',
            'A to trzecia linia.'
        ]
        for line in lines:
            file.write(line + '\n')
        print('Zapisano dane do pliku.')
except IOError as e:
    print('Błąd zapisu do pliku:', e)
except Exception as ex:
    print('Wystąpił nieoczekiwany błąd:', ex)
