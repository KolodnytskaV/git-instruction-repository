#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;
using std::wcout;

using std::wstring;
using std::cin;
using std::wcin;
using std::endl;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string NameCity;
	std::cout << "Місто:";
	getline(std::cin, NameCity);
	std::string NameRestaurant;
	std::cout << "Ресторан:";
	getline(std::cin, NameRestaurant);
	std::string Data;
	std::cout << "Дата:";
	getline(std::cin, Data);
	std::string Time;
	std::cout << "Година:";
	getline(std::cin, Time);
	std::string NumberOfThePeople;
	std::cout << "Кількість людей:";
	getline(std::cin, NumberOfThePeople);
	std::string Name;
	std::cout << "Замовник:";
	getline(std::cin, Name);
	std::string PhoneNumber;
	std::cout << "Номер телефону:";
	getline(std::cin, PhoneNumber);

	return 0;

}