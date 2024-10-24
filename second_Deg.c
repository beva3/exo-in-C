#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdlib.h>

void solve_second_deg();
double *solve(double *coeffs);
void print_slts(double *slt);
void print_coeff(double *coeef);
double discriminant(double *coeef);

int main(){
    solve_second_deg();
    return 0;
}

void solve_second_deg(){
    printf("Solving second deg, form :\n\
    ax^2 + bx + c = 0\n");
    double coeef[] = {1,2,1};
    print_coeff(coeef);
    print_slts(solve(coeef));
}

double *solve(double *coeffs){
    double *slts = NULL;
    slts = (double *)malloc(3*sizeof(double));
    if(slts ==NULL){
        printf("Allocation error : ...\n");
        free(slts);
        exit(1);
    }

    printf("Start solve ...\n");
    // traitemets

    // slts
    slts[0] = 0,slts[1] = 0;

    return slts;
    free(slts);
}

void print_slts(double *slts){
    printf("Solution : ...\n");
    printf("\
    x_0 = %g\n\
    x_1 = %g\n",slts[0],slts[1]);
}

void print_coeff(double *coeef){
    printf("coeffs : ...\n");
    printf("\
    c_0 = %g\n\
    c_1 = %g\n\
    c_2 = %g\n",coeef[0],coeef[1],coeef[2]);
}