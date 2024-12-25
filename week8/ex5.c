#include <stdio.h>
#include <math.h>

int checkPoint(double x, double y, double radius, double x0, double y0) {
	double distance = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
	if (distance > radius)
		return 1;
	else if (distance < radius)
		return -1;
	return 0;
}
int main() {
	double x0, y0, x, y, r;
	int cnt = 0, result;
	scanf("%lf %lf %lf", &x0, &y0, &r);
	double arr[1001][2];
	while (scanf("%lf %lf", &x, &y) == 2) {
		arr[cnt][0] = x;
		arr[cnt][1] = y;
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		result = checkPoint(x0, y0, r, arr[i][0], arr[i][1]);
		if (result == -1)
			printf("The point (%lf, %lf) is inside the circle\n", arr[i][0], arr[i][1]);
		else if (result == 0)
			printf("The point (%lf, %lf) is on the circle\n", arr[i][0], arr[i][1]);
		else
			printf("The point (%lf, %lf) is on the outside of the circle\n", arr[i][0], arr[i][1]);
	}
}