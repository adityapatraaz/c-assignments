#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter three integers :\n");
    scanf("%d%d%d", &a, &b, &c);
    a > b ? (a > c ? printf("%d is largest", a) : printf("%d is largest", c)) : (b > c ? printf("%d is largest", b) : printf("%d is largest", c));
}