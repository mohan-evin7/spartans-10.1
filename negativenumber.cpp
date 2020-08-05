#include <iostream>

using namespace std;
void zero(int  a[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            a[i]=0;
        }
    }
    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    zero(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
