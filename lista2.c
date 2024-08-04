/*
EXERCÍCIOS DO CAPÍTULO 2
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//1. Faça um programa que leia dois valores numéricos inteiros e efetue a adição,
//caso o resultado seja maior que 10, apresentá-lo.
void questao01() {

int num1, num2;

printf("Digite o primeiro número inteiro: ");
scanf("%d", &num1);
printf("Digite o segundo número inteiro: ");
scanf("%d", &num2);

int soma = num1 + num2;

if (soma > 10){
	printf("O valor da soma é: %d.\n", soma);
}

}

//2. Faça um programa que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20,
//este deverá ser apresentado somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20, este deverá
//ser apresentado subtraindo-se 5.
void questao02() {

	int num1, num2, adi, res;

	printf("Digite o primeiro número inteiro: ");
	scanf("%d", &num1);
	printf("Digite o segundo número inteiro: ");
	scanf("%d", &num2);

	adi = num1 + num2;

	if(adi > 20) {
		res = adi + 8;
		printf("O número %d somado com 8 é: %d.\n", adi, res);
	}
	else {
		res = adi - 5;
		printf("O número %d subtraido com 5 é %d.\n", adi, res);
	}

}

//3. Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3".
void questao03() {

	int n, resto;

	printf("Digite um número: ");
	scanf("%d", &n);

	resto = n % 3;
	
	if(resto == 0) {
		printf("É múltiplo de 3.\n");
	}
	else {
		printf("Não é múltiplo de 3.\n");
	}

}
//4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.
void questao04() {

	int n, resto;

	printf("Digite um número: ");
	scanf("%d", &n);

	resto = n % 5;

	if (resto == 0) {
		printf("O número %d é divisível por 5.\n", n);
	}
	else {
		printf("O número %d não é divisível por 5.\n", n);
	}
	
}

//5. Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.
void questao05() {

	int num, resto3, resto7;

	printf("Dgite um número: ");
	scanf("%d", &num);

	resto3 = num % 3;
	resto7 = num % 7;

	if (resto3 == 0 && resto7 == 0) {
		printf("O número %d é divisível por 3 e por 7.\n", num);
	}
	else {
		printf("O número %d não é divisível por 3 e por 7.\n", num);
	}
	
}

//6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
//estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
//bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o
//valor da prestação e informar se o empréstimo pode ou não ser concedido.
void questao06() {

	float salario, prestacao, taxa;

	printf("Digite o valor do salário bruto: ");
	scanf("%f", &salario);
	printf("Digite o valor da prestação: ");
	scanf("%f", &prestacao);

	taxa = salario * 0.3;

	if(prestacao > taxa) {
		printf("O empréstimo não pode ser concedido.\n");
	}
	else {
		printf("O empréstimo pode ser concedido.\n");
	}

}

//7. Faça um programa que leia um número e indique se o número está compreendido
//entre 20 e 50 ou não.
void questao07() {

	float num;

	printf("Digite um número: ");
	scanf("%f", &num);

	if(num >= 20 && num <= 50){
		printf("O número %.2f está compreendido entre 20 e 50.\n", num);
	}
	else {
		printf("O número %.2f não está compreendido entre 20 e 50.\n", num);
	}
}
//8. Faça um programa que leia um número e imprima uma das mensagens: 
//"Maior do que 20", "Igual a 20"ou "Menor do que 20".
void questao08() {

	float num;

	printf("Digite um número: ");
	scanf("%f", &num);

	if(num > 20){
		printf("\nMaior do que 20.\n");
	}
	else if(num == 20) {
		printf("\nIgual a 20.\n");
	}
	else {
		printf("\nMenor do que 20.\n");
	}
}

//9. Faça um programa que permita entrar com o ano de nascimento da pessoa e como ano
//atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o
//ano de nascimento informado é válido.
void questao09() {
	//Declaração de variaveis
	int nas, atual, idade;
	//leitura dos dados
	printf("Digite o ano de nascimento da pessoa: ");
	scanf("%d", &nas);
	printf("Digite o ano atual: ");
	scanf("%d", &atual);
	//cálculos
	if (atual < nas){
		printf("Ano de nascimento inválido.\n");
	}
	else {
		idade = atual - nas;
		printf("A idade da pessoa é de %d anos.\n", idade);
	}



	
}

//10. Faça um programa que leia três números inteiros e imprima os três em ordem
//crescente.
void questao10() {

	int a, b, c;

	printf("Digite o primeiro número inteiro: ");
	scanf("%d", &a);
	printf("Digite o segundo número inteiro: ");
	scanf("%d", &b);
	printf("Digite o terceiro número inteiro: ");
	scanf("%d", &c);

	if(a < b && b < c) {
		printf("%d; %d; %d.\n", a, b, c);
	}
	else if(a < c && c < b) {
		printf("%d; %d; %d.\n", a, c, b);
	}
	else if(b < a && a < c) {
		printf("%d; %d; %d.\n", b, a, c);
	}
	else if(b < c && c < a) {
		printf("%d; %d; %d.\n", b, c, a);
	}
	else if(c < a && a < b) {
		printf("%d; %d; %d.\n", c, a, b);
	}
	else {
		printf("%d; %d; %d.\n", c, b, a);
	}
}

//11. Faça um programa que leia 3 números e imprima o maior deles.
void questao11() {

	float a, b, c;

	printf("Digite o primeiro número: ");
	scanf("%f", &a);
	printf("Digite o segundo número: ");
	scanf("%f", &b);
	printf("Digite o terceiro número: ");
	scanf("%f", &c);

	if(a < b && b < c) {
		printf("%.2f.\n", c);
	}
	else if(a < c && c < b) {
		printf("%.2f.\n", b);
	}
	else if(b < a && a < c) {
		printf("%.2f.\n", c);
	}
	else if(b < c && c < a) {
		printf("%.2f.\n", a);
	}
	else if(c < a && a < b) {
		printf("%.2f.\n", b);
	}
	else {
		printf("%.2f.\n", a);
	}
	
}

//12. Faça um programa que leia a idade de uma pessoa e informe:
//• Se é maior de idade
//• Se é menor de idade
//• Se é maior de 65 anos
void questao12() {
	
	int idade;

	printf("Digite a idade da pessoa: ");
	scanf("%d", &idade);

	if(idade < 18) {
		printf("É menor de idade.\n");
	}
	else if(idade >= 18 && idade < 65) {
		printf("É maior de idade.\n");
	}
	else {
		printf("É maior de 65 anos.\n");
	}
	
}

//13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
//prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2,
//a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou "em Prova Final"
//(a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final).
void questao13() {

	char nome[100];
	float n1, n2, media;

	printf("Digite o nome do aluno: ");
	scanf(" %100[^\n]", &nome); //Colocar espaço antes da porcentagem
	printf("Digite a nota da prova 1: ");
	scanf("%f", &n1);
	printf("Digite a nota da prova 2: ");
	scanf("%f", &n2);

	media = (n1+n2)/2;
	
	printf("\nnome   : %s\n", nome);
	printf("Prova 1: %.2f\n", n1);
	printf("Prova 2: %.2f\n", n2);
	printf("Média  : %.2f\n", media);

	if(media >= 7) {
		printf("Aluno aprovado.\n");
	}	else if(media < 3) {
		printf("Aluno reprovado.\n");
	}
	else {
		printf("Aluno em prova final.\n");
	}


}

//14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
//desconto do INSS segundo a tabela seguir:
//Salário Faixa de Desconto
//Menor ou igual à R$600,00 Isento
//Maior que R$600,00 e menor ou igual a R$1200,00 20%
//Maior que R$1200,00 e menor ou igual a R$2000,00 25%
//Maior que R$2000,00 30%
void questao14() {
	
	float salario, desconto;

	printf("Digite o salário: ");
	scanf(" %f", &salario);

	if(salario <= 600) {
		printf("Desconto do INSS: Isento.\n");
	}
	else if(salario > 600 && salario <= 1200) {
		desconto = salario * 0.2;
		printf("Desconto do INSS: R$%.2f.\n", desconto);
	}
	else if(salario > 1200 && salario <= 2000) {
		desconto = salario * 0.25;
		printf("Desconto do INSS: R$%.2f.\n", desconto);
	}
	else {
		desconto = salario * 0.30;
		printf("Desconto do INSS: R$%.2f.\n", desconto);
	}
}

//15. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor
//da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa
//que leia o valor do produto e imprima o valor da venda.
void questao15() {

	float valor, venda;

	printf("Digite o valor do produto: ");
	scanf(" %f", &valor);

	if(valor < 20) {
		venda = (valor * 0.45) + valor;
		printf("O valor da venda é: R$%.2f.\n", venda);
	}
	else {
		venda = (valor * 0.30) + valor;
		printf("O valor da venda é: R$%.2f\n", venda);
	}
	
}

//16. A confederação brasileira de natação irá promover eliminatórias para o próximo
//mundial. Faça um programa que receba a idade de um nadador e
//imprima a sua categoria segundo a tabela a seguir:
//Categoria Idade
//Infantil A 5 - 7 anos
//Infantil B 8 - 10 anos
//Juvenil A 11 - 13 anos
//Juvenil B 14 - 17 anos
//Sênior maiores de 18 anos
void questao16() {
	
	int idade;

	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);

	if(idade >= 5 && idade <= 7) {
		printf("Categoria: Infantil A.\n");
	}
	else if(idade >= 8 && idade <= 10) {
		printf("Categoria: Infantil B.\n");
	}
	else if(idade >= 11 && idade <= 13) {
		printf("Categoria: Juvenil A.\n");
	}
	else if(idade >= 14 && idade <= 17) {
		printf("Categoria: Juvenil B.\n");
	}
	else if(idade < 5) {
		printf("Sem categoria para a idade.\n");
	}
	else {
		printf("Categoria: Sênior.\n");
	}
	
}

//17. Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas
//começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Um vendedor de
//um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com o nome
//e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.
//     Idade               Valor
//Até 10 anos             R$30,00
//Acima de 10 até 29 anos R$60,00
//Acima de 29 até 45 anos R$120,00
//Acima de 45 até 59 anos R$150,00
//Acima de 59 até 65 anos R$250,00
//Maior que 65 anos       R$400,00
void questao17() {
	
	char nome[70];
	int idade;

	printf("Digite o nome da pessoa: ");
	scanf(" %70[^\n]", &nome);
	printf("Digite a idade da pessoa: ");
	scanf(" %d", &idade);


	printf("Nome: %s.\n", nome);
	
	if(idade <= 10) {
		printf("Valor do plano: R$30,00\n");
	}
	else if(idade > 10 && idade <=29) {
		printf("Valor do plano: R$60,00\n");
	}
	else if(idade > 29 && idade <=45) {
		printf("Valor do plano: R$120,00\n");
	}
	else if(idade > 45 && idade <=59) {
		printf("Valor do plano: R$150,00\n");
	}
	else if(idade > 59 && idade <=65) {
		printf("Valor do plano: R$250,00\n");
	}
	else {
		printf("Valor do plano: R$400,00\n");
	}

}

//18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente.
//Caso o usuário digite um número fora desse intervalo, deverá aparecer uma mensagem informando
//que não existe mês com este número. Utilize o switch para este problema.
void questao18() {

	int n;

	printf("Digite o numero do mês: ");
	scanf("%d", &n);

	switch (n) {
	case 1:
		printf("1 corresponde ao mês de Janeiro\n");
		break;
	case 2:
		printf("2 corresponde ao mês de Fevereiro\n");
		break;
	case 3:
		printf("3 corresponde ao mês de Março\n");
		break;
	case 4:
		printf("4 corresponde ao mês de Abril\n");
		break;
	case 5:
		printf("5 corresponde ao mês de Maio\n");
		break;
	case 6:
		printf("6 corresponde ao mês de Junho\n");
		break;
	case 7:
		printf("7 corresponde ao mês de Julho\n");
		break;
	case 8:
		printf("8 corresponde ao mês de Agosto\n");
		break;
	case 9:
		printf("9 corresponde ao mês de setembro\n");
		break;
	case 10:
		printf("10 corresponde ao mês de Outubro\n");
		break;
	case 11:
		printf("11 corresponde ao mês de Novembro\n");
		break;
	case 12:
		printf("12 corresponde ao mês de Desembro\n");
		break;
	default:
		printf("Não tem mês correspondente para o número %d.\n", n);
	}

}

//19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado.
//Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de pontos, criar um programa
//que informe se uma equipe foi classificada, de acordo com a seguinte especificação:
//• Ler os pontos obtidos por cada jogador da equipe;
//• Mostrar esses valores em ordem decrescente;
//• Se a soma dos pontos for maior do que 100, imprimir a média aritmética entre eles, caso contrário,
//imprimir a mensagem "Equipe desclassificada".
void questao19() {

	float j1, j2, j3, soma, media;

	printf("Digite o número de pontos do jogador 1: ");
	scanf("%f", &j1);
	printf("Digite o número de pontos do jogador 2: ");
	scanf("%f", &j2);
	printf("Digite o número de pontos do jogador 3: ");
	scanf("%f", &j3);


	if(j1 < j2 && j2 < j3) {
		printf("%.2f; %.2f; %.2f.\n", j1, j2, j3);
	}
	else if(j1 < j3 && j3 < j2) {
		printf("%.2f; %.2f; %.2f.\n", j1, j3, j2);
	}
	else if(j2 < j1 && j1 < j3) {
		printf("%.2f; %.2f; %.2f.\n", j2, j1, j3);
	}
	else if(j2 < j3 && j3 < j1) {
		printf("%.2f; %.2f; %.2f.\n", j2, j3, j1);
	}
	else if(j3 < j1 && j1 < j2) {
		printf("%.2f; %.2f; %.2f.\n", j3, j1, j2);
	}
	else {
		printf("%.2f; %.2f; %.2f.\n", j3, j2, j1);
	}

	soma = j1 + j2 + j3;
	media = soma / 3;

	if(media> 100) {
		printf("A média dos pontos é: %.2f\n.", media);
	}
	else {
		printf("Equipe desclassificada.\n");
	}
	

}

//20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes de acordo com o 
//saldo médio no último ano. Faça um programa que leia o saldo médio de um cliente e calcule o valor do
//crédito de acordo com a tabela a seguir. O programa deve imprimir uma mensagem informando o
//saldo médio e o valor de crédito.
//Saldo Médio Percentual
//de 0 a 500 nenhum crédito
//de 501 a 1000 30% do valor do saldo médio
//de 1001 a 3000 40% do valor do saldo médio
//acima de 3001 50% do valor do saldo médio
void questao20() {
	
	float saldo_medio, valor_credito;

	printf("Digite o saldo médio do cliente: ");
	scanf("%f", &saldo_medio);

	if(saldo_medio<=500) {
		printf("Nenhum crédito concedido.\n");
	}
	else if(saldo_medio>=501 && saldo_medio<=1000) {
		valor_credito = saldo_medio*0.3;
	}
	else if(saldo_medio>=1001 && saldo_medio<=3000) {
		valor_credito = saldo_medio*0.4;
	}
	else if(saldo_medio>=3001) {
		valor_credito = saldo_medio*0.5;
	}

	printf("O saldo médio é %.2f e o valor do crédito é %.2f.\n", saldo_medio, valor_credito);
}

//21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será
//emprestado, o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir.
//Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.
//• Nome do livro:
//• Tipo de usuário:
//• Total de dias:
void questao21() {

	char livro[50];
	int usuario;
	
	printf("Digite o nome do livro: ");
	scanf(" %50[^\n]", &livro);
	printf("Escolha o tipo de usuário.\nDigite 1 para professor ou 2 para aluno. ");
	scanf("%d", &usuario);

	printf("\n");

	if (usuario == 2){
		printf("• Nome do livro:   %s\n", livro);
		printf("• Tipo de usuário: Aluno\n");
		printf("• Total de dias:   3\n");
	}
	else if(usuario == 1) {
		printf("• Nome do livro:   %s\n", livro);
		printf("• Tipo de usuário: Professor\n");
		printf("• Total de dias:   10\n");
	}
	else {
		printf("• Tipo de usuário: Inválido\n");
	}
}

//22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado
//de combustível, sabendo-se que um carro tipo A faz 12 km com um litro de gasolina, um tipo B faz 9 km por litro
//e o tipo C, 8 km por litro.
void questao22() {
	
	float km, consumo;
	int tipo;

	printf("Digite o percurso em quilómetros: ");
	scanf("%f", &km);

	printf("Digite o tipo de carro:\n1 para tipo A\n2 para tipo B\n3 para tipo C\n• ");
	scanf(" %d", &tipo);

	printf("\n");

	if(tipo == 1) {
		consumo = km / 12;
		printf("Consumo estimado de combustivel: %.2f litros.\n", consumo);
	}
	else if(tipo == 2) {
		consumo = km / 9;
		printf("Consumo estimado de combustivel: %.2f litros.\n", consumo);
	}
	else if(tipo == 3) {
		consumo = km / 8;
		printf("Consumo estimado de combustivel: %.2f litros.\n", consumo);
	}
	else {
		printf("Tipo de carro invalido.\n");
	}
}

//23. Crie um programa que informe a quantidade total de calorias de uma refeição a partir da
//escolha do usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.
//Prato                Sobremesa                 Bebida
//Vegetariano 180cal   Abacaxi 75cal             Chá 20cal
//Peixe 230cal         Sorvete diet 110cal       Suco de laranja 70cal
//Frango 250cal        Mousse diet 170cal        Suco de melão 100cal
//Carne 350cal         Mousse chocolate 200cal   Refrigerante diet 65cal
void questao23() {
	//leitura das variaveis dos pratos:
	int prato, sobremesa, bebida;
	//leitura das variaveis das calorias:
	int calprato, calsobremesa, calbebida, caltotal;

	//leitura do prato
	printf("\nInforme o número do prado de acordo com a tabela a tabela: \n");
	printf("1-Vegetariano\t 2-peixe\n");
	printf("3-frango\t 4-carne\n");
	scanf("%d", &prato);

	//deitura da sobre mesa
	printf("Informe o número da sobremesa de acordo com a tabela a tabela: \n");
	printf("1-Abacaxi\t 2-Sorvete\n");
	printf("3-mousse diet\t 4-mousse chocolate\n");
	scanf("%d", &sobremesa);
	
	//leitura da bebida
	printf("Informe o número da bebida de acordo com a tabela a tabela: \n");
	printf("1-Chá\t 2-Suco de laranja\n");
	printf("3-Suco de limao\t 4-Refrigerante diete\n");
	scanf("%d", &bebida);

	//Cálculo das calorias do prato
	if(prato == 1) {
		calprato = 180;
	}
	else if (prato == 2) {
		calprato = 230;
	}
	else if (prato == 3) {
		calprato = 250;
	}
	else if (prato == 4){
		calprato = 350;
	}
	else {
		printf("Prato indisponível.\n");
	}

	//Cálculo da sobre mesa
	if(sobremesa == 1) {
		calsobremesa = 75;
	}
	else if (sobremesa == 2) {
		calsobremesa = 110;
	}
	else if (sobremesa == 3) {
		calsobremesa = 170;
	}
	else if (sobremesa == 4){
		calsobremesa = 200;
	}
	else {
		printf("sobremesa indisponível.\n");
	}

	//Cálculo da bebida
	if(bebida == 1) {
		calbebida = 20;
	}
	else if (bebida == 2) {
		calbebida = 70;
	}
	else if (bebida == 3) {
		calbebida = 100;
	}
	else if (bebida == 4){
		calbebida = 65;
	}
	else {
		printf("bebida indisponível.\n");
	}

	//Cálculo das calorias totais
	caltotal = calprato + calsobremesa + calbebida;
	
	printf("A caloria total é %d.\n", caltotal);
}

//24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dos motoristas
//o DUT. Sabendo-se que o mês em que o emplacamento do carro deve ser renovado é determinado
//pelo último número da placa do mesmo, faça um programa que, a partir da leitura da placa do carro,
//informe o mês em que o emplacamento deve ser renovado.
void questao24() {

	int n_placa;

	printf("Digite o ultitimo número da placa: \n");
	scanf("%d", &n_placa);

	if (n_placa >=1 && n_placa <= 3) {
		printf("O emplacamento deve ser renovado no mês de janeiro\n");
	}
	else if (n_placa >=4 && n_placa <= 6) {
		printf("O emplacamento deve ser renovado no mês de fevereiro\n");
	}
	else if (n_placa >=7 && n_placa <= 9 || n_placa == 0) {
		printf("O emplacamento deve ser renovado no mês de março\n");
	}
	else {
		printf("Placa invalida\n");
	}
	
}

//25. A prefeitura contratou uma firma especializada para manter os níveis de poluição considerados
//ideais para um país do 1º mundo. As indústrias, maiores responsáveis pela poluição, foram classificadas
//em três grupos. Sabendo-se que a escala utilizada varia de 0,05 e que o índice de poluição aceitável
//é até 0,25, fazer um programa que possa imprimir intimações de acordo com o índice e a tabela a seguir:
//Índice Indústrias que receberão intimação
//0,3 1º gurpo
//0,4 1º e 2º grupos
//0,5 1º, 2º e 3º grupos
void questao25() {
	
}

int main() {
	const char menu[1000] = "\n================================\n            PROGRAMAS\n================================\n[1]  - Adição\n[2]  - Adição 2\n[3]  - Múltiplo\n[4]  - Múltiplo 2\n[5]  - Múltiplo 3\n[6]  - Crédito\n[7]  - Intervalo\n[8]  - Menor/Maior\n[9]  - Idade\n[10] - Crescente\n[11] - Maior\n[12] - Idade 2\n[13] - Situação Aluno\n[14] - INSS\n[15] - Valor de Venda\n[16] - Natação\n[17] - Plano de Saúde\n[18] - Mês do Ano\n[19] - Arco e Flecha\n[20] - Crédito Especial\n[21] - Biblioteca\n[22] - Consumo Combustível\n[23] - Calorias\n[24] - Emplacamento\n[25] - Intimação\n================================\n";
	printf("%s",menu);
	int opcao;

	printf("Digite a questão a ser executada: ");
	scanf("%d", &opcao);

	switch (opcao) {
		case 1:
			questao01();
			break;
		case 2:
			questao02();
			break;
		case 3:
			questao03();
			break;
		case 4:
			questao04();
			break;
		case 5:
			questao05();
			break;
		case 6:
			questao06();
				break;
		case 7:
			questao07();
				break;
		case 8:
			questao08();
				break;
		case 9:
			questao09();
				break;
		case 10:
			questao10();
			break;
		case 11:
			questao11();
				break;
		case 12:
			questao12();
				break;
		case 13:
			questao13();
				break;
		case 14:
			questao14();
				break;
		case 15:
			questao15();
				break;
		case 16:
			questao16();
				break;
		case 17:
			questao17();
				break;
		case 18:
			questao18();
				break;
		case 19:
			questao19();
				break;
		case 20:
			questao20();
				break;
		case 21:
			questao21();
				break;
		case 22:
			questao22();
				break;
		case 23:
			questao23();
				break;
		case 24:
			questao24();
				break;
		case 25:
			questao25();
				break;
		default:
			printf("Opção inválida!");
	}
	
	return EXIT_SUCCESS;
}