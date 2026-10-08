1- Sensibilidade a Caixa (Case Sensitivity) e Identificadores em C (Cap. 1) — A linguagem C diferenciação rigorosamente letras secretas e minúsculas na formação de nomes de identificadores e palavras-chave. Com base nessa premissa, analise os pares de identificadores abaixo e assinale a alternativa correta:

a) Os nomes de variáveis ​​'numero' e 'Numero' referenciam o mesmo endereço de memória.

b) A palavra-chave 'Main' com 'M' maiúsculo é reconhecida pelo compilador como ponto de entrada válida.

c) Todos os pares de nomes ('valor'/'VALOR', 'peso'/'Peso', 'taxa'/'TAXA') representam identificadores totalmente diferentes para o compilador.

d) A atenção à caixa baixa/alta depende exclusivamente do sistema operacional utilizado na compilação.**

2- Especificadores de Formato, Sequências de Escape e Erros de Compilação (Cap. 1) — Um estudante iniciante escreveu o código C abaixo tentando imprimir mensagens formatadas com quebras de linha e tabulações, mas revelaram erros de compilação. Identifique os três erros sintáticos/estruturais presentes no código:

#include <stdio.h>
#nclude <stdlib.h>; //Presença errada do ponto e virgula e o erro de digitação no include int Main() //main com M maiusculo {
int idade = 20;
printf(A idade do aluno eh: %d anos.. , idade); //Falta das aspas

Escola César | Programação Imperativa e Funcional | Página 2 //Não está comentado corretamente, faltam o "//" ou o "*/"

cout << endl; //Pertecem ao C++ system("PAUSE");
return 0;
}

3- Operadores de Atribuição Composta e Avaliação Sequencial (Cap. 2) — Os operadores de atribuição em C executam suas ações da direita para a esquerda e podem ser combinados com operadores aritméticos. Determine os valores finais de a, b, ced após a execução da sequência abaixo: *int a = 2, b = 4, c = 5, d = 10;

uma + = b + c; // Valor final de a = 11

b *= c = d - 2; // Valores finais de bec = 32

d %= a + 3; // Valor final de d = 0

uma += b += c += 5; // Valores finais de a, bec = ?*

4- Avaliação de Expressões Lógicas, Relacionais e Precedência (Cap. 2) — Considerar como variáveis ​​inteiras i = 2, j = 3, k = 0 e como variáveis ​​de ponto flutuante x = 2,5, y = 5,0. Avalie cada expressão abaixo e determine seu resultado lógico em C (1 para Verdadeiro, 0 para Falso): a) i < j + 2 => Resultado: ?
b) 2 * i - 5 <= j - 4 => Resultado: ?
c) !k && (x + y >= 7,5) => Resultado: ?
d) !(eu == j) || (y / x == 2,0) => Resultado: ?
e) eu == 2 && j == 4 || k == 0 => Resultado: ?

5- Estruturas de Repetição: Comparação entre for, while e do-while (Cap. 3) — As estruturas de reprodução permitem a execução iterativa de instruções em C. Analise as características de for, while e do-while e responda fundamentalmente:
a) Qual é a diferença essencial entre while e do-while em relação ao número mínimo de execuções do bloco de código e ao momento do teste condicional? DO WHILE realiza o teste ANTES da execução do bloco de código,
já o WHILE, realiza DEPOIS da execução.

b) Em que cenários o laço para se apresenta como a escolha mais elegante e legível frente ao laço enquanto? Quando se
sabe o número de repetições feitas pelo programa.

c) O trecho de código 'while (condicação);' (com ponto-e-vírgula ao final do título) constitui um erro de compilação ou de lógica? O que acontece se condição de verdade?
O ponto e vírgula ao final do cabeçalho não causa erro de compilação, pois representa uma instrução nula em C.
para verdade, o programa entrará em um laço infinito, pois executará repetidamente o bloco vazio (ponto e vírgula)
sem nunca atualizar a condição de parada.

6- Escopo de Bloco e Comandos de Desvio (break e continue) (Cap. 3) — Analise o programa abaixo que calcula a soma acumulada de quadrados dentro de um laço para conter um comando de desvio e controle de escopo interno:
#include <stdio.h>
#include <stdlib.h>
int main() {
int i;
for (i = 1; i <= 10; i++) {
if (i == 5) continuar;
se (i == 8) quebrar;
int soma = 0;
soma += eu * eu;
}
printf("Soma final = %d\n", soma);
sistema("PAUSA");
retornar 0; }

a) Por que o compilador emitirá um erro de compilação na instrução printf final?
A variável soma foi declarada dentro do bloco interno do laço for (int soma = 0;). Fazendo com que seu escopo seja restrito ao bloco. Quando o printf tenta acessar algo fora do laço, o compilador gera um erro informando que a variável não foi declarada naquele escopo. Além disso, declarar e inicializar soma = 0 dentro do laço resetava seu valor a cada iteração.

b) Quais iterações do laço serão realizadas e qual o impacto dos comandos continua e quebra no fluxo?
Pára
eu
=
1
,
2
,
3
,
4
: O bloco executa normalmente.
Pára
eu
=
5
: A instrução continua é acionada, fazendo o programa pular o restante do corpo do laço e ir direto
para o próximo incremento (
eu
+
+
).
Para
eu
=
6
,
7
: O bloco executa normalmente.
Pára
eu
=
8
: A instrução break é acionada, interrompida e encerrando imediatamente o laço para.
Iterações que calculam:
eu
=
1
,
2
,
3
,
4
,
6
,
7

c) Reescreva o código corrigindo o escopo de 'soma' e apresente o resultado que será impresso no console.

#include <stdio.h> #include <stdlib.h>

*int main() {
int i;
int soma = 0;

for (i = 1; i <= 10; i++) {  
    if (i == 5) continue;  
    if (i == 8) break;  
    soma += i * i;  
}  

printf("Soma final = %d\n", soma);  
return 0;  
}*
