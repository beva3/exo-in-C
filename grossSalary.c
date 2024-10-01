/**
 * GS = basic + da + hra + pf
 * da  : ex 10% basic
 * hra : ex 30% basic : resaka ofatrano
 * pf  : Providend fund
 * ex :
 *  Exemple de salaire brut mensuel
 *  Salaire de base (Basic):                                                    25000 roupies
 *  Allocation de cherté de vie (DA): 10% du salaire de base =                   2500 roupies
 *  Allocation de logement (HRA): 30% du salaire de base =                       7500 roupies
 *  Fonds de prévoyance (PF): 12% du salaire de base (employé + employeur) =     6000 roupies
 */

#include <stdio.h>

double gross_salary(double s_b, double r_da, double r_hra, double r_pf);



int main(){

    printf("G-S = %g\n",gross_salary(1200,10,30,12));

    return 0;
}

double gross_salary(double s_b, double r_da, double r_hra, double r_pf){
    // r_i : %ge de pour i
    double gs = 10,
    da  = 0.1 * r_da * s_b,
    hra = 0.1 * r_hra * s_b,
    pf  = 0.1 * r_pf * s_b;

    gs  = da + hra + pf + s_b; 
    return gs;
}