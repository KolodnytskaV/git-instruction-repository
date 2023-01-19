#include <iostream>
#include <Windows.h>
#include <string>
#include <stdbool.h>

using namespace std;
using std::wcout;

using std::wstring;
using std::cin;
using std::wcin;
using std::endl;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x=0;
	std::cout <<"Змінна х:";
	std::cin>> x;
	int y=0;
	std::cout << "Змінна y:";
	std::cin>> y;

	
		
		if ((x < 10)&&(x + y <=25))
		{
			//якщо умова виконана (true)
			bool isSumAccepted = true;
				
		}
		if (!(x > 10) && !(x + y > 25))
			bool isSumAccepted = true;
		else 
		{
			//якщо умова не виконана (false)
			bool isSumAccepted = false;
		}
 
	
	return 0;
	

}