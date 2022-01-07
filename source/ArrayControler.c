#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void randArray(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		srand(time(0));
		a[i] = rand() % 4;
	}
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
		data[random[0]][random[2]] == inintNum;
		data[random[1]][random[3]] == inintNum;
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