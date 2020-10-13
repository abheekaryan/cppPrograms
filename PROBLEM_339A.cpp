#include<iostream>
using namespace std;

int main()
{
int a[10];
int b,c,n=5;

for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    if(a[i]>a[i+1])
    {
        cout<<"YES";
        b=a[i+1];
        a[i+1]=a[i];
        a[i]=b;
    }
}
for(int i=0;i<n;i++)
{
    cout<<a[i];
}
return 0;
}
