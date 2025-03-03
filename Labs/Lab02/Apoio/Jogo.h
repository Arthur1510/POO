// declara��o da classe Jogo
#include <string>
using std::string;

class Jogo
{
private:
	string nome;                                        // nome do jogo
	float preco;                                        // pre�o do jogo
	int horas;                                          // quantidade de horas jogadas
	float custo;                                        // valor por hora jogada
	
	void calcular()                                     // calcular custo da hora jogada
	{ 
		if (horas > 0)
			custo = preco / horas; 
	}          

public:
	void adquirir(const string& titulo, float valor);	// preencher informa��es
	void atualizar(float valor);                        // atualizar pre�o do jogo
	void jogar(int tempo);                              // registrar horas jogadas
	void exibir();                                      // mostrar infor
};

