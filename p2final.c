#include <stdio.h>
int input_side()
{
 int a;
  printf("Enter three sides of triangle: ");
  scanf("%d", &a);
  return a;
}
 int check_scalene(int a, int b, int c)
{
  int isscalene;
if(a!=b && b!=c && a!=c) 
{
isscalene=a;
}
else
return isscalene;
}
void output(int a, int b, int c,int isscalene)
{
  if(isscalene==a)
  {
  printf("The triangle with sides %d,%d,%d is scalene:\n",a,b,c);
  }
  else 
  {
  printf("The triangle with sides %d,%d,%d is not scalene:\n",a,b,c);
  }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene( a,  b,  c);
  output( a,  b,  c, isscalene);
    return 0;
}