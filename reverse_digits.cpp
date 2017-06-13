#include <iostream>

using namespace std;

int main()
{
    int n,a,s=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        s=(s*10)+a;

        n/=10;
    }
    cout<<s<<endl;

    return 0;
}
