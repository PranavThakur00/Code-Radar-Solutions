#include<stdio.h>
int main(){
    int a,is_prime=1;
    scanf("%d",&a);
    for(int i=2;i<0;i++){
        if(a%2==0)
        is_prime=0;
        break;
    }
    if(is_prime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;

}