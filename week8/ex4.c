#include <stdio.h>
#include <math.h>

int point_in_circle(double x, double y, double x0, double y0, double r) {
	double dist;

	dist = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));

	if (dist > r)
		return 1;

	if (dist == r)
		return 0;
	
	return -1;
}

int main() {
	double x, y, x0, y0, r;
	scanf("%lf%lf%lf%lf%lf", &x, &y, &x0, &y0, &r);
	printf("%d\n", point_in_circle(x, y, x0, y0, r));
}