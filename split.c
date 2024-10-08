#include <stdlib.h>
#include <stdio.h>
void print_student(char** student);
char** split(char*str);
int main(){

    char *student = "raphael:beva:sarobidy:rakoto";
    printf("%s\n\n",student);
    print_student(split(student));    

    return 0;
}

void print_student(char** student){
    int i = 0;
    while (student[i])
    {
        printf("%s\n",student[i]);
        i++;
    }
    
}

char** split(char*str){
    char**sp=(char**)malloc(9*sizeof(char*));
    for(int i=0; i<5; i++) sp[i]=(char*)malloc(50*sizeof(char));

    int i=0;/*pour la string*/
    int j=0;/*controle dans sp*/
    int k=0;/*controle le numereau de ligne */

    while (str[i]!='\0')
    {
        if(str[i]!=':'){
			sp[j][k]=str[i];
			k++;
		}
        else{
			j++;k=0;
		}
		i++;
    }
    /**
     * char **student = initialisr(parametre);
     * "raphael:bienvenu:jesus:naton"
     *  
     * {
     *      "raphael",
     *      "boenvenu",
     *      "jesus",
     *      "naton"
     *  }
     */
    return sp;
}