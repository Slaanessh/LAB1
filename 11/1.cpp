#include <iostream>
using namespace std;
//�������� ������

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    char operation;

    cout << "������� ������ �����: ";
    cin >> num1;

    cout << "������� �������� (+, -, *, /): ";
    cin >> operation;

    cout << "������� ������ �����: ";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "������: ������� �� ����!" << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;
    default:
        cout << "�������� ��������!" << endl;
    }

    return 0;
}
