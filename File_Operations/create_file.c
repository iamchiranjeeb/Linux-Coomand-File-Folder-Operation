
//Programm to create a file

#include <stdio.h>
#include <curses.h>
#include <time.h>

void red()
{
    printf("\033[1;31m");
}

void green()
{
    printf("\033[1;32m");
}

void blue()
{
    printf("\033[1;34m");
}

void magneta()
{
    printf("\033[1;35m");
}

int main()
{
    FILE *file;

    char fileName[50];

    time_t T = time(NULL);
    struct tm tm = *localtime(&T);

    magneta();
    printf("Current Date is: %02d/%02d/%04d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("Current Time is: %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);

    if (tm.tm_hour > 04 && tm.tm_hour < 12)
    {
        magneta();
        printf("Good Morning Looser");
    }
    else if (tm.tm_hour >= 12 && tm.tm_hour < 17)
    {
        magneta();
        printf("Good Afternoon Looser");
    }
    else
    {
        magneta();
        printf("Good Evening Looser");
    }

    blue();
    printf("\nEnter the name of the File You want to create With its extension: ");
    scanf("%s", fileName);

    if(file = fopen(fileName,"r")){

        red();
        printf("File exist");
        fclose(file);
    }else
    {
        file = fopen(fileName, "w");

        if (file == NULL)
        {
            red();
            printf("Unable to create file");
        }
        else
        {
            green();
            printf("File opend successfully");

            fclose(file);
        }
    }
    
}