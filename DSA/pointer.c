#include <stdio.h>
int main()
{
  int arr[]={11, 22, 33, 44, 55};
  int *p=arr;
  int i;
  printf("%d\n", &arr);
  printf("")
  printf("%d\n", *p);
  for(i=0; i<5; i++)
    printf("%d\n", *(p+i));
  printf("\n");
  printf("%d\n", *(p)+i);
  //value of *p which is 11 + i which is 5, total 16
  printf("\n");
  for(i=0; i<5; i++)
    printf("%d\n", &arr[i]);
  printf("\n");
  printf("%d\n", p); //current value of p which we made 16
  printf("%d\n", --p);
  printf("%d\n", ++p);
  printf("%d\n", *p+i);
  printf("%d\n", (*p)-i);
  printf("\n");
  for(i=0; i<5; i++)
    printf("%d\n", p++);
}
