#include <iostream>

int main()
{
	int n;
	std::cout << "Please enter, array size\n";
	std::cin >> n;
	while (n < 0)
	{
		std::cout << "EROR!\n";
		std::cout << "Please enter, array size\n";
		std::cin >> n;
	}
	int* arr = new int[n];
	std::cout << "Please enter,numbers\n";
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int NumberMaxEll = abs(arr[0]);
	for (int i = 1; i < n; ++i) {
		if (NumberMaxEll < abs(arr[i])) {
			NumberMaxEll = abs(arr[i]);

		}

	}

	for (int i = 0; i < n; ++i) {
		if (abs(arr[i]) == NumberMaxEll) {
			std::cout << "Max element in array has index = " << i << '\n';
			break;
		}
	}
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		if (arr[i] < 0) {
			sum += arr[i];
		}
		else break;
	}
	std::cout << "Sum of negative numbers = " << sum << "\n";
	int* new_arr = new int[n + 1] {};
	int lst_num = 0;

	for (int i = n - 1; i >= 0; i--)
	{
		if (arr[i] < 0) {
			lst_num = i;
			break;
		}
	}

	int p;
	std::cout << "Please, enter P\n";
	std::cin >> p;
	for (int i = 0; i <= lst_num; i++)
	{
		new_arr[i] = arr[i];
	}
	new_arr[lst_num + 1] = p;
	for (int i = lst_num + 1; i <= n; i++)
	{
		new_arr[i + 1] = arr[i];
	}


	for (int i = 0; i <= n ; i++) 
{
		std::cout << new_arr[i] << '\t';
	}
	return 0;
}
