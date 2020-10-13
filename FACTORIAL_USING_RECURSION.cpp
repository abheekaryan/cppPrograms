#include<iostream>
using namespace std;
int factres(int n,int fact);
int main()
{
  int num,fact=1;
  cout<<"Enter the number to find the factorial"<<endl;
  cin>>num;
  int result = factres(num,fact) ;
  cout<<"Factorial of\t"<<num<<"\tis:\t"<<result<<endl;
}
int factres(int num,int fact)
{
    int i;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}


