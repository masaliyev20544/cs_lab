int main() {
	int a, b, k, sum = 0;
	scanf("%d%d%d", &a, &b, &k);

	if (a > b) {
		int c = a;
		a = b;
		b = c;
	}

	while (a <= b) {
		if (a % k == 0)
			sum += a;
		a++;
	}
	
	printf("%d\n", sum);
}