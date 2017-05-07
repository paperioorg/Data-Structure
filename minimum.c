
#include <stdio.h>



int main(){
    int i,swap,c,d,minimum,n; 
    scanf("%d",&n);
    int *array = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
       scanf("%d",&array[i]);
    }
    
    //to sort
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
    
    //to find minimum
    d=0; 
    minimum=array[1]- array[0];
   for(i = 1; i  <  n; i++){
       
         swap = (array[i+1]) - (array[i]);
          if (swap  <= minimum){
            minimum = swap;
              if(array[i+1]<0 && minimum<0){
                  
              }else
              minimum*=(-1);
              }
       
      } 
    
    printf("%d",minimum);
    return 0;
} 

