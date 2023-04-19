#include <iostream>
#include <string>
#include <map>
int MAX_HP = 200;
int choiced_monster;
std::map<int, std::string> Armour = { {1, "Simple boots  [400]"},
	{2, "Iron boots [700]"},
	{3, "Simple chest [1300]"},
	{4, "Iron chest [3500]"} };
std::map<int, std::string> Monsters = { {1, "Zombie"},
	{2, "Centaurer"},
	{3, "Invoker"},
	{4, "Undying"} };

class Base
{
private: 
	std::string  name;
public: 
	Base() : name("Player") {};
	Base(std::string us_name) : name(us_name) {};
	std::string getname() {
		return name;
	}
};
class Bogatyr : public Base
{
private:
	int m_hp;
	int m_damage; 
	float m_block;
	int m_money;
	friend void battle(Bogatyr, int);
	friend void Upgrade_Armour(Bogatyr);
	friend void Heal_character(Bogatyr);
	friend void Stat(Bogatyr);
public:
	Bogatyr() : m_hp(150), m_damage(500), m_block(0.6), m_money(1500) {};
	~Bogatyr();
 
};

struct monster
{
	int hp;
	int damage; 
	float block; 
};
monster monsters[] = { {50,50, 0.2},  {100,55, 0.2}, {150,20, 0.9}, {199,20, 0.3}, {50,20, 0.0}};
void Print_Armour() {
	std::cout << std::endl;
	for (int i = 1; i < Armour.size() + 1; i++) {
		std::cout << '[' << i << "] " << Armour[i] << '\n';
	}
}
void Upgrade_Armour(Bogatyr pers) {
	int choice; 
	Print_Armour();

	std::cout << "Please write your choice "; std::cin >> choice;
	switch (choice)
	{
	case 1: 
		pers.m_block += 0, 1;
		pers.m_money -= 400;
		break;
	case 2:
		pers.m_block += 0, 2;
		pers.m_money -= 700;
		break;
	case 3:
		pers.m_block += 0, 25;
		pers.m_money -= 1300;
		break;
	case 4: 
		pers.m_block += 0, 27;
		pers.m_money -= 3500;
		break;
	default:
		std::cout << "Incorect choice :(" << std::endl;
		break;
	}

}
Bogatyr::~Bogatyr()
{
}
void Heal_character(Bogatyr pers) {
	char choice;
	std::cout << "Do you want heal your character? (Y/N)"; std::cin >> choice;
	if (choice == 'Y') {
		if (pers.m_money >= 90) {
			pers.m_hp += 70 + ((MAX_HP - pers.m_hp) - 70);
			pers.m_money -= 90;
		}
		if (pers.m_hp == 200)
		{
			std::cout << "\nYou have MAX HP\n\n";
		}
		if (pers.m_money < 90) {
			std::cout << "You have not enough money\n\n";
		}
		std::cout << "You have " << pers.m_hp << " HP and " << pers.m_money << " coins\n\n";
	}
	
}

void Menu() {
	std::string Zero = "Choose your variant\n\n\n";
	std::string First = "[1] Upgrade Armour\n";
	std::string Second = "[2] Heal Character\n";
	std::string Third = "[3] Choose monster\n";
	std::string Fourth = "[4] Battle\n";
	std::string Fifth = "[5] Stats\n";
	std::string Six = "[6] Exit\n";
	std::string menu = Zero + First + Second + Third + Fourth + Fifth + Six;
	std::cout << menu << std::endl;
};
void Print_monster() {
	std::cout << std::endl;
	for (int i = 1; i < Monsters.size() + 1; i++) {
		std::cout << '[' << i << "] " << Monsters[i] << '\n';
	}

}
void Choose_monster() {
	int choice; 
	Print_monster();
	std::cout << "Choose your monster "; std::cin >> choice;
	choiced_monster = choice;
}


int main() {
	int variant = 0;
	std::string us_name;
	std::cout << "Write your name please "; std::cin >> us_name;
	std::cout << "--------------------------------------------" << '\n';
	std::cout << "\n\nHello " << us_name << "\n\n";
	if (us_name != "\n") Base name;
	else Base name(us_name);
	Bogatyr pers1;
	while (variant != 6) {
		Menu();
		std::cout << "Write your choice "; std::cin >> variant;
		switch (variant)
		{
		case 1:
			Upgrade_Armour(pers1);
			break;
		case 2:
			Heal_character(pers1);
			break;
		case 3:
			Choose_monster();
			break;
		case 4:
			battle(pers1, choiced_monster);
			break;
		case 5: 
			Stat(pers1);
			break;
		default:
			std::cout << "Incorrect variant :( \n\n";
			break;
		}
	}

}
void battle(Bogatyr pers, int monster) {
	while (pers.m_hp > 0 && monsters[monster].hp > 0) {
		monsters[monster].hp -= pers.m_damage * monsters[monster].block;
		pers.m_hp -= monsters[monster].damage * pers.m_block;
	}
	if (pers.m_hp <= 0) {
		std::cout << "Sorry you lose \n";
	}
	if (monsters[monster].hp <= 0) {
		std::cout << "You win this battle and you get " << monster * 70 << std::endl;
		pers.m_money += monster * 70;
		std::cout << "Now you have " << pers.m_money << " coins and " << pers.m_hp << " hp\n\n";
	}
}
void Stat(Bogatyr pers) {
	std::cout << "Name: " << pers.getname()
		<< "\nMoney: " << pers.m_money
		<< "\nHP: " << pers.m_hp
		<< "\nDamage: " << pers.m_damage
		<< "\nBlock: " << pers.m_block
		<< '\n';

}


