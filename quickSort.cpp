#include<iostream>
using namespace std;

int partition(int arr[], int l, int r) {
  int i = l-1;
  int pivot = arr[r];
  for(int j = l; j <= r-1; j++) {
    if(arr[j] <= pivot) {
      i= i + 1;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i+1], arr[r]);
  return (i+1);
}

void quickSort(int arr[], int l, int r) {
  if(l < r) {
    int pi = partition(arr, l ,r);
    quickSort(arr, l, pi-1);
    quickSort(arr, pi+1, r);
  }
}

int main() {
	int arr[10];
	for(int i = 0; i < 10; i++) {
		cout<<"\nEnter element "<<i<<"\n";
		cin>>arr[i];
	}
	quickSort(arr, 0, 9);
	cout<<"\nAfter sorting:\n";
	for(int i = 0; i < 10; i++) {
		cout<<"arr["<<i<<"] = "<<arr[i]<<"\n";
	}
	return 0;
}
