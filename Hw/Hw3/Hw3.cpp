#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <unistd.h>
#include <conio.h>

using namespace std;

int main()
{
    double pitch[]={
    0,523.3,587.3,659.3,698.5,784.0,880.0,932.3,987.8};
    int a;
    while(1)
    {
        a=getch();
        switch(a)
    {

        case '1':Beep(pitch[1],400); break;
        case '2':Beep(pitch[2],400); break;
        case '3':Beep(pitch[3],400); break;
        case '4':Beep(pitch[4],400); break;
        case '5':Beep(pitch[5],400); break;

    }

    }
return 0;
}
