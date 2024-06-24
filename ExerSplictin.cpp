#include<iostream>
using namespace std;
bool array_splitting(int A[],int size)
{
    int left_sum=0;
    int total_sum=0;
    for(int i=0;i<size;i++)
    {
        total_sum+=A[i];
    }
    for(int i=0;i<size-1;i++)
    {
        left_sum+=A[i];
        if(left_sum==total_sum-left_sum)
        {
            return true;
        }
    }
    return false;
}
int main()
{
   int A[]={1,1,1,2,1};
   int size=sizeof(A)/sizeof(A[0]);
   bool result=array_splitting(A,size);
   cout<<boolalpha<<result<<endl;
}