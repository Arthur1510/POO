#include "conta.h"

int main()
{
    // Criando um objeto da classe ContaBancaria
    ContaBancaria minhaConta("João Silva", 12345, 1000.0);

    // Exibindo dados iniciais
    minhaConta.exibirDados();

    // Realizando operações bancárias
    minhaConta.depositar(500.0);
    minhaConta.sacar(300.0);
    minhaConta.sacar(1500.0); // Tentativa de saque maior que o saldo

    // Exibindo dados após as operações
    minhaConta.exibirDados();

    return 0;
}