#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
	int max = i;
	int l = ((2 * i) + 1);
	int r = ((2 * i) + 2);

	if(l < n && arr[l] > arr[max]) {
		max = l;
	}

	if(r < n && arr[r] > arr[max]) {
		max = r;
	}

	if(max != i) {
		swap(arr[i], arr[max]);
		heapify(arr, n ,max);
	}
}

void heapsort(int arr[], int n) {
	for(int i = ((n / 2) - 1); i >= 0; i--) {
		heapify(arr, n, i);
	}

	for(int i = n - 1; i >= 0; i--) {
		swap(arr[i], arr[0]);
		heapify(arr, i, 0);
	}

}

int main() {
	int arr[10];
	for(int i = 0; i < 10; i++) {
		cout<<"\nEnter element "<<i<<"\n";
		cin>>arr[i];
	}
	heapsort(arr, 10);
	cout<<"\nAfter sorting:\n";
	for(int i = 0; i < 10; i++) {
		cout<<"arr["<<i<<"] = "<<arr[i]<<"\n";
	}
	return 0;
}
