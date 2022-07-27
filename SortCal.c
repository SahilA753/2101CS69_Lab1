#include <stdio.h>
#include <math.h>



void insertionSort(int arr[], int n)
{ int c,t,flag,d;
    for (c = 1 ; c <= n - 1; c++) {
    t = arr[c];

    for (d = c - 1 ; d >= 0; d--) {
      if (arr[d] > t) {
        arr[d+1] = arr[d];
        flag = 1;
      }
      else
        break;
    }
    if (flag)
      arr[d+1] = t;
  }
}
void selectionsort(int arr[],int n){
    int c,position,d,t;

for (c = 0; c < (n - 1); c++) // finding minimum element (n-1) times
  {
    position = c;

    for (d = c + 1; d < n; d++)
    {
      if (arr[position] > arr[d])
        position = d;
    }
    if (position != c)
    {
      t = arr[c];
      arr[c] = arr[position];
      arr[position] = t;
    }
  }


}
void bubblesort(int arr[],int n){

    int c,d,swap;
    for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] > arr[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap  = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }
}
void merge(int arr[], int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;
//2 indexes of 2 arrays
  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger amon elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}


  


void PA(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n,m, arr[1000];

    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter the array: ");
    for(int i= 0; i<n; ++i){
        scanf("%d", &arr[i]);
    }
 
    printf("1- Insertion Sort \n");
    printf("2- Selection Sort \n");
    printf("3- Bubble Sort \n");
    printf("4- Merge Sort \n");
    printf("5- Quick Sort \n");
    printf("Enter Sorting Method: ");
    scanf("%d", &m);

    switch(m) {
        case 1:
        insertionSort(arr, n);
        PA(arr,n);
        break;
        case 2:
        selectionsort(arr, n);
        PA(arr,n);
        break;
         case 3:
        bubblesort(arr, n);
        PA(arr,n);
        break;
        case 4:
        mergeSort(arr,0,n-1);
        PA(arr,n);
        break;



        default:
        printf("Please input a valid Sorting Method");
        break;
    }

return 0;
}