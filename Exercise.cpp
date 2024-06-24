#include<iostream>
using namespace std;
void left_shift(int a[],int size,int k)
{
    int i,temp[size];
    for(i=0;i<size;i++)
    {
        if(i+k<size)
    {
        temp[i]=a[i+k];
    }
    else
    {
        temp[i]=0;
    }
    }
    for(i=0;i<size;i++)
    {
        a[i]=temp[i];
    }
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}
void left_rotate(int b[],int size,int k)
{
    
}
int main()
{
    int a[]={1,2,3,4,5,6};
    int size=sizeof(a)/sizeof(a[0]);
    left_shift(a,size,3);
    return 0;
}