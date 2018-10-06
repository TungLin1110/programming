#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[200];
    int carry;
    int digit = 1;
    a[0] = 1;
    int temp;
    int i,j;
    for(i = 2; i <= n; ++i)
    {

        for(j = 1, carry = 0; j <= digit; ++j)
        {
            temp = a[j-1] * i + carry;
            a[j-1] = temp % 10;
            carry = temp / 10;
        }
        while(carry)
        {
            a[++digit-1] = carry % 10;
            carry /= 10;
        }
    }
    printf("%d!\n",n);
    for(i = digit; i >=1; --i)
    {
        printf("%d",a[i-1]);
    }
    return 0;
}
