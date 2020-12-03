#pragma once
#include <string>
class SoccerPlayer {
private:
    std::string Famil;
	unsigned int number;
	unsigned int Goal;
	unsigned int Assists;
public:
	SoccerPlayer();	
	SoccerPlayer(std::string, unsigned int, unsigned int, unsigned int);
	void setFamil(std::string fam);
	std::string getFamil();
	void setNum(unsigned int fnum);
	unsigned int getNum();
	void setGoal(unsigned int fGoal);
	unsigned int getGoal();
	void setAssists(unsigned int fAssist);
	unsigned int getAssists();
	void showParametrs();
	void addGoal(unsigned int fG);
	void addAssist(unsigned int fA);
};