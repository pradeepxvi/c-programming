#include <stdio.h>
#include <string.h>
int main()
{
    char myStr[] = "Learn C++, Java and Python!";
    int pos = strcspn(myStr, "L");
    printf("%d", pos);

    return 0;
}