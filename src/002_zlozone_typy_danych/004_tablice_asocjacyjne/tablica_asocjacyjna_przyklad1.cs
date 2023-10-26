// Try it ! https://www.w3schools.com/cs/trycs.php?filename=demo_helloworld
using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        // Inicjalizacja słownika do przechowywania ocen uczniów
        Dictionary<string, int> oceny = new Dictionary<string, int>();

        // Dodawanie ocen do słownika
        oceny["Jan Kowalski"] = 85;
        oceny["Anna Nowak"] = 92;
        oceny["Piotr Wiśniewski"] = 78;

        // Wyświetlanie ocen
        Console.WriteLine("Oceny uczniów:");
        foreach (var kvp in oceny)
        {
            Console.WriteLine(kvp.Key + ": " + kvp.Value);
        }

        // Wyszukiwanie oceny dla konkretnego ucznia
        string szukaneImie = "Anna Nowak";
        int znalezionaOcena;
        if (oceny.TryGetValue(szukaneImie, out znalezionaOcena))
        {
            Console.WriteLine(szukaneImie + " ma ocenę: " + znalezionaOcena);
        }
        else
        {
            Console.WriteLine("Brak oceny dla ucznia o imieniu " + szukaneImie);
        }
    }
}
