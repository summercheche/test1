#include<iostream>
using namespace std;

int main() {

	int score = 0;
	cout << "请输入您的成绩" << endl;
	cin >> score;
	cout << "您的成绩为：" << score << endl;

	if (score > 600)
	{
		cout << "恭喜您，考上了一本大学！" << endl;
		if (score > 700)
		{
			cout << "恭喜您，考上了北京大学！" << endl;
		}
		else if (score > 605)
		{
			cout << "恭喜您，考上了清华大学!" << endl;
		}
		else
		{
			cout << "恭喜您，考上了人民大学！" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "恭喜您，考上了二本大学！" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您，考上了三本大学！" << endl;
	}
	else
	{
		cout << "很遗憾，您没有考上本科学校。" << endl;
	}

	system("pause");
	return 0;

}