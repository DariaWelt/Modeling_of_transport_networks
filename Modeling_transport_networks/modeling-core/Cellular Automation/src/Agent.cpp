//
// Created by Daria Smirnova on 20.03.2021.
//

#include "../include/Agent.h"

bool Agent::isAlive() const { return _alive; }
double Agent::getSpeed() const {return _speed; }
double Agent::getSpeedUp() const {return _speedUp; }
int Agent::getXCoordIntention() const {return _xCoordIntention; }
int Agent::getYCoordIntention() const {return _yCoordIntention; }

void Agent::setAlive(bool isAlive) { _alive = isAlive; }
void Agent::setSpeed(double speed) { _speed = speed; }
void Agent::setSpeedUp(double speedUp) { _speedUp = speedUp; }
void Agent::setXCoordIntention(int i) { _xCoordIntention = i; }
void Agent::setYCoordIntention(int j) { _yCoordIntention = j; }
