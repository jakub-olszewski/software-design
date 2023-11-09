using System;
using System.IO;

class Program
{
    static void Main()
    {
        string filePath = "dane.txt";

        try
        {
            // Otwarcie pliku do odczytu za pomocą StreamReader
            using (StreamReader reader = new StreamReader(filePath))
            {
                // Odczyt zawartości pliku linia po linii
                string line;
                while ((line = reader.ReadLine()) != null)
                {
                    Console.WriteLine(line);
                }

            }

            Console.WriteLine("Press any key to close...");
            Console.ReadKey(); // Wait for a key press
        }
        catch (IOException ex)
        {
            Console.WriteLine("Błąd odczytu pliku: " + ex.Message);
        }
    }
}
