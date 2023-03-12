#include<stdio.h>

int areaOfrect(int length,int breadth)
{
  int area;
  area=length*breadth;

  return area;

}

int main()
{
    int l=30 , b=5;
    int area= areaOfrect(l , b);
    printf("%d\n" , area);

}