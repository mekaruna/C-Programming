#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    float fact=1.0, res, n_res=0;

    //functionality
    //loop counter for 7 steps (1 to 8)
    for (i=1;i<8;i++)
    {
        //find factorial for 1 to 7
        fact = fact * i;

        //find the i/factof(i)
        res = i/fact;

        //add all the results
        n_res = n_res + res;
    }
    printf("%f",n_res);
}


