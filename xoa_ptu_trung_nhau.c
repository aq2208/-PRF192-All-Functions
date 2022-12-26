int xoaPtuTrungNhau(int a[], int n){
for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				for (int k = i; k < n; k++) 
				{
					a[k] = a[k + 1];
					n--;
					i--;
				}
			}
		}
	}
}