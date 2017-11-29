#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
     int i = 0, j = 0, k = l;
     int A[m-l+1], B[r-m];

     for(int x = 0; x < m-l+1; x++) {
         A[x] = arr[l+x];
     }

     for(int x = 0; x < r-m; x++) {
         B[x] = arr[m+1+x];
     }

     while(i < m-l+1 && j < r-m) {
         if(A[i] <= B[j]) {
             arr[k++] = A[i++];
         }
         else {
             arr[k++] = B[j++];
         }
     }

     while(i < m-l+1) {
         arr[k++] = A[i++];
     }

     while(j < r-m) {
         arr[k++] = B[j++];
     }
}

void mergeSort(int arr[], int l, int r) {
     if(l < r) {
       int m = ((l+r)/2);
       mergeSort(arr, l, m);
       mergeSort(arr, m+1, r);
       merge(arr, l, m, r);
     }
}

int main() {
	int arr[10];
	for(int i = 0; i < 10; i++) {
		cout<<"\nEnter element "<<i<<"\n";
		cin>>arr[i];
	}
	mergeSort(arr, 0, 9);
	cout<<"\nAfter sorting:\n";
	for(int i = 0; i < 10; i++) {
		cout<<"arr["<<i<<"] = "<<arr[i]<<"\n";
	}
	return 0;
}
