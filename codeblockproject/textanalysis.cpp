#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    enum upper{A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};
    int  t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        char text[1000];
        int x[30]={0};
        int m=0;
        cin.getline(text,1000);
        for(int i=0;i<strlen(text);i++)
        {
            if(text[i]>='A'&&text[i]<='Z')
                x[text[i]-'A']++;
            if(text[i]>='a'&&text[i]<='z')
                x[text[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(x[i]>m)
                m=x[i];
        }
        for(int i=0;i<26;i++)
        {
            if(x[i]==m)
                cout<<upper(i);
        }

    }
}
