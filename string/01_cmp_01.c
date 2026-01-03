#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "a";
    char str2[] = "A";

    printf("str1 = %s\n", str1);
    printf("str1 = %s\n", str2);

    int cmp1 = strcmp(str1, str2); // 32 : a = 97, A = 65 --> a > A
    int cmp2 = strcmp(str2, str1); // -32 : a = 97, A = 65 --> A < a

    printf("cmp = %d\n", cmp1);
    printf("cmp = %d\n", cmp2);

    char str3[] = "hello";
    char str4[] = "world";

    printf("str1 = %s\n", str3);
    printf("str1 = %s\n", str4);

    int cmp3 = strcmp(str3, str4);
    // hello -> h = 104
    // world -> w = 119  h < w --> -ve by 15
    printf("cmp = %d\n", cmp3);

    return 0;
}