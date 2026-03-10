#include<bits/stdc++.h>
using namespace std;


void add(double a,double b)
{
    cout<<a+b;
}



void square(double c)
{
    cout<<c*c;
}



void max3(double a,double b,double c)
{
    if(a>b)
    {
        b=a;
    }
    cout<< (b>c)?b:c;
     /*不推荐这么些，b的值被修改了，有点隐蔽*/
     /*可以直接用内置函数max*/
     /*cout << max({a, b, c});*/
     /*担心多个参数：max(a, max(b, c));  嵌套保险写法*/
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout<<fixed<<setprecision(2);

    double a,b,c;
    while(cin>>a>>b>>c)
    {
        add(a,b);
        cout<<'\n';
        square(c);
        cout<<'\n';
        max3(a,b,c);
        cout<<'\n';
    }
    return 0;
}