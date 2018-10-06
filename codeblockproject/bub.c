#include<stdio.h>
#define N 200+10
int main(){
    int cases,i,temp,sorted,swapcount;
    int nums[N];
    while(scanf("%d",&cases)){
        if(0 == cases)break;

        for(i = 0;i < cases;++i){
            scanf("%d",&nums[i]);
        }
        sorted = 0;swapcount = 0;
        while(!sorted){
            sorted = 1;
            for(i = 0;i < cases-1;++i){
                if(nums[i] > nums[i+1]){
                    sorted = 0;
                    swapcount++;
                    temp = nums[i];
                    nums[i] = nums[i+1];
                    nums[i+1] = temp;
                }
            }
        }
        printf("%d\n",swapcount);
    }
    return 0;
}
