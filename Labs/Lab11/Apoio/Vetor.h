#include <iostream>
using std::ostream;

class Vetor
{
public: 
	enum Coord { RET, POL };

private:
	double x, y;			// coordenadas cartesianas
	double mag;				// comprimento do vetor
	double ang;				// �ngulo do vetor em graus
	Coord rep;				// representa��o padr�o
	
	void SetMag();			// ajusta magnitude com base em (x,y)
	void SetAng();			// ajusta �ngulo com base em (x,y)
	void SetX();			// ajusta posi��o x com base em magnitude e �ngulo
	void SetY();			// ajusta posi��o y com base em magnitude e �ngulo

public:
	Vetor();
	Vetor(double n1, double n2, Coord tipo = RET);

	double Magnitude() { return mag;  }
	double Angulo() { return ang; }
	void SetCoord(Coord modo) { rep = modo; }

	Vetor operator+(const Vetor& v) const;
	Vetor operator-(const Vetor& v) const;
	Vetor operator-() const;
	Vetor operator*(double n) const;
	friend Vetor operator*(double n, const Vetor& v);
	friend ostream& operator<<(ostream& os, const Vetor& v);
};
