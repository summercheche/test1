#include<iostream>
using namespace std;

int main() {
	int score = 0;
	cout << "���������ĳɼ�" << endl;

	cin >> score;
	cout << "���ĳɼ�Ϊ��"<<score << endl;
	if (score > 600) 
	{
		cout << "��ϲ����������һ����ѧ��" << endl;
	}
	else
	{
		cout << "���ź�����û�п���һ����ѧ��" << endl;
	}

	system("pause");
	return 0;
}