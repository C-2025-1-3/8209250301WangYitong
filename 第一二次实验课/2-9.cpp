#include<iostream>
using namespace std;
int main()
{
	
	const float price = 0.8;
	float day = 1;
	float money = 0;
	int apple = 1;
	while (apple <= 100)
	{
		apple = 2 * apple;
		if (apple > 100) break;
		money = money + price * apple;
		day++;
	} 
	cout << "每天平均花" << money / day << endl;
	
	return 0;
}