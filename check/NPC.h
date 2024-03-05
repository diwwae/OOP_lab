#pragma once

#include "Point.h"
#include "IObserver.h"
#include "ConsoleObserver.h"
#include "FileObserver.h"
#include "Observable.h"
#include "AttackVisitorable.h"

class NPC{
protected:
    bool _isAlive;
    Point _coordinates;
    std::string _name;
    std::string _type;

    std::vector<IObserver*> _observers = {new FileObserver, new ConsoleObserver};

public:
    void setCoordinates(const Point &coordinates);
    void setIsAlive(bool isAlive);
    void setType(const std::string &type);

    const std::string &getName();
    const std::string &getType();
    const Point &getCoordinates();
    bool isAlive();

    virtual void write() = 0;
    virtual void accept(AttackVisitor attackVisitor, NPC *) = 0;
};

std::ostream &operator<<(std::ostream &strm, NPC *npc);
