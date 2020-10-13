#include<iostream>
using namespace std;

int main()
{
    int num;
    int i,count=0;
    cin>>num;
    if(num==0||num==1)
    {
        cout<<"Enter numbered is neither prime nor composite";
    }
    else
    {
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
         count++;
        }
    }
    if(count>1)
    {
        cout<<"Entered Number is composite number";
    }
    else
    {
         cout<<"Entered number is prime number";
    }
    }

}
