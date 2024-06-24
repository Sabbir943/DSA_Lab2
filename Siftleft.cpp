#include<iostream>
using namespace std;
void shiftLeft(int source1[],int k)
{
    int i;
    for( i=0;i<6-k;i++)
    {
        source1[i]=source1[i+k];
    }
    for(i=6-k;i<6;i++)
    {
        source1[i]=0;
    }
}
void shiftRight(int source2[],int k)
{
    int i;
    
    for(i=5;i>=k;i--)
    {
        source2[i]=source2[i-k];
    }
    for(i=0;i<k;i++)
    {
        source2[i]=0;
    }
}
int main()
{
    int source1[]={10,20,30,40,50,60};
    int source2[]={10,20,30,40,50,60};
    shiftLeft(source1,3);
    shiftRight(source2,3);
    for(int i=0;i<6;i++)
    {
        cout<<source1[i]<<" ";
        
        
    }
    cout<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<source2[i]<<" ";
        
        
    }
}