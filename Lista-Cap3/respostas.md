1- a) A diferença é o momento do teste e a quantidade de execuções. O whileteste a condição antes de rodar, podendo executar 0 vezes. O do-whiletestamento depois, garantindo que o bloco execute pelo menos 1 vez.

b) for: Quando sei exatamente a quantidade de repetições (ex: percorrer um array de 0 a N).

while: Quando não sei quantas vezes vai repetir a execução depende de uma condição inicial (ex: ler até o fim de um arquivo).

do-while: Quando preciso executar o código ao menos uma vez antes de validar (ex: menu de opções ou validação de entrada do usuário).

c) É um erro de lógica. O ponto e vírgula indica um corpo vazio. Se a condição for verdadeira, o programa fica preso em um loop infinito executando "nada", sem dar erro de compilação.


2- a) O erro ocorre porque a variável somafoi declarada dentro do bloco do for. Por isso, ela só existe dentro das chaves do laço. Fora dele, na linha do printf, o compilador não a regular e gera um erro de variável não declarada.

b) Porque como somafoi declarada dentro do laço, ela é destruída ao final de cada iteração e recriada com o valor 0na iteração seguinte. Assim, ela nunca acumula a soma total, calculando apenas o quadrado idaquela iteração específica.


