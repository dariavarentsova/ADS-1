int cbinsearch(int* arr, int size, int value)
{
	int min = 0, max = size - 1, s = 0, i = 0;

	while (min <= max) 
	{
		int mid = (min + max) / 2;
		if (arr[mid] == value) 
			i = mid;
	    if (arr[mid] > value) 
			max = mid - 1;
		else
			min = mid + 1;
	}

	while (arr[i] == value)
	{
		s++;
		i--;
	}

	return s;
}
