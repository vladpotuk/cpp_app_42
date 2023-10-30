#include "Funk.h"

void findMax(int num1, int num2, int& maxNumber) {
    if (num1 > num2) {
        maxNumber = num1;
    }
    else {
        maxNumber = num2;
    }
}

int main() {
    system("chcp 1251");
        system("cls");
    int num1, num2, maxNum;

    std::cout << "Введіть перше число: ";
    std::cin >> num1;

    std::cout << "Введіть друге число: ";
    std::cin >> num2;

    findMax(num1, num2, maxNum);

    std::cout << "Найбільше число з " << num1 << " і " << num2 << " - це " << maxNum << std::endl;

    return 0;
}
