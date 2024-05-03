# colas/explicações

## operadores

## estruturas de repetição

  `FOR` - é uma estrutura de controle que permite executar um bloco de código várias vezes.

**sintaxe geral do laço:**

    for (inicialização; condição; atualização) {
        // Bloco de código a ser repetido
    }

* **Inicialização:** É onde você inicializa a variável de controle do loop. Geralmente, você declara e/ou atribui um valor inicial à variável que controla o número de iterações do loop.
* **Condição:** É uma expressão que é avaliada antes de cada iteração do loop. Se a condição for verdadeira, o bloco de código dentro do loop é executado. Se for falsa, o loop é encerrado.
* **Atualização:** É onde você atualiza a variável de controle do loop. Isso geralmente envolve incrementar ou decrementar o valor da variável de controle para que a condição do loop eventualmente se torne falsa e o loop seja encerrado.
* **Bloco de código:** É o conjunto de instruções que são executadas repetidamente enquanto a condição do loop for verdadeira.

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
