#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    
    int is_not_prime = 0;
    for (int i=2; i<x; i++){
        if (x%i==0){
            cout << "Not Prime\n";
            is_not_prime = 1;
            break;
        }
    }

    if (!is_not_prime) cout << "Prime\n";
    return 0;
}