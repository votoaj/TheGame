#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Character {
	char name[50];
	int hitpoints;
	int spirit;
	int attack;
	int defense;
};

int Attack(struct Character *Attacker, struct Character *Target);

// Function Prototype
void DisplayStats(struct Character Target);

int main()
{
	// Assign Stats
	struct Character Axel;
	strcpy(Axel.name, "Axel");
	Axel.hitpoints = 10;
	Axel.spirit = 0;
	
	struct Character Axel;
	strcpy(Axel.name, "Axel");
	Axel.hitpoints = 10;
	Axel.spirit = 0;
	
	
	
	DisplayStats(Axel);
	
	return(0);
}

void DisplayStats(struct Character Target)
{
	printf("Name: %s\nHitPoints: %d\nSpirit: %d\n", Target.name, Target.hitpoints, Target.spirit);
}


int Attack(struct Character *Attacker, struct Character *Target)
{
	int DamageDone = 0;
	
	DamageDone = max(Attacker->attack - Target->defense, 0);
	Target->hitpoints = Target->health - DamageDone;
	return(0);
}