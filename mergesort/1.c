#include <stdio.h>

int array[] = {9, 3, 4, 5, 7, 0};

int main()
{
  int len = sizeof(arrary)/sizeof(int);
  int odd = ((n/2)*2) != n; // lets put this aside for now

  print_array(array, len);

  merges(array, len);

  print_array(array, len);

  return 0;
}

int print_array(int arr[], int len)
{
  int i = 0;
  for(i=0; i < len; i++) {
    printf(",%d", arr[i]);
  }
  return 0;
}

int merges(array, len)
{
  break_start(array, len); 
  print_array(combed_arr);

  return 0;
}

int break_start(array, len)
{
  start_binary(array, 2, len);
  return 0;
}

int start_binary(array, current, len)
{
  int i =0, temp =0;

  if(len%current !=0) // why?
    return 0;

  if(len <= current)
    return 0;

  for(i=0; i < (len/current); i +=current) {
    if(array[i] > array[i+current -1]) {
      temp = array[i];
      array[i] = array[i+current -1];
      array[i+current -1] = temp;
    }
  }

  start_binary(array, current*2, len);
  return 0;
}
