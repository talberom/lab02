#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << endl;
    cout << "A - B = " << a - b << endl;
    cout << "A * B = " << a * b << endl;
    if (B != 0)
        cout << "A / B = " << a / b << endl;
    else
        cout << "Cant divide because of denominator equals 0" << endl;
    return 0;
}
