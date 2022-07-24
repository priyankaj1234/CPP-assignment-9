#include<iostream>
using namespace std;
int main()
{
    int a[10],i,pos=0,neg=0,zero=0;

    cout<<endl<<"Enter numbers : ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<10;i++)
    {
        if(a[i]>0)
        {
            pos++;
        }
        else if(a[i]<0)
        {
            neg++;
        }
        else 
        {
            zero++;
        }
    }

    cout<<endl<<"Positive no : "<<pos;
    cout<<endl<<"Negitive no : "<<neg;
    cout<<endl<<"Zeros : "<<zero;

    return 0;
}