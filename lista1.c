#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q01() {

    printf("Gustavo Antonio de Faria Pires\n");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q02() {

    printf("Resultado: %d\n", 30*27);
} 

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q03() {
    //int=inteiro    float=real    char=caractere   char[20]
    int num1 = 5;
    int num2 = 8;
    int num3 = 12;
    float media = (5+8+12)/3.0;
    printf("Media de %d %d %d = %.2f\n", num1, num2, num3, media);
}

//4. Faça um programa que leia e imprima um número inteiro.
void q04() {

    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("Número digitado: %d\n", numero);
}
//5. Faça um programa que leia dois números reais e os imprima.
void q05() {

    float num1, num2;
    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);
    printf("Digite o segundo número real: ");
    scanf("%f", &num2);
    printf("Os números digitados foram: %f e %f\n", num1, num2);

}

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q06() {

    int num;
    printf("digite um número inteiro ");
    scanf("%d", &num);
    int ant = num-1;
    int suc = num+1;
    printf("Seu antecessor é %d e seu sucessor é %d\n", ant, suc);

}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q07() {

    char nome[50], endereco[70], telefone[14];
    printf("Nome: ");
    scanf(" %50[^\n]",&nome);
    printf("Endereço: ");
    scanf(" %70[^\n]",&endereco);
    printf("Telefone: ");
    scanf(" %14[^\n]",&telefone);
    printf("Nome: %s\nEndereço: %s\nTelefone: %s\n",nome,endereco,telefone);

}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q08() {

    int n1, n2;

    printf("Digite o primeiro número inteiro ");
    scanf("%d", &n1);
    printf("Digite o segundo número inteiro ");
    scanf("%d", &n2);

    int sub = n1-n2;

    //printf("A subtração desses números é: %d\n", sub);
}

//9. Faça um programa que leia um número real e imprima ¼ deste número.
void q09() {

    float num;

    printf("Digite um número real: ");
    scanf("%f", &num);

    float quart =num/4;
    
    printf("¼ deste número é: %.3f.\n", quart);
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10() {

    float n1, n2, n3;

    printf("Digite o primeiro número real: ");
    scanf("%f", &n1);
    printf("Digite o segundo número real: ");
    scanf("%f", &n2);
    printf("Digite o terceiro número real: ");
    scanf("%f", &n3);

    float med = (n1+n2+n3)/3;

    printf("A média aritimética destes números é: %.2f\n", med);

}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11() {

    float n1, n2;

    printf("Digite o primeiro número real: ");
    scanf("%f", &n1);
    printf("Digite o segundo número reral: ");
    scanf("%f", &n2);

    float adi = n1+n2;
    float sub = n1-n2;
    float mul = n1*n2;
    float div = n1/n2;

    printf("A soma destes números é: %f\nA subtração destes números é: %f\nA multiplicação destes números é: %f\nA divisão destes números é: %f.\n", adi, sub, mul, div);

}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12() {

    float num;

    printf("Digite um número real: ");
    scanf("%f", &num);

    float qua = num*num;

    printf("O quadrado de %f é: %f\n.", num, qua);

}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void q13() {
    
    float sal;

    printf("Digite o saldo da conta poupança: ");
    scanf("%f", &sal);
    
    float nov = sal*1.02;
   
    printf("O novo saldo é: %.2f\n", nov);
}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).
void q14() {

    float b, h;

    printf("Digite o valor da base do retangulo: ");
    scanf("%f", &b);
    printf("Digite o valor da altura do retangulo: ");
    scanf("%f", &h);

    float per = 2*(b+h);
    float are = b*h;

    printf("O perímetro do retangulo é %.2f e a área é %.2f.\n", per, are);

}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void q15() {
    
    float vp, per;

    printf("Digite o valor do produto: ");
    scanf("%f", &vp);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &per);

    float pd = per/100;
    float vd = vp*pd;
    float vf = vp-vd;

    printf("O valor do desconto é de %.2f reais e o valor do produto com desconto é de %.2f reais.\n", vd, vf);

}

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.
void q16() {

    float salarioa, perreajuste;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salarioa);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &perreajuste);
    
    float perrea = perreajuste/100;
    float vrea = salarioa*perrea;
    float sfinal = vrea+salarioa;

    printf("O novo salário com reajuste é de R$%.2f.\n\n", sfinal);


}

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5
void q17() {
    
    float c;

    printf("Digite o valor da temperatua em graus centígrados: ");
    scanf("%f", &c);

    float f = (9*c+160)/5;

    printf("O valor da temperatura em gaus Fahrenheit é: %.2f\n\n.", f);

}

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.
void q18() {
   float T, V;

    printf("Digite o tempo decorrido da viagem em horas: ");
    scanf("%f", &T);
    printf("Digite a velocidade média: ");
    scanf("%f", &V);

    float D = T * V;
    float L = D / 12;

    printf("A distância percorrida foi de %.2f e a quantidade de litros de combustível consumido foi de %.2f.\n\n", D, L);

}

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q18();

    return EXIT_SUCCESS;
}