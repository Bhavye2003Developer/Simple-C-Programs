#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){

    char x;
    cin >> x;
    if (isupper(x)) cout << "UpperCase\n";
    else{
        cout << "LowerCase";
    }
    return 0;
}