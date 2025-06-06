//GCD-> Greatest Common Divisor
//HCF-> Highest Common Factor
//Let n1=9, n2=12
//factors of n1= 1,3,9
//factors of n2= 1,2,6,12,3,4
// so GCD OR HCF = 3

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter first number: "; 
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;

    // There are two approaches:
    //first approach

    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    cout<<"Gcd of n1 and n2 is: "<<gcd<<endl;


    //second approach 
    for(int i=min(n1,n2);i>=1;i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            cout<<"Gcd of n1 and n2: "<<i<<endl;
            break;
        }
    }
    return 0;
}