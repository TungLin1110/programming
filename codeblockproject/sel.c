#include<stdio.h>
#define N 200+10
int main(){
    int cases,nums[N],swapcount,smallest,sm_in,i,j,temp;
    while(scanf("%d",&cases)){
        if(0 == cases)break;

        for(i = 0;i < cases;++i){
            scanf("%d",&nums[i]);
        }

        for(i = 0,swapcount = 0;i < cases-1;++i){
            for(j = i,smallest = 1000000,sm_in = -1;j < cases;++j){
                if(nums[j] < smallest){
                    smallest = nums[j];
                    sm_in = j;
                }
            }

            if(sm_in != i){
                swapcount++;
                temp = nums[i];
                nums[i] = nums[sm_in];
                nums[sm_in] = temp;
            }
        }

        if(cases < 3){
            for(i = 0;i < cases;++i){
                printf("%d ",nums[i]);
            }
        }

        else{
            for(i = 0;i < 3;++i){
                printf("%d ",nums[i]);
            }
        }

        printf("%d\n",swapcount);
    }
    return 0;
}
