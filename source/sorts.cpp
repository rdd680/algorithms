#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "sorts.hpp"

/* Helper Functions */

void copy_arr(int *arr, int *temp, int n)
{
  for (int i = 0; i < n; i++)
  {
    temp[i] = arr[i];
  }
}

void swap(int *y, int *x)
{
  int temp;
  temp = *y;
  *y = *x;
  *x = temp;
}

/** Bubble Sort
 *  O(n^2), Omega(n)
 */
void bubble_sort(int *arr, int n)
{
  for (int i = 0; i < (n - 1); i++)
  {
    if (arr[i] > arr[i + 1])
    {
      arr[i] = arr[i] xor arr[i + 1];
      arr[i + 1] = arr[i] xor arr[i + 1];
      arr[i] = arr[i] xor arr[i + 1];
    }
  }
  if (n != 1)
  {
    bubble_sort(arr, n - 1);
  }
}

void selection_sort(int *arr, int n)
{
  for (int i = 0; i < (n - 1); i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min])
        min = j;
    }
    swap(&arr[min], &arr[i]);
  }
}

void insertion_sort(int *arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--)
    {
      swap(&arr[j], &arr[j - 1]);
    }
  }
}

void merge(int *arr, int n, int mid)
{
  int *temp = new int[n];
  copy_arr(arr, temp, n);

  int j = 0;
  int k = mid;
  for (int i = 0; i < n; i++)
  {
    if (j >= mid)
    {
      arr[i] = temp[k];
      k++;
    }
    else if (k >= n)
    {
      arr[i] = temp[j];
      j++;
    }
    else if (temp[j] < temp[k])
    {
      arr[i] = temp[j];
      j++;
    }
    else
    {
      arr[i] = temp[k];
      k++;
    }
  }
  delete[] temp;
}

void mergesort(int *arr, int n)
{
  if (n > 1)
  {
    mergesort(arr, n / 2);
    mergesort(arr + (n / 2), n - n / 2);
    merge(arr, n, n / 2);
  }
}
void quicksort(int *arr, int n)
{
  int lo, hi;
  lo = 0;
  hi = n - 1;
  quicksort(arr, lo, hi);
}
void quicksort(int *arr, int lo, int hi)
{
  if (lo < hi)
  {
    int p = partition(arr, lo, hi);
    quicksort(arr, lo, p - 1);
    quicksort(arr, p + 1, hi);
  }
}
// Best:: O(nlogn), Worst:: O(n^2)
int partition(int *arr, int lo, int hi)
{
  int i = lo + 1, j = hi;
  while (true)
  {
    while (arr[i] <= arr[lo] && i < hi)
    {
      i++;
    }
    while (arr[j] >= arr[lo] && j > lo)
    {
      j--;
    }
    if (j <= i)
    {
      break;
    }
    swap(&arr[i], &arr[j]);
  }

  swap(&arr[lo], &arr[j]);
  return j;
}
//Best:: O(n^2), Worst:: O(n^2)
void Cycle_sort(int arr[], int n)
{
  for (int start = 0; start <= n - 1; start++)
  {
    int num = arr[start];
    int spot = start;
    for (int i = start + 1; i < n; i++)
      if (arr[i] < num)
        spot++;
    if (spot == start)
      continue;
    while (num == arr[spot])
      spot += 1;
    if (spot != start)
      swap(&num, &arr[spot]);
    while (spot != start)
    {
      spot = start;
      for (int i = start + 1; i < n; i++)
        if (arr[i] < num)
          spot += 1;
      while (num == arr[spot])
        spot += 1;
      if (num != arr[spot])
        swap(&num, &arr[spot]);
    }
  }
}
/*  
  for loop through array picking first point
    var for num is that array point
    var for its spot as in loop index
    for loop from point after spot through rest of array
      if the array @ index of loop is < num
        spot ++
      if its ==
        keep going
      while its ==
        spot ++ to keep it going
      if != 
        swap em
      while !=
        make swap point new start point
        for loop through array after new swap point to n
          if the array @ index of loop is < num
            spot ++
          if its ==
            keep going
          while its ==
            spot ++ to keep it going
          if != 
            swap em
  */
