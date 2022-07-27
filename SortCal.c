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

        default:
        printf("Please input a valid Sorting Method");
        break;
    }

return 0;
}