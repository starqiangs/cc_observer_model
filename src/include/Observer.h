#pragma once

#include <iostream>

class Observer
{
public:
    virtual void HandlerMessage(int msgid) = 0;
};

class Observer_1 : public Observer
{
public:
    void HandlerMessage(int msgid)
    {
        switch (msgid)
        {
        case 1:
            std::cout << "observer1 recv 1 msg" << std::endl;
            break;
        case 2:
            std::cout << "observer1 recv 2 msg" << std::endl;
            break;
        default:
            std::cout << "observer1 recv unknow msg!" << std::endl;
            break;
        }
    }
};

class Observer_2 : public Observer
{
public:
    void HandlerMessage(int msgid)
    {
        switch (msgid)
        {
        case 3:
            std::cout << "observer2 recv 3 msg" << std::endl;
            break;
        case 4:
            std::cout << "observer2 recv 4 msg" << std::endl;
            break;
        default:
            std::cout << "observer2 recv unknow msg!" << std::endl;
            break;
        }
    }
};

class Observer_3 : public Observer
{
public:
    void HandlerMessage(int msgid)
    {
        switch (msgid)
        {
        case 1:
            std::cout << "observer3 recv 1 msg" << std::endl;
            break;
        case 4:
            std::cout << "observer3 recv 4 msg" << std::endl;
            break;
        default:
            std::cout << "observer3 recv unknow msg!" << std::endl;
            break;
        }
    }
};