// Q6. Develop an program to Check whether a character is uppercase, lowercase or digit

/* #include <stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Uppercase\n");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("Lowercase\n");
    }
    else if(ch >= '0' && ch <= '9'){
        printf("Digit\n");
    }
    else{
        printf("Special character\n");
    }
    return 0;
} */

#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(isupper(ch)){
        printf("This is upper case\n");
    }
    else if(islower(ch)){
        printf("This is lower case\n");
    }
    else if(isdigit(ch)){
        printf("This is digit\n");
    }
    else{
        printf("This is special character\n");
    }
    return 0;
}
