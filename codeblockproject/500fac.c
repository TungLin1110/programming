#include<stdio.h>
#define N 4000
int main()
{
    int fac,carry,dig,temp,i,j;
    while(scanf("%d",&fac)!=EOF)
    {
        int ans[N]= {0};
        dig=ans[0]=1;
        for(i = 2; i <= fac; i++)
        {
            for(j = 1, carry = 0; j <= dig; j++)
            {
                temp = ans[j-1] * i + carry;
                ans[j-1] = temp % 10;
                carry = temp / 10;
            }
            while(carry)
            {
                ans[++dig-1] = carry % 10;
                carry /= 10;
            }
        }
        printf("%d!\n",fac);
        for(i = dig; i >=1; i--)
        printf("%d",ans[i-1]);
        printf("\n");
    }
}
