#include <stdio.h>
int main()
{
  int arr[]={11, 22, 33, 44, 55};
  int *p=arr;
  int i;
  printf("%d\n", &arr);
  printf("%d\n", *p);
  for(i=0; i<5; i++)
    printf("%d\n", *(p+i));
  printf("%d\n", *(p)+i);
  for(i=0; i<5; i++)
    printf("%d\n", &arr[i]);
  printf("%d\n", p);
  printf("%d\n", --p);
  printf("%d\n", ++p);
  printf("%d\n", *p+i);
  printf("%d\n", (*p)-i);
  for(i=0; i<5; i++)
    printf("%d\n", p++);
}
