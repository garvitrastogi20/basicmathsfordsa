#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int rev=0;
    int orig=n;
    while(n>0)
    {
        int ld=n%10;
        rev=(rev*10)+ld;
        n=n/10;
    }
    cout<<rev<<endl;
    if(orig==rev)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    return 0;
}