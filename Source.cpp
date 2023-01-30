#include <iostream>
#include<Windows.h>

using namespace std;

using std::cout;
using std::endl;



//                 Математичний калькулятор
//               /                          \
//            Числа          <-              Операції(операнди)
//        /             \                  /                \
//Цифри (символи)      Значення     Позначення          Числа (операнди)

class Operator
{
private:
	char  Symbole;
public:
	Operator(){}
	Operator(char val)
	{
		Symbole = val;
	}
	
	char Show()
	{
		return Symbole;
	}
};
struct Number
{
	char Symbol;
	int Value;

};
// Вираз
class Statement
{
private:
	Number number[2];
	Operator operations[2];//+=
	// які дані будуть зберігатись
	
public:
	//Методи

	//Задати числа
	Statement(int x, int y)
	{
		//Перше число
		number[0] = Number();
		number[0].Value = x;

		//Друге число
		number[1] = Number();
		number[1].Value = y;


		operations[0] = Operator('+');
		operations[1] = Operator('=');
	}

	//Побудувати формулу
	int Build()
	{
		int sum = number[0].Value + number[1].Value;
		cout << "Сформований вираз:" << endl;
		cout << number[0].Value << operations[0].Show()
			<< number[1].Value << operations[1].Show()
			<< sum << endl;
		return sum;
	}
};

int main()
{
	setlocale(LC_ALL, "ukr.utf8");

	int x = 0, y = 0;

	cout << "Введіть число х:" << endl;
	cin >> x;
	cout << "Введіть число у:" << endl;
	cin >> y;
	Statement statement = Statement(x, y);

	statement.Build();
	cin.get();

}



