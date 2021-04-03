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

    void setAlive(bool isAlive) ;
    void setSpeed(double speed);
    void setSpeedUp(double speedUp);
    void setXCoordIntention(int i);
    void setYCoordIntention(int j);

};


#endif //MODELING_TRANSPORT_NETWORKS_AGENT_H
