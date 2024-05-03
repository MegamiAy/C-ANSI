# colas/explicações

## operadores

* **Operadores Aritméticos:** são usados para realizar operações matemáticas básicas.

      + adição  -------------------------------  5 + 5 = 10
      - subtração  ----------------------------  10 - 3 = 7
      * multiplicação  ------------------------  3 * 4 = 12
      / divisão  ------------------------------  10 / 5 = 2
      % módulo, retornar o resto da divisão  --  3 % 2 = 1

* **Operadores de Atribuição:** são usados atribuir valores a variáveis. O operador de atribuição básico é =. 

      = atribuição simples  -------------------  int x = 5
      += adição e atibuição  ------------------  x += 3  (x += 3 resulta em 8)
      -= subtração e atribuição  --------------  x -= 3  (x -= 3 resulta em 2)
      *= multiplicação e atribuição  ----------  x *= 3  (x *= 3 resulta em 15)
      /= divisão e atribuição  ----------------  x /= 3  (x /= 3 resulta em 1.66)
      %= módulo e atribuição  -----------------  x %= 3  (x %= 3 resulta em 2)

* **Operadores de Comparação:** são usados para comparar valores.

      == igual a  -----------------------------  5 == 5 (verdadeiro)
      != diferente de  ------------------------  5 != 3 (verdadeiro)
      < menor que  ----------------------------  2 < 5 (verdadeiro)
      > maior que  ----------------------------  8 > 5 (verdadeiro)
      <= menor ou igual a  --------------------  4 <= 4 ou 3 <= 4 (verdadeiro)
      >= maior ou igual a  --------------------  5 >= 5 ou 6 >= 5 (verdadeiro)

* **Operadores Lógicos:** são usados para combinar expressões booleanas.

      && lógico AND  --------------------------  (5 > 3) && (4 < 6) é (verdadeiro)
      || lógico OR  ---------------------------  (2 == 2) || (3 == 3) é (verdadeiro)
      ! lógico NOT  ---------------------------  !(5 == 5) é ( falso

* **Operadores de Incremento e Decremento:** são usados para incrementar ou decrementar o valor de uma variável por uma unidade.

      ++ incremento  --------------------------  int a = 5; a++ (agora 'a' é igual a 6)
      -- decremeto  ---------------------------  int b = 5; b-- (agora 'b' é igual a 4)

## estruturas de repetição

* **Inicialização:** É onde você inicializa a variável de controle do loop. Geralmente, você declara e/ou atribui um valor inicial à variável que controla o número de iterações do loop.
* **Condição:** É uma expressão que é avaliada antes de cada iteração do loop. Se a condição for verdadeira, o bloco de código dentro do loop é executado. Se for falsa, o loop é encerrado.
* **Atualização:** É onde você atualiza a variável de controle do loop. Isso geralmente envolve incrementar ou decrementar o valor da variável de controle para que a condição do loop eventualmente se torne falsa e o loop seja encerrado.
* **Bloco de código:** É o conjunto de instruções que são executadas repetidamente enquanto a condição do loop for verdadeira.

### for

  `FOR` - é uma estrutura de controle que permite executar um bloco de código várias vezes.
* pré-ordenado.

**sintaxe geral do laço:**

    for (inicialização; condição; atualização) {
        // Bloco de código a ser repetido
    }

**exemplo de for** que imprime os números de 1 a 5:

    int main() {
        int i;
  
        for (i = 1; i <= 5; i++) {
            printf("%d\n", i);
        }
        
        return 0;
    }

* **Inicialização:** i é iniciado com 1
* **Condição:** o loop continua enquanto i for menor ou igual a 5
* **Atualização:** i é incrementado em 1 após cada iteração: - 1+1= 2, 1+2=3...

### while

  `WHILE` - é útil quando você não sabe quantas vezes precisará repetir uma ação e só deseja continuar até que uma condição seja atendida.
* pré-ordenado.

**sintaxe geral do laço:**

    while (condição) {
        // Bloco de código a ser repetido
    }

* **exemplo de while** que imprime os números de 1 a 5:

      int main() {
        int i = 1;
    
        while (i <= 5) {
            printf("%d\n", i);
            i++; // incrementa i para evitar um loop infinito
        }
    
        return 0;
      }

* **Condição:** enquanto i for menor ou igual a 5, o bloco de código será executado.

### do while

 `DO-WHILE` - no do-while, o bloco de código é executado pelo menos uma vez antes que a condição seja verificada. Ou seja, mesmo se a condição do loop for falsa desde o início, o bloco de código será executado pelo menos uma vez.
* pós-ordenado.

**sintaxe geral do laço:**

    do {
        // Bloco de código a ser repetido
    } while (condição);

* **exemplo de while** que imprime os números de 1 a 5:

      int main() {
          int i = 1;
  
          do {
              printf("%d\n", i);
              i++; // Incrementa i para evitar um loop infinito
          } while (i <= 5);
      
          return 0;
      }

  * **Executado 1 vez.**
  * **Condição:** só depois de ser executado uma vez a condição é verificada.
