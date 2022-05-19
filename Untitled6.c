//3.multiplication table for number 1 to 10
#include<stdio.h>
int main()
{
  int n,i,j;
  printf("Multiplication table for number 1 to 10");
//this is a for loop
  for(i=1;i<=10;i++){
    for(j=1;j<=10;j++){
        printf("%d*%d=%d\n",i,j,i*j);
    }

  }
  return 0;
}
