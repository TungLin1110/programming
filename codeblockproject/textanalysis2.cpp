#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char upper[27]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int  t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int x[30]= {0};
        int m=0;
        char c;
        while((c=getchar())!='\n')
        {

            if(c>='A'&&c<='Z')
                x[c-'A']++;
            if(c>='a'&&c<='z')
                x[c-'a']++;
        }
        for(int i=0; i<26; i++)
        {
            if(x[i]>m)
                m=x[i];
        }
        for(int i=0; i<26; i++)
        {
            if(x[i]==m)
                cout<<upper[i];
        }
        if(t!=0)
            cout<<"\n";
    }
}
