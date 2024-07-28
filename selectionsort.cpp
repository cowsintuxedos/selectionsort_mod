// based on https://www.geeksforgeeks.org/selection-sort-algorithm-2/
// base code by rathbhupendra. 7/27/24 andrewlai2015

void selection_sort(int arr[], int n)
{
  int i, j, min_i, max_i;

  for (i = 0; i < n - 1; i++) {
    min_i = i;
    max_i = n - 1 - i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_i])
        min_i=j;
      if (min_i != (n - 1 - j) && j != (n/2) && arr[n/2] < arr[min_i] && arr[n - 1 - j] > arr[max_i])
        max_i=(n - 1 - j);
    }
    swap(arr[i], arr[min_i]);
    swap(arr[n - 1 - i], arr[max_i]);
    printArray_cut(arr, n);
  }
}

// unfinished.
// i loop should cut off halfway
// j loop should use fewer conditionals
// gl.
