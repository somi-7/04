#include <stdio.h>

int main(int argc, char*argv[])
    {
        int total_seconds;
        int minute, second;

        printf("input the second :");
        scanf("%d", &total_seconds);

        minute = total_seconds / 60;
        second = total_seconds % 60;

        printf("the time is %d : %d\n", minute, second);

        return 0;
    }