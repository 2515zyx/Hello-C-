#include<stdio.h>
#include<string.h>

#define MAX_X 5
#define MAX_Y 5
int sent(int ,int);
int map[12][12];
int t[100];
int s = 0;
int main()
{
	int i, j;
	for (i = 1; i <= MAX_X; i++)
	{
		for (j = 1; j <= MAX_Y;j++)
			scanf("%d", &map[i][j]);
		
	}

	for (i = 1; i <= MAX_X; i++)
	{
		for (j = 1; j <= MAX_Y; j++)
		{
			if (map[i][1] == 0)     sent(i, 1);
			if (map[i][MAX_Y] == 0) sent(i, MAX_Y);
			if (map[1][i] == 0)     sent(1, i);
			if (map[MAX_Y][i] == 0)  sent(MAX_Y, i);
		}
	}

	for (i = 0; i <= MAX_X; i++)
		for (j = 0; j <= MAX_Y; j++)
			if (map[i][j] == 0) s++;
	printf("%d\n", s);
}

int sent(int x, int y)
{

}