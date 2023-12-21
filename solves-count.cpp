
#include <iostream>
#include <vector>

// Функція для обчислення кількості розв'язків
int countSolutions(int N, int C, char inequality, bool useNaturalNumbers = true) {
    std::vector<int> variables(N, useNaturalNumbers ? 1 : 0);

    int count = 0;

    while (true) {
        int sum = 0;
        for (int i = 0; i < N; ++i) {
            sum += variables[i];
        }

        bool condition;
        if (inequality == '<') {
            condition = (sum < C);
        } else if (inequality == '>') {
            condition = (sum > C);
        } else if (inequality == '=') {
            condition = (sum == C);
        } else {
            std::cerr << "Непідтримувана операція нерівності." << std::endl;
            return -1;
        }

        if (condition) {
            // Знайдено один розв'язок
            ++count;
        }

        // Генерація наступного розв'язку
        int i = 0;
        while (i < N && ++variables[i] > C) {
            variables[i] = useNaturalNumbers ? 1 : 0;
            ++i;
        }

        if (i == N) {
            // Всі можливі розв'язки перевірені
            break;
        }
    }

    return count;
}

int main() {
    int N, C;
    char inequality;
    char type;

    // Задаємо кількість змінних, константу, операцію нерівності та тип розв'язків
    std::cout << "Введіть кількість змінних N: ";
    std::cin >> N;
    std::cout << "Введіть константу C: ";
    std::cin >> C;
    std::cout << "Введіть операцію нерівності (<, >, =): ";
    std::cin >> inequality;
    std::cout << "Введіть тип розв'язків (n - натуральні, i - невід'ємні): ";
    std::cin >> type;

    bool useNaturalNumbers = (type == 'n');

    // Обчислюємо і виводимо кількість розв'язків
    int result = countSolutions(N, C, inequality, useNaturalNumbers);
    if (result >= 0) {
        std::cout << "Кількість " << (useNaturalNumbers ? "натуральних" : "невід'ємних")
                  << " цілочислових розв'язків: " << result << std::endl;
    }

    return 0;
}
