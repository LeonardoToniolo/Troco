# Troco
Atividade feita para fins academicos visando ensinar metodos gulosos

## Descrição
O algorítmo tenta definir um valor específico utilizando o menor número possível de cédulas, tarefa muito comum ao calcular troco de uma transação financeira.

## Funcionamento
O algorítimo percorre o vetor de "valor de cédulas" informado. Para cada item, verifica-se se a soma total das cédulas já selecionadas, com a nova cedula que se deseja testar, caso o valor ultrapasse o montante desejado, o algorítimo passa para o próximo item da lista. Caso contrário, a cedula é adicionada a contagem. 

O algorítimo se repete até que não hajam mais valores de cédulas a testar.

## Discussão
Pode ser vantajoso ordenar o vetor de "valor de cédulas" recebido, para garantir o ideal funcionamento do algorítimo.
