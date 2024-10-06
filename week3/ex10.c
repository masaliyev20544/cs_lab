#include <stdio.h>
#include <math.h>

int main() {
	double x, y, x0, y0, r, dist;
	scanf("%lf%lf%lf", &x0, &y0, &r);

	while (scanf("%lf %lf", &x, &y) != -1) {
		dist = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));

		if (dist > r)
			printf("Outside\n");
		else if (dist == r)
			printf("On\n");
		else
			printf("Inside\n");
	}
}