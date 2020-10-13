#include<iostream>
using namespace std;
 int main()
 {
     int num,count,temp;
     int i,j;

     cout<<"Enter the Number"<<endl;
     cin>>num;

     for(i=1;i<=num;i++)
     {
         temp=i;
         count=0;
         for(j=1;j<=temp;j++)
         {
             if(temp%j==0)
             {
                 count++;
             }

         }
         if(count==2)
             {
                 cout<<temp<<" ";
             }
     }
     return 0;

 }
