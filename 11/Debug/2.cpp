#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string name;
	int age;

	cout << "Введите ваше имя: ";
	getline(cin, name);

	cout << "Введите ваш возраст: ";
	cin >> age;

	cout << "Привет, " << name << "! Вам " << age << " лет." << endl;

	return 0;
}