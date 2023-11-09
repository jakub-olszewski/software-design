using System;
using System.IO;

class Program
{
    static void Main()
    {
        string fileName = "plik.txt";
        string content = "To jest przykładowy tekst, który zostanie zapisany do pliku.";

        try
        {
            File.WriteAllText(fileName, content);
            Console.WriteLine("Zapisano dane do pliku.");
        }
        catch (Exception ex)
        {
            Console.WriteLine("Błąd zapisu do pliku: " + ex.Message);
        }
    }
}
