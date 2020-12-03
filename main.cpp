#include <iostream>
#include "SoccerPlayer.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	SoccerPlayer Player1("Kto-to", 17, 6, 4);
	Player1.showParametrs();
	Player1.addGoal(4);
	Player1.addAssist(1);
	Player1.showParametrs();
}