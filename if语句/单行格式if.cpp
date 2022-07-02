#include<iostream>
using namespace std;

int main() {

	int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;

	cout << "您的分数为：" << score << endl;

	if (score > 600)
	{
		cout << "恭喜您，考上了一本大学！" << endl;
	}




	system( "pause");
	return 0;
}