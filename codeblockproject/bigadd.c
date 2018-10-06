#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,lena,lenb,shortlen,longlen,carry;
    scanf("%d",&t);
    int inta[35]= {0};
    int intb[35]= {0};
    char chara[35]= {'\0'};
    char charb[35]= {'\0'};
    while(t--)
    {
        scanf("%s",&chara);
        lena=strlen(chara);
        scanf("%s",&charb);
        lenb=strlen(charb);
        for(i=0; i<lena; i++)
        {
            inta[i]=chara[i]-'0';
        }
        for(i=0; i<lenb; i++)
        {
            intb[i]=charb[i]-'0';
        }
        int lencase;
        if(lena>lenb)
        {
            shortlen=lenb;
            longlen=lena;
            lencase=1;
        }
        else
        {
            shortlen=lena;
            longlen=lenb;
            lencase=2;
        }
        for(i=longlen-1; i>=longlen-shortlen; i--)
        {
            if(lencase==1)
            {
                inta[i]=inta[i]+intb[i-(longlen-shortlen)];

            }
            else
            {
                intb[i]=intb[i]+inta[i-(longlen-shortlen)];

            }
        }

///////////////////
        if(lencase==1)
        {
            for(i=lena-1; i>0; i--)
            {
                if(inta[i]>=10)
                {
                    inta[i]-=10;
                    inta[i-1]++;
                }
            }
            if(inta[0]>=10)
            {
                inta[0]-=10;
                carry=1;
            }
        }
        else
        {
            for(i=lenb-1; i>0; i--)
            {
                if(intb[i]>=10)
                {
                    intb[i]-=10;
                    intb[i-1]++;
                }
            }
            if(intb[0]>=10)
            {
                intb[0]-=10;
                carry=1;
            }
        }
////////////////////
        if(carry==1)
        {
            printf("1");
        }

        if(lencase==1)
        {
            for(i=0; i<lena; i++)
            {
                printf("%d",inta[i]);
            }
            if(t!=0)
                printf("\n");
        }
        else
        {
            for(i=0; i<lenb; i++)
            {
                printf("%d",intb[i]);
            }
            if(t!=0)
                printf("\n");

        }
    }
}
