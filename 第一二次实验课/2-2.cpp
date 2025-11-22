#include<iostream>
using namespace std;
int main()
{
	float x = 0;
	float y = 0;
	cout << "请输入x的值： " << endl;
	cin >> x;
	if (x > 0 && x < 1) {
		y = 3 - 2*x;
		cout << y << endl;
	}
	else if (x >= 1 && x < 5) {
		y = 2 / (4* x) + 1;
		cout << y << endl;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
		cout << y << endl;
	}
	else
	{
		cout << "你输入的x不在定义域内。" << endl;

	}
	return 0;
}