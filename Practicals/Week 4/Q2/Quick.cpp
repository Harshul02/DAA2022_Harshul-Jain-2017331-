#include <iostream>
using namespace std;

int x=0;
int c=0;

void swap(int *a, int *b) {
    x++;
  int t = *a;
  *a = *b;
  *b = t;
}

void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
        c++;
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      x=0,c=0;
      int n;
      cin>>n;
      int a[n];
      for(int i=0; i<n; i++)
      {
          cin>>a[i];
      }
      quickSort(a, 0, n - 1);
      for(int i=0; i<n; i++)
      {
          cout<<a[i]<<" ";
      }
      cout<<endl<<"Comparisons = "<<c<<endl;
      cout<<"Swaps = "<<x<<endl;
  }
    return 0;
}
