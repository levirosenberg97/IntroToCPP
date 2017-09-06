#pragma once
#include "Battle.h"
void titleScreen();

void Movement(bool &exit, int &grass, int &pot, char mon[50], char name[50], Entity player, int maxhp);

void startZone(bool &fight, char name[50], char mon[50], Entity &Player, int &maxHp, int &pot);

void Home(char &in, char name[50], char mon[50], Entity &Player, int &maxHp);

void profHouse(char &in, char name[50], char mon[50], Entity &Player, int &maxHp);

void marketPlace(char &in, char name[50], char mon[50], Entity &Player,int &pot);

void namePrompt(char input[50] = {});

void colorPicker(int color);

void timedPause(int millisec);

void delayText(int millisec, char word[]);