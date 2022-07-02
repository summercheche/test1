#include<iostream>
using namespace std;
int main() {


	int score = 0;
	cout << "请为电影打分。" << endl;
	cin >> score;
	cout << "您给的分数为：" << score << endl;
	
	cout << "您认为电影的评级为：" << endl;
	switch (score)
	{
	case 10 :
		cout << "很好" << endl;
			break;
	case 9:
		cout << "经典" << endl;
		break;
	case 8 :
		cout << "一般" << endl;
		break;
	case 7 :
		cout << "还行" << endl;
		break;
	default :
		cout << "烂" << endl;


	}



	system("pause");
	return 0;
}