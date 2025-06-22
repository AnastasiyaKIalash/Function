void ShiftLeft(int arr[], const int n, const int znachenie)
{

	for (int i = 0; i < znachenie; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;

	}

}

void ShiftRight(int arr[], const int n, const int znachenie)
{
	ShiftLeft(arr, n, n - znachenie);
}