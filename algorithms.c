/******************************************************************************
 * For each algorithm:
 * (1) Determine/Guess the complexity of the algorithms using BigO or Theta notation. 
 * (2) Test each algorithm individually using appropriate values n.
 * (3) Collect running times for at least 7 different values of n with nonzero times.
 * (3) Plot the data and determine the best fit a curve 
 * (4) Compare the results in part (1) and (3)
 ********************************************************************************/
 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

long algo1(int n) {
   long sum = 1;
   int index = 1;
   
   while (index <= n) {
       for (int j=1; j <= index; j++ ) {
			sum +=1 ; 
       }
	   sum = sum + index;
	   index++;
   }
   
   for (int k=1; k <= n; k++ ) {
		sum -=2 ; 
   }   
   return sum;
}
long algo2(int n) {
   long sum = 1;
   for (int i=1; i <=n ; i++) {
		for (int j=1; j <= i*i; j++ ) {
			sum +=1 ; 
		}
   }
   return sum;
}

long algo3(int n) {
    if (n <= 0) {
        return 1;
    }
    if (n%2 == 0) {
        return algo3(n-1)+algo3(n-2)+algo3(n-1);
    } else {
        return algo3(n-1)-algo3(n-2)+ algo3(n-1);
    }

}


int main() {
   /* Change the min, max and step to collect running times */
   /* Collect at least 7 meaningful nonzero times           */
   
   int n_max = 10;    // max value of n
   int n_min = 10;    // starting value of n
   int step  = 1;    // increment size
   
   long val;		  //  value returned from function
   clock_t start_time;    // starting time
   clock_t stop_time;     // stoppping time

   for (int n=n_min; n <= n_max; n+=step)  {
      start_time = clock();   // start the clock
      val = algo1(n);         // change algorithm name to test all
	  stop_time = clock();   // finishing time
	  
	  /* calculate runtime in milliseconds */
      double runtime = (double)(stop_time - start_time)/(CLOCKS_PER_SEC/1000); 
      printf("n= %d value= %d \t runtime %f \n", n, val, runtime); 
   }
   
   return 0;
}
