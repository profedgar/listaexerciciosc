#include<stdio.h>
#include<stdlib.h>

main()
{

    char nome[20];
    int nota1=0,nota2=0,nota3=0;
    double media=0;

    printf("Digite o nome do aluno\n");
    scanf("%s",&nome);

     printf("Digite a nota da primeira prova\n");
    scanf("%d",&nota1);
    
     printf("Digite a nota da segunda prova\n");
    scanf("%d",&nota2);

    printf("Digite a nota da terceira prova\n");
    scanf("%d",&nota3);

    media=(nota1+nota2+nota3)/3;

    printf("Nome do aluno: %s \n",nome);
    printf("media das provas  %f \n",media);








    system("pause");


}