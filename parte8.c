#include <stdio.h>
#include <time.h>

int main()
{
    struct tm data;

    data.tm_hour = 12;
    data.tm_min = 54;
    data.tm_sec = 25;

    time_t sec = mktime(&data);

    printf("%ld", sec);

    return 0;
}