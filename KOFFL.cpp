#include <iostream>
#include <string>
#include <list>

using namespace std;

class Human
{
public: //-> private: 
	string name;
//publuc:

	//Human(string m_name) конструктор
	
	void Upgrade_Health();
	void Upgrade_Strenght();
};
class Person: public Human {
	int species; 
	int health;
	int money; 
	char name; //зачем нужна это переменная 
	int damage;
	float block;
	Person(int species){ //Измените аргументы конструктора и прочитайте про наследование 
		switch (species)
		{
		case 1:
			health = 100;
			money = 1000;
			damage = 10;
			block = 0.5;
			//Bogatyr

		case 2:
			health = 5;
			money = 10000;
			damage = 6;
			block = 0;
			//thief

		case 3: 
			health = 4;
			money = 108;
			damage = 20;
			block = 0.7;
		}
	}

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
	Human name; 
	//1) Зачем создавать класс объект ЧЕЛОВЕЧЕСТВО -> когда нам НУЖЕН ПЕРСОНАЖ
	//Person Killer("NAME", 1(ТИП ПЕРСОНАЖА)); так как PERSON это наследован от HUMAN он может менять переменные класса HUMAN для это вы должны проичтать про наследование 
	//т.е констукрторы при наследовании
	//я если хотите ввод элементов класс напишите перегрузку операта ввода ">>" //После можно будет делать cin >> Killer; 	
	
	cin >> name.name;//после того как добавите имя персонажа в класс human
	//создайте тут класс human Human gus(fred,20);20-> это возраст 
	//но можно по другому создать класс Person который наследуется от human. Это позволит в будем создавть разных людей.
	//т.к класс human -> это человечество -> Person -> это будет один человек. А в человестве люди разные. Поэтому в person можно создавать разных типов людей.
	
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
