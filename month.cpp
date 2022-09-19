#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n==1){
        cout << "January --> 31\n";
    }
    else if (n==2){
        cout << "Feburary --> 29\n";
    }
    else if (n==3){
        cout << "March --> 31\n";
    }
    else if (n==4){
        cout << "April --> 30\n";
    }
    else if (n==5){
        cout << "May --> 31\n";
    }
    else if (n==6){
        cout << "June --> 30\n";
    }
    else if (n==7){
        cout << "July --> 31\n";
    }
    else if (n==8){
        cout << "August --> 31\n";
    }
    else if (n==9){
        cout << "September --> 30\n";
    }
    else if (n==10){
        cout << "October --> 31\n";
    }
    else if (n==11){
        cout << "November --> 30\n";
    }
    else if (n==12){
        cout << "December --> 31\n";
    }
    return 0;
}