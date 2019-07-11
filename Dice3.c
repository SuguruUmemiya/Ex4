#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
char str[20];  
int i,j,k;

printf("What is your name?\n");
  scanf("%s",str);
  printf("Hello,%s\n",str);

srand((unsigned)time(NULL));

 printf("Rolling the dice…\n");

i = rand()%6+1;
j = rand()%6+1;
 k = i+j;
 printf("Dice 1:%d\n",i);
 printf("Dice 2:%d\n",j);
 printf("Total value :%d\n",k);

 if(k >= 7){
   printf("%s won\n",str);
 }
 else printf("%s lost\n",str);
 
  return 0;
}
