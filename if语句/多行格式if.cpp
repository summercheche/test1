#include<iostream>
using namespace std;

int main() {
	int score = 0;
	cout << "请输入您的成绩" << endl;

	cin >> score;
	cout << "您的成绩为："<<score << endl;
	if (score > 600) 
	{
		cout << "恭喜您，考上了一本大学！" << endl;
	}
	else
	{
		cout << "很遗憾，您没有考上一本大学。" << endl;
	}

	system("pause");
	return 0;
}