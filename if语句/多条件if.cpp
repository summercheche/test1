#include<iostream>
using namespace std;

int main() {

	int score = 0;
	cout << "���������ĳɼ�" << endl;
	cin >> score;
	cout << "���ĳɼ�Ϊ��" << score << endl;

	if (score > 600)
	{
		cout << "��ϲ����������һ����ѧ��" << endl;
		if (score > 700)
		{
			cout << "��ϲ���������˱�����ѧ��" << endl;
		}
		else if (score > 605)
		{
			cout << "��ϲ�����������廪��ѧ!" << endl;
		}
		else
		{
			cout << "��ϲ���������������ѧ��" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "��ϲ���������˶�����ѧ��" << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ����������������ѧ��" << endl;
	}
	else
	{
		cout << "���ź�����û�п��ϱ���ѧУ��" << endl;
	}

	system("pause");
	return 0;

}