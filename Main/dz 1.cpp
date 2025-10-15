#include <iostream>
#include <cstdlib>
#include <Windows.h>


void n1();
void n2();
void n3();
void n4();
void n5();
void n6();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
    
	int choose;
	std::cout << "выберете номер задачи:\n";
	std::cin >> choose;

	switch (choose)
	{
		case 1:
			n1();
			break;
		case 2:
			n2();
			break;
		case 3:
			n3();
			break;
		case 4:
			n4();
			break;
		case 5:
			n5();
			break;
		case 6:
			n6();
			break;
		case 7:
			//n7();
			break;
		case 8:
			//n8();
			break;
	}









	return 0;
}









void n1()
{
	float km, time;
	std::cout << "Введите расстояние: ";
	std::cin >> km;
	std::cout << "Введите время: ";
	std::cin >> time;
	std::cout << "Нужная скорость: " << km / time << " км/ч";
}

void n2()
{
	int hourNach, hourKon, minNach, minKon, secNach, secKon;
	std::cout << "\nНачало аренды часы: ";
	std::cin >> hourNach;
	std::cout << "\nНачало аренды минуты: ";
	std::cin >> minNach;
	std::cout << "\nНачало аренды секунды: ";
	std::cin >> secNach;

	std::cout << "\nКонец аренды часы: ";
	std::cin >> hourKon;
	std::cout << "\nКонец аренды минуты: ";
	std::cin >> minKon;
	std::cout << "\nКонец аренды секунды: ";
	std::cin >> secKon;

	std::cout << "Стоимость составила: " << (((hourKon * 60) + minKon + (secKon / 60)) - ((hourNach * 60) + minNach + (secNach / 60))) * 2;
}

void n3()
{
	float km, fuel1, fuel2, fuel3, rashod;
	std::cout << "кол-во км: ";
	std::cin >> km;
	std::cout << "Расход на 100км: ";
	std::cin >> rashod;
	std::cout << "цена топлива 1: ";
	std::cin >> fuel1;
	std::cout << "цена топлива 2: ";
	std::cin >> fuel2;
	std::cout << "цена топлива 3: ";
	std::cin >> fuel3;

	std::cout << "Сравнительная таблица стоимости поездки на разных бензинах:\n" <<
		"топливо 1: " << ((km / 100) * rashod) * fuel1 << "\n" <<
		"топливо 2: " << ((km / 100) * rashod) * fuel2 << "\n" <<
		"топливо 3: " << ((km / 100) * rashod) * fuel3 << "\n";
}

void n4()
{
	int Number, mass[6]{}, kf = 1, i = 0;
	
	while (true)
	{
		std::cout << "Введите шестизначное число\n";
		std::cin >> Number;
		if (Number < 100000 || Number > 1000000)
		{
			std::cout << "Ошибка. Введи норм";
		}
		else
		{
			break;
		}
	}

	for (int i = 5; i >= 0; i--) 
	{
		mass[i] = Number % 10;
		Number /= 10;
	}

	int part1 = 0, part2 = 0;

	for (int i = 0; i < 3; i++)
	{
		part1 += mass[i];
	}

	for (int i = 3; i < 6; i++)
	{
		part2 += mass[i];
	}


	if (part2 == part1)
	{
		std::cout << "\nЧисло счастливое!";
	}
	else
	{
		std::cout << "\nЧисло не счастливое!";
	}


	
}

void n5()
{
	int Number;
	std::cout << "Введите число: ";
	std::cin >> Number;
	if (Number < 1000 || Number > 10000)
	{
		std::cout << "Ошибка";
	}
	else
	{
		std::cout <<
			" " << (Number / 100) - ((Number / 1000) * 10) <<
			" " << Number / 1000 <<
			" " << Number % 10 <<
			" " << (Number - (Number / 100) * 100) / 10;
	}
}

void n6()
{
	int mass[7], max;
	std::cout << "Введите 7 чисел\n";
	for (int i = 0; i < 7; i++)
	{
		std::cout << "Число " << i + 1 << ": ";
		std::cin >> mass[i];
		std::cout << "\n";
	}

	max = mass[0];

	for (int i = 0; i < 7; i++)
	{
		if (mass[i] > max)
		{
			max = mass[i];
		}
	}
	std::cout << "\nМаксимальное число: " << max;
}
