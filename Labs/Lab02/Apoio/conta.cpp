#include "conta.h"

ContaBancaria::ContaBancaria(string nome, int num, double saldo)
{
    nomeCliente = nome;
    numeroConta = num;
    saldoConta = saldo;
}

// ContaBancaria::ContaBancaria(string nome, int num, float saldo) : 
// nomeCliente(nome), numeroConta(num), saldoConta(saldo) {}

void ContaBancaria::exibirDados() const {
        cout << "\n===== Dados da Conta =====" << endl;
        cout << "Nome: " << nomeCliente << endl;
        cout << "Numero da Conta: " << numeroConta << endl;
        cout << "Saldo: R$ " << saldoConta << endl;
    }

void ContaBancaria::depositar(double valorDepositado) {
    if (valorDepositado > 0) {
        saldoConta += valorDepositado;
        cout << "Deposito de R$ " << valorDepositado << " realizado com sucesso!" << endl;
    } else {
        cout << "Valor invalido para depósito!" << endl;
    }
}

void ContaBancaria::sacar(double valorSaque) {
    if (valorSaque > 0 && valorSaque <= saldoConta) {
        saldoConta -= valorSaque;
        cout << "Saque de R$ " << valorSaque << " realizado com sucesso!" << endl;
    } else {
        cout << "Saldo insuficiente ou valor invalido!" << endl;
    }
}
