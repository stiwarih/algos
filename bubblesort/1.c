#include <stdio.h>

int array[] = {1, 2, 4, 3, 9, 0};

int main()
{
  int len = sizeof(array)/(sizeof(int));
  print_array(array, len);
  bsort(array, len);
  print_array(array, len);
  return 0;
}

int bsort(int arr[], int len)
{
  int i=0,j=0, temp =0;
  for(j=0;j < len-1; j++) {
  for(i=0;i < len-1; i++) {
    if(arr[i] > arr[i+1]) {
      temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;
    }
  }
  }
  print_array(arr, len);
  return 0;
}

int print_array(int arr[], int len)
{
  int i =0;
  for(i =0; i < len; i++) {
    if(0==i) {
      printf("%d", arr[i]);
    } else{ 
      printf(", %d", arr[i]);
    }
  }
  printf("\n");
  return 0;
}
