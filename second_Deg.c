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
    // double coeffs[] = {1.,0.,2.};       //Segmentation fault (core dumped)
    double coeffs[] = {1.,2.,1.};      
    print_coeff(coeffs);
    double *slts = solve(coeffs);
    if(slts != NULL)
        print_slts(slts);
}

double discriminant(double *coeef){
    return coeef[1] * coeef[1] - 4 * coeef[0] * coeef[2];
}

double *solve(double *coeffs){
    double *slts = NULL;
    double delta = 0;
    slts = (double *)malloc(3*sizeof(double));
    if(slts ==NULL){
        printf("Allocation error : ...\n");
        free(slts);
        exit(1);
    }

    printf("Start solve ...\n");
    // traitemets
    delta = discriminant(coeffs);
    
    // slts
    // if(delta > 0 || delta == 0){
    /**
     * Solving second deg, form :
     * ax^2 + bx + c = 0
     * coeffs : ...
     * c_0 = 1
     * c_1 = 2
     * c_2 = 1
     * Start solve ...
     * delta = 0.000000
     * we have 2 slts : x_0 and x_1 ...
     * Solution : ...
     * x_0 = -0.5
     * x_1 = -0.5
     */

    // if(delta >= 1e-10)
    /**
     * Solving second deg, form :
     * ax^2 + bx + c = 0
     * coeffs : ...
     * c_0 = 1
     * c_1 = 2
     * c_2 = 1
     * Start solve ...
     * No slts ...
     */
    if(delta > 1e-10 || delta == 0){
        printf("delta = %f\n",delta);
        printf("we have 2 slts : x_0 and x_1 ...\n");
        slts[0] = (-coeffs[2] - sqrt(delta))/(2*coeffs[0]);
        slts[1] = (-coeffs[2] + sqrt(delta))/(2*coeffs[0]);
        return slts;
    }
    else{  
        printf("No slts ...\n");
        return NULL;
    }
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