#include<stdio.h>
#include<math.h>

/*
	-Input
	start = Starting numbers
	end = Finishing numbers
	-Output
	The number from the first to the last number
	Average
	Standard Deviation = SD
*/
int main()
{
	float SD;
	int start, end;
	float average = 0;
	SD = 0;
	scanf_s("%d %d", &start, &end);
	average = (start + end) * 0.5;
	if (start < end)
	{
		for (int i = start; i <= end; i++)
		{
			printf("%d ", i);
			SD += ((i - average) * (i - average));
		}
	}
	else if (start > end)
	{
		for (int i = start; i >= end; i--)
		{
			printf("%d ", i);
			SD += ((i - average) * (i - average));

		}
	}
	else if (start == end)
	{
		printf("%.2f\n", average);
		printf("SD = Can't find the value");
		return 0;
	}
	SD = sqrt(SD / (abs(start - end)));
	printf("\nAverage = %.2f\n", average);
	printf("S.D. = %.2f", SD);
	return 0;
}
