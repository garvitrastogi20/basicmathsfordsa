#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int cnt=0;

    // time complexity will be O(log10 N)

    //BASIC EXTRACTION OF DIGITS METHOD
    while(n>0)
    {
        int last_digit=n%10;
        cnt++;
        n=n/10;
    }
    cout<<cnt<<endl;


    //another way to find it is taking log of 10 of the number and adding 1 to it
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int cnt1= (int)(log10(a)+1);
    cout<<"Number of digits in a number are: "<<cnt1<<endl;
    return 0;
}