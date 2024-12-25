#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int n;
	printf("Game started!\n");
	srand(time(0)); 

	while (1) {
		if (scanf("%d", &n) != 1 || n == -1) {
			printf("Game exited!\n");
			break;
		}

		if (n < 3) {
			printf("Please enter a value of n >= 3\n");
			continue;
		}

		int x = rand() % n;
		int y = rand() % n;
		int inputx, inputy, chances = 2 * n;
		while (chances > 0) {
			scanf("%d %d", &inputx, &inputy);
			
			if (inputx == -1 && inputy == -1) {
				printf("Restarting game\n");
				break;
			}

			if (inputx == x && inputy == y) {
				printf("You win in %d attempts!\n", 2 * n - chances + 1);
				return 0;
			}

			printf("%d attempts left\n", --chances);
			if (inputx < x && inputy < y)
				printf("Try SouthEast\n");
			else if (inputx < x && inputy > y)
				printf("Try SouthWest\n");
			else if (inputx == x && inputy < y)
				printf("Try East\n");
			else if (inputx == x && inputy > y)
				printf("Try West\n");
			else if (inputx < x && inputy == y)
				printf("Try South\n");
			else if (inputx > x && inputy == y)
				printf("Try North\n");
			else if (inputx > x && inputy < y)
				printf("Try NorthEast\n");
			else if (inputx > x && inputy > y)
				printf("Try NorthWest\n");

			if (chances == 0) {
				printf("Game Over! The correct coordinates were (%d, %d)\n", x, y);
				break;
			}
		}
	}

	return 0;
}