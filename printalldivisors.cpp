//print all divisors:
//  print all the numbers upto that number which are divisible by that number

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"All divisors of "<<n<<": ";
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
