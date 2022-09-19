#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    char opt;

    cout << "\n---MENU---\n";
    cout << "+ --> Addition\n";
    cout << "- --> Subtraction\n";
    cout << "/ --> Multipcation\n";
    cout << "* --> Division\n";

    cout << "Enter operator : ";
    cin >> opt;

    if (opt=='+'){
        cout << "The addition is : " << x + y;
    }
    else if (opt=='-'){
        cout << "The subtraction is : " << x - y;
    }
    else if (opt=='/'){
        cout << "The Division is : " << x / y;
    }
    else if (opt=='*'){
        cout << "The Multiplication is : " << x * y;
    }
    cout << "\n";
    return 0;
}