#include <stdio.h>

void myfun(int x);

int main(int argc, char** argv) {
  char* name = "PUT YOUR NAME HERE";
  printf("My name is: %s\n", name);
  myfun(2);
  myfun(2 / 4);
}

void myfun(int x) {
  printf("The function myfun was passed the number %d\n", x);
}