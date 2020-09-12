#include<stdio.h>
int main() 
{
	int n, a = 0, b, c, d = 0;
	scanf_s("%d", &n);
	while (a < n)
	{
		for (b = 1;; b++)
		{
			for (c = 1; c <= b; c++)
			{
				if (b % c == 0)
				{
					d++;
				}
			}
			if (d == 2)
			{
				printf("%d ", b);
				d = 0;
				a++;
			}
			else
			{
				d = 0;
			}
			if (a >= n)
			{
				break;
			}
		}
	}
	return 0;
}