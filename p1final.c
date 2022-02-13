#include<stdio.h>
void input(float *base,float *height)
{
  printf("Enter the base of triangle:");
  scanf("%f",base);
  printf("Enter the height of triangle:");
  scanf("%f",height);
}
void findarea(float base,float height,float *area)
{
 *area=0.5*base*height;
}
void output(float base,float height,float area)
{
  printf("The area of triangle is %f",area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  findarea(base,height,&area);
  output(base,height,area);
  return 0;
}