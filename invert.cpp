#include <iostream>

using namespace std;
void invert(int a[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
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
    invert(a,n);
    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<" "; 
    }
    return 0;
}
