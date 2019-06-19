#include <iostream>
#include <windows.h>

using namespace std;

struct worker   
{
	string name;
	int age;
	string obrazovanie;
	string doljnost;
	void input();
	void Show();
};

void worker::input() 
{
	cout << "Введите имя работника\n";
	cin >> name;
	cout << "Введите возраст работника\n";
	cin >> age;
	cout << "Введите образование работника\n";
	cin >> obrazovanie;
	cout << "Введите должность работника\n";
	cin >> doljnost;


}


void worker::Show()
{
	if (age >= 30 && obrazovanie =="Высшее") {
		cout << name << "\tВозраст " << age << "\tОбразование "<< obrazovanie << "\tДолжность " << doljnost<<"\n";
	}
}

int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int N = 3;
	worker Worker[N];
	for (int i = 0; i < N; i++) Worker[i].input();
	for (int i = 0; i < N; i++) Worker[i].Show();

	return 0;
}