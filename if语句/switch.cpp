#include<iostream>
using namespace std;
int main() {


	int score = 0;
	cout << "��Ϊ��Ӱ��֡�" << endl;
	cin >> score;
	cout << "�����ķ���Ϊ��" << score << endl;
	
	cout << "����Ϊ��Ӱ������Ϊ��" << endl;
	switch (score)
	{
	case 10 :
		cout << "�ܺ�" << endl;
			break;
	case 9:
		cout << "����" << endl;
		break;
	case 8 :
		cout << "һ��" << endl;
		break;
	case 7 :
		cout << "����" << endl;
		break;
	default :
		cout << "��" << endl;


	}



	system("pause");
	return 0;
}