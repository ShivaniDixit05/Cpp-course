#include <iostream>
using namespace std;

int main()
{
    // conversion:
    // implicit (by compilor automatically) [small - big]
    // char to int

    char grade , age ;
    grade = 'A'; //65
    age = 'a';  //97  [ACII value]


    int value , word;
    value = grade;
    word = age;
    cout << value << endl;
    cout << word << endl;

    // casting:
    // Explicit (by programmer) [big to small]
    // float to int 

    float num;
    num = 908.66f;

    int val;
    val = (int)num;
    cout << val << endl;
    
    return 0;
}
