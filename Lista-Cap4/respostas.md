1- a) if (x = 0)em vez de if (x == 0)
O =guarda o valor 0dentro de x(apaga o valor antigo). Como o resultado dessa operação é 0(falso), o código dentro do nunca roda .if 

b) Como o C lê números no if
OC não usa verdadeiro/falso por texto:

Falso: Apenas o número (ou ).00.0

Verdadeiro: Qualquer número diferente de zero (positivo ou negativo, ex: , , ).  1 -5 3.14

c) O que if (x = -5)vai rodar? Sim, vai. O código guarda -5na variável x. Como -5não é zero, o C significa como verdadeiro e executa o bloco.


2- a) Mensagem impressa e Justificação
* **Saída:** Serão impressas as palavras **`Opção B`**.
* **Justificação:** Sem chaves `{ }`, o C associa a cláusula `else` ao `if` mais próximo. Por isso, o `else` pertence ao `if (y > 10)`. Como $x = 15$ faz o primeiro `if (x > 10)` ser verdadeiro, o programa entra no segundo teste. Sendo $y = 5$, a condição `y > 10` é falsa, acionando o `else` que imprime `Opção B`.

---

### b) Regra oficial da Linguagem C para o `else`
Na ausência de chaves `{ }`, a cláusula `else` é **sempre associada ao `if` mais próximo que ainda não possua um `else` correspondente**, independentemente da indentação do código.

---

### c) Código reescrito com chaves
```c
int x = 15, y = 5;

if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");


    }

