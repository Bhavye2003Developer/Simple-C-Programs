#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    cout << "The first number is : " << x << "\n";
    cout << "The second number is : " << y << "\n";

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "\n\n";
    cout << "The first number is : " << x << "\n";
    cout << "The second number is : " << y << "\n";

    return 0;
}