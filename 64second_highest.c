#include <stdio.h>

typedef struct VP{
    int v;
    int p;
}VP;
void display_vp(VP vp);
VP min_tab(int a[], int length);
int second_highest(int a[], int length);
void swap(int *t, VP *vp);
void display_tab(int *t, int lenght);

void sort(int a[], int len);


int main()
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8}; // max2 = 8
    int length = sizeof(a) / sizeof(a[0]);
    int max2 = second_highest(a, length);
    printf("the secont highest is %d\n", max2);

    // int ex 2 
    int b[] = {3,1,5,2,-1,7,9,8};
    length =  sizeof(b) / sizeof(b[0]);
    // sort(b,length);
    display_vp(min_tab(b,length));
    display_tab(b, length);

    sort(b,length);
    display_vp(min_tab(b,length));
    display_tab(b, length);

    printf("the secont highest is %d\n", b[(length-1)-1]);

    return 0;
}
void display_tab(int *t, int lenght){
    for (int  i = 0; i < lenght; i++)
    {
        printf("%d%c", t[i], i==lenght-1?'\n':' ');
    }
    
}
int second_highest(int a[], int length)
{
    int max2 = 0;
    int max1 = 0; // highest

    if (a[0] > a[1])
    {
        max1 = a[0];
        max2 = a[1];
    }
    else
    {
        max1 = a[1];
        max2 = a[0];
    }

    for (int i = 1; i < length; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else  if (a[i] > max1 && a[i] > max2)
        {
            max2 = a[i];
        }
    }

    return max2;
}

void sort(int a[], int len){
    for (int i = 0; i < len; i++)
    {
        VP min = min_tab(a + i, len - i);
        swap(a + i, &min);
    }
}

// ex 2
void swap(int *t, VP *vp)
{
    int temp = t[0];
    t[0] = vp->v;
    t[vp->p] = temp;
}
VP min_tab(int a[], int length){
    VP min = {a[0], 0};
    for (int i = 0; i < length; i++)
    {
        if (a[i] < min.v)
        {
            min.v = a[i];
            min.p = i;
        }        
    }
    // printf("inside the function : min = %d\n", min.v);
    return min;
}

void display_vp(VP vp){
    printf("value       = %d\n", vp.v);
    printf("position    = %d\n", vp.p);
}