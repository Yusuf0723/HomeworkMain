#include <iostream>
using namespace std;
void nig(float* b) {
    *b = *b + 6.28;
}
int main()
{
    float b = 3.14;
    cout << b << endl;
    nig(&b);
    cout << b << endl;
}


