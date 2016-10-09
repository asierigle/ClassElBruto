#ifndef __BRUTO_H__
#define __BRUTO_H__

typedef unsigned int uint;
typedef unsigned short ushort;

template<class TYPE>
class Bruto
{
public:
	SetName(char* name);

	

private:
	char* name = nullptr;
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
