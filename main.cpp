// Course:  CS213 - Programming II  - 2018
// Title:   Assignment III -Task1- Problem 9
// Purpose: Skeleton code for the student to start working
// Author:  Dr. Mohammad El-Ramly
// Date:    17 Novamber 2018
// Version: 1.0
//__________________________________________________________
#include <iostream>

using namespace std;
// Purpose:  This Recursion function to represent The Pascal Triangle
// Author:  Mayada Mohamad
//________________________________________________________
int fun(int n,int k){
if(k>n){ return 0;}
if(n==0&&k<=0){ return 0;}
if((n==1&&k==0)||(n==1&&k==1)){return 1;}
return fun(n-1,k)+fun(n-1,k-1);

}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    cout<<fun(n,k);
    return 0;
}
