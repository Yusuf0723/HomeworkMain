
#include <iostream>
using namespace std;
void beru() {
    int num, b;
    cout <<"Enter num:";
    cin >> num;
    if (num > 0) {
        for (int i = 1; i <= 10; i++)
        {
            b = i * num;
            cout << num << "*" << i << "=" << b <<endl;
        }
    }
    else {
        cout << "Error" << endl;
    }
}
int main()
{
    beru();
}


