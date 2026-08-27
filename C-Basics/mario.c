#include<cs50.h>
#include<stdio.h>
int main(void)
{
    const int n=3;
    // For each row
   for(int j=0 ;j<n ; j++)
   {
    //for each column
   for (int k =0 ; k< n; k++)
   {
    // print one brick
      printf("#");
   }
    printf("\n");
   }
 }

