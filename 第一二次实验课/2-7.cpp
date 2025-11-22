#include<iostream>
using namespace std;
int main()
{
	int i;
	int j;

	for ( i = 1; i < 16; i++)
	{
		cout << "*";
		if (i == 1 || i == 3 || i == 6 || i == 10)
			cout << "\n" << endl;
	}
	return 0;
}