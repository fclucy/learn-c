#include <stdio.h>

int main() {
	int array[] = {1, 3, 5, 3, 7, 2, 5, 9, 11, 1, 3};
	int i = 0;

	while (i < 10) {
		if (array[i] < 5) {
			i++;
			continue;
		}
		if (array[i] > 10) {
			break;
		}

		printf("%d\n", array[i]);
		i++;
	}
	return 0;
}
