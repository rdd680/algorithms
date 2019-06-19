void hyrbridSort(int *arr, int n)
{
  int low = 0;
  int high = n - 1;
  int max = 5;
  if ((high - low + 1) <= max)
  {
    insertion_sort(arr, n);
  }
  else
  {
    int mid = (high + low) / 2;
    mergesort(arr, mid);
    mergesort(arr, mid + 1);
    merge(arr, n, mid);
  }
}

