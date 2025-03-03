#include<iostream>
using namespace std;

class MaxHeap{

  int *arr;
  int size;
  int max_size;

  public:
  
  MaxHeap(int n) {
    arr = new int[n];
    size = 0;
    max_size = n;
  }

  void insert(int val) {
    if(size == max_size) {
      cout << "Heap Overflow \n";
      return;
    }

    arr[size] =val;
    int idx = size;
    cout << arr[idx] << " inserted into the heap\n";
    size++;

    while(idx > 0 && arr[idx] > arr[(idx - 1) / 2]){
      swap(arr[idx], arr[(idx - 1) / 2]);
      idx = (idx - 1) / 2;
    }

    
  }

  void print() {
    if(size == 0) cout << "Empty heap\n";
    else {
      for(int i = 0; i < size; i++) cout << arr[i] << " ";
      cout << endl;
    }
  }

  void Delete() {
    if(size == 0) cout << "Heap underflow \n";
    else {
      cout << arr[0] << " deleted form the heap\n";
      swap(arr[0], arr[size - 1]);
      size--;
      if(size == 0) return;

      Heapify(0);
    }
  }

  void Heapify(int idx) {
    int largest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if(left < size && arr[largest] < arr[left]) largest = left;
    if(right < size && arr[largest] < arr[right]) largest = right;

    if(largest != idx) {
      swap(arr[largest], arr[idx]);
      Heapify(largest);
    }
  }
};

int main() {
  MaxHeap H1(6);
  H1.insert(10);
  H1.insert(6);
  H1.insert(14);
  H1.insert(15);
  H1.insert(11);
  H1.insert(7);
  H1.insert(-1);
  H1.print();
  for(int i = 0; i < 7; i++)  H1.Delete();
  return 0;
}