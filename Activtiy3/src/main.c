#include "ascii_value.h"
#include "add.h"

int ascii();
int add();

int main(){
    char str[100];
    printf("Enter your name: ");
    scanf("%s",str);
    ascii(str);
    add(str);
    return 0;
}
