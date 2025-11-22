#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	cout << "请输入一个数字，我将为你计算它的平方根：";
	cin >> a;
	int x = a, y;

	if(a<0)
	{
		cout << "负数没有平方根！" << endl;
		return 0;
	}
	else {
		for (int i = 1; i > 0; i++)
		{
			y = (1 / 2) * (x + a / x);

			if (y - x > (-5) && y - x < 5)
				break;
			x = y;
		}

		cout << a << "的平方根大约是：" << y << endl;

	}
	return 0;	

}