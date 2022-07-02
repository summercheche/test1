#include<iostream>
using namespace std;

int main() {
	int pigA = 0;
	int pigB = 0;
	int pigC = 0;

	cout << "请输入三只猪的体重" << endl;
	cout << "A=" << endl;
	cin >> pigA;
	cout << "B=" << endl;
	cin >> pigB;
	cout << "C=" << endl;
	cin >> pigC;

	if (pigA > pigB)
	{
		if (pigA > pigC)
		{
			cout << "A体重最重" << endl;
		}
		else
		{
			cout << "C体重最重" << endl;
		}
	}
	else
	{
		if (pigB > pigC)
		{
			cout << "B体重最重" << endl;
		}
		else
		{
			cout << "C体重最重" << endl;
		}
	}

	system("pause");
	return 0;
}
