//Aryaman Pathak EnTCA2 031
//reverse integer
#include <iostream>
using namespace std; 

void reverse(int n)
{

   if (n < 10) 
   {
      cout<<n;
      return;
   }

   else
   {
      cout<<n%10;
      reverse(n/10);
   }
}
int main()
{
   int n;
   cout<<"Enter a four digit integer: ";
   cin>>n;
   cout<<"Reversed string: ";
   reverse(n);
}


/*
Enter a four digit integer: 4588
Reversed string: 8854
   */
