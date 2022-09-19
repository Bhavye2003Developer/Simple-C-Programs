#include<iostream>
using namespace std;


void primes_1_to_n(int x){
    for (int i=2; i<=x; i++){
        int is_not_prime = 0;
        for (int j=2; j<i; j++){
            if (i%j==0){
                is_not_prime = 1;
                break;
            }
        }
        if (!is_not_prime){
            cout << i << " ";
        }
    }
}


int main(){
    int n;
    cin >> n;
    primes_1_to_n(n);
    cout << "\n";
    return 0;
}