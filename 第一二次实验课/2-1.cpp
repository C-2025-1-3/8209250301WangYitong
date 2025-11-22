#include<iostream>
using namespace std;
int main()
{
	char i;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º " << endl;
	cin >> i;
	if (i >= 97 && i <= 122)
	{
		i = i - 32;
		cout << i << endl;
	}
	else {
		i++;
		cout << static_cast <int>(i)<< endl;
	}
	return 0;
}