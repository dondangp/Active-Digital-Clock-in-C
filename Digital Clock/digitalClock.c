#include <stdio.h>
#include <string.h>
#include <windows.h>
int main(){
    int hours, minutes, seconds;
    int delay = 1000; //delay of 1000 milliseconds
    printf("Set time: \n");
    scanf("%d%d%d", &hours,&minutes,&seconds);
    if(minutes>60 || hours>60 || seconds > 60){
        printf("Timer cannot go above 60");
        exit(0);
    }
    while(1){   //infinite loop for seconds
        seconds++;
        if(seconds>59){
            minutes++; //minutes adds up
            seconds=0; //seconds return back to 0
        }
        if(minutes>59){
            hours++; //hours increment to the next number after 59 minutes
            minutes=0; //minutes reset to 0
        }       
       
       if(hours>12){
            hours = 1; //hours return back to 1 after exceeding 12
       }
       printf("Digital clock: \n");
       printf("\n%02d:%02d:%02d", hours, minutes, seconds);
       Sleep(delay); //makes clock like a real clock, so slowing the while loop
       system("cls"); //clears system screen
    }
    return 0;
}