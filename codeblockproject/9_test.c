#include<stdio.h>
int main()
{
    int t,N,K,i,j,temp;
    double avg1,avg2,avg3;
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
        for(i=0; i<N; i++)
        {
            for(j=i; j<N; j++)
            {

                if(ar[j][3]>ar[i][3])
                {
                    temp=ar[i][3];
                    ar[i][3]=ar[j][3];
                    ar[j][3]=temp;

                    temp=ar[i][2];
                    ar[i][2]=ar[j][2];
                    ar[j][2]=temp;

                    temp=ar[i][1];
                    ar[i][1]=ar[j][1];
                    ar[j][1]=temp;

                    temp=ar[i][0];
                    ar[i][0]=ar[j][0];
                    ar[j][0]=temp;

                }
            }
        }
        for(i=0; i<K; i++)
        {
            printf("%d %d %d %d\n",ar[i][0],ar[i][1],ar[i][2],ar[i][3]);

        }
        printf("%.2lf %.2lf %.2lf\n",avg1,avg2,avg3);

        if(t!=0)
        {
            printf("\n");
        }
    }

}
