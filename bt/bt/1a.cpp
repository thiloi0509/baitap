#include<iostream> 
#include<string.h>
using namespace std;

int main()
{
    char a;
    cout << " nhap    : ";
    cin >> a;
    if ((a >= 'A') && (a <= 'Z'))
    {
        int k = int(a) + 32;
        cout << " chu thuong cua  " << a << "  la ..." << char(k);
    }
    else if ((a >= 'a') && (a <= 'z'))
    {
        int k = int(a) - 32;
        cout << " hoa cua  " << a << " là  : " << char(k);
    }
    else cout << " number  " << a;
    cout << endl;
    system("pause");
    return 0;
}