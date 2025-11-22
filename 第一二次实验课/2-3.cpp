#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	int r = 0;
	cout << "请输入三角形的三条边长： " << endl;
	cin >>a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		r = a + b + c;
		cout << "这个三角形的周长为： " << r << endl;
		if (a == b || a == c || b == c) {
			cout << "这个三角形是等腰三角形。" << endl;

		}
	}
	else {
		cout << "无法构成三角形！" << endl;

	}
	return 0;

}