#include <stdio.h>
#include <stdlib.h> 

#define ROW 9
#define COL 9

void main()
{
	int row, col;
	printf("\n");
	for (col = 1;col <= COL; ++col)
	{
		for (row = 1;row <= ROW; row++)
		{
			printf("%5d", col * row);
			printf("\n");
		}
	}
	system("pause");
}