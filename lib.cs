
using System;

class Program
{
    //кількість відвідує та не відвідує
    // Функція для обчислення біноміального коефіцієнта C(n, k)
    static long BinomialCoefficient(int n, int k)
    {
        if (k < 0 || k > n)
            return 0;

        // Визначення меншого з (k, n-k), тобто min(k, n-k)
        int smaller = k < n - k ? k : n - k;

        long result = 1;

        // Обчислення C(n, k) з використанням властивості C(n, k) = C(n, n-k)
        for (int i = 0; i < smaller; i++)
        {
            result *= (n - i);
            result /= (i + 1);
        }

        return result;
    }

    static void Main()
    {
        Console.Write("Введіть значення жанри: ");
        int p = int.Parse(Console.ReadLine());
        Console.Write("Введіть значення кольори: ");
        int n = int.Parse(Console.ReadLine());

        Console.Write("Введіть значення хочаби скыльки книжок: ");
        int s = int.Parse(Console.ReadLine());


        long zahal = p * n * (s - 1);
        Console.WriteLine($"Біноміальний коефіцієнт N = {zahal + 1}");
        Console.ReadKey();
    }
}
// Жанри, кольори
