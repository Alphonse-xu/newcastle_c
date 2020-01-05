#include "Boss.h"

Boss::Boss(int hps,int ammo,int bossammo):ArmedEnemy(hps,ammo),bossammo_level(bossammo){}

Boss:: ~Boss(){}

void Boss::set_score(const int new_score) 
{
	bossammo_level = new_score;
}

int Boss::get_score() const
{
	return bossammo_level;
}