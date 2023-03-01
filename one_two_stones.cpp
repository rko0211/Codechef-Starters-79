#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

int t;
cin>>t;
while(t--)
{
 ll x,y;
cin>>x>>y;
if(x==y)
{
    if(x%2==0)
    {
        cout<<"CHEFINA\n";
       
    }
    else
    {
        cout<<"CHEF\n";
       
    }
}
else if(x>y)
{
    if((x-y)>=2)
    {
        cout<<"CHEF\n";
      
    }
    else
    {
        if(x%2==1)
        {
            cout<<"CHEFINA\n";
        }
        else{
            cout<<"CHEF\n";
        }
       
    }
}
else
{
    if(y-x>=2)
    {
        cout<<"CHEFINA\n";
      
    }
    else
    {
       if(y%2==0)
       {
        cout<<"CHEF\n";
     
       }
       else
       {
        cout<<"CHEFINA\n";
        
       }
    }

}
}

    return 0;
}