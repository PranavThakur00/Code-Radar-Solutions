#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>0&&a<100){
        printf("In Range");
    }
    else if(a<1){
        printf("Out of Range");
    }
    else{
        printf("anything");
    }
    return 0;
}