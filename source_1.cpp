#include <iostream>
#include <windows.h>

class Calculator {
public:
    double num1;
    double num2;

    bool set_num1(double value) {
        if (value != 0) {
            this->num1 = value;
            return true;
        }
        return false;
    }

    bool set_num2(double value) {
        if (value != 0) {
            this->num2 = value;
            return true;
        }
        return false;
    }

    double add(){
        return num1 + num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double subtract_1_2() {
        return num2 - num1;
    }

    double subtract_2_1() {
        return num1 - num2;
    }

    double divide_1_2() {
        return num1 / num2;
    }

    double divide_2_1() {
        return num2 / num1;
    }
};

void main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Calculator calc;
    double input;


    while (true) {
        std::cout <<std::endl<< "Введите num1: ";
        std::cin >> input;
        if (!calc.set_num1(input)) {
            std::cout << "Неверный ввод!";
            continue;
        }

        std::cout << "Введите num2: ";
        std::cin >> input;
        if (!calc.set_num2(input)) {
            std::cout << "Неверный ввод!" << std::endl;
            continue;
        }

        std::cout << std::endl << "Результаты операций:" << std::endl;
        std::cout << "num1 + num2 " << calc.add() << std::endl;
        std::cout << "num1 * num2 " << calc.multiply() << std::endl;
        std::cout << "num2 - num1: " << calc.subtract_1_2() << std::endl;
        std::cout << "num1 - num2 " << calc.subtract_2_1() << std::endl;
        std::cout << "num1 / num2: " << calc.divide_1_2() << std::endl;
        std::cout << "num2 / num1: " << calc.divide_2_1() << std::endl;
    }
}
