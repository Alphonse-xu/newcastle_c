#include <iostream>

#include "Enemy.h"
#include "Player.h"
using namespace std;


int main(void) {

	Enemy e1(2,0);
	cout << "hit points = " << e1.get_hit_points() << "\n";

	Enemy* e2 = new Enemy(2,0);
	e2->set_hit_points(3);
	cout << "hit points = " << e2->get_hit_points() << "\n";

	e2->set_score(2);
	cout << "score = " << e2->get_score() << "\n";

	delete e2;
	e2 = NULL;
	return 0;
}

