#include <stdio.h>

char tochar(int digito);

int main()
{
    int digit=0;
    char resul;

    do
    {
        printf ("\nIntroduce el valor entre 0 y 9: ");
        scanf("%d",&digit);

        if (digit>9 || digit <0)
        {
            printf("\n \t ? \n");
        }

    }
    while(digit>9 || digit <0);

    resul = tochar(digit);
    printf("%d",resul);

}

char tochar (int digito)
{
char res = '?';
	if(digito >= 0 && digito <=9){
		res = 48 + digito;
	}
	return res;
}
