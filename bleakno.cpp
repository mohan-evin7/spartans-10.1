#include <iostream>
using namespace std;
int sets(int x)
{
    int c=0;
    while(x!=0)
    {
        x=x&(x-1);
        c++;
    }
    return c;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int f=0;
	    for(int i=1;i<n;i++)
	    {
	        if(i+sets(i)==n)
	        {
	            f=1;
	            break;
	        }
	    }
	    if(f)
	    cout<<0<<"\n";
	    else
	    cout<<1<<"\n";
	}
	return 0;
}
