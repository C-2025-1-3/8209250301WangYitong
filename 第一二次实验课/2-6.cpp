#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0,c=0;
	int min = 0,max=0;
	cout << "请输入两个正整数： " << endl;
	cin >> a >> b;
	if (a > b)
	{
		min = b;
		max = a;
	}
	else {
		min = a;
		max = b;
	}
	if (max % min == 0) {
		cout << "最大公约数为： " << min << endl;
		cout << "最小公倍数为： " << max << endl;
	}
	else {

		while (min != 0)
		{
			c = max % min;
			max = min;
			min = c;

		}
		cout << "最大公约数为：" << max << endl;
		cout << "最小公倍数为：" << (a * b) / max << endl;

	}
	return 0;
}