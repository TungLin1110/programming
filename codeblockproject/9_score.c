#include<stdio.h>
int main()
{
    int t,N,K,i,j,max,temp,temp1,temp2,temp3;
    float avg1,avg2,avg3;
    int sa,sb,sc;
    int ar[1100][4];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&N,&K);
        for(i=0; i<N; i++)
        {
            scanf("%d%d%d",&ar[i][0],&ar[i][1],&ar[i][2]);
            ar[i][3]=ar[i][0]+ar[i][1]+ar[i][2];
        }
        for(i=0; i<N; i++)
        {
            printf("%d %d %d %d\n",ar[i][0],ar[i][1],ar[i][2],ar[i][3]);

        }
        printf("\n");
        avg1=avg2=avg3=0;
        for(i=0; i<N; i++)
        {
            avg1=avg1+ar[i][0];
            avg2=avg2+ar[i][1];
            avg3=avg3+ar[i][2];
        }
        avg1=avg1/N;
        avg2=avg2/N;
        avg3=avg3/N;
        ////////////////////////////////////////
        max=0;
        temp=0;
        for(i=0; i<N-1; i++)
        {
            max=i;
            for(j=i+1; j<N; j++)
            {
                if(ar[max][3]>ar[j][3])
                {
                    max=j;
                }
            }
            {
                temp=ar[max][3];
                ar[max][3]=ar[j][3];
                ar[j][3]=temp;

                temp=ar[max][2];
                ar[max][2]=ar[j][2];
                ar[j][2]=temp;

                temp=ar[max][1];
                ar[max][1]=ar[j][1];
                ar[j][1]=temp;

                temp=ar[max][0];
                ar[max][0]=ar[j][0];
                ar[j][0]=temp;
            }
        }
        for(i=0; i<N; i++)
        {
            printf("%d %d %d %d\n",ar[i][0],ar[i][1],ar[i][2],ar[i][3]);

        }
        printf("\n");
        for(i=0; i<K; i++)
        {
            printf("%d %d %d %d\n",ar[i][0],ar[i][1],ar[i][2],ar[i][3]);

        }
        if(t!=0)
            printf("%.2f %.2f %.2f\n",avg1,avg2,avg3);
        else
            printf("%.2f %.2f %.2f",avg1,avg2,avg3);
    }
}
