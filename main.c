//
// Created by Joao lindoo on 11/09/2019.
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int area_triangulo();

#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err34-c"   //ignorar algumas correcoes chatas na IDE Clion
#pragma ide diagnostic ignored "cert-flp30-c"
#pragma ide diagnostic ignored "cert-msc30-c"
#pragma ide diagnostic ignored "cert-msc32-c"

int main() {
	int exercicio = 1000;

	printf("-----------Bem vindo a lista de exercicios! no git ------------\n");
	printf("Para sair digite 0!\n");
	printf("Para executar um exercicio especifico, apenas digite o numero do mesmo!\n");


	while (exercicio != 0)
	{
		printf("\n-----------------------------------");
		printf("\nPara sair do progama digite 0!");
		printf("\nDigite o exercicio desejado: ");
		scanf("%d", &exercicio);
		printf("\n");

		switch (exercicio) {

			case 1: {
				int cont = 1;

				for (int j = 0; cont <= 3; j++) {
					if (j % 3 == 0) {
						printf("o numero %d e multiplo de 3!\n", j);
						cont++;
					}
				}
				break;
			}

			case 2: {
				int cont = 1, cont2 = 1;

				for (int i = 1; i <= 100; i++)
					printf("%d ", i);
				while (cont <= 100) {
					printf("%d ", cont);
					cont++;
				}
				do {
					printf("%d ", cont2);
					cont2++;
				} while (cont2 <= 100);

				break;
			}

			case 3: {
				int cont = 10;

				while (cont >= 0) {
					printf("%d\n", cont);
					cont--;
				}
				printf("Fim!");

				break;
			}

			case 4: {
				int num = 0;

				for (int i = 0; i <= 100; i++) {
					printf("%d ", num);
					num += 1000;


				}

				break;
			}

			case 5: {
				int valores[9],
						soma = 0;

				for (int i = 0; i < 10; i++) {
					printf("Insira o %d numero: ", i + 1);
					scanf("%d", &valores[i]);
					soma += valores[i];
				}
				printf("\nA soma dos 10 valores inseridos e de: %d", soma);

				break;
			}

			case 6: {
				int valores[9],
						media;

				for (int i = 0; i < 10; i++) {
					printf("Insira o %d numero: ", i + 1);
					scanf("%d", &valores[i]);
					media += valores[i];
				}
				printf("A media dos 10 numeros inseridos e de: %d", media / 10);

				break;
			}

			case 7: {
				int valores[9],
						media = 0;

				for (int i = 0; i < 10; i++) {
					printf("Insira o %d numero: ", i + 1);
					scanf("%d", &valores[i]);
					if (valores[i] < 0) {
						printf("Numero invalido, digite somente positivos!\n");
						i--;
					} else
						media += valores[i];
				}
				printf("A media dos 10 numeros inseridos e de: %d", media / 10);

				break;
			}

			case 8: {
				int input, num2, maior = 0, menor = 999999999;

				for (int i = 1; i <= 10; i++) {
					printf("Insira o %d numero: ", i);
					scanf("%d", &input);
					if (input > maior)
						maior = input;
					if (input < menor)
						menor = input;
				}
				printf("O maior numero digitado foi: %d e o menor: %d", maior, menor);

				break;
			}

			case 9: {
				int input, contador = 1;

				printf("Digite um numero inteiro: ");
				scanf("%d", &input);

				for (int i = 1; contador <= input; i++) {
					if (i % 2 != 0) {
						printf("%d numero impar: %d\n", contador, i);
						contador++;
					}
				}

				break;
			}

			case 10: {
				int soma = 0, contador = 1;

				for (int i = 1; contador <= 50; i++) {
					if (i % 2 == 0) {
						soma += i;
						contador++;
					}
				}
				printf("A soma dos 50 primeros numeros pares e igual a: %d", soma);

				break;
			}

			case 11: {
				int input;

				printf("Digite um numero inteiro positivo: ");
				scanf("%d", &input);
				for (int i = 0; i <= input; i++) {
					printf("%d ", i);
				}

				break;
			}

			case 12: {
				int input;

				printf("Digite um numero inteiro positivo: ");
				scanf("%d", &input);
				for (int i = input; i >= 0; i--) {
					printf("%d ", i);
				}

				break;
			}

			case 13: {
				int input;

				printf("Digite um numero inteiro positivo 'par': ");
				scanf("%d", &input);
				for (int i = 0; i <= input; i++) {
					if (i % 2 == 0)
						printf("%d ", i);
				}

				break;
			}

			case 14: {
				int input;

				printf("Digite um numero inteiro positivo 'par': ");
				scanf("%d", &input);
				for (int i = input; i >= 0; i--) {
					if (i % 2 == 0)
						printf("%d ", i);
				}

				break;
			}

			case 15: {
				int input;

				printf("Digite um numero inteiro positivo impar: ");
				scanf("%d", &input);
				for (int i = 0; i <= input; i++) {
					if (i % 2 != 0) {
						printf("%d ", i);
					}
				}

				break;
			}

			case 16: {
				int input;

				printf("Digite um numero inteiro positivo impar: ");
				scanf("%d", &input);
				for (int i = input; i >= 0; i--) {
					if (i % 2 != 0)
						printf("%d ", i);
				}

				break;
			}

			case 17: {
				int input, soma = 0;

				printf("Digite um numero inteiro positivo: ");
				scanf("%d", &input);
				for (int i = 1; i <= input; ++i) {
					soma += i;
				}
				printf("A soma de 0 ate %d e igual a: %d", input, soma);

				break;
			}

			case 18: {
				int input, qntd_num, contador = 0, maior = -1000000;

				printf("Digite quantos numeros serao inseridos: ");
				scanf("%d", &qntd_num);
				for (int i = 0; i < qntd_num; ++i) {
					printf("Digite o %d numero: ", i + 1);
					scanf("%d", &input);

					if (input > maior) {
						maior = input;
						contador = 0;
					}

					if (input == maior)
						contador += 1;
				}
				printf("O maior numero inserido foi: %d e foi inserido %d vezes!", maior, contador);

				break;
			}

			case 19: {
				int input;

				printf("Insira um numero inteiro entre 100 e 999: ");
				scanf("%d", &input);
				printf("primeiro digito: %d, segundo digito: %d, terceiro digito: %d", input / 100,
					   input % 100 / 10, (input % 100) % 10);

				break;
			}

			case 20: {
				int input, contador = 0, pares = 0;

				do {
					printf("Digite um numero: ");
					scanf("%d", &input);

					if (input % 2 == 0) {
						pares += 1;
					}
					contador += 1;
				} while (input != 1000);
				printf("Foram digitados %d numero(s), sendo %d pare(s).", contador, pares);

				break;
			}

			case 21: {
				int input1, input2, soma = 0, multiplicacao = 1;

				printf("Digite dois numeros: ");
				scanf("%d %d", &input1, &input2);

				if (input1 <= input2) {
					for (int i = input1; i <= input2; ++i) {
						if (i % 2 == 0)
							soma += i;
						else
							multiplicacao *= i;
					}
				} else {
					for (int i = input1; i >= input2; i--) {
						if (i % 2 == 0)
							soma += i;
						else
							multiplicacao *= i;
					}
				}
				printf("A soma dos numeros pares no intervalo de %d a %d e igual a: %d", input1, input2, soma);
				printf("\nA multiplicacao dos numeros impares desse mesmo intervalo e igual a: %d", multiplicacao);

				break;
			}

			case 22: {
				int nota = 0, media = 0, valores = 0, contador = 0;

				do {
					printf("\nDigite a nota do aluno(entre 10 e 20): ");
					scanf("%d", &nota);

					if (nota < 10 || nota > 20) break;

					valores += nota;
					contador += 1;
					media = valores / contador;

					printf("Media atual para %d notas digitadas: %d", contador, media);
				} while (nota >= 10 && nota <= 20);

				break;
			}

			case 23: {
				int input;

				printf("Digite um numero positivo: ");
				scanf("%d", &input);

				for (int i = 1; i <= input; ++i) {
					if (input % i == 0) {
						printf("%d e divisivor de %d\n", i, input);
					}
				}
				break;
			}

			case 24: {
				int input, soma = 0;

				printf("Digite um numero inteiro: ");
				scanf("%d", &input);

				for (int i = 1; i < input; ++i) {
					if (input % i == 0) {
						printf("%d e divisivor de %d\n", i, input);
						soma += i;
					}
				}
				printf("A soma dos divisores e igual a: %d", soma);

				break;
			}

			case 25: {
				int soma = 0;

				printf("Soma de todos os numeros abaixo de mil que sao multiplos de 5 ou 3: ");

				for (int i = 1; i < 1000; ++i) {
					if (i % 3 == 0 || i % 5 == 0) {
						soma += i;
					}
				}
				printf("%d", soma);

				break;
			}

			case 26: {
				int input;
				int achou = 0;

				printf("Algoritimo pra encontrar o primeiro numero multiplo de 11, 13 ou 17 apos o numero inserido!");
				printf("\nInsira um numero: ");
				scanf("%d", &input);

				for (int i = input; achou != 1; ++i) {
					if (i % 11 == 0 || i % 13 == 0 || i % 17 == 0) {
						printf("%d e o numero desejado!", i);
						achou = 1;
					}
				}
			}

			case 27: {
				int input;
				float soma = 1;

				printf("Digite um numero inteiro para saber o numero harmonico: ");
				scanf("%d", &input);

				for (float i = 2; i <= input; ++i) {
					soma += 1 / i;
				}
				printf("A soma da serie harmonica: %.2f", soma);

				break;
			}

			case 28: {
				int input;
				float fatorial = 1;
				double E = 1;

				printf("Digite um numero inteiro, ele sera o valor de N em (E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!): ");
				scanf("%d", &input);

				for (float i = 1; i <= input; ++i) {
					for (float j = 1; j <= i; ++j) {  // calculando o fatorial
						fatorial *= j;
					}
					E += 1 / fatorial;
					fatorial = 1;
				}
				printf("O valor de E: %f", E);

				break;
			}

			case 29: {
				int input;
				float fatorial = 1;
				double S = 0;

				//Escreva um programa para calcular o valor da serie, para 5 termos.
				//S = 0 + 1=2! + 2=4! + 3=6! + ...

				printf("Digite um numero inteiro, ele sera o valor de N em (S = 0 + 1/2! + 2/4! + 3/6! + ...M/N!): ");
				scanf("%d", &input);

				input -= 1;

				for (float i = 1; i <= input; ++i) {

					for (float j = 1; j <= i; ++j) {  // calculando o fatorial
						fatorial = fatorial * (j * 2);
					}

					S += i / fatorial;
					fatorial = 1;
				}
				printf("O valor de S: %f", S);

				break;
			}

			case 30: {
				//30. Faca programas para calcular as seguintes sequˆencias:
				//1 + 2 + 3 + 4 + 5 + ::: + n
				//1 - 2 + 3 - 4 + 5 + ::: + (2n - 1)
				//1 + 3 + 5 + 7 + ::: + (2n - 1)
				int progama;

				printf("Digite qual progama deseja (1 a 3): ");
				scanf("%d", &progama);

				switch (progama) {
					case 1: {
						int input, soma = 0;

						printf("Digite um numero: ");
						scanf("%d", &input);

						for (int i = 1; i <= input; ++i) {
							soma += i;
						}
						printf("A soma de 1 ate %d e igual a: %d\n", input, soma);

						break;
					}

					case 2: {
						int input, soma = 0;

						printf("\nSoma com a formula (1-2+3-4+5+...+(2'n' - 1) )");
						printf("\nDigite o valor de 'n': ");
						scanf("%d", &input);

						for (int i = 1; i <= (2 * input - 1); ++i) {
							if (i % 2 != 0)
								soma += i;
							else
								soma -= i;
						}
						printf("A soma e igual a: %d\n", soma);

						break;
					}

					case 3: {
						int input, soma = 0;                    //1 + 3 + 5 + 7 + ::: + (2n - 1)

						printf("\nSoma com a formula (1 + 3 + 5 + 7 + ... + (2'n' - 1) )");
						printf("\nDigite o valor de 'n': ");
						scanf("%d", &input);

						for (int i = 1; i <= (2 * input - 1); ++i) {
							soma += 2 * i - 1;
						}
						printf("A soma com base na formula (1 + 3 + 5 + 7 + ... + (2n - 1) e igual a: %d\n", soma);

						break;
					}

					default:{
						printf("Exercicio invalido! Digite de 1 a 3!");
						break;
					}
				}
				break;
			}

			case 31: {
				float S = 0;

				printf("S = 1/1 + 3/2 + 5/3 + 7/4 + ... 99/50\n");

				for (float i = 1; i <= 50; ++i) {
					S += (2 * i - 1) / i;
					printf("%f ", S);
				}

				break;
			}

			case 32: {
				int valor[3], input;
				srand((unsigned) time(NULL));    //faz a funcao rand() ser diferente a cada execucao

				printf("Digite quantas vezes quer lançar os dados: ");
				scanf("%d", &input);

				for (int i = 1; i <= input; i++) {
					valor[1] = (rand() % 6) + (1);          //gera um numero aleatorio entre 6 e 1  https://pt.stackoverflow.com/questions/210172/gerar-números-aleatórios-em-c
					valor[2] = (rand() % 6) + (1);

					printf("O numero sorteado no dado 1 foi: %d, no 2 dado foi: %d\n", valor[1], valor[2]);

					if (valor[1] > valor[2])
						printf("No lancamento %d, o numero sorteado no dado 1 foi maior que no dado 2!\n\n", i);
					if (valor[1] < valor[2])
						printf("No lancamento %d, o numero sorteado no dado 2 foi maior que no dado 1!\n\n", i);
					if (valor[1] == valor[2])
						printf("Os numeros sorteados nos dados no lancamento %d foram iguais!\n\n", i);
				}

				break;
			}

			case 33: {
				int input, contador = 0, valor1, valor2;

				printf("Insira respectivamente 3 numeros inteiros positivos diferente de 0: ");     //Dados n e dois n´umeros inteiros positivos, i e j, diferentes de 0, imprimir em ordem
				scanf("%d %d %d", &input, &valor1, &valor2);                                        //crescente os n primeiros naturais que s˜ao m´ ultiplos de i ou de j e ou de ambos

				for (int i = 0; contador < input; i++) {
					if (i % valor1 == 0 || i % valor2 == 0) {
						printf("O numero %d e multiplo de %d e/ou %d e %d!\n", i, valor1, valor2);
						contador++;
					}
				}

				break;
			}

			case 34: {
				unsigned long int resultado = 1, valores[21];
				int Achou_o_numero = 0, impar_calculado = 0, divisor_impar_atual = 0, multiplicar_por_dois = 0;
				int input = 0;

				printf("Digite ate qual numero ser calculado o MMC, de 1 ate: ");
				scanf("%d", &input);

				for (int l = 1; l <= input; l++) {        //Atribui valor equivalente ao intervalo no vetor valores[], ex valores[5] = 5
					valores[l] = l;
					//printf(" valores[%d] = %d", l, l);
				}

				for (int i = 1;
					 Achou_o_numero != 1; i++)    //  Loop principal, executa o calculo enquanto nao achar o numero
				{
					for (int l = 1; l <= input; ++l) {
						if (valores[l] ==
							1) {              //se o numero ja for 1, nao precisa fatora-lo, entao pula pro proximo
							//printf("\n -- valores[%d] = 1, continue -- \n", l);
							continue;
						}

						if (valores[l] % 2 == 0) {          //Divide todos os numeros pares por 2
							valores[l] /= 2;
							multiplicar_por_dois = 1;
							//printf("\n| PAR |valores[%d] atual = %lu|\n", l, valores[l]);
						}
					}
					for (int j = 1; j <= input; j++)       //  Divide os numeros impares e primos
					{
						if (valores[j] % 2 != 0 && impar_calculado ==
												   0)   //  Verifica se o numero e impar ou nao e se ja foram calculados os impares nesse ciclo 0 = falso
						{
							for (int k = 3; impar_calculado ==
											0; k++)  //  Comeca a tentar dividir o numero impar por 3, se divir algum, tentara dividir todos os outros por 3 tambem
							{                                           //  Se nao for por 3, aumenta 1 e tenta todos de novo, se dividir algum por qualquer numero, ele tentara fatorar todos
								for (int l = 1; l <=
												input; l++) {     //  pelo mesmo numero e apos isso, ele saira da funcao e multiplicara o numero divido no resultado
									if (valores[l] % k == 0) {
										valores[l] /= k;
										divisor_impar_atual = k;
										//printf("\n| IMPAR | valores[%d] atual = %lu|\n", l, valores[l]);
										impar_calculado = 1;            //  Afirma que ja fatorou os numeros por algum numero, logo precisa multiplicar o numero dividido no resultado
									}
								}
							}
						}

					}

					impar_calculado = 0;              //  Zera a variavel pra poder encontrar outro numero impar ou primo que precise ser fatorado

					if (multiplicar_por_dois ==
						1)     //  Se dividiu algum(s) numero(s) por 2, multiplica o resultado por 2
						resultado *= 2;

					multiplicar_por_dois = 0;                 //  Zera a variavel pra poder verificar se ainda ha algum numero PAR pra ser fatorado
					resultado *= divisor_impar_atual;         //  Multiplica o resultado pelo numero que fatorou os valores[]

					Achou_o_numero = 1;                       //  Variavel bool, (verdadeiro == 1 ou falso == 0)

					for (int j = 1; j <=
									input; ++j) {       //  Verifica se ja achou o numero (quando o vetor valore[] estiver totalmente = 1
						if (valores[j] != 1) {
							Achou_o_numero = 0;
							break;
						}
					}
				}
				printf("\nresultado: %lu", resultado);

				break;
			}

			case 38: {
				int termo = 1000;
				int verificador = 0, mudar_termo = 0, acompanhar_valores = 0;
				int resultado[4];
				clock_t hora_inicial, hora_final;

				printf("Progama para descobrir os numeros cujo, a**2 + b**2 == c**2 && a + b + c = (VALOR)\n");
				printf("VALOR = 1000 por padrao, deseja mudar o valor? 1 para sim, 2(ou qualquer valor diferente de 1) para nao: ");
				scanf("%d", &mudar_termo);

				if (mudar_termo == 1) {
					printf("\nDigite o novo valor: ");
					scanf("%d", &termo);
				}

				printf("\nDeseja ver os valores de 'a', 'b' e 'c' em tempo real?(Nao recomendado!) Isso aumenta 'MUITO' o tempo de execucao do progama!\n");
				printf("1 para sim, 2(ou qualquer valor diferente de 1) para nao: ");
				scanf("%d", &acompanhar_valores);

				hora_inicial = clock();
				while (verificador != 1) {
					for (int c = termo / 3; c <= termo && verificador !=
														  1; ++c) {            // c tem q ser maior q termo / N = 3 (N = 3 pois e uma soma de 3 elementos (a b c)
						for (int b = 1; b < c && verificador != 1; ++b) {
							for (int a = 1; a < c && verificador != 1; ++a) {
								if (acompanhar_valores == 1)
									printf("|a = %d, b = %d, c = %d | a + b + c = %d|\n", a, b, c, (a + b + c));
								if (((a * a) + (b * b) == (c * c)) &&
									(a + b + c == termo)) {                     //para o qual a+b+c = 1000, a² + b² = c²
									verificador = 1;
									resultado[1] = a;
									resultado[2] = b;
									resultado[3] = c;
								}
							}
						}
						if (c == termo) {
							printf("\nNao existe valores para 'a', 'b' e 'c' que satisfaca a equacao!\n");
							goto fim_invalido;
						}
					}
				}

				printf("\n\n\n");
				printf("Valor de a = %d\n", resultado[1]);
				printf("Valor de b = %d\n", resultado[2]);
				printf("Valor de c = %d\n", resultado[3]);
				printf("(a**2 + b**2 == c**2) e (a + b + c = %d)\n", termo);

				hora_final = clock();
				printf("Tempo demorado para descobrir o numero: %lu minutos e %lu segundos",
					   (((hora_final - hora_inicial) / CLOCKS_PER_SEC) / 60),
					   (((hora_final - hora_inicial) / CLOCKS_PER_SEC) % 60));

				fim_invalido:
				break;
			}

			case 39: {
				int base = 0, altura = 0, resultado = 0;

				while (base <= 0) {
					printf("\nDigite a base do triangulo: ");
					scanf("%d", &base);
					if (base <= 0)
						printf("\nValor invalido, base deve ser maior que 0!");
				}
				while (altura <= 0) {
					printf("\nDigite a altura do triangulo: ");
					scanf("%d", &altura);
					if (altura <= 0)
						printf("Valor invalido, altura deve ser maior que 0!");
				}

				resultado = area_triangulo(base, altura);

				printf("\nA area do triangulo e igual a: %d", resultado);

				break;
			}

			case 40: {
				int input = 0, maior = -999999999;

				while (input >= 0) {
					printf("\nDigite um numero: ");
					scanf("%d", &input);
					if (input > maior)
						maior = input;
				}
				printf("\nO maior numero digitado foi: %d", maior);

				break;
			}

			case 41: {
				float resistencia_1, resistencia_2;
				float resultado;

				do {
					printf("\nDigite o valor da resistencia 1: ");
					scanf("%f", &resistencia_1);
					printf("\nDigite o valor da resistencia 2: ");
					scanf("%f", &resistencia_2);
					printf("\n--------------------------------------");

					resultado = (resistencia_1 * resistencia_2) / (resistencia_1 + resistencia_2);
				} while (resultado != 0);

				break;
			}

			case 42: {
				float input;

				do {
					printf("\nDigite um valor: ");
					scanf("%f", &input);

					if (input > 0) {
						printf("\nO quadrado do numero inserido e: %f", pow(input, 2));
						printf("\nO cubo do numero inserido e: %f", pow(input, 3));
						printf("\nA raiz quadrada do numero inserido e: %.20f", sqrt(input));
					}
				} while (input > 0);

				break;
			}

			case 43: {
				int input = 1, media, soma = 0, qntd_idades = 0;

				for (int i = 1; input != 0; i++) {
					printf("\nDigite a %d idade: ", i);
					scanf("%d", &input);
					if (input == 0)
						break;
					soma += input;
					qntd_idades++;
				}
				media = soma / qntd_idades;
				printf("\n\nA media das %d idades inseridas e igual a: %d", qntd_idades, media);

				break;
			}

			case 44: {  //Sequencia fibonacci ate o primeiro numero superior ao numero lido.
				long int input, contador = 0, fibonacci = 0;

				printf("\nDigite ate onde vai a sequencia de Fibonacci:  ");
				scanf("%d", &input);

				int a[50];
				a[1] = 1;
				a[2] = 1;
				//for (int j = 3; j <= 50; ++j) {
				//	a[j] = 0;
				//}

				printf("\nSequencia Fibonacci ate o primeiro numero superior a %d: 1 1 ", input);
				for (int i = 3; (a[i-1] <= input); i++) {   //enquanto a[i-1] pra verificar o ultimo i calculado, pois essa porra ta aumenta o i(i++) antes de verificar a condicao <= input
					a[i] = a[i-1] + a[i-2];
					printf(" %d", a[i]);
				}

				break;
			}

			case 45: {
				int opcao = 4;
				float input, output;

				while(opcao != 0)
				{
					printf("\n-----------------------------------");
					printf("\nSelecione uma opcao: ");
					printf("\nDigite '2' para converter km/h para m/s.\n");
					printf("Digite '1' para converter m/s em km/h.\n");
					printf("Digite '0' para sairdo exercicio 45.\n");
					scanf("%d", &opcao);
					if(opcao == 2){
						printf("Digite o valor em km/h: ");
						scanf("%f", &input);
						output = input/3.6;
						printf("\nA velocidade %.2f km/h em m/s e igual a: %fm/s", input, output);
					}
					if(opcao == 1){
						printf("Digite o valor em m/s: ");
						scanf("%f", &input);
						output = input*3.6;
						printf("\nA velocidade %.2f m/s em km/h e igual a: %.2fkm/h", input, output);
					}
					if(opcao == 0){
						printf("\nSaindo...");
						break;
					}
				}

				break;
			}

			case 46:
			{
				int input, numero_aleatorio, contador = 1;

				srand((unsigned) time(NULL));
				numero_aleatorio = (rand() % 1000) + (1);

				while(input != numero_aleatorio){
					printf("\nDigite um numero: ");
					scanf("%d", &input);

					printf("\n numero: %d", numero_aleatorio);
					if(input > numero_aleatorio)
						printf("\nO numero inserido e maior que o numero aleatorio!");
					if(input < numero_aleatorio)
						printf("\nO numero inserido e menor que o numero aleatorio!");
					if(input == numero_aleatorio)
						printf("\nParabens, voce acertou em %d tentativas!", contador);

					contador++;
				}
				break;
			}

			case 47:
			{
				float input_1, input_2;
				int opcao = 0;

				while (opcao != 5){
					printf("\n\nSelecione uma opcao: ");
					printf("\nDigite '1' para adicao.");
					printf("\nDigite '2' para subtracao.");
					printf("\nDigite '3' para multiplicacao.");
					printf("\nDigite '4' para divisao.");
					printf("\nDigite '5' para sair.");
					scanf("%d", &opcao);

					switch (opcao)
					{
						case 1: {
							printf("\nDigite o primeiro numero: ");
							scanf("%d", &input_1);
							printf("\nDigite o segundo numero: ");
							scanf("%d", &input_2);
							printf("\n%.2f + %.2f = %.2f", input_1, input_2, input_1 + input_2);
							break;
						}

						case 2: {
							printf("\nDigite o primeiro numero: ");
							scanf("%d", &input_1);
							printf("\nDigite o segundo numero: ");
							scanf("%d", &input_2);
							printf("\n%.2f - %.2f = %.2f", input_1, input_2, input_1 - input_2);
							break;
						}

						case 3: {
							printf("\nDigite o primeiro numero: ");
							scanf("%d", &input_1);
							printf("\nDigite o segundo numero: ");
							scanf("%d", &input_2);
							printf("\n%.2f x %.2f = %.2f", input_1, input_2, input_1 * input_2);
							break;
						}

						case 4: {
							printf("\nDigite o primeiro numero: ");
							scanf("%d", &input_1);
							printf("\nDigite o segundo numero: ");
							scanf("%d", &input_2);
							printf("\n%.2f / %.2f = %.2f", input_1, input_2, input_1 / input_2);
							break;
						}

						case 5:{
							printf("\nSaindo...");

							break;
						}
					}
					break;
				}

			}

			case 48:
			{//Faca um programa que some os termos de valor par da sequencia de Fibonacci, cujos valores nao ultrapassem quatro milhoes.
				unsigned long long int soma = 0;
				int input = 50, valor = 4000000;
				unsigned long long int a[input+1];

				a[1] = 1;
				a[2] = 1;
				for (int j = 3; j <= input+1; ++j) {
					a[j] = 0;
				}

				printf("\nSequencia Fibonacci cujos valores nao ultrapassem quatro milhoes: 1 1");
				for (int i = 3;; i++) {   //enquanto a[i-1] pra verificar o ultimo i calculado, pois essa porra ta aumenta o i(i++) antes de verificar a condicao <= input
					a[i] = a[i-1] + a[i-2];
					if(a[i] >= valor)						//parar a operacao se a[i] for maior que o numero desejado
						break;
					printf(" %lld", a[i]);
					if(a[i]%2 == 0)
						soma += a[i];
				}
				printf("\nSoma dos numeros pares da sequencia: %lld", soma);

				break;
			}

			case 49:
			{
				double Carlos = 3, Joao = 1, caderneta = 2.0/100.0, renda_fixa = 5.0/100.0;
				int meses;

				for(meses = 1; Joao <= Carlos; meses++){
					Carlos += Carlos*caderneta;
					Joao += Joao*renda_fixa;
					//printf("Mes %d, valor Joao = %lf | Valor Carlos = %lf\n", meses, Joao, Carlos);
				}
				printf("Apos %d meses, o valor de Joao igualou/ultrapassou o valor de Carlos!", meses-1);

				break;
			}

			case 50:
			{
				double altura_Chico = 1.50, altura_Ze = 1.10, crescimento_Chico = 0.02, crescimento_Ze = 0.03;
				int anos;

				for(anos = 1;altura_Ze < altura_Chico; ++anos){
					altura_Chico += crescimento_Chico;
					altura_Ze += crescimento_Ze;
					printf("Ano %d , altura Chico = %lf | altura Ze = %lf\n", anos, altura_Chico, altura_Ze);
				}
				printf("Foram necessarios %d anos para Ze ficar maior que Chico!", anos-1);

				break;
			}

			case 51:
			{
				double salario = 2000.0, aumento = 0.015;
				int ano = 1996;

				for(ano; ano != 2019; ano++){
					salario += salario*aumento;
					aumento *= 2;
					printf("Salario no ano %d e igual a: %.2lf\n", ano, salario);
				}
				printf("\nSalario em 2019: %.2lf\n", salario);

				break;
			}

			case 52:
			{
				int saque, nota_100 = 0, nota_50 = 0, nota_20 = 0, nota_10 = 0, nota_5 = 0, nota_2 =0, moeda_1 = 0;

				printf("Digite a quantidade de dinheiro a ser sacado: ");
				scanf("%d", &saque);

				nota_100 = saque/100;
				nota_50 = saque%100/50;
				nota_20 = ( (saque%100) % 50 ) / 20;
				nota_10 = ( ( (saque%100) % 50 ) % 20) / 10;
				nota_5 =  ( ( ( (saque%100) % 50 ) % 20) % 10) / 5;
				nota_2 =  ( ( ( ( (saque%100) % 50 ) % 20) % 10) % 5) / 2;
				moeda_1 = ( ( ( ( ( (saque%100) % 50 ) % 20) % 10) % 5) % 2) / 1;

				printf("Quantidade de notas de 100: %d\n", nota_100);
				printf("Quantidade de notas de 50: %d\n", nota_50);
				printf("Quantidade de notas de 20: %d\n", nota_20);
				printf("Quantidade de notas de 10: %d\n", nota_10);
				printf("Quantidade de notas de 5: %d\n", nota_5);
				printf("Quantidade de notas de 2: %d\n", nota_2);
				printf("Quantidade de moedas de 1: %d\n", moeda_1);

				break;
			}

			case 53:
			{
				int tamanho_triangulo, valor_da_ultima_linha = 1, contador_numeros_por_linha = 1;

				printf("Digite o tamanho do Triangulo de Floyd: ");
				scanf("%d", &tamanho_triangulo);

				for(int i = 1; i <= tamanho_triangulo ; i++)
				{
					for (int j = valor_da_ultima_linha; contador_numeros_por_linha <= i; ++j)
					{
						printf("%d ", j);
						valor_da_ultima_linha = j + 1;
						contador_numeros_por_linha++;
					}
					printf("\n");
					contador_numeros_por_linha = 1;
				}
				break;
			}

			default:
				if(exercicio != 0)
					printf("Numero invalido!");
				else
					printf("\nSaindo do progama...");

		}
	}
	return 0;
}
#pragma clang diagnostic pop	//Desativar correcoes chatas na IDE Clion!

int area_triangulo(int base, int altura) {
	int result;
	result = (base * altura) / 2;
	return result;
}
//aaa
