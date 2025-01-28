#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    scanf("%c" ,&c);
    if(isupper(c))
    {
        printf("Uppercase");
    }
    else if(islower(c)){
        printf("Lowercase");
    }
    else{
        printf("not a alphabet");
    }
    return 0;
}