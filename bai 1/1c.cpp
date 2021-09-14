#include <iostream>
#include <stdio.h>  
using namespace std;

void PTB1(double a, double b) {
    if (a == 0) {
        if (b == 0)
            cout << "VSN";
        else cout << "VN";
    }
    else
        cout << -b / a;
}
void PTB2(double a, double b, double c) {
    double d, x1, x2;
    if (a == 0) {
        {
            cout << "phuong trinh vo nghiem" << endl;
        }
    }
    else
    {
        d = b * b - 4 * a * c;
        if (d < 0)
        {
            cout << "phuong trinh vo nghem" << endl;
        }
        else if (d == 0)
        {
            cout << "phuong trinh co nghiem kep x1=x2=" << -b / (2 * a) << endl;
        }
        else
        {
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);
            cout << "phuong trinh co 2 ngiem phan biet:" << endl;
            cout << "x1=" << x1 << endl;
            cout << "x2=" << x2 << endl;
        }
    }
}
int main() {
    double a, b, c;
    cout << "nhap a va b và c\n";
    cin >> a >> b >> c;
    PTB2(a, b, c);
    PTB1(a, b);
    return 0;
}
