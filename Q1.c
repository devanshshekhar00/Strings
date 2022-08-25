#include <stdio.h>

int main() {
    int input;
    printf("Enter length\t");
    scanf("%d",&input);
    char c[input];
    int j = 0;
    printf("Enter stirng\t");
    scanf("%s",c);
    for(int i = 0 ; c[i];i++) j++;
    printf("length is %d",j);

    return 0;
}
