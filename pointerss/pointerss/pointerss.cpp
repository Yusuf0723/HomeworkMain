

#include <iostream>
using namespace std;
void Nigga(string* test) {
	*test = "Hello World";
}
int main()
{
	string test = "Hello";
	cout << "Enter text:" << endl;
	cin >> test;
	Nigga(&test);
	cout << test;
}


