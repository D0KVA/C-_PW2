#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    
    do {
        cout << "Выберите операцию:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Частное" << endl;
        cout << "4. Произведение" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Нахождение квадратного корня" << endl;
        cout << "7. Нахождение 1 процента от числа" << endl;
        cout << "8. Найти факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;
        cout << "Ваш выбор: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Введите первое число: ";
                cin >> num1;
                cout << "Введите второе число: ";
                cin >> num2;
                result = num1 + num2;
                cout << "Результат: " << result << endl;
                break;
            case 2:
                cout << "Введите первое число: ";
                cin >> num1;
                cout << "Введите второе число: ";
                cin >> num2;
                result = num1 - num2;
                cout << "Результат: " << result << endl;
                break;
            case 3:
                cout << "Введите первое число: ";
                cin >> num1;
                cout << "Введите второе число: ";
                cin >> num2;
                result = num1 / num2;
                cout << "Результат: " << result << endl;
                break;
            case 4:
                cout << "Введите первое число: ";
                cin >> num1;
                cout << "Введите второе число: ";
                cin >> num2;
                result = num1 * num2;
                cout << "Результат: " << result << endl;
                break;
            case 5:
                cout << "Введите число: ";
                cin >> num1;
                cout << "Введите степень: ";
                cin >> num2;
                result = pow(num1, num2);
                cout << "Результат: " << result << endl;
                break;
            case 6:
                cout << "Введите число: ";
                cin >> num1;
                result = sqrt(num1);
                cout << "Результат: " << result << endl;
                break;
            case 7:
                cout << "Введите число: ";
                cin >> num1;
                result = num1 / 100;
                cout << "Результат: " << result << endl;
                break;
            case 8:
                cout << "Введите число: ";
                cin >> num1;
                result = 1;
                for(int i = 1; i <= num1; i++) {
                    result *= i;
                }
                cout << "Результат: " << result << endl;
                break;
            case 9:
                cout << "Программа завершена." << endl;
                break;
            default:
                cout << "Неверный выбор. Попробуйте еще раз." << endl;
                break;
        }
        
    } while (choice != 9);
    
    return 0;
}