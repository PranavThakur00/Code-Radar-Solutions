#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    scanf("%c" ,&c);
    if(isupper(c))
    {
        printf("Uppercase\n");
    }
    else if(islower(c)){
        printf("Lowercase\n");
    }
    else{
        printf("Not a alphabet\n");
    }
    return 0;
}