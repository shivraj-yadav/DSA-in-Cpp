#include<stdio.h>
struct student
{
  int roll;
  float marks;
};
int main()
{
    
    struct student s1;
    s1.roll=1010;
    s1.marks=99;
    printf("%d",s1.roll);
    printf("\n%f",s1.marks);
    return 0;
}