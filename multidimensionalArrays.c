#include <stdio.h>

int main() {
	int grades[2][5];
	float average;
	int i;
	int j;

	grades[0][0] = 80;
	grades[0][1] = 82;
	grades[0][2] = 84;
	grades[0][3] = 86;
	grades[0][4] = 99;

	grades[1][0] = 81;
	grades[1][1] = 83;
	grades[1][2] = 85;
	grades[1][3] = 87;
	grades[1][4] = 98;

	for (i = 0; i < 2; i++) {
		average = 0;
		for (j = 0; j < 5; j++) {
			average += grades[i][j];
		}

		average /= 5.0;
		printf("The average for subject %d is: %.2f\n", i, average);
	}
	return 0;
}
