#include <iostream>

#include "Enemy.h"
#include "ArmedEnemy.h"
#include "Boss.h"
using namespace std;


void some_function(Enemy& enemy) {
	enemy.set_score(6);
}

int main(void) {

	ArmedEnemy* ae = new ArmedEnemy(2, 5);
	ae->set_hit_points(3);
	cout << "hit points = " << ae->get_hit_points() << "\n";

	ae->shoot();

	some_function(*ae);

	Boss b(2,5,10);

	delete ae;
	ae = nullptr;
	return 0;
}

