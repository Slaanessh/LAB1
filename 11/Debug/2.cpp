#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	int age;

	cout << "������� ���� ���: ";
	getline(cin, name);

	cout << "������� ��� �������: ";
	cin >> age;

	cout << "������, " << name << "! ��� " << age << " ���." << endl;

	return 0;
}