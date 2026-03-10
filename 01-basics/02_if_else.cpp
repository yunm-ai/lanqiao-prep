#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long num;
    while(cin>>num)
    {
        if(num%2!=0)
        cout<<"odd\n";
        else
        cout<<"even\n";
        if(num>=60&&num<80)
        cout<<"C\n";
        else if(num>=80&&num<90)
        cout<<"B\n";
        else if(num>=90)
        cout<<"A\n";
        else
        cout<<"D\n";
    }
    return 0;
}