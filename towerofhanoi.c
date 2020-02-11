#include<stdio.h>
void towerofhanoi(int n,char src,char dest,char aux)
{
 if(n==1)
 {
  printf("\n Move disk 1 from rod %c to rod %c",src,dest);
  return;
 }
 towerofhanoi(n-1,src,aux,dest);
 printf("\n Move disk %d from rod %c to rod %c",n,src,dest);
 towerofhanoi(n-1,aux,dest,src);
} 

int main()
{
 int num;
 printf("Enter n \n");
 scanf("%d",&num);
 towerofhanoi(num,'A','C','B');
 return 0;
 }
