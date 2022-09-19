#include<iostream>
using namespace std;


int fibo(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    return fibo(n-1) + fibo(n-2);
}


int main(){
    int x;
    cin >> x;
    cout << "The fibonacci series is...\n";
    for (int i=0; i<x; i++){
        cout << fibo(i) << " ";
    }
    cout << "\n";
    return 0;
}