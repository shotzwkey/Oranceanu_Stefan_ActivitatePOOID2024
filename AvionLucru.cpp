#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class BiletAvion
{
private:

	static int CODunic;
    int numarBilet;
    char* numePasager;
    int durataZbor;
	double* distante;
	int numarSegmente;

public:

	BiletAvion(const char* numePasager,int durataZbor)
	{

		const int numarBilet = 0;
		double* distante = 0;
		int numarSegmente = 0;
		if (numePasager != nullptr)
		{
			this->numePasager = new char[strlen(numePasager) + 1];
			strcpy(this->numePasager, numePasager);
		}
		else
		{
			this->numePasager = nullptr;
		}

		if (durataZbor > 0)
		{
			this->durataZbor = durataZbor;
		}
		else
		{
			this->durataZbor = 0;
		}
	}

	~BiletAvion()
	{
		if (numePasager != nullptr)
		{
			delete[] this->numePasager;
		}
	}


	BiletAvion(const BiletAvion& a)
	{
		numarBilet = a.numarBilet;
		distante = a.distante;
		numarSegmente = a.numarSegmente;
		if (a.numePasager != nullptr)
		{
			this->numePasager = new char[strlen(a.numePasager) + 1];
			strcpy(this->numePasager, a.numePasager);
		}
		else
		{
			this->numePasager = nullptr;
		}

		if (a.durataZbor > 0)
		{
			this->durataZbor = a.durataZbor;
		}
		else
		{
			this->durataZbor = 0;
		}
	}


	void setDistante(double* distante, int numarSegmente)
	{
		if (distante != nullptr)
		{
			delete[] this->distante;
			this->numarSegmente = numarSegmente;
			this -> distante = new double[this->numarSegmente];
			for (int i = 0; i < numarSegmente; i++)
			{
				this->distante[i] = distante[i];
			}
		}

	}

	void setnumarSegmente(int numarSegmente)
	{
		if (numarSegmente > 0)
		{
			this->numarSegmente = numarSegmente;
		}
	}
	
	BiletAvion& operator=(const BiletAvion& a)
	{
		if (this != &a)
		{
			numarBilet = a.numarBilet;
			distante = a.distante;
			numarSegmente = a.numarSegmente;
			if (a.numePasager != nullptr)
			{
				this->numePasager = new char[strlen(a.numePasager) + 1];
				strcpy(this->numePasager, a.numePasager);
			}
			else
			{
				this->numePasager = nullptr;
			}

			if (a.durataZbor > 0)
			{
				this->durataZbor = a.durataZbor;
			}
			else
			{
				this->durataZbor = 0;
			}
		}
		return *this;
	}
	
};


int main()
{

}