#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int mul = 1;
    for (int i=1; i<=x; i++){
        mul = mul * i;
    }
    cout << "The Factorial is : " << mul << "\n";

    return 0;
}