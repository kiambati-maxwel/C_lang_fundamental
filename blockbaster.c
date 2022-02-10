#include <stdio.h>

/* function declaratiol */
int into_seconds(int hr, int min, int sec);

int main(int argc, char const *argv[])
{
      /* code */
      
      /* convert hours into minutes and seconds */
      printf( "time in seconds is : %i \n", into_seconds(4, 33, 15));

      return 0;
}

int into_seconds(int hr, int min, int sec){
      int seconds = hr*3600 + min * 60 + sec;
      return seconds;
}