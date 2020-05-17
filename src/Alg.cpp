int cbinsearch(int *arr, int size, int value)
{
	int a = 0, s = size, el = 0, c = 0;
  
	while (el == 0)
	{
		c = (a + s)/2;
		if (arr[c] > value)
			s = c - 1;
		else 
    if (arr[c] < value)
			a = c + 1;
		else
    el++;
	}
  
	if (el == 1)
	{
		int i = c - 1;
    
		while (arr[i] == value)
		{
			if (arr[i] == value)
			{
				i--;
				el++;
			}
		}
    
		i = c + 1;
		while (arr[i] == value)
		{
			if (arr[i] == value)
			{
				i++;
				el++;
			}
		}
    
	}
	return el;
}
