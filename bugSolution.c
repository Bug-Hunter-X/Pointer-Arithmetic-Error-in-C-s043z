#include <stdio.h>

int main() {
  int x = 5;
  int *ptr = &x;

  //Check if the pointer is valid before dereferencing
  if (ptr != NULL) {
    *ptr = 10; //Modify value pointed to by ptr
    printf("%d\n", x); //Prints the modified value of x
  } else {
    fprintf(stderr, "Error: Pointer is NULL.\n");
    return 1; //Indicate error
  }
  return 0;
}
