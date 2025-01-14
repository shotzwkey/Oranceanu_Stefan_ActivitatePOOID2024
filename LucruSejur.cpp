#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


class Sejur
{
private:

	int id;
	char* destinatie;
	double pretBaza;
	int nrExcursiiOptionale;
	double* pretExcursie;

public:


	Sejur(int id)
	{
		this->destinatie = nullptr;
		this->pretBaza = 0;
		this->nrExcursiiOptionale = 0;
		this->pretExcursie = nullptr;

		if (id > 0)
		{
			this->id = id;
	    }
		else
		{
			this->id = 0;
		}

    }


	int getid() const
	{
		return id;
	}

	void setid(int id)
	{
		if (id > 0)
		{
			this->id = id;
		}
		else
		{
			this->id = 0;
		}
	}

	const char* getdestinatie() const
	{
		return destinatie;
	}

	void setdestinatie(const char* destinatie)
	{
		delete[] this->destinatie;
		this->destinatie = new char[strlen(destinatie) + 1];
		strcpy(this->destinatie, destinatie);
	}

	double getpretBaza() const
	{
		return pretBaza;
	}

	void setpretBaza(double pretBaza)
	{
		if (pretBaza > 0)
		{
			this->pretBaza = pretBaza;
		}
		else
		{
			this->pretBaza = 0;
		}
	}


	int getnrExcursiiOptionale() const
	{
		return nrExcursiiOptionale;
	}

	void setnrExcursiiOptionale(int nrExcursiiOptionale)
	{
		if (nrExcursiiOptionale > 0)
		{
			this->nrExcursiiOptionale = nrExcursiiOptionale;
		}
		else
		{
			this->nrExcursiiOptionale = 0;
		}
	}

	double* getpretExcursie() const
	{
		return pretExcursie;
	}

	void setpretExcursie(double* pretExcursie, double pretBaza)
	{
		if (pretExcursie != nullptr)
		{
			delete[] this->pretExcursie;
			this->pretBaza = pretBaza;
			this->pretExcursie = new double[this->pretBaza];
			for (int i = 0; i < pretBaza; i++)
			{
				this->pretExcursie[i] = pretExcursie[i];
			}
		}
	}

	Sejur(int id, const char* destinatie, double pretBaza, int nrExcursiiOptionale, double* pretExcursie)
	{
		if (id > 0)
		{
			this->id = id;
		}
		else
		{
			this->id = 0;
		}

		if (destinatie != nullptr)
		{
			this->destinatie = new char[strlen(destinatie) + 1];
			strcpy(this->destinatie, destinatie);
		}
		else
		{
			this->destinatie = nullptr;
		}

		if(pretBaza > 0)
		{
			this->pretBaza = pretBaza;
		}
		else
		{
			this->pretBaza = 0;
			}


		if (nrExcursiiOptionale > 0)
		{
			this->nrExcursiiOptionale = nrExcursiiOptionale;
		}
		else
		{
			this->nrExcursiiOptionale = 0;
		}

		if (pretExcursie != nullptr)
		{
			this->pretExcursie = new double[pretBaza];
			for (int i = 0; i < pretBaza; i++)
			{
				this->pretExcursie[i] = pretExcursie[i];
			}
		}
		else
		{
			this->pretExcursie = nullptr;
		}
	}

	~Sejur()
	{
		if (this->destinatie != nullptr)
		{
           delete[] this->destinatie;
		}
		
	}


	Sejur(const Sejur& a)
	{

		id = a.id;
		destinatie = a.destinatie;
		pretBaza = a.pretBaza;
		nrExcursiiOptionale = a.nrExcursiiOptionale;
		pretExcursie = a.pretExcursie;


		if (id > 0)
		{
			this->id = a.id;
		}
		else
		{
			this->id = 0;
		}

		if (destinatie != nullptr)
		{
			this->destinatie = new char[strlen(a.destinatie) + 1];
			strcpy(this->destinatie, a.destinatie);
		}
		else
		{
			this->destinatie = nullptr;
		}

		if (pretBaza > 0)
		{
			this->pretBaza = a.pretBaza;
		}
		else
		{
			this->pretBaza = 0;
		}


		if (nrExcursiiOptionale > 0)
		{
			this->nrExcursiiOptionale = a.nrExcursiiOptionale;
		}
		else
		{
			this->nrExcursiiOptionale = 0;
		}

		if (pretExcursie != nullptr)
		{
			this->pretExcursie = new double[a.pretBaza];
			for (int i = 0; i < a.pretBaza; i++)
			{
				this->pretExcursie[i] = a.pretExcursie[i];
			}
		}
		else
		{
			this->pretExcursie = nullptr;
		}
	}

	Sejur& operator=(const Sejur& a)
	{
		if (this != &a)
		{
			if (id > 0)
			{
				this->id = a.id;
			}
			else
			{
				this->id = 0;
			}

		
			if (this->destinatie != nullptr)
			{	
				delete[] this->destinatie;
				this->destinatie = new char[strlen(a.destinatie) + 1];
				strcpy(this->destinatie, a.destinatie);
			}
			else
			{
				this->destinatie = nullptr;
			}

			if (this->pretBaza > 0)
			{
				this->pretBaza = a.pretBaza;
			}
			else
			{
				this->pretBaza = 0;
			}


			if (this->nrExcursiiOptionale > 0)
			{
				this->nrExcursiiOptionale = a.nrExcursiiOptionale;
			}
			else
			{
				this->nrExcursiiOptionale = 0;
			}


			
			if (this->pretExcursie != nullptr)
			{
				delete[] this->pretExcursie;
				this->pretExcursie = new double[a.pretBaza];
				for (int i = 0; i < a.pretBaza; i++)
				{
					this->pretExcursie[i] = a.pretExcursie[i];
				}
			}
			else
			{
				this->pretExcursie = nullptr;
			}
		}
	}
};



int main()
{

}