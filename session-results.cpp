#include <iostream>

int main() {
    // Total students who got at least one of each grade
    int satisfactory = 13;
    int good = 13;
    int excellent = 12;

    // Students who got both grades
    int good_and_excellent = 4;
    int satisfactory_and_excellent = 5;
    int satisfactory_and_good = 4;

    // Students who got all three grades
    int all_grades = 3;

    // Calculate students who got only one grade
    int only_satisfactory = satisfactory - satisfactory_and_good - satisfactory_and_excellent + all_grades;
    int only_good = good - satisfactory_and_good - good_and_excellent + all_grades;
    int only_excellent = excellent - satisfactory_and_excellent - good_and_excellent + all_grades;

    // Calculate the expression
    int result = 100 * only_excellent + 10 * only_good + only_satisfactory;

    std::cout << "The result is: " << result << std::endl;

    return 0;
}