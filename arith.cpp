#include <iostream>
using namespace std;

int main()
{
    int a=5 , b=6;
    cout << "Sum = " << a+b <<endl;

    int c,d;
    cout << "enter the value of c and d : ";
    cin >> c >> d;
    cout << "The sum of c and d is = " << c+d << endl;
    cout << "The sum of c and d is = " << c-d << endl;
    cout << "The sum of c and d is = " << c*d << endl;
    cout << "The sum of c and d is = " << c/d << endl;
    cout << "The sum of c and d is = " << c%d << endl;

    // division:

    int A,B;
    cin >> A >> B;
    cout << A/B << endl;   //[integer]

    int p;
    double q;
    cin >> p >> q;
    cout << p/q << endl; //[double]

    // typecasting

    cout << 5/(double)2 << endl;

    
    int r;
    double k;
    cin >> r >> k;
    int ans = r/k;    //{as a int bcz store in the form of int}
    cout << ans << endl;

    return 0;

}
