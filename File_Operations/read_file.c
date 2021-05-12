//Programm To Readd a File

#include<stdio.h>
#include<curses.h>
#include<time.h>
#include<stdlib.h>

void red()
{
    printf("\033[1;31m");
}

void green()
{
    printf("\033[0;32m");
}

void yellow()
{
    printf("\033[0;33m");
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
    char ch;

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
    printf("\nEnter The File Name You Want to Read: ");
    scanf("%s",fileName);

    file =fopen(fileName,"r");

    if(file == NULL){

        red();
        printf("Unable to Open The File.\n");
        exit(0);
    }

    printf("\n\n\n");

    while (ch != EOF) //(ch == fgetc(file) != EOF)
    {
        ch = fgetc(file); /* Read single character from file */
        yellow();
        putchar(ch);    /* Print character read on console */
        //printf("%c",ch);
    }
    printf("\n\n\n");

    fclose(file);

    return 0;


}