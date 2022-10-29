#include<iostream>
#include<math.h>
#define PI 3.14                                                                   //defining constant value of pi
using namespace std;
inline float area(float r) {return PI*pow(r,2);}                                  //declairing inline function to calculate area of circle
void main(){
    float r;
    cout << "Enter the radius of circle whose area has to find out : "<<endl;
    cin >> r;                                                                       //taking input
    cout << area(r)<<endl;                                                          //calling inline function
}
