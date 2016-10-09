#ifndef __BRUTO_H__
#define __BRUTO_H__

typedef unsigned int uint;
typedef unsigned short ushort;

class Bruto
{
public:
	//Constructor
	Bruto();

	//Destructor
	virtual ~Bruto();

	//Functions
	void SetName();
	void GetName();
	void PrintName();
	uint setNumDisciples();
	uint getNumDisciples();
	void printNumDisciples();
	char* setClanName();
	char* getClanName();
	void printClanName();
	uint getNumWeapons();
	bool setWeapon(char* nameWeapon);
	bool hasWeapon(char* nameWeapon);
	void printAvailableWeapons();
	uint getNumAnimals();
	bool setAnimal(char* nameAnimal);
	bool hasAnimal(char* nameAnimal);
	void printAvailableAnimals();
	bool registerNextTournament();
	bool isRegisteredNextTournament();
	void printRegisterStatus();
	uint setLevel();
	uint setLifeUnits();
	uint setStrength();
	uint setAgility();
	uint setSpeed();
	uint getLevel();
	uint getLifeUnits();
	uint getStrength();
	uint getAgility();
	uint getSpeed();
	uint incrLevel(int num);
	uint incrLifeUnits(int num);
	uint incrStrength(int num);
	uint incrAgility(int num);
	uint incrSpeed(int num);
	uint decrLevel(int num);
	uint decrLifeUnits(int num);
	uint decrStrength(int num);
	uint decrAgility(int num);
	uint decrSpeed(int num);
	void printLevel();
	void printLifeUnits();
	void printStrength();
	void printAgility();
	void printSpeed();
	
		
	//Atributos
	char* name = "Asier";
	uint disciples = 0;
	char* clan_name = 0;
	uint level = 0;
	uint life = 0;
	uint strength = 0;
	uint agility = 0;
	uint speed = 0;
	ushort weapons = 0;
	uint animals = 0;
	bool registered = false;

};



#endif // !__BRUTO_H__
