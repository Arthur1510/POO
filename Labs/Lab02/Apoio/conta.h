#pragma once

#include <iostream>
#include <string>

using namespace std;

class ContaBancaria
{
private:
    string nomeCliente;
    int numeroConta;
    double saldoConta;

public:
    ContaBancaria(string nome, int num, double saldo);

    void exibirDados() const;
    void depositar(double valorDeposito);
    void sacar(double valorSaque);
};

/*
métodos de uma classe para representar uma conta bancária. Os 
dados membro da classe devem incluir o nome do cliente (uma string), o número 
da conta (um inteiro) e o saldo (um ponto-flutuante).  
 
As funções membro devem permitir: 
 
a. Criar e inicializar um objeto 
b. Exibir os dados da conta 
c. Depositar dinheiro 
d. Sacar dinheiro 
*/