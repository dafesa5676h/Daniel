#include <iostream>
double promedio(int x, int z)
{

    return (x + z) / 2;
}

double funcion(int *x, int *z)
{
    *x = 50;
    *z = 30;
    return 1;
}
int main()
{
    int a = 10, b, c;
    double prom;
    int *pointer;
    char str[80];
    pointer = &a;
    int sw, sh; 
    strcpy(str, "blbl");
    printf("Number a: %d / p: %d str: %s", a, pointer, str);
    scanf("%d %d", &b, &c);
    printf("recibi: %d %d", b, c);
    prom = promedio(b, c);
    printf("promedio: %f", prom);
    funcion (&sw, &sh);
    printf ("varibles : %d %d", sw, sh);
}
