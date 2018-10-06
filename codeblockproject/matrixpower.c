#include<stdio.h>
#include<math.h>
int c[6][6]= {0};
long long int mat[6][6]= {0};
long long int ans[6][6]= {0};
long long int zero[6][6]= {0};//初始用
int d,y,p;
int bi[100]= {0};
void power(int n)
{
    int i,j,k;
    if(n==0)
        memcpy(c, mat, sizeof(c));
    else
    {
        while(n--)
        {
            for (i=0; i<d; i++)
            {
                for (j=0; j<d; j++)
                {
                    c[i][j]=0; /*初始化陣列C */
                    for(k=0; k<d; k++)
                    {
                        c[i][j] = c[i][j] +mat[i][k] * mat[k][j];
                        c[i][j]=c[i][j]%p;
                    }
                }
            }
            memcpy(mat, c, sizeof(mat));
        }
    }
}
void mount()
{
    int i,j,k;
    {
        for (i=0; i<d; i++)
        {
            for (j=0; j<d; j++)
            {
                for(k=0; k<d; k++)
                {
                    ans[i][j] = ans[i][j] +c[i][k] * mat[k][j];
                    ans[i][j]=ans[i][j]%p;
                }
            }
        }
    }
}
    int main()
    {
        int i,j;
        while(scanf("%d%d%d",&d,&y,&p)==3)
        {
            if(d==0&&y==0&p==0)break;

            memcpy(mat, zero, sizeof(mat));
            memcpy(c, zero, sizeof(c));

            for(i=0; i<d; i++)
            {
                for(j=0; j<d; j++)
                {
                    scanf("%d",&mat[i][j]);
                }
            }
            i=0;
            while(y>0)
            {
                bi[i]=y%2;
                y=y/2;
                i++;
            }
            int count=i;
            //printf("%d",count);
            power(i);
            memcpy(mat, c, sizeof(mat));
            for(i=count-2; i<=0; i--)
            {
                if(bi[i]==1)
                {
                power(i);
                mount();
                memcpy(mat, ans, sizeof(mat));
                }
            }
            for(i=0; i<d; i++)
            {
                for(j=0; j<d; j++)
                {
                    printf("%lli ",mat[i][j]);
                }
                printf("\n");
            }

        }
    }
