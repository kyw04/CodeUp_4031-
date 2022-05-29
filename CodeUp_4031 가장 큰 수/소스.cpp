#include <iostream>
#include <algorithm>
#define N 7
using namespace std;

int main()
{
	int arr[N];
	int sum = 0;
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N);

	for (int i = N - 1; i >= 0; i--)
	{
		if (arr[i] % 2)
		{
			sum += arr[i];
			break;
		}
	}
	for (int i = N - 1; i >= 0; i--)
	{
		if (!(arr[i] % 2))
		{
			sum += arr[i];
			break;
		}
	}
	cout << sum;
	return 0;
}