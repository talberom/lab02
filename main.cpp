#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << endl;
    cout << "A - B = " << a - b << endl;
    cout << "A * B = " << a * b << endl;
    if (b != 0)
        cout << "A / B = " << a / b << endl;

    else
        cout << "Cant divide because of denominator equals 0" << endl;
    cout << "Max(a, b): " << max(a, b) << endl;
    cout << "Min(a, b): " << min(a, b) << endl;
    return 0;
}
