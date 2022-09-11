#include <iostream>
#include <string>
#include <list>

using namespace std;

class Human
{
	//добавить имя персонажа 
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
	//прочитайте про контейнер map -> и замените два list на map ключом будет число,значением строка 11.09.2022
	
	void Print_Armour();
	void Print_Clothes();
	
	//создай методы которые позволяют добавить экипировку персонажу(human) типо я выбрал шлем это означает плюс к броне.

};

void Print_Armour() {
	cout << "[1] Weapon\n" << "[2] Clothes" << endl; //тут в зависимости от выбора ты выводишь содержимое каждой котегории 11.09.2022.
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
	string name;  //после того как добавите имя персонажа в класс human
	//создайте тут класс human Human gus(fred,20);20-> это возраст 
	//но можно по другому создать класс Person который наследуется от human. Это позволит в будем создавть разных людей.
	//т.к класс human -> это человечество -> Person -> это будет один человек. А в человестве люди разные. Поэтому в person можно создавать разных типов людей.
	cin >> name;
	Menu();
	int variant;
	cin >> variant;
	//можно добавить action внутри персонажа типо у вас есть Объект человек -> внутри есть "что-то" что позволяет давать ему команды и чтоб она выполнял их.
	//например Person hero("Fred",20); hero.figth(), hero.run(), hero.earn(), hero.jump(), hero.regenerate(), hero.die(), hero.changePower() и тд
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
