//Aryaman Pathak EnTCA2 031
//factorial
#include<iostream>
using namespace std;

int fact(int n)
{
    if (n<=1)
        return 1;

    else return (n*fact(n-1));
}
int main()
{
    int a;
    cout<<"Enter an integer: "<<endl;
    cin>>a;
    cout<<"Factorial is: "<<fact(a);
}

/*
Enter an integer: 
4
Factorial is: 24
    */
