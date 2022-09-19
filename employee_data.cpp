#include<iostream>
using namespace std;

class Employee{
    private : int Basic_Salary;
    private : float DA_allowance = 0;
    private : float TA = 0;
    private : float HRA = 0;
    private : float gross_salary = 0;

    public : Employee(int Basic_Salary){
        this->Basic_Salary = Basic_Salary;
    }

    public : void GetInfo(){
        DA_allowance = (30.0/100.0) * this->Basic_Salary;
        TA = (10/100) * this->Basic_Salary;
        HRA = (50/100) * this->Basic_Salary;
        gross_salary = DA_allowance + TA + HRA;
        cout << "The gross salary of employee is : " << gross_salary;
    }
};

int main(){
    Employee emp1(120000);
    emp1.GetInfo();
    return 0;
}