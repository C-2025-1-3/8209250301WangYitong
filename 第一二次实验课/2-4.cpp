#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	int m = 0;
	int n = 0;
	cout << "使用规则：\n";
	cout << "使用“+”输入1\n";
	cout << "使用“-”输入2\n";
	cout << "使用“*”输入3\n";
	cout << "使用“/”输入4\n";
	cout << "使用“%”输入5\n";

	while (1)
	{
		cout << "请输入一个数字：" << endl;
			cin >> a;
			cout << "请选择要进行的运算：\n";
			cin >> m;
			cout << "请再输入一个数字： " << endl;
			cin >> b;
		switch (m + 1)
		{
			case 2:
				c = a + b;
				break;
			case 3:
				c = a - b;
				break;
			case 4:
				c = a * b;
				break;
			case 5:
				if (b == 0) {
					cout << "对不起，发生计算错误。" << endl;
				}
				else {
					c = a / b;
				}
				break;
			case 6:
				if (b == 0) {
					cout << "对不起，发生计算错误。" << endl;
				}
				else {
					c = a % b;
				}
				break;
		}
			

		cout << c << endl;
		cout << "是否终止运算？若终止请输入1若继续则输入2" << endl;
		cin >> n;
		if (n == 1) {
			break;
		}
		if(n == 2) {
			continue;
		}

		
	}

	return 0;

}