//Eduardo Daniel Perez Roman
//Producto de 2 numeros

#include <stdio.h>

int product(int, int);

int main()
{
    int x, y, pro;

    printf("Introduzca los numeros para encontrar el producto: ");
    scanf_s("%d%d", &x, &y);
    pro = product(x, y);
    printf("El producto de los números dados es %d\n", pro);
    return 0;
}

int product(int x, int y)
{
    if (x < y)
    {
        return product(y, x);
    }
    else if (y != 0)
    {
        return (x + product(x, y - 1));
    }

}