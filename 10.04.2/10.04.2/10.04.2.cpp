
#include <iostream>
using namespace std;
void Nigg(char* b) {
    *b = *b + 10;
}
int main()
{
    char b = 0;
    cout << "Enter num:" << endl;
    cin >> b;
    Nigg(&b);
    cout << &b <<endl;
    cout << b<<endl;
}

