#include <iostream>
using namespace std;

int binary_search_rec(int arr[], int start, int end, int x)
{
	if (x < arr[start] || x > arr[end]) return -1;
	int mid = (start + end) / 2;
	if (x == arr[mid]) return mid;
	else if (x < arr[mid]) end = mid;
	else if (x > arr[mid]) start = mid + 1;
	return binary_search_rec(arr, start, end, x);
}

int main(int argc, char** argv)
{
	int arr[] = { 10, 67, 89, 98, 99, 100, 198};
	int length = sizeof(arr) / sizeof(arr[0]);

	cout << binary_search_rec(arr, 0, length, 67) << endl;
	cout << binary_search_rec(arr, 0, length, 10) << endl;
	cout << binary_search_rec(arr, 0, length, 100) << endl;
	cout << binary_search_rec(arr, 0, length, 98) << endl;
	cout << binary_search_rec(arr, 0, length, 9) << endl;
	cout << binary_search_rec(arr, 0, length, 88) << endl;
	cout << binary_search_rec(arr, 0, length, 178) << endl;
	return 0;
}