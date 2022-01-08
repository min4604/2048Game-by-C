#include<stdio.h>
#include<stdlib.h>

void squeeze(int data[4])
{
	int i = 0;
	int j = 0;
	int data[4];
	for (i = 0; i < 4; i++)
	{
		if (data[i] != 0)
		{
			data[j] = data[i];
			j++;
		}
	}
	for (; j < 4; j++)
	{
		data[j] = 0;
	}
}

void annex_left(int data[4][4])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 4; i++)
	{
		squeeze(data[i]);
		for ( j = 0; j < 3; j++)
		{
			if (data[i][j] == data[i][j + 1])
			{
				data[i][j] = 2 * data[i][j];
				data[i][j + 1] = 0;
				squeeze(data[i]);
			}
		}
	}
}
