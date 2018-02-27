#include <stdio.h>

int array [] = {1,3,9,2,0,4,5};

int main()
{
  int len = sizeof(array)/sizeof(int);
  print_array(array, len);
  qsort(array, len);
  print_array(array, len);
  return 0;
}

int qsort(int arr[], int len)
{
  int i=0, temp =0;
  int odd = ((len/2)*2) !=len; //lets come back to it later

  if ( len <= 0) 
    return 0;

  int *right_array = &arr[len/2];

  int pivot = arr[len/2]; // middle value

  for (i=0; i < (len)/2; i++) {
    if((arr[i] > pivot) && (arr[len -1 - i] < pivot)) {
      temp = arr[i];
      arr[i] = arr[len-1 -i];
      arr[len-1 -i] = temp;
    }
  }

  print_array(arr, len);

  qsort(arr, len/2);
  qsort(right_array, len/2);

  return 0;
}

int print_array(int arr[], int len)
{
  int i = 0;
  for(i=0; i < len; i++) {
    if(0==i) {
      printf("%d", arr[i]);
    } else {
      printf(", %d", arr[i]);
    }
  }
  printf("\n");
  return 0;
}
