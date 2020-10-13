#include<iostream>
#include<string>


using namespace std;

int main() {
    char a[20];
    int n;
    cout<<"Enter the number of chartrs"<<endl;
    cin>>n;
    cout<<"Enter the string"<<endl;
    for(int i=0;i<=n-1; i++ )
    {
        cin>>a[i];
    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<a[i];
    }
}
