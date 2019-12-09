#include "stdio.h"


int main() 
{
  int i=1, j=1;
  int k=0, total=2;

  while(1) 
  {
	  k = i + j;	  
  	  if (k <= 1000000 && k % 2 == 0) 
  	  {
      	total+= k;
      }
      else (k> 10000000)
 	  	break;
   
  i = j;
  j = k;
  }

  printf("%d", total);

  return 0;
}
