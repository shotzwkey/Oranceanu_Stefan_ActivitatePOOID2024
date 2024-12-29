#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Strada
{
private:
	const int material;
	char* adresa;
	int numar;
	static int locatie;

public:

	friend void afiseazaDetaliiLocatieStrada(const Strada& a);

	int getMaterial() {
		return this->material;
	}

	const char* getAdresa() {
		return this->adresa;
	}

	void setAdresa(const char* _adresa) {
		if(this->adresa != nullptr)
			delete[] this->adresa;
		if (_adresa != nullptr) {
			this->adresa = new char[strlen(_adresa) + 1];
			strcpy(this->adresa, _adresa);
		}
		else {
			this->adresa = nullptr;
		}
	}

	int getNumar() {
		return this->numar;
	}

	void setNumar(int _numar) {
		this->numar = _numar;
	}

	static int getLocatie() {
		return Strada::locatie;
	}

	static void setLocatie(int _locatie) {
		Strada::locatie = _locatie;
	}

	Strada(int _material, const char* _adresa, int _numar): material(_material)
	{
		if (_adresa != nullptr)
		{
			this->adresa = new char[strlen(_adresa) + 1];
			strcpy(this->adresa, _adresa);
		}
		else
		{
			this->adresa = nullptr;
		}

		if (_numar > 0)
		{
			this->numar = _numar;
		}
		else
		{
			this->numar = 0;
		}
	}

	Strada(): material(0)
	{
		this->adresa = nullptr;
		this->numar = 0;
	}

	Strada(int _numar) : material(0)
	{
		this->adresa = nullptr;
		this->numar = _numar;
	}

	static void modificaLocatie(int locatie)
	{
		Strada::locatie = locatie;
	}

	void afisare() {
		cout << "\nAfisare obiect de tip STRADA\n";
		cout << "Material: " << this->material << endl;
		if (this->adresa != nullptr)
			cout << "Adresa: " << this->adresa << endl;
		else
			cout << "Adresa: NU S-A SPECIFICAT" << endl;
		cout << "Numar: " << this->numar << endl;
		cout << "--------------------------";
	}

	Strada(const Strada &a) : material(a.material) {
		if (a.adresa != nullptr)
		{
			this->adresa = new char[strlen(a.adresa) + 1];
			strcpy(this->adresa, a.adresa);
		}
		else
		{
			this->adresa = nullptr;
		}

		if (a.numar > 0)
		{
			this->numar = a.numar;
		}
		else
		{
			this->numar = 0;
		}
	}

	Strada& operator=(const Strada& a) {
		if (this->adresa != nullptr) {
			delete[] this->adresa;
			this->adresa = nullptr;
		}

		if (a.adresa != nullptr)
		{
			this->adresa = new char[strlen(a.adresa) + 1];
			strcpy(this->adresa, a.adresa);
		}
		else
		{
			this->adresa = nullptr;
		}

		if (a.numar > 0)
		{
			this->numar = a.numar;
		}
		else
		{
			this->numar = 0;
		}

	}

	bool operator>(const Strada& a) {
		return this->numar > a.numar;
	}

	bool operator<(const Strada& a) {
		return this->numar < a.numar;
	}

	bool operator==(int material) {
		return this->material == material;
	}

	

	~Strada() {
		if (this->adresa != nullptr) {
			delete[] this->adresa;
			this->adresa = nullptr;
		}
	}
};

int Strada::locatie = 0;

void afiseazaDetaliiLocatieStrada(const Strada& a) {
	cout << "\nAfisare detalii despre strada cu numarul " << a.numar << endl;
	cout << "Detalii complete: " << a.adresa << " , " << Strada::locatie << endl;
}


class Masina
{
private:
	const int seria;
	char* marca;
	int kilometraj;
	static bool autorizat;


public:

	int getSeria()
	{
		return this->seria;
	}

	const char* getMarca()
	{
		return this->marca;
	}

	void setMarca(const char* _marca)
	
	{
		if (this->marca != nullptr)
		{
			delete[] this->marca;
		}
		if (_marca != nullptr)
		{
			this->marca = new char[strlen(_marca) + 1];
			strcpy(this->marca, _marca);
		}
		else
		{
			this->marca = nullptr;
		}
	}

	int getKilometraj()
	{
		return this->kilometraj;
	}

	void setKilometraj(int _kilometraj)
	{
		this->kilometraj = _kilometraj;
	}

	Masina(const char* _marca, int _kilometraj, int _seria) : seria(_seria)
	{
		if (_marca != nullptr)
		{
			this->marca = new char[strlen(_marca)+1];
			strcpy(this->marca, _marca);
		}
		else
		{
			this->marca = nullptr;
		}
		if (_kilometraj > 0)
		{
			this->kilometraj = _kilometraj;
		}
		else
		{
			this->kilometraj = 0;
		}

	}

	Masina() : seria(0)
	{
		this->marca = nullptr;
		this->kilometraj = 0;
	}

	Masina(int _kilometraj) :seria(0)
	{
		this->marca = nullptr;
		if (_kilometraj > 0) {
			this->kilometraj = _kilometraj;
		}
		else {
			this->kilometraj = 0;
		}
	}
	
	~Masina() {
		if (this->marca != nullptr) {
			delete[] this->marca;
			this->marca = nullptr;
		}
	}

	static void modificaAutorizat(bool autorizat)
	{
		Masina::autorizat = autorizat;
	}

	void afisare() {
		cout << "\nAfisare obiect de tip MASINA\n";
		cout << "Seria: " << this->seria << endl;
		if (this->marca != nullptr)
			cout << "Marca: " << this->marca << endl;
		else
			cout << "Marca: NU S-A SPECIFICAT" << endl;
		cout << "Kilometraj: " << this->kilometraj << endl;
		cout << "--------------------------";
	}

	Masina(const Masina& a) : seria(a.seria)
	{
		if (a.marca != nullptr)
		{
			this->marca = new char[strlen(a.marca) + 1];
			strcpy(this->marca, a.marca);
		}
		else
		{
			this->marca = nullptr;
		}
		if (a.kilometraj > 0)
		{
			this->kilometraj = a.kilometraj;
		}
		else
		{
			this->kilometraj = 0;
		}
	}


	static bool getAutorizat()
	{
		return Masina::autorizat;
	}
	static void setAutorizat(bool _autorizat)
	{
		Masina::autorizat = _autorizat;
	}

	Masina& operator=(const Masina& a) {
		if (this->marca != nullptr) {
			delete[] this->marca;
			this->marca = nullptr;
		}

		if (a.marca != nullptr)
		{
			this->marca = new char[strlen(a.marca) + 1];
			strcpy(this->marca, a.marca);
		}
		else
		{
			this->marca = nullptr;
		}
		if (a.kilometraj > 0)
		{
			this->kilometraj = a.kilometraj;
		}
		else
		{
			this->kilometraj = 0;
		}

	}

	bool operator>(const Masina& a) {
		return this->kilometraj > a.kilometraj;
	}

	bool operator<(const Masina& a) {
		return this->kilometraj < a.kilometraj;
	}

	bool operator==(int seria) {
		return this->seria == seria;
	}


	friend void daKmInapoiCuOValoare( Masina& a, int nrKm);
};

bool Masina::autorizat = true;

void daKmInapoiCuOValoare(Masina& a, int nrKm) {
	a.kilometraj -= nrKm;
	cout << "\nKilometrajul a fost dat inapoi cu succes.\n";
}

class Casa
{
private:
	char* locatie;
	const int material;
	int mp2;
	static bool esteRezidential;

public:


	const char* getLocatie()
	{
		return this->locatie;
	}
	void setLocatie(const char* _locatie)
	{
		if (this->locatie != nullptr)
		{
			delete[] this->locatie;
		}
		if (_locatie != nullptr)
		{
			this->locatie = new char[strlen(_locatie) + 1];
			strcpy(this->locatie, _locatie);
		}
		else
		{
			this->locatie = nullptr;
		}
	}
	int getMaterial()
	{
		return this->material;
	}

	int getMp2()
	{
		return this->mp2;
	}

	void setMp2(int _mp2)
	{
		this->mp2 = _mp2;
	}


	Casa(const char* _locatie, int _material, int _mp2) : material(_material)
	{
		if (_locatie != nullptr)
		{
			this->locatie = new char[strlen(_locatie) + 1];
				strcpy(this->locatie, _locatie);
		}
		else
		{
			this->locatie = nullptr;
		}

		if (_mp2 > 0)
		{
			this->mp2 = _mp2;
		}
		else
		{
			this->mp2 = 0;
		}
		
	}

		Casa() : material(0)
		{
			this->locatie = nullptr;
			this->mp2 = 0;
		}

		Casa(int _mp2) : material(0)
		{
			this->locatie = nullptr;
			if (_mp2 > 0)
			{
				this->mp2 = _mp2;
			}
			else
			{
				this->mp2 = 0;
			}

		}

		static void modificaRezidential(bool esteRezidential)
		{
			Casa::esteRezidential = esteRezidential;
	    }

		void afisare() {
			cout << "\nAfisare obiect de tip CASA\n";
			cout << "Material: " << this->material << endl;
			if (this->locatie != nullptr)
				cout << "Locatie: " << this->locatie << endl;
			else
				cout << "Locatie: NU S-A SPECIFICAT" << endl;
			cout << "mp2: " << this->mp2 << endl;
			cout << "-------------";
		}

		~Casa() {
			if (this->locatie != nullptr) {
				delete[] this->locatie;
				this->locatie = nullptr;
			}
		}

		Casa(const Casa& a) : material(a.material)
		{
			if (a.locatie != nullptr)
			{
				this->locatie = new char[strlen(a.locatie) + 1];
				strcpy(this->locatie, a.locatie);
			}
			else
			{
				this->locatie = nullptr;
			}

			if (a.mp2 > 0)
			{
				this->mp2 = a.mp2;
			}
			else
			{
				this->mp2 = 0;
			}

		}

		static bool getESteRezidential()
		{
			return Casa::esteRezidential;
		}
		static void setEsteRezidential(bool _esteRezidential)
		{
			Casa::esteRezidential = _esteRezidential;

		}

		Casa& operator=(const Casa& a) {
			if (this->locatie != nullptr) {
				delete[] this->locatie;
				this->locatie = nullptr;
			}

			if (a.locatie != nullptr)
			{
				this->locatie = new char[strlen(a.locatie) + 1];
				strcpy(this->locatie, a.locatie);
			}
			else
			{
				this->locatie = nullptr;
			}

			if (a.mp2 > 0)
			{
				this->mp2 = a.mp2;
			}
			else
			{
				this->mp2 = 0;
			}
		}

		bool operator>(const Casa& a) {
			return this->mp2 > a.mp2;
		}

		bool operator<(const Casa& a) {
			return this->mp2 < a.mp2;
		}

		bool operator==(int material) {
			return this->material == material;
		}
};

bool Casa::esteRezidential = true;

int main() {

	Strada s1;
	Strada s2(2, "Manasia", 10);
	Strada s3(5);

	Masina m1;
	Masina m2("BMW", 100, 221);
	Masina m3(1001);

	Casa c1;
	Casa c2("Manasia", 3, 190);
	Casa c3(250);

	s1.afisare();
	s2.afisare();
	s3.afisare();

	m1.afisare();
	m2.afisare();
	m3.afisare();

	c1.afisare();
	c2.afisare();
	c3.afisare();

	afiseazaDetaliiLocatieStrada(s2);

	return 0;
}




