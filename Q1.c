/* CS261- Recitation 1 - Q. 1*
 * Name : Tyler Ebner
 * Recitation time: Tuesday 2:00 PM
 * Solution description: check the properties, like value and address, of pointer
 */
 
#include <stdio.h>
#include <stdlib.h>

void myFunction(int* iptr){
     /*Print the value pointed to by iptr*/
     printf("x = %d\n", *iptr);
     /*Print the address pointed to by iptr*/
     printf("iptr = %p\n", iptr);
     /*Print the address of iptr itself*/
     printf("iptr address = %p\n", &iptr);
}

int main(){
    
    /*declare an integer x and initialize it with 0*/
    int x = 0;
    /*print the address of x*/
    printf("x address = %p\n", &x);
    /*Call myFunction() with the address of x*/
    myFunction(&x);
    /*print the value of x*/
    printf("x = %d\n", x);
    return 0;
}
