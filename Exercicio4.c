#include<stdio.h>
#include<stdlib.h>

main()
{

        char nome[20]="Edgar";

        float salariofixo=0,totalvendas=0,percentualvendas=0,salariofinal=0;

        salariofixo=3000.50;
        totalvendas=2045.30;
        percentualvendas=(totalvendas/100)*15;
        salariofinal=salariofixo+percentualvendas;

        printf("O nome do funcionario: %s\n",nome);
        printf("Salario fixo: %.2f \n",salariofixo);
        printf("Salario Final: %.2f\n",salariofinal);
    
         system("pause");
}