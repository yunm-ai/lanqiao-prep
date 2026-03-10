#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    while(cin>>n)
    {

        vector<double>v;
        v.reserve(n);
        long long p=n;
        double sum=0.0;
        double num;
        while(p--)
        {
            cin>>num;
            v.push_back(num);
            sum+=num;
        }
        double max=v[0];
        double min=v[0];
        long long max_index=0;
        for(long long i=0;i<v.size();i++)
        {
            if(v[i]>max)
            {
                max=v[i];
                max_index=i;
            }
            if(v[i]<min)
            {
                min=v[i];
            }
        }
        cout<<min<<' '<<max<<' '<<sum<<' '<<max_index<<'\n';
    }
}