#include<iostream>
using namespace std;

int main() {
	int pigA = 0;
	int pigB = 0;
	int pigC = 0;

	cout << "��������ֻ�������" << endl;
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
			cout << "A��������" << endl;
		}
		else
		{
			cout << "C��������" << endl;
		}
	}
	else
	{
		if (pigB > pigC)
		{
			cout << "B��������" << endl;
		}
		else
		{
			cout << "C��������" << endl;
		}
	}

	system("pause");
	return 0;
}
