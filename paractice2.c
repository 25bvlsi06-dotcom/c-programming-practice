
#include <stdio.h>

int main() {
    int n, x;

    printf("Enter the number: ");
    scanf("%d", &n);

    x = -n % 10;

    printf("The remainder is %d", x);

    return 0;
}