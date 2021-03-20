//
// Created by Daria Smirnova on 20.03.2021.
//

#ifndef MODELING_TRANSPORT_NETWORKS_ENVIRONMENT_H
#define MODELING_TRANSPORT_NETWORKS_ENVIRONMENT_H


class Environment {
public:
    enum Type {
        BOUND,
        RIGHT_LANE,
        LEFT_LANE,
        TRAFFIC_LIGHT,
        CROSSWALK,
        TYPE };
private:
    Type _type;
    double _activatingProbability;
public:
    Environment(Type type, double activatingProbability);
    Type getType() const;
    bool tryActivate() const
};


#endif //MODELING_TRANSPORT_NETWORKS_ENVIRONMENT_H
