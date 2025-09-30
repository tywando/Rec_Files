/* CS261- Recitation 1 - Q.2
 * Name: Tyler Ebner
 * Recitation time: Tuesday 2:00 PM
 * Complete the code below 
*/
 
#include <stdio.h>
#include <stdlib.h>

int foo(int a, int* b, int c[], int n){
    /* Set a to double its original value*/
    a = 2 * a;

    /* Set b to the maximum value in the array c[] using a for loop */
    for (int i = 0; i < n; i++) {
    	if (c[i] > *b) {
        	*b = c[i];
	}
    }

    /* Set c[0] to triple its original value */
    c[0] = 3 * c[0];

    /* Return  the sum of a and b */
    return a + *b;
}

int main(){
    int n = 5;  // the size of the array c
    int c[5] = {4,9,1,2,0};

    /*Declare two integers x and y and initialize them to 2 and 4 respectively*/
    int x = 2;
    int y = 4;
    
    /*Print the values of x, y and the first element of c in one line*/
    printf("x = %d  y = %d  c[0] = %d\n", x, y, c[0]);

    /*Call foo() appropriately, passing x,y,c,n as parameters*/
    /*Print the value returned by foo*/
    printf("foo = %d\n", foo(x, &y, c, n));

    /*Print the values of x, y and the first element of c  again*/ 
    printf("x = %d  y = %d  c[0] = %d\n", x, y, c[0]);

    /*  Did the values printed change? Why? */
    // Yes the values changed because we passed by reference which changed the 
    // value later
    return 0;
}
    
    
