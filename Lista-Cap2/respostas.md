# Respostas Lista Cap 2

1- a) 2
   
   b) A variável é do tipo int e o valor atribuído é float. Assim, a parte fracionária é descartada e resta apenas o número inteiro. Nome do fenômeno: Coerção Implícita de Tipo (ou conversão implícita) e Truncamento (perda da parte decimal).
   
   c) Para evitar ou controlar esse comportamento:
- Manter precisão: Use o tipo double (ou float) com %f no printf.
- Truncamento consciente: Use casting explícito (int) 2.97 para indicar a conversão proposital.
- Arredondamento: Use a função round() da biblioteca <math.h> para arredondar ao inteiro mais próximo (ex: (int) round(2.97) resulta em 3).



2- a) Essa biblioteca é antiga e foi feita só para o MS-DOS/Windows. Como ela não é um padrão da linguagem C, o seu código simplesmente não vai compilar no Linux, macOS ou em servidores. Usá-la prende seu programa a um único sistema.
   
   b) Para ler: getchar() ou fgetc(stdin), para mostrar: putchar() ou fputc(c, stdout). A única diferença prática é que elas esperam o usuário apertar [ENTER] antes de enviar o dado, já que funcionam com buffer.
   
   c) na subpasta 



4- a = 33
   b = 20
   c = 13
   d = 1

Cálculo e Justificativa Passo a Passo

Estado Inicial: a = 1, b = 2, c = 3, d = 4

1) a += b + c

   b + c --> 2 + 3 = 5

   a = a + 5 --> 1 + 5 = 6

   a = 6, b = 2, c = 3, d = 4.

2) b *= c = d + 2

   d + 2 --> 4 + 2 = 6

   c = 6

   b *= 6 --> b = 2 * 6 = 12

   a = 6, b = 12, c = 6, d = 4.

3) d %= a + a + a;

   a + a + a --> 6 + 6 + 6 = 18

   d = 4 % 18 = 4

   a = 6, b = 12, c = 6, d = 4.

4) d -= c -= b -= a

   b -= a --> b = 12 - 6 = 6 (novo b = 6)

   c -= b --> c = 6 - 6 = 0 (novo c = 0)

   d -= c --> d = 4 - 0 = 4

   a = 6, b = 6, c = 0, d = 4.

5) a += b += c += 7;

   c += 7 --> c = 0 + 7 = 7 (novo c = 7)

   b += c --> b = 6 + 7 = 13 (novo b = 13)

   a += b --> a = 6 + 13 = 19 (novo a = 19)


5- a) 1
   
   b) 0
   
   c) 0
   
   d) 0
   
   e) 1
   
   f) 0
   
   g) 1
   
   h) 1
   
   i) 0
   
   j) 0



6- a) Prefixado (++n): Aumenta o valor antes de usar; pós-fixado (m++): Usa o valor atual primeiro e só aumenta depois.

Valores na tela:

Trecho A: n = 6, x = 6 (Somou antes de salvar no x)

Trecho B: m = 6, y = 5 (Salvou o 5 no y e só depois somou)

   b) O  C não garante a ordem em que ele resolve os argumentos passados para uma função (ele pode ler da esquerda para a direita ou vice-versa, dependendo do compilador). Quando você tenta ler n e alterar seu valor (n++) dentro da mesma linha, gera o que chamamos de comportamento indefinido. Na prática, o resultado fica imprevisível e pode mudar totalmente de um computador para outro.




   
   
