#include <iostream>

using namespace std;

void reverseStr (string& str)

{ 
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    swap (str [i], str [n - i- 1]);
}
int main () 

{
    string str = " Hello, world! ";
    reverseStr(str);
    cout << str;
    return 0;
    
}
