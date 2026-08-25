#include<stdio.h>
#include<stdlib.h>

int main(void)

{
  int *x= malloc(3 * sizeof(int));
  if(x == null)
  {
    return 1;
  }
  x[0] =72;
  x[1] =70;
  x[2] =76;
  free(x);
  return 0;
}

