#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main (void)
{
   string strings[]={"bettleship" , "teeth" , "boot" ,"hattop"};

    string s = get_string("string:  ");

    for(int i=0;i<4 ;i++)
{
   if(strcmp(strings [i] ,s )   == 0)
{
    printf("found\n");
    return 0;

}
}
printf("not found\n");

}


