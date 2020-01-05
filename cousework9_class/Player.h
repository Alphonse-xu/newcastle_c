#pragma once
#include <string>
using namespace std;
class Player
{
public:
	Player(int hps, int snum);
	~Player();
	int get_hit_points() const;
	int get_score() const;
	void set_hit_points(int new_hit_points);
	void set_score(int new_score);
	string get_name() const;
	void set_name(string new_name);
private:
	int hit_points;
	int* score;
	string* name ;
};

