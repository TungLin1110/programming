#include<stdio.h>
#include<string.h>
#define SIZE 10000
int main(){
    int T;
    int i,j;
    char p[SIZE],q[SIZE],r[SIZE],*ptr,*nptr;
    scanf("%d\n",&T);
    while(T--){
        fgets(p,sizeof(p),stdin);
        fgets(q,sizeof(q),stdin);
        fgets(r,sizeof(r),stdin);
        q[strlen(q)-1] = r[strlen(r)-1] = '\0';
        ptr = p;
        while(NULL != (nptr = strstr(ptr,q))){
            *nptr = '\0';
            printf("%s%s",ptr,r);
            ptr = nptr+strlen(q);
        }
        printf("%s",ptr);
    }
    return 0;
}
