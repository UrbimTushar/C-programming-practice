#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string name[]={"david" ,"urbim" ,"trishna" ,"alok"};
    string number[]={"9957725183" ,"9876543320" ,"6200617156" ,"5643728835"};

        string search=get_string("name: ");
        for(int i=0; i < 4 ; i++)
{
    if(strcmp(name[i] ,search) ==0)
    {
        printf("found %s\n" ,number[i]);
        return 0;
    }
}


    printf("not found \n" );
        return 1;

}
