#include <stdio.h>
#include <stdlib.h>

#define N1 5
#define N2 6
#define N3 4

void vvod(float x[], int n, char name);             
float sred(float x[], int n);                       

int main() 
{
    system("chcp 65001");

    float a[N1], b[N2], c[N3], avg;

    vvod(a, N1, 'a');
    vvod(b, N2, 'b');
    vvod(c, N3, 'c');

    avg = sred(a, N1);
    printf("Середнє додатніх елементів масиву a: %.2f\n", avg);

    avg = sred(b, N2);
    printf("Середнє додатніх елементів масиву b: %.2f\n", avg);

    avg = sred(c, N3);
    printf("Середнє додатніх елементів масиву c: %.2f\n", avg);

    return 0;
}

void vvod(float x[], int n, char name) 
{
    int i;
    for (i = 0; i < n; i += 1) 
    {
        printf("Введіть %c[%d] = ", name, i);
        scanf("%f", &x[i]);
    }
}

float sred(float x[], int n) 
{
    float s = 0;
    int k = 0;
    for (int i = 0; i < n; i += 1) 
    {
        if (x[i] > 0) 
        {
            s += x[i];
            k += 1;
        }
    }

    if (k == 0)
    {
        return 0;
    }

    else
    {
        return s / k;
    }
}
