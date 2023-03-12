#include<stdio.h>
int main() {

    int n,i,fact,j;
    for(i=1;i<=175;i++)

    {
        fact=0;
        for(j=1;j<=175;j++)
        {
            if(i%j==0)
            fact++;

        }
        if(fact==2)
        {
            printf("%d\n" , i);


        }

    }
    return 0;
}
