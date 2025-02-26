#include <stdio.h>
#include <string.h>
typedef struct Ch_tab
{
	int p;
	char v;
} Ch_tab;

void echo(char *s);
Ch_tab min(char *s);
void sort(char **str);
void swap(Ch_tab *pv1, Ch_tab *pv2);
void sort_v2(int t[], int length);


int main()
{
	char *str = "qwerty";
	Ch_tab p_v = min(str);
	Ch_tab tmp = {0, str[0]};
	printf("min_p: %d\n", p_v.p);
	printf("min_p: %c\n", p_v.v);
	swap(&p_v, &tmp);
	echo(str);
	// sort(&str);

	int t[] = {4,2,3,1,6,7};
	int length = sizeof(t)/sizeof(t[0]);
	sort_v2(t, length);
	for (int  i = 0; i < length; i++)
	{
		printf("%d%c", t[i], i == length -1 ? '\n' : ' ');
	}
	

	return 0;
}
Ch_tab min(char *s)
{
	Ch_tab _min = {0, s[0]};
	int i = 0;
	while (s[i])
	{
		if (s[i] < _min.v)
		{
			_min.v = s[i];
			_min.p = i;
		}
		i++;
	}

	return _min;
}
void echo(char *s)
{
	int i = 0;
	while (s[i])
	{
		printf("%c\n", s[i]);
		i++;
	}
	printf("\n");
}

void swap(Ch_tab *pv1, Ch_tab *pv2)
{
	Ch_tab tmp = *pv1;
	*pv1 = *pv2;
	*pv2 = tmp;
}
void sort(char **str)
{
	printf("sort %s\n", *str);
	for (int i = 0; i < strlen(*str); i++)
	{
		printf("%2d\n", i), echo(*str + i);
	}
}

void sort_v2(int t[], int length){
	int tmp = 0;
	for (int i = 0; i < length; i++){
		for (int j = 0; j < length - 1; j++){
			if (t[j] > t[j + 1]){
				tmp = t[j];
				t[j] = t[j + 1];
				t[j + 1] = tmp;
			}
		}
	}
}