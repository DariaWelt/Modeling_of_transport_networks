//
// Created by Daria Smirnova on 20.03.2021.
//

#ifndef MODELING_TRANSPORT_NETWORKS_AGENT_H
#define MODELING_TRANSPORT_NETWORKS_AGENT_H


class Agent {
private:
    bool _alive;
    double _speed;
    double _speedUp;
    int _xCoordIntention;
    int _yCoordIntention;

public:
    bool isAlive() const;
    double getSpeed() const;
    double getSpeedUp() const;
    int getXCoordIntention() const;
    int getYCoordIntention() const;

    bool setAlive(bool isAlive) ;
    double setSpeed(double speed);
    double setSpeedUp(double speedUp);
    int setXCoordIntention(int i);
    int setYCoordIntention(int j);

};


#endif //MODELING_TRANSPORT_NETWORKS_AGENT_H
