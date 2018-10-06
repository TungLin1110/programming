#include<iostream>
using namespace std;
int revf(int ini)
{
    int rev=0;
    while(ini>0)
    {
        rev=rev*10+ini%10;
        ini=ini/10;
    }
    return rev;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ini,rev;
        cin>>ini;
        rev=revf(ini);
        int cnt=0;
        while(ini!=rev)
        {
            ini=ini+rev;
            rev=revf(ini);
            cnt++;
        }
        if(t!=0)
            cout<<cnt<<" "<<ini<<endl;
        else
            cout<<cnt<<" "<<ini;
    }
}
