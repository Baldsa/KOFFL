#include <iostream>
#include <string>
#include <list>

using namespace std;

class Human
{
	int health = 2;
	int damage = 2;
	float block = 0.5;
	int money = 50;
	//добавьте конструкторы, чтобы легче было потом создавать рандомных челиков с разным кол-вом жизни, урона и тд  
};

void Menu() {
	string Zero = "Choose your variant\n\n\n";
	string First = "[1] Armour\n";
	string Second = "[2] Upgrade Human\n";
	string Third = "[3] Choose monster\n";
	string Fourth = "[4] Battle\n";
	string menu = Zero + First + Second + Third + Fourth;
	cout << menu << endl;
};
//Хотел отдельно функцию написать для вывода меню, стоит? 
// щас просмтрю, потом отвечу
class Armour {
public:
	long int cost;
	list <string> clothes = { "[1] Boots", "[2] Нагрудник", "[3] Шлем" };
	list <string> weapeon = { "[1] Алмазный меч", "[2] Лук", "[3] Арбалет" };
	void Print_Armour();
	void Print_Clothes();

};
void Print_Armour() {
	cout << "[1] Weapon\n" << "[2] Clothes" << endl;
}
void Print_Clothes() {
	cout << endl;
}

class Discribtion
{
	struct Boots
	{
		double protection = 0.4;
		float durability = 100;
	};
};

int main() {
	cout << "Write your name please" << endl;
	string name;
	cin >> name;
	Menu();
	int variant;
	cin >> variant;
	switch (variant)
	{
	case 1:
		string first = "Choose your variant\n\n\n";
		Print_Armour();
		cin >> variant;


	case 2:

	case 3:

	case 4:

	}
}