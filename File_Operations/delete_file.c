//Programm to Delete a file

#include<stdio.h>
#include<time.h>
#include<curses.h>

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
    char *file;

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
    printf("\nEnter a File Name You Want to Delete: ");
    scanf("%s",fileName);
    remove(fileName);

    if (fopen(fileName, "r"))
    {
        red();
        printf("File Could Not Be Deleted");
        // fclose(file);
        
    }else{

        green();
        printf("File Deleted Successfully....\n");
    }

    return 0;
}