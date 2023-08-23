#include <unordered_map>
#include <list>

#include "Observer.h"

class Subject
{
public:
    // 对指定id的资源 添加观察者
    void AddObserver(int id, Observer *observer)
    {
        observer_map[id].push_back(observer);
        // auto it = observer_map.find(id);
        // if (it != observer_map.end())
        // {
        //     it->second.push_back(observer);
        // }
        // std::list<Observer *> obser_list;
        // obser_list.push_back(observer);
        // this->observer_map.insert({id, obser_list});
    }

    // 指定id资源发生变动 对指定id观察者对象发送通知
    void dispatch(int id)
    {
        auto it = observer_map.find(id);
        if (it != observer_map.end())
        {
            for (auto *observer : it->second)
            {
                observer->HandlerMessage(id);
            }
        }
    }

private:
    std::unordered_map<int, std::list<Observer *>> observer_map;
};