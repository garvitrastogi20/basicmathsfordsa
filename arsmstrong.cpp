//armstrong number: let say 371. if 371= (3)^3 +(7)^3+ (1)^3 then 371 is said to be armstrong number
//power is equal to the number of digits. eg- 371 then power of each is 3
//if number is 1634 then power on each will be 4

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int cnt= (int)(log10(n)+1);
    int org=n;
    int sum=0;
    while(n!=0)
    {
        int l=n%10;
        sum=sum+pow(l,cnt);
        n=n/10;
    }
    if(sum==org)
    {
        cout<<"Given number is arstrong";
    }
    else{
        cout<<"Not armstong";
    }
    return 0;
}