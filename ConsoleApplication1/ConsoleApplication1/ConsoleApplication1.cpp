#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "input:";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int p = 0; p < i; p++)
		{
			cout << "*";
		}
		cout << "*" << endl;
	}
	for (int j = num; j > 0; j--)
	{
		for (int f = 0; f < num; f++)
		{
			cout << " ";
		}
		cout << "*"<<endl;
	}
}