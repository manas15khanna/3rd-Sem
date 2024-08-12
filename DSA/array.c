#include <stdio.h>
int main()
{
  int arr2[10];
  int arr1[10]={1,2,3,4,5,6,7,8,9,10};
  printf("Enter Array:");
  for (int i=0; i<=10; i++) {
    scanf("%d", &arr2[i]);
  }
  printf("The array 1 is:");
  for (int i=0; i<10; i++) {
    printf("%d  ", arr1[i]); 
  }
  printf("\n");
  printf("The array 2 is:");
  for(int i=0; i<10; i++){
    printf("%d  ", arr2[i]);
  }
return 0;
}
