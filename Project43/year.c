#include <stdio.h>

int main() {
	int date[12][31] = { '0' };

	for (int i = 0; i < 12; i++) {
		date[i][0] = i + 1;
		printf("%d¿ù\n", date[i][0]);
		for (int j = 0; j < 31; j++) {
			if (i == 3 || i == 5 || i == 8 || i == 10) {
				if (j == 30) {
					break;
				}
			}
			else if (i == 1) {
				if (j == 28) {
					break;
				}
			}
			date[i][j] = j + 1;
			printf("%d ", date[i][j]);
		}
		printf("\n");
	}
	printf("%d", date[0][0]);
	return 0;
}
