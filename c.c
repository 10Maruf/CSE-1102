#include <stdio.h>
int main()
{

	int t;

	long long w;
	long long odd;
	long long even;

	scanf("%d", &t);

	for (int i = 1; i <= t; i++)
	{
		scanf("%lld", &w);
		if (w % 2 != 0)
		{
			printf("Case %d: Impossible\n", i);
			continue;
		}

		odd = w / 2;
		even = 2;

		while (odd % 2 == 0)
		{
			odd = odd / 2;
			even = even * 2;
		}

		printf("Case %d: %lld %lld\n", i, odd, even);
	}
}