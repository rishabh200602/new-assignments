#include <stdio.h>
#include <string.h>

void reverse(char str[], int ind) {
    if (ind < 0)
        return;

    printf("%c", str[ind]);
    reverse(str, ind- 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
   scanf("%s",str);
   printf("reversed string");
   reverse(str,strlen(str)-1);

    return 0;
}