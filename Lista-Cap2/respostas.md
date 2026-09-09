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

   3- 
