#include<iostream>
#include<math.h>
using namespace std;
void vowel(){                                                           //func if x is vowel
    cout<<"Entered character "<<x<<" is a vowel."<<endl;
}
void not_vowel(){                                                       //func if x in not vowel
    cout<<"Entered character "<<x<<" is not a vowel."<<endl;
}
void main(){
    char x;
    cout<<"Enter a character : "<<endl;
    cin >> x;                                                           //taking input
    switch (x){                                                         //using switch case
        case 'A':
            vowel();
            break;
        case 'E':
            vowel();
            break;
        case 'I':
            vowel();
            break;
        case 'O':
            vowel();
            break;
        case 'U':
            vowel();
            break;
        case 'a':
            vowel();
            break;
        case 'e':
            vowel();
            break;
        case 'i':
            vowel();
            break;
        case 'o':
            vowel();
            break;
        case 'u':
            vowel();
            break;
        default:                                                            //if above conditions are not true
            not_vowel();
            break;
    }
}
