#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    if(a>c)
    printf("%d is greater",a);
    else
    printf("%d is greater",c);
    else
    if(b>c)
    printf("%d is greater",b);
    else
    printf("%d is greater",c);
    return 0;
}
OUTPUT
Enter the values of a b and c:2 8 5
8 is greater

=== Code Execution Successful ===
