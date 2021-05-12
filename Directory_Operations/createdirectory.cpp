#include <bits/stdc++.h>
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <string>
#include <stdlib.h>
#include <curses.h>
#include <cmath>
#include <ctime>


using namespace std;

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

    char fileName[50];

    time_t t = time(NULL);
    tm *timePtr = localtime(&t);

    magneta();
    cout << "weekday = " << (timePtr->tm_wday);
    if (timePtr->tm_wday == 1)
    {
        cout << " (Monday) " << endl;
    }
    else if (timePtr->tm_wday == 2)
    {
        cout << " (Tuesday) " << endl;
    }
    else if (timePtr->tm_wday == 3)
    {
        cout << " (Wednesday) " << endl;
    }
    else if (timePtr->tm_wday == 4)
    {
        cout << " (Thursday) " << endl;
    }
    else if (timePtr->tm_wday == 5)
    {
        cout << " (Friday) " << endl;
    }
    else if (timePtr->tm_wday == 6)
    {
        cout << " (Saturday) " << endl;
    }
    else if (timePtr->tm_wday == 0)
    {
        cout << " (Sunday) " << endl;
    }
    else
    {
        cout << "Day Not Found" << endl;
    }

    cout << "Date     " << (timePtr->tm_mday) << "/" << (timePtr->tm_mon) + 1 << "/" << (timePtr->tm_year) + 1900 << endl;
    cout << "Time     " << (timePtr->tm_hour) << ":" << (timePtr->tm_min) << ":" << (timePtr->tm_sec) << endl;

    if (timePtr->tm_hour >= 04 && timePtr->tm_hour < 12)
    {
        cout << "Good Afternoon Looser" << endl;
    }
    else if (timePtr->tm_hour >= 12 && timePtr->tm_hour < 17)
    {
        cout << "Good Afternoon Looser" << endl;
    }
    else
    {
        cout << "Good Evening Looser" << endl;
    }



    //char fileName[50];

    blue();
    cout<<"Enter The Directory Name You Want To Create : ";
    cin>>fileName;

    // Creating a directory
    if (mkdir(fileName,0777) == -1){
        red();
        cerr << "Error :  " << strerror(errno) << endl;
    }
        
    else{
        green();
        cout<< "Directory created" << std::endl;
    }
        
        
}
