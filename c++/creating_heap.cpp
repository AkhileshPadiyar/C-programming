#include<iostream>
using namespace std;


void heapify(int arr[], int idx, int size) {
 
  // Recursive
 
  // if(idx >= size) return;

  // int largest = idx;
  // int left = 2 * idx + 1;
  // int right = 2 * idx + 2;

  // if(left < size && arr[left] > arr[largest]) largest = left;
  // if(right < size && arr[right] > arr[largest]) largest = right;

  // if(largest != idx) {
  //   swap(arr[largest], arr[idx]);
  //   heapify(arr, largest, size);
  // }

  // Iterative

  while(true) {

    int largest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if(left < size && arr[left] > arr[largest]) largest = left;
    if(right < size && arr[right] > arr[largest]) largest = right;

    if(largest != idx) {
      swap(arr[largest], arr[idx]);
     idx = largest;
    }
    else break;
  }

}

void createHeap(int arr[], int n) {

  // step up T.C = O(NlogN)

  // for(int i = 1; i < n; i++) {
  //   int idx = i;
  //   while(idx > 0 && arr[idx] > arr[(idx - 1) / 2]) {
  //     swap(arr[(idx - 1) / 2], arr[idx]);
  //     idx = (idx - 1) / 2;
  //   }
  // }

  // step down  T.C = O(n)

  for(int i = n/2 - 1; i >= 0; i--) {
    heapify(arr, i, n);
  }

}

void printHeap(int arr[], int n) {
  if(n == 0) cout << "\nHeap Underflow";
  else {
    for(int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
  }
  cout << "\n";
}

void heapSort(int arr[], int n) {
  for(int i = n - 1; i > 0; i--) {
    swap(arr[0], arr[i]);
    heapify(arr, 0, i);
  }
}

int main() {

  int arr[] = {14,15,12,22,17,20,18,24,23,36,19};
  int n = sizeof(arr) / sizeof(arr[0]);
  createHeap(arr, n);
  printHeap(arr,n);
  heapSort(arr, n);
  printHeap(arr, n);
  return 0;
}