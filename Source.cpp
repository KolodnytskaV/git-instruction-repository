#include <iostream>
#include<Windows.h>

using namespace std;

using std::cout;
using std::endl;



//                 ������������ �����������
//               /                          \
//            �����          <-              ��������(��������)
//        /             \                  /                \
//����� (�������)      ��������     ����������          ����� (��������)

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
// �����
class Statement
{
private:
	Number number[2];
	Operator operations[2];//+=
	// �� ��� ������ ����������
	
public:
	//������

	//������ �����
	Statement(int x, int y)
	{
		//����� �����
		number[0] = Number();
		number[0].Value = x;

		//����� �����
		number[1] = Number();
		number[1].Value = y;


		operations[0] = Operator('+');
		operations[1] = Operator('=');
	}

	//���������� �������
	int Build()
	{
		int sum = number[0].Value + number[1].Value;
		cout << "����������� �����:" << endl;
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

	cout << "������ ����� �:" << endl;
	cin >> x;
	cout << "������ ����� �:" << endl;
	cin >> y;
	Statement statement = Statement(x, y);

	statement.Build();
	cin.get();

}



