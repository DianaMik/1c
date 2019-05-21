
#include<stdio.h>
#include<math.h>

void linear(int b, int c) {
	printf("\nroot is %lf\n", -(c+0.0)/b);
	return;
}

void square(int a, int b, int c) {
	int D = b * b - 4 * a * c;
	if (D < 0) {
		printf("\nThere are no real roots\n");
		return;
	}
	else if (D == 0) {
		printf("\nRoot is %lf\n", -(b+0.0)/(2*a));
		return;
	}
	else {
		double r1 = -(b + sqrt(D)) / (2 * a),
			   r2 = -(b - sqrt(D)) / (2 * a);
		printf("\nRoots are %lf and %lf", r1, r2);
		return;
	}
	return;
}

int main(int argc, char** argv) {
	//ax^2+bx+c=0
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a == 0 && b == 0) {
		printf("\nIt is not equation\n");
		return 0;
	}

	if (a == 0) {
		linear(b, c);
	}
	else {
		square(a, b, c);
	}

	return 0;
}