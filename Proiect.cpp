#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Strada
{
public:
	const int material;
	char* adresa;
	int numar;
	static int locatie;

	Strada(const int _material, char* _adresa, int _numar): material(_material)
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
};

int Strada::locatie = 0;



class Masina
{
public:
	const int seria;
	char* marca;
	int kilometraj;
	static bool autorizat;

	Masina(char* _marca, int _kilometraj, int _seria) : seria(_seria)
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


};

bool Masina::autorizat = true;


class Casa
{
public:
	char* locatie;
	const int material;
	int mp2;
	static bool esteRezidential;


	Casa(char* _locatie, int _material, int _mp2) : material(_material)
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
};

bool Casa::esteRezidential = true;

int main() {


	return 0;
}




