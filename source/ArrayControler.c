#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int last[2] = { 0 }, chackflag = 0;
void randArray(int a[], int n)
{
	int i,j;
	srand((unsigned)time(NULL));
	j = rand()%100;
	srand((unsigned)time(NULL) + j);
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 4;
		if (i % 2 == 0&&a[i-1]==last[0]&&a[i]==last[1])
		{
			j = rand() % 100;
			srand((unsigned)time(NULL) + j);
			i = 0;
		}
		
	}
	last[0] = a[n - 1];
	last[1] = a[n];
	
}

void init(int data[4][4], int inintNum)
{
	int random[4];
	randArray(random, 4);
	if (random[0] == random[2] && random[1] == random[3])
	{
		init(data, 2);
	}
	else
	{
		data[random[0]][random[1]] = inintNum;
		data[random[2]][random[3]] = inintNum;
	}
}

void copyArray(int data[4][4], int src[4][4])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			data[i][j] = src[i][j];
		}
	}
}

void newNum(int data[4][4], int newber)
{
	int newxy[2], i, j, flag =1;
	do
	{
		flag = 1;
		randArray(newxy, 2);
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 4; j++)
			{
				if (data[i][j] == 0 && i == newxy[0] && j == newxy[1])
				{
					data[newxy[0]][newxy[1]] = newber;
					return;
				}
			}
		}

	} while (flag == 1);
	
}

int  chackdata(int olddata[4][4], int data[4][4])
{
	int i, j;
	int flag = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (olddata[i][j] != data[i][j])
			{
				return 1;
			}
		}
	}
	return 0;
}