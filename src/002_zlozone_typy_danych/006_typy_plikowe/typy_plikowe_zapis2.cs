using System;
using System.IO;

class Program
{
    static void Main()
    {
        string fileName = "plik.txt";
        string[] lines = {
            "To jest pierwsza linia tekstu.",
            "To jest druga linia tekstu.",
            "A to jest trzecia linia tekstu."
        };

        try
        {
            using (StreamWriter writer = new StreamWriter(fileName))
            {
                foreach (string line in lines)
                {
                    writer.WriteLine(line);
                }
            }

            Console.WriteLine("Zapisano dane do pliku.");
        }
        catch (Exception ex)
        {
            Console.WriteLine("Błąd zapisu do pliku: " + ex.Message);
        }
    }
}
