#include <iostream>

using namespace std;

int n;
int arr[100];

void merge(int s, int m, int e)
{
	int temp[n];
	int i = s, j = m + 1, k = 0;
	
	while(i <= m && j <= e) {
		if(arr[i] < arr[j]) temp[k++] = arr[i++];
		else temp[k++] = arr[j++];
	}
	
	while(i <= m) temp[k++] = arr[i++];
	while(j <= e) temp[k++] = arr[j++];
	
	for(int i = s; i <= e; i++) {
		arr[i] = temp[i - s];
	}
}
void mergeSort(int s, int e)
{
	int m;
	if(s < e) {
		m = (s + e) / 2;
		mergeSort(s, m);
		mergeSort(m + 1, e);
		merge(s, m, e);
	}
}
int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	mergeSort(0, n - 1);
	
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}
