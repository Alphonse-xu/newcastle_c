#pragma once
class Enemy {
public:
	Enemy(int hps, int snum);
	~Enemy();
	int get_hit_points() const;
	int get_score() const;
	void set_hit_points(int new_hit_points);
	void set_score(int new_score);
private:
	int hit_points;
	int* score;
};

