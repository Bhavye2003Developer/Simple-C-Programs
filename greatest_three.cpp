#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    cout << "The first number is : " << x << "\n";
    cout << "The second number is : " << y << "\n";
    cout << "The third number is : " << z << "\n";

    if (x>y && x>z) cout << "The greatest is : " << x << "\n";
    else if (y>x && y>z){
        cout << "The greatest is : " << y << "\n";
    }
    else{
        cout << "The greatest is : " << z << "\n";
    }

    return 0;
}