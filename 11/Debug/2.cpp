#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string name;
	int age;

	cout << "������� ���� ���: ";
	getline(cin, name);

	cout << "������� ��� �������: ";
	cin >> age;

	cout << "������, " << name << "! ��� " << age << " ���." << endl;

	return 0;
}