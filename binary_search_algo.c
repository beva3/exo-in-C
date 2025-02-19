#include <stdio.h>
#include <stdbool.h>

int binary_search(int a[], int el, int l, int r);

int main()
{
    int unsorted[] = {2, 1, 9, 13, 6, 8, 7, 12, 4, 5, 3, 10, 11};
    int sorted[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    printf("v = %d\n", binary_search(sorted, 12, 0, 12));

    return 0;
}
int binary_search(int a[], int el, int l, int r)
{
    int mid = l + (r - l) / 2;
    if (a[mid] == el)
        return mid;
    else if (a[mid] > el)
    {
        return binary_search(a, el, l, mid - 1);
    }
    else
        return binary_search(a, el, mid + 1, r);
}