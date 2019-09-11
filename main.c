//
// Created by Joao lindoooo on 11/09/2019.
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int area_triangulo();

int main() {
    int exercicio = 1000;

    printf("-----------Bem vindo a lista de exercicios! no git ------------\n");
    printf("Para sair digite 0!\n");
    printf("Para executar um exercicio especifico, apenas digite o numero do mesmo!\n");


    while (exercicio != 0) {
        printf("\n\nDigite 0 para sair!");
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
                        printf("A soma de 1 ate %d e igual a: %d", input, soma);

                        break;
                    }

                    case 2: {
                        int input, soma = 0;

                        printf("Digite um numero: ");
                        scanf("%d", &input);

                        for (int i = 1; i <= (2 * input - 1); ++i) {
                            if (i % 2 != 0)
                                soma += i;
                            else
                                soma -= i;
                        }
                        printf("A bagunca e igual a: %d\n", soma);

                        break;
                    }

                    case 3: {
                        int input, soma = 0;                    //1 + 3 + 5 + 7 + ::: + (2n - 1)

                        printf("Digite um numero: ");
                        scanf("%d", &input);

                        for (int i = 1; i <= (2 * input - 1); ++i) {
                            soma += 2 * i - 1;
                        }
                        printf("A soma com base na formula (1 + 3 + 5 + 7 + ... + (2n - 1) e igual a: %d\n", soma);

                        break;
                    }

                    default:
                        break;
                }
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
                    valor[1] = (rand() % 6) +
                               (1);          //gera um numero aleatorio entre 6 e 1  https://pt.stackoverflow.com/questions/210172/gerar-números-aleatórios-em-c
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

                printf("Insira respectivamente 3 numeros inteiros positivos diferente de 0: ");
                scanf("%d %d %d", &input, &valor1, &valor2);

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

                for (int l = 1; l <=
                                input; l++) {        //Atribui valor equivalente ao intervalo no vetor valores[], ex valores[5] = 5
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
                            goto fim;
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
                fim:

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

            case 44: {

            }

            case 45: {

            }


            default:
                printf("Numero invalido!");

        }
    }
    return 0;
}

int area_triangulo(int base, int altura) {
    int result;
    result = (base * altura) / 2;
    return result;
}


