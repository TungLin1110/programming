#include<stdio.h>
int main()
{
    int cnt,i;
    char A[10],B[10];
    while( scanf("%s%s",A,B)!=EOF)
    {
        cnt = 0;
        for(i = 0; i < 6; ++i)
        {
            if(B[i]==A[0])
                if(B[i+1]==A[1])
                    cnt++;
        }

        printf("%d\n",cnt);
    }
    return 0;
}

