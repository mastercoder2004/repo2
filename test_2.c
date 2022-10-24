#include <math.h>
#include <stdio.h>
long fact(int num)
{
  if (num==0)
  {
    return 1;
  }
  else
  {
    return num*fact(num-1);
  }
}
int main()
{
  int num, factorial;
  printf("enter integer\n");
  scanf("%d",&num);
  factorial=fact(num);
  printf("the factorial of %d is %d", num,factorial);
  return 0;
}