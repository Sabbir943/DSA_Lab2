#include<iostream>
using namespace std;
void shiftLeft(int source[],int k)
{
    int size=6;
    for(int i=0;i<size;i++)
  {
    if(i+k<size)
    {
        source[i]=source[i+k];
    }
    else{
        source[i]=0;
    }
  }
  
  for(int i=0;i<size;i++)
    {
        cout<<source[i]<<" ";
    }
}


void rotateLeft(int source[],int k)
{
    int size=6;
    k%=size;
    for(int i=0;i<k;i++)
    {
        int temp=source[0];
        for(int j=0;j<size-1;j++)
        {
            source[j]=source[j+1];
        }
        source[size-1]=temp;
    }
    for(int i=0;i<size;i++)
    {
        cout<<source[i]<<" ";
    }
    
    }


void shiftRight(int source[],int k)
{
  int size=6;
  int temp[size];
  for(int i=0;i<size;i++)
  {
    if(i<k)
    {
        temp[i]=0;
    }
    else{
        temp[i]=source[i-k];
    }
  }
  for(int i=0;i<size;i++)
  {
    source[i]=temp[i];
  }
  for(int i=0;i<size;i++)
    {
        cout<<source[i]<<" ";
    }
}
void rotateRight(int source[],int k)
{
   int j,i;
   int size=6;
    k%=size;
    for( i=0;i<k;i++)
    {
        int temp=source[size-1];
        for( j=size-1;j>=0;j--)
        {
            source[j]=source[j-1];
        }
        source[0]=temp;
    }
    for(int i=0;i<size;i++)
    {
        cout<<source[i]<<" ";
    }
} 


void remove(int source[],int size,int idx)
{
    
   int i;
    for( i=idx;i<size-1;i++)
    {
        source[i]=source[i+1];
    }
    source[size-1]=0;
    
    for( i=0;i<7;i++)
    {
        cout<<source[i]<<" ";
    }
    
}
    
void removeAll(int source[],int size,int element)
    {
       int index=0,i;
       for(i=0;i<size;++i)
       {
       if(source[i]!=element)
       {
        source[index]=source[i];
        ++index;
       }
       }
       for (int i=index;i<size;++i)
       {
        source[i]=0;
       }
      
       for(int i=0;i<size;++i)
       {
        cout<<source[i]<<" ";
       }
        
    }
    
    bool array_spitting(int A[],int size)
    {
        int left_sum=0,total_sum=0;
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


    void array_serics(int n,int new_array[])
    {
        int n_squre=n*n;
        for(int i=0;i<n_squre;i++)
        {
            new_array[i]=0;
        }
        for(int x=1;x<=n;x++)
        {
            for(int y=1;y<=x;y++)
            {
                new_array[(x*n)-y]=y;
            }
        }
        for(int i=0;i<n_squre;i++)
        {
            cout<<new_array[i]<<" ";
        }
    }


    void Max_Bunch_count(int arr[],int size)
    {
        int max_count=1,current_count=1;
        for(int i=1;i<size;i++)
        {
           if (arr[i]==arr[i-1])
           {
              current_count++;
           }
           else{
            current_count=1;
           }
           if(current_count>max_count)
           {
            max_count=current_count;
           }
            
        }
        cout<<max_count;
        cout<<endl;
    }

    bool repetition(int b[],int length)
    {
        const int MAX_VAL=100;
        int count[MAX_VAL]={0};
        for(int i=0;i<length;i++)
        {
            count[b[i]]++;
        }
       bool has_dublicate_counts=false;
       for(int i=0;i<MAX_VAL;i++)
       {
        if(count[i]>1)
        {
            for(int j=i+1;j<MAX_VAL;j++)
            {
                if(count[i]==count[j])
                {
                    has_dublicate_counts=true;
                    break;
                }
            }
            
        }
       }
       if(has_dublicate_counts)
            {
                cout<<"True";
            }
            else {
                cout<<"False";
            }
            
            }
   
int main()
{
    int source[]={10,20,30,40,50,60};
    shiftLeft(source,3);
    cout<<endl;

    int source1[]={10,20,30,40,50,60};
    rotateLeft(source1,3);
    cout<<endl;

    int source2[]={10,20,30,40,50,60};
    shiftRight(source2,3);
    cout<<endl; 

    int source3[]={10,20,30,40,50,60};
    rotateRight(source3,3);
    cout<<endl;

    int source4[]={10,20,30,40,50,0,0};
    remove(source4,5,2);
    cout<<endl;

    int source5[]={10,2,30,2,50,2,2,0,0};
    int size=sizeof(source5)/sizeof(source5[0]);
    removeAll(source5,size,2);
    cout<<endl;

    
    int A[]={1,1,1,2,0,1};
    int size1=sizeof(A)/sizeof(A[0]);
    bool result1=array_spitting(A,size1);
    cout<<boolalpha<<result1;
    cout<<endl;

    int n=3;
    int n_squre=n*n;
    int new_array[n_squre];
    array_serics(n,new_array);
    cout<<endl;

    int arr[]={1,2,2,3,4,4,4};
    int s=sizeof(arr)/sizeof(arr[0]);
    Max_Bunch_count(arr,s);


   int b[]={3,4,6,3,4,7,4,6,8,6,6};
   int length=sizeof(b)/sizeof(b[0]);
   repetition(b,length);
   return 0;
}