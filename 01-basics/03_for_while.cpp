#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    while(cin>>n)
    {
        cout<<n*(n+1)/2<<'\n';
        long long p=n;
        bool is_first=true;
        while(p)
        {
            if(is_first)
            {
                cout<<p;
                is_first=false;

            }
            else
            cout<<' '<<p;
            p--;

        }
        cout<<'\n';
    }
    return 0;
}