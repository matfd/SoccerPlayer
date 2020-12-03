#include <iostream>
#include <string>
#include "SoccerPlayer.h"
using namespace std;

SoccerPlayer::SoccerPlayer() {
	Famil = "";
	number = 0;
	Goal = 0;
	Assists = 0;
}
SoccerPlayer::SoccerPlayer(std::string fname, unsigned int fnum, unsigned int fgoal, unsigned int fassists) {
	Famil = fname;
	number = fnum;
	Goal = fgoal;
	Assists = fassists;
}
std::string SoccerPlayer::getFamil() { return Famil; }
unsigned int SoccerPlayer::getNum() { return number; }
unsigned int SoccerPlayer::getGoal() { return Goal; }
unsigned int SoccerPlayer::getAssists() { return Assists; }
void SoccerPlayer::showParametrs(){
	cout << Famil << " ";
	cout << number << endl;
	cout << "Goal Count: " << Goal << endl;
	cout << "Assists count: " << Assists << endl;
}
void SoccerPlayer::addGoal(unsigned int fG) {
	Goal += fG;
}
void SoccerPlayer::addAssist(unsigned int fA) {
	Assists += fA;
}