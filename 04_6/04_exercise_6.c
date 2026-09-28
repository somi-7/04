#include <stdio.h>

int main(int argc, char *argv[])
    {
        int second;
        int hour, minute, sec;

        printf("input the second : ");
        scanf("%i", &second);

        hour = second / 3600;
        minute = (second / 60) % 60;
        sec = second % 60;

        printf("The time for %i second is %i : %i : %i\n", second, hour, minute, sec);

        return 0;
    }