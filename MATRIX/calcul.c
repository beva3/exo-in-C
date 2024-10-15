#include <string.h>
#include <stdio.h>
#include <stdbool.h>

void print_m1D(int m[], int length);
double average(int note[], int length);
int sum_note(int note[], int length);
bool is_pass(double average);
void print_student(int note[],int length);
char *category(double average);


int main(){
    int note[] = {70,60,80,90};
    int length = sizeof(note)/sizeof(note[0]);

    print_student(note,length);
    
    return 0;
}

void print_m1D(int m[], int length){
    printf("Print note ...\n");
    for(int i=0; i<length; i++)
        printf("%d%c",m[i], (i == length -1)?'\n':' ');
}
int sum_note(int note[], int length){
    int s =0;
    
    for(int i=0; i<length; i++)
        s+=note[i];

    return s;
}
double average(int note[], int length){
    printf("Average ...\n");
    double av = 0;
    
    av=(double)sum_note(note,length)/length;

    return av;
}

bool is_pass(double average){
    return average < 50 ? false:true;
}
char *category(double average){
    printf("Category ....\n");
    char *catgr = "qwertyuiop";

    if(is_pass(average))
        if(average<60)
            return "Passable";
        else if(average>=60 && average<70)
            return "Good";
        else if(average>=70 && average<90)
            return "Very good";
        else 
            return "Very very very Good";
    
    else return "Not pass";
}

// char *category(double average){
//     printf("Category ....\n");
//     char *catgr = "qwertyuiop";

//     if(is_pass(average))
//         if(average<60)
//             catgr =  "Passable";
//         else if(average>=60 && average<70)
//             catgr = "Good";
//         else if(average>=70 && average<90)
//             catgr =  "Very good";
//         else 
//             catgr = "Very very very Good";
    
//     else catgr =  "Not pass";
//     return catgr;
// }

void print_student(int note[],int length){
    double av = average(note, length);
    // note
    print_m1D(note,length);
    // average
    printf("average : %04g\n",av);
    // is pass
    printf("pass %d\n",is_pass(av));
    //Category
    printf("%s\n",category(av));
}