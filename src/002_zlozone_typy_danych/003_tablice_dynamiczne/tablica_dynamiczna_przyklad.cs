// Try it ! https://www.w3schools.com/cs/trycs.php?filename=demo_helloworld
using System;
using System.Collections.Generic;

class Program
{
    static void Main(string[] args)
    {
        // Tworzenie listy dynamicznej liczb całkowitych
        List<int> dynamicArray = new List<int>();

        // Dodawanie elementów do listy dynamicznej
        dynamicArray.Add(10);
        dynamicArray.Add(20);
        dynamicArray.Add(30);

        // Wyświetlanie zawartości listy dynamicznej
        Console.WriteLine("Zawartość listy dynamicznej:");
        foreach (int number in dynamicArray)
        {
            Console.WriteLine(number);
        }

        // Usuwanie elementu z listy dynamicznej
        dynamicArray.Remove(20);

        // Wyświetlanie zmienionej zawartości listy dynamicznej
        Console.WriteLine("\nZawartość listy dynamicznej po usunięciu:");
        foreach (int number in dynamicArray)
        {
            Console.WriteLine(number);
        }
    }
}
