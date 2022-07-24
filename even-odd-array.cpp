#include<iostream>
using namespace std;
int main()
{
    int a[10],i,even=0,odd=0,zero=0;

    cout<<endl<<"Enter numbers : ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<10;i++)
    {
        if(a[i]==0)
        {
            zero++;
        }
        else if(a[i]%2==0)
        {
            even++;
        }
        else if(a[i]%2!=0)
        {
            odd++;
        }
        
    }
    cout<<endl<<"Even no : "<<even;
    cout<<endl<<"Odd no :"<<odd;
    cout<<endl<<"Zeros : "<<zero;

    return 0;
}