#include<stdio.h>
int main(){
    int a,is_prime=1;
    scanf("%d",&a);
    for(int i=2;i<#include <stdio.h>

int main() {
    int a, is_prime = 1;
    scanf("%d", &a);
    
    if (a <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i <= a / 2; i++) { 
            if (a % i == 0) { 
                is_prime = 0;
                break;
            }
        }
    }
    
    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    
    return 0;
}
a;i++){
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