#include "Player.h"
Player::Player(int hps, int snum) :
	hit_points(hps) {
	score = new int(snum);
	name = new string();
}

Player::~Player() {
	delete score;
}

int Player::get_hit_points() const {
	return hit_points;
}

int Player::get_score() const {
	return *score;
}

void Player::set_hit_points(const int new_hit_points) {
	hit_points = new_hit_points;
}

void Player::set_score(const int new_score) {
	*score = new_score;
}

void Player::set_name(const string new_name) {
	*name = new_name;
}

string Player::get_name() const {
	return *name;
}