#include <stdio.h>

//This program should give the user an amount of weeks, days, hours, minutes and seconds
//based on a user given amount of seconds, as an example; 7343534 should be 12 Weeks,
// 0 days, 23 hours, 52 minutes and 14 seconds.

void timeOutput(int *secondsGiven, int *s, int *m, int *d, int *h, int *w);

int main(void)
{
    int s, m, h, d, w, secondsGiven;
    //Then the program asks the user for an input in seconds
    printf("Please input an amount of seconds:\n");
    scanf("%d", &secondsGiven);
    printf("%d", secondsGiven);
    timeOutput(&secondsGiven, &s, &m, &d, &h, &w);
    printf("The entered amount of seconds corresponds to: \n");
    printf("%d Weeks, %d days, %d hours, %d minutes and %d seconds.", w, d, h, m, s);
    return 0;
}

void timeOutput(int *secondsGiven, int *s, int *m, int *d, int *h, int *w){
    // Now the total amount of time inputed is calculated for each unit of time measurement
    *s = *secondsGiven % 60;
    *m = *secondsGiven / 60;
    *h = *m / 60;
    *d = *h / 24;
    *w = *d / 7;
    //If used "Raw" the above values would however show the total amount of time
    //approximated for each unit of time measurement, so the following line ensures
    //that the program does not display an amount of time that would be much bigger
    //Than intended, and shows the correct amount of time.
    *m = *m % 60;
    *h = *h % 24;
    *d = *d % 7;
    //printf("The entered amount of seconds corresponds to: \n");
    //printf("%d Weeks, %d days, %d hours, %d minutes and %d seconds.", w, d, h, m, s);
}