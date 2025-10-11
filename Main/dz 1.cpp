#include <iostream>
#include <cstdlib>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
    


	// N1

	/*float km, time;
	std::cout << "Введите расстояние: ";
	std::cin >> km;
	std::cout << "Введите время: ";
	std::cin >> time;
	std::cout << "Нужная скорость: " << km / time << " км/ч";*/






	// N2

	/*int hourNach, hourKon, minNach, minKon, secNach, secKon;
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

	std::cout << "Стоимость составила: " << (((hourKon * 60) + minKon + (secKon / 60)) - ((hourNach * 60) + minNach + (secNach / 60))) * 2;*/





	// N3

	/*float km, fuel1, fuel2, fuel3, rashod;
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
		"топливо 3: " << ((km / 100) * rashod) * fuel3 << "\n";*/





	// N4

	return 0;
}
