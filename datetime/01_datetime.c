#include <stdio.h>
#include <time.h>

int main()
{
    time_t now;
    struct tm *local;

    // Get the current time
    time(&now);

    // Convert to local time
    local = localtime(&now);

    printf("Current date and time:\n");
    printf("%02d-%02d-%d %02d:%02d:%02d\n",
           local->tm_mday,
           local->tm_mon + 1,
           local->tm_year + 1900,
           local->tm_hour,
           local->tm_min,
           local->tm_sec);

    return 0;
}
