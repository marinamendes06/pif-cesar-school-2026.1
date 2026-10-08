1- a) A diferença é o momento do teste e a quantidade de execuções. O whileteste a condição antes de rodar, podendo executar 0 vezes. O do-whiletestamento depois, garantindo que o bloco execute pelo menos 1 vez.

b) for: Quando sei exatamente a quantidade de repetições (ex: percorrer um array de 0 a N).

while: Quando não sei quantas vezes vai repetir a execução depende de uma condição inicial (ex: ler até o fim de um arquivo).

do-while: Quando preciso executar o código ao menos uma vez antes de validar (ex: menu de opções ou validação de entrada do usuário).

c) É um erro de lógica. O ponto e vírgula indica um corpo vazio. Se a condição for verdadeira, o programa fica preso em um loop infinito executando "nada", sem dar erro de compilação.


2- a) O erro ocorre porque a variável somafoi declarada dentro do bloco do for. Por isso, ela só existe dentro das chaves do laço. Fora dele, na linha do printf, o compilador não a regular e gera um erro de variável não declarada.

b) Porque como somafoi declarada dentro do laço, ela é destruída ao final de cada iteração e recriada com o valor 0na iteração seguinte. Assim, ela nunca acumula a soma total, calculando apenas o quadrado idaquela iteração específica.


3- **a)** A sequência impressa é: `36`, `18`, `9`, `4`, `2`, `1`.

*(Como a divisão é entre inteiros, os decimais são truncados: 9 / 2 = 4, 4 / 2 = 2, 2 / 2 = 1, e 1 / 2 = 0, encerrando o laço).*

**b)**

* **Comportamento e `ch + 1`:** O trecho lê caracteres do teclado sem precisar de Enter (`getch()`) e imprime o caractere seguinte na tabela ASCII (ex: digita 'A', imprime 'B'). O laço encerra quando o usuário digita 'X'.
* **Necessidade dos parênteses:** Em C, o operador de comparação `!=` tem precedência sobre o de atribuição `=`. Sem os parênteses, `ch = getch() != 'X'` avaliaria primeiro se o caractere é diferente de `'X'` (resultando em 0 ou 1) e depois atribuiria esse valor booleano a `ch`, em vez de guardar o caractere lido.

**c)** O laço pode ser interrompido usando o comando `break;` dentro de uma condição `if` no corpo do laço, ou chamando um `return` caso esteja dentro de uma função.

4- **a)** O `break` encerra imediatamente a execução do laço (`for` ou `while`). O programa descarta o restante das instruções do laço e salta para a primeira linha de código logo após a chave de fechamento desse laço.

**b)** O `continue` interrompe apenas a iteração atual, pulando o restante do código do corpo do laço e avançando para a próxima iteração. No caso do `for`, a expressão executada imediatamente após o `continue` é a **expressão de incremento/decremento** (a terceira expressão do cabeçalho).

**c)** Apenas o **laço interno** é interrompido. O `break` atua somente sobre o laço em que está diretamente contido, fazendo com que o laço externo continue sua execução normalmente na iteração seguinte.

5- a) O laço executará exatamente 5 iterações (para $i = 0, 1, 2, 3, 4$ e $j = 10, 9, 8, 7, 6$). Quando $i$ e $j$ chegam a 5, a condição $i < j$ torna-se falsa e o laço encerra.

b) i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

6- a) O valor final impresso será 6.

b) Passo a passo das avaliações (x++ < 5):

Como o pós-incremento (x++) usa o valor atual de x na comparação e só incrementa depois:

x = 0: compara 0 < 5 (Verdadeiro). x vira 1.

x = 1: compara 1 < 5 (Verdadeiro). x vira 2.

x = 2: compara 2 < 5 (Verdadeiro). x vira 3.

x = 3: compara 3 < 5 (Verdadeiro). x vira 4.

x = 4: compara 4 < 5 (Verdadeiro). x vira 5.

x = 5: compara 5 < 5 (Falso). O laço encerra, mas o incremento ainda acontece, fazendo x virar 6.
