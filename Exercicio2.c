//2)	Faça um programa que receba dois números e ao final mostre a soma, subtração, multiplicação e a divisão dos números lidos.

#include<stdio.h>
#include<stdlib.h>

//Exercicio 1- Faça um programa que receba dois números e exiba o resultado da sua soma.

main()
{
 
     int num1=0,num2=0,soma=0,multiplicacao=0,subtracao=0;
     float divisao=0;

num1=11;
num2=5;
     soma=num1+num2;
     multiplicacao=num1*num2;
     subtracao=num1-num2;
     divisao=(float)num1/(float)num2;

     printf("a soma e %d \n",soma);
      printf("a multiplicacao e %d \n",multiplicacao);
       printf("a subtracao e %d \n",subtracao);
        printf("a divisao  e %.2f \n",divisao); 










   

     system("pause");




}