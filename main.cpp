#include <iostream>

using namespace std;

int main()
{
    double totalCost, employeeSalary, yearlyRent, electricityCost;

    cout<<"Enter the total cost of the merchandise: ";
    cin>>totalCost;

    cout<<"Enter the salary of the employee: ";
    cin>>employeeSalary;

    cout<<"Enter the yearly rent: ";
    cin>>yearlyRent;

    cout<<"Enter the estimated electricity cost: ";
    cin>>electricityCost;

    double totalExpenses = totalCost + employeeSalary + yearlyRent + electricityCost;
    double desiredNetProfit =totalCost* 0.1;
    double newNetProfit = desiredNetProfit/0.85;
    double markUp = (newNetProfit+totalExpenses)/totalCost *100;

    cout<<"The merchandise should be marked up by "<< markUp<<"%"<<endl;

    return 0;

}
