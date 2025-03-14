#include <stdio.h>
#include <math.h>
#define EPS 1e-10

double f(double x_o){
	return log(x_o) - 1;
}

double tg(double x_o){
	return (f(x_o + EPS) - f(x_o))/EPS;
}
double newton(double x_o){
	double slt = 0;
	slt = x_o - (f(x_o))/(tg(x_o));

	while (fabs(f(slt)) > EPS){
		slt = x_o - (f(x_o))/(tg(x_o));
		x_o = slt;
	}
	return slt;
}

int main() {
	printf("slt = %f\n", newton(3));
	return 0;
}

