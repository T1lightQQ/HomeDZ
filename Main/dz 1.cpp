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
	std::cout << "�������� ����� ������:\n";
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
	std::cout << "������� ����������: ";
	std::cin >> km;
	std::cout << "������� �����: ";
	std::cin >> time;
	std::cout << "������ ��������: " << km / time << " ��/�";
}

void n2()
{
	int hourNach, hourKon, minNach, minKon, secNach, secKon;
	std::cout << "\n������ ������ ����: ";
	std::cin >> hourNach;
	std::cout << "\n������ ������ ������: ";
	std::cin >> minNach;
	std::cout << "\n������ ������ �������: ";
	std::cin >> secNach;

	std::cout << "\n����� ������ ����: ";
	std::cin >> hourKon;
	std::cout << "\n����� ������ ������: ";
	std::cin >> minKon;
	std::cout << "\n����� ������ �������: ";
	std::cin >> secKon;

	std::cout << "��������� ���������: " << (((hourKon * 60) + minKon + (secKon / 60)) - ((hourNach * 60) + minNach + (secNach / 60))) * 2;
}

void n3()
{
	float km, fuel1, fuel2, fuel3, rashod;
	std::cout << "���-�� ��: ";
	std::cin >> km;
	std::cout << "������ �� 100��: ";
	std::cin >> rashod;
	std::cout << "���� ������� 1: ";
	std::cin >> fuel1;
	std::cout << "���� ������� 2: ";
	std::cin >> fuel2;
	std::cout << "���� ������� 3: ";
	std::cin >> fuel3;

	std::cout << "������������� ������� ��������� ������� �� ������ ��������:\n" <<
		"������� 1: " << ((km / 100) * rashod) * fuel1 << "\n" <<
		"������� 2: " << ((km / 100) * rashod) * fuel2 << "\n" <<
		"������� 3: " << ((km / 100) * rashod) * fuel3 << "\n";
}

void n4()
{
	int Number, mass[6]{}, kf = 1, i = 0;
	
	while (true)
	{
		std::cout << "������� ������������ �����\n";
		std::cin >> Number;
		if (Number < 100000 || Number > 1000000)
		{
			std::cout << "������. ����� ����";
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
		std::cout << "\n����� ����������!";
	}
	else
	{
		std::cout << "\n����� �� ����������!";
	}


	
}

void n5()
{
	int Number;
	std::cout << "������� �����: ";
	std::cin >> Number;
	if (Number < 1000 || Number > 10000)
	{
		std::cout << "������";
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
	std::cout << "������� 7 �����\n";
	for (int i = 0; i < 7; i++)
	{
		std::cout << "����� " << i + 1 << ": ";
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
	std::cout << "\n������������ �����: " << max;
}
