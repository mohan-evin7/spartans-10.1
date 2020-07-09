#include<iostream>
using namespace as std;
int main()
{
 int n,c=0;
 cin>>n;
 while(n!=0)
 {
    n=n&(n-1);
    c++;
 }
 cout<<c;
 return 0;
}
    
 
