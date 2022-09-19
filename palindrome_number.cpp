#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    int y = 0;
    int z = x;
    while (x>0){
        int digit = x % 10;
        y = y*10 + digit;
        x = x/10;
    }

    cout << y << "\n";

    if (z==y) cout << "Palindrome\n";
    else{
        cout << "Not palindrome\n";
    }

    return 0;
}