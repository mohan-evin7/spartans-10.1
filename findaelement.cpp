#include <iostream>

using namespace std;
bool zero(int  a[], int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return true;
        }
    }
    return false;
    
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
    int x;
    cin>>x;
    
    if(zero(a,n,x))
    cout<<"yes";
    else
    cout<<"no";

    return 0;
}
