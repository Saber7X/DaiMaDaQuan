#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>x;
    if(x>=0&&x<=25.0)
    {
        cout<<"Intervalo "<<"[0,25]";
    }
    else if(x>25.0&&x<=50.0)
    {
        cout<<"Intervalo "<<"(25,50]";
    }
    else if(x>50&&x<=75.0)
    {
        cout<<"Intervalo "<<"(50,75]";
    }
    else if(x>75&&x<=100.0)
    {
        cout<<"Intervalo "<<"(75,100]";
    }
    else
    {
        cout<<"Fora de intervalo";
    }
    return 0;
}
