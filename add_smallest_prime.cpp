#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int x;
    ll y;
    cin>>x>>y;
    if(x%2==0)
    {
        ll d;
        if((y-x)%2==0)
        {
            cout<<(y-x)/2<<endl;
            return ;
        }
        else
        {
            cout<<(y-x)/2+1<<endl;
            return;
        }
    }
    else
    {
        int i;
        for(i=2;i<=x;i++)
        {
            if(x%i==0)
            break;
        }
        x = x+i;
        y-=x;
        if(y%2==0)
        {
            cout<<y/2+1<<endl;
            return ;
        }
        else
        {
            cout<<y/2+2<<endl;
            return ;
        }
    }
}
int main()
{

int t;
cin>>t;
while (t--)
{
    /* code */
    solve();
}


    return 0;
}