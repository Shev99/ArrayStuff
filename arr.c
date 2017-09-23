#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  
  //=====================================

  srand(time(NULL));
  int array[10] = {0};

  int i = 0;
  for (;i < 9;i++){
    array[i] = rand();
  }

  printf("The first array is : \n");
  
  int c = 0;
  for (;c < 10; c++){
    printf("array[%d]:%d\n", c, array[c]);
  }


  //=====================================

  int array2[10];

  int *p;
  int ii = 9;
  for (;ii >=0;ii--){
    p = &array[9-ii];
    array2[ii] = *p;
  } 

  printf("The second array is : \n");

  int cc = 0;
  for (;cc < 10; cc++){
    printf("array2[%d]:%d\n", cc, array2[cc]);
  }


  


  
  
}
