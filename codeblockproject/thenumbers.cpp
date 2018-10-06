#include<iostream>
using namespace std;
int main()
{
    char a[11];
    int cnt;
    while(!cin.getline(a,11).eof())
    {
        cnt=0;
        for(int i=3; i<9; i++)
        {
            if(a[i]==a[0])
            {
                if(a[i+1]==a[1])
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
