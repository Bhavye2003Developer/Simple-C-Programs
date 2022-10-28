#include<iostream>
using namespace std;
int fact_recur(int n){
    if (n==1) return 1;
    return n * fact_recur(n-1);
}
void main(){
    int n;
    cout<<"Enter the number whose factorial has to find out :- "<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact_recur(n)<<"\n";
}
