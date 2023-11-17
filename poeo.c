#include <stdio.h>

int gcd(int a, int b)
{
  int lowerBound;
  int upperBound;
  int i;
  int obeb;
 
  if(a<=b)
    {
      lowerBound=a;
      upperBound=b;
    }
  else 
  {
    lowerBound=b;
    upperBound=a;
  }

  for(i=1;i<=lowerBound;i++)
    {
      if(a%i==0 && b%i==0)
      {
        obeb=i;
      }
    }

  return obeb;
}

int main(void) {

  int i;
  int j;

  printf("the numbers between 1 and 100 that are primes of each other are listed below;");
    
  for(i=1;i<=100;i++)
    {
      for(j=i+1;j<=100;j++)
        {
          if(gcd(i,j)==1)
          {
            printf("\n%d,%d",i,j);
          }
        }
    }

 
  return 0;
}