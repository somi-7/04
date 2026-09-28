#include <stdio.h>

int main(int argc, char*argv[])
    {
        int year;
        int leap_year;

        printf("input the year :");
        scanf("%i", &year);

        leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

        printf("is the year %i the leap year? : %i\n", year, leap_year);

        return 0;
    }