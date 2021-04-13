#include<stdio.h>
#pragma warning(disable:4996)
#include<windows.h>
#include<stdlib.h>

/*int main()
{
	int i = rand();
	int m = 0;
	for (; m != i;)
	{
		scanf("%d", &m);
		if (m > i)
		{
			printf("猜大了\n");
		}
		else if (m < i)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
		}
	}
	return 0;
}
*/




/*int main()
{
	int n=10;
	int a[10];
	int i,m=0,c,d=0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d",&c );
	for (int u = 0; u <= n; u++)
	{
		if (c == a[(m + n) / 2])
		{
			printf("%d", (m + n) / 2);
			d = 1;
			break;
		}
		else if (c > a[(m + n) / 2])
		{
			m = (m + n) / 2;
		}
		else
		{
			n = (m + n) / 2;
		}
	}
	if (d == 0)
	{
		printf("找不到");
	}
	return 0;
}
*/










int main()
{
	int a, b, i;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b <= a; b++)
		{
			i = a*b;
			printf("%d*%d=%d    ", a, b, i);
		}
		printf("\n");
	}
	return 0;
}




/*int main()
{
	int a[10];
	int i;
	int m;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (int j = i; j < 10; j++)
		{
			if (a[i] < a[j])
			{
				m = a[i];
				a[i] = a[j];
				a[j] = a[i];
			}
		}
	}
		printf("%d\n", a[0]);
		return 0;
}







int main()
{
	int a = 0, i = 1;
	double sum = 0.0;
	for (a = 1; a <= 100; a++)
	{
		sum = (1.0 / a)*i + sum;
		i = -i;
	}
	printf("%lf\n", sum);
	return 0;
}





int main()
{
	int u = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (i % 10 == 9)
			u++;
		if (i / 10 == 9)
			u++;
	}
	printf("%d", u);
	return 0;
}




int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int s = 0;
		for (int u = i-1; u >= 2; u--)
		{
			if (i%u == 0)
			{
				s = 1;
				break;
				s = 0;
			}
		
		}
		if (s==0)
		printf("%d\n", i);
	}
	return 0;
}






int main()
{
	for (int i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			printf("%d  ", i);
	}
	printf("\n");
	return 0;
}












int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	for (int i = b; i >= 0; i--)
	{
		if (a%i == 0 && b%i == 0){
			printf("%d", i);
			break;
		}
			
	}
	system("pause");
	return 0;
}






int main()
{
	for (int i = 0; i < 101; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);

	}printf("\n");
	return 0;
}







/*int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	scanf("%d %d %d",&a, &b, &c);
	if (a < b)
	{
		i = a;
		a = b;
		b = i;
	}
	if (a < c)
	{
		i = a;
	    a = c;
		c = i;
	}
	if (b < c)
	{
		i = b;
		b = c;
		c = i;
	}
	printf("%d %d %d", a, b, c);
	system("pause");
	return 0;
}*/