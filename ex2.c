#include<stdio.h>
#include<stdlib.h> 
#include<time.h>   // for using time 
#include<unistd.h>   // for delay function sleep()
int main()
{
    int num ;    // decare a variable  that is use in loop 
      srand(time(NULL)); // seed the random number genrerator  with  current time.  

      while(1)   // Infinite loop
      {
          num = rand()%100 + 1; // use rand() function to get the random number  from  1 to 100 
        printf (" %d\n ", num);  // print the generated random number 
     sleep(1);  // time delay 1 sec 
        
    }
    return 0;
}
