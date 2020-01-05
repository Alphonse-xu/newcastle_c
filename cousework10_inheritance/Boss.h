#pragma once
#include "ArmedEnemy.h"
class Boss :
	public ArmedEnemy
{
public:
	Boss(int hps,int ammo,int bossammo);
	virtual ~Boss();
	virtual void set_score(const int new_score);
	virtual int get_score() const;

protected:
	int bossammo_level;
};

