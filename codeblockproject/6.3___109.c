#include<stdio.h>
#define N 100+10
int main(){
    int num,odd[N],even[N],oi,ei,counter,temp,i,is_first = 1;
    while(scanf("%d",&num)){
        if(0 == num)break;

        if(!is_first){
            printf("\n");
        }
        else{
            is_first = 0;
        }
        for(counter = 0,oi = ei = 0;counter < num;++counter){
            scanf("%d",&temp);
            if(0 == temp%2){
                even[ei++] = temp;
            }
            else{
                odd[oi++] = temp;
            }
        }

        for(i = 0;i < oi;++i){
            printf("%d%c",odd[i],(i == oi-1)?'\n':' ');
        }

        for(i = 0;i < ei;++i){
            printf("%d%c",even[i],(i == ei-1)?'\n':' ');
        }


    }
    return 0;
}
