#include<iostream>
using namespace std;
int main()
{
	int k = 0;
	int i = k + 1;//并未预先定义k是什么
	cout << ++i << endl;
	//int i = 1;//输出过程中不应该再次对i进行赋值
	cout << ++i<< endl;
	cout << "Welcome to C++" << endl;
	return 0;
}