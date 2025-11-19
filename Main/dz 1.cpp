#include <iostream>
#include <cstdlib>
#include <Windows.h>


void n1();
void n2();
void n3();
void n4();
void n5();
void n6();
void n7();
void n8();
void n9();
void n10();
int KolvoDay(int d, int m, int y);
bool visokosniy(int y);

void n11();
int sredN1(int mass[10]);

void n12();
void opredN12(int mass[10]);

void n13();
int* CreateArr(int size);
void FillArr(int* arr, int& size);
void PrintArr(int* arr, int& size);
void DelArr(int* arr);
int* AddToArr(int* arr, int& size);


int* addByInd(int* arr, int& size);	// №14
int* delByInd(int* arr, int& size);	// №14

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
			n7();
			break;
		case 8:
			n8();
			break;
		case 9:
			n9();
			break;
		case 10:
			n10();
			break;
		case 11:
			n11();
			break;
		case 12:
			n12();
			break;
		case 13:
			n13();
			break;
		case 14:
			n13();
			break;
		default:
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

void n7()
{
	int max, mass[10];
	for (int i = 0; i < 10; i++)
	{
		mass[i] = rand() % 100 + 1;
	}

	max = mass[0];

	for (int i = 0; i < 10; i++)
	{
		if (mass[i] > max)
		{
			max = mass[i];
		}
	}
	std::cout << "\nМаксимальное число: " << max;
}

void n8()
{
	int mass[10], nach, kon, chooseN, summ = 0;
	std::cout << "Введите диапазон(начало): ";
	std::cin >> nach;
	std::cout << "Введите диапазон(конец): ";
	std::cin >> kon;
	
	
	for (int i = 0; i < 10; i++)
	{
		mass[i] = rand() % (kon - nach) + 1;
	}
	std::cout << "\nВведите число меньше которого суммировать: ";
	std::cin >> chooseN;
	for (int i = 0; i < 10; i++)
	{
		if (mass[i] > chooseN)
		{
			mass[i] = 0;
		}
		summ += mass[i];
	}
	std::cout << "Сумма: " << summ;
}

void n9()
{
	int yearProfit[12], diapNach, diapKon, max, min;
	std::cout << "Введите прибыль за год помесячно:";
	for (int i = 0; i < 12; i++)
	{
		std::cout << "\nВведите прибыль за " << i + 1 << " месяц: ";
		std::cin >> yearProfit[i];
	}
	std::cout << "Введите начало диапазона: ";
	std::cin >> diapNach;
	std::cout << "Введите конец диапазона: ";
	std::cin >> diapKon;

	max = min = yearProfit[diapNach];

	for (int i = diapNach - 1; i <= diapKon - 1; i++)
	{
		if (yearProfit[i] > max)
		{
			max = i + 1;
		}
		if (min > yearProfit[i])
		{
			min = i + 1;
		}
	}
	std::cout << "\nМесяц с максимальной выручкой - " << max << "й"
		<< "\nМесяц с минимальной выручкой - " << min << "й";
}


void n10()
{
	int dNach, mNach, yNach, dKon, mKon, yKon, KolvoD1, KolvoD2;
	std::cout << "Введите день начала\n";
	std::cin >> dNach;
	std::cout << "Введите месяц начала\n";
	std::cin >> mNach;
	std::cout << "Введите год начала\n";
	std::cin >> yNach;
	std::cout << "Введите день конца\n";
	std::cin >> dKon;
	std::cout << "Введите месяц конца\n";
	std::cin >> mKon;
	std::cout << "Введите год конца\n";
	std::cin >> yKon;

	KolvoD1 = KolvoDay(dNach, mNach, yNach);
	KolvoD2 = KolvoDay(dKon, mKon, yKon);

	std::cout << "Разница дней: " << KolvoD2 - KolvoD1;
}
int KolvoDay(int d, int m, int y)
{
	int allD = d;

	switch (m - 1)
	{
	case 12: 
		allD += 31;
	case 11: 
		allD += 30;
	case 10: 
		allD += 31;
	case  9: 
		allD += 30;
	case  8: 
		allD += 31;
	case  7: 
		allD += 31;
	case  6: 
		allD += 30;
	case  5: 
		allD += 31;
	case  4: 
		allD += 30;
	case  3: 
		allD += 31;
	case  2: 
		if (visokosniy(y)) allD += 29; 
		else allD += 28;
	case  1: 
		allD += 31;
	}

	allD += (y - 1) * 365;
	allD += (y - 1) / 4;

	return allD;
}
bool visokosniy(int y)
{
	bool res = false; 
	if (y % 4 == 0)
	{
		res = true;
	}
	if (y % 100 == 0)
	{
		res = false;
	}
	if (y % 400 == 0)
	{
		res = true;
	}

	return res;
}



void n11()
{
	int mass[10];
	for (int i = 0; i < 10; i++)
	{
		mass[i] = rand() % 100 + 1;
	}
	std::cout << "\nСреднее: " << sredN1(mass);
}
int sredN1(int mass[10])
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += mass[i];
	}
	return sum / 10;
}



void n12()
{
	int mass[10];
	for (int i = 0; i < 10; i++)
	{
		mass[i] = rand() % 21 - 10;
	}
	opredN12(mass);
}
void opredN12(int mass[10])
{
	int pol = 0, otric = 0, nul = 0;
	for (int i = 0; i < 10; i++)
	{
		if (mass[i] > 0)
		{
			pol += 1;
		}
		else if (mass[i] < 0)
		{
			otric += 1;
		}
		else
		{
			nul += 1;
		}
	}
	std::cout << "\nПоложительных: " << pol << "\nОтрицательных: " << otric << "\nНулевых: " << nul;
}



void n13()
{
	int size;
	int* arr;
	std::cout << "Введите размер массива\n";
	std::cin >> size;
	arr = CreateArr(size);
	FillArr(arr, size);
	PrintArr(arr, size);
	arr = AddToArr(arr, size);
	PrintArr(arr, size);
	addByInd(arr, size); // №14
	delByInd(arr, size); // №14
	DelArr(arr);
}
int* CreateArr(int size)
{
	 int* arr = new int[size];
	 return arr;
}
void FillArr(int* arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
}
void PrintArr(int* arr, int& size)
{
	system("cls");
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
	system("pause");
}
void DelArr(int* arr)
{
	delete[]arr;
}
int* AddToArr(int* arr, int& size)
{
	int* TempArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		TempArr[i] = arr[i];
	}
	TempArr[size] = rand() % 10 + 1;
	
	delete[]arr;
	size++;
	return TempArr;
}

// №14
int* addByInd(int* arr, int& size)
{
	int num, ind;
	int* tempArr = new int[size + 1];
	system("cls");
	std::cout << "\nВведите число для добавления: ";
	std::cin >> num;
	std::cout << "\n Введите индекс для добавления: ";
	std::cin >> ind;
	
	for (int i = 0; i < ind; i++)
	{
		tempArr[i] = arr[i];
	}

	tempArr[ind] = num;

	for (int i = 0; i < size; i++)
	{
		tempArr[i + 1] = arr[i];
	}

	size++;
	delete[]arr;
	return tempArr;
}

int* delByInd(int* arr, int& size)
{
	int ind;
	std::cout << "\nВведите индекс для удаления: ";
	std::cin >> ind;

	int* tempArr = new int[size - 1];

	for (int i = 0, j = 0; i < size; i++)
	{
		if (i == ind)
		{
			continue;
		}
		tempArr[j] = arr[i];
		j++;
	}

	delete[] arr;   
	size--;         
	return tempArr; 

}
