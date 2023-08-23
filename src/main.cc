#include <iostream>
#include <memory>

#include "Observer.h"
#include "Subject.h"

int main()
{
    Observer *Ob1 = new Observer_1();
    Observer *Ob2 = new Observer_2();
    Observer *Ob3 = new Observer_3();

    Subject subject;

    subject.AddObserver(1, Ob1);
    subject.AddObserver(2, Ob1);
    subject.AddObserver(3, Ob2);
    subject.AddObserver(4, Ob2);
    subject.AddObserver(1, Ob3);
    subject.AddObserver(4, Ob3);

    int id = 0;
    while (1)
    {
        std::cout << "输入id:";
        std::cin >> id;
        if (id <= 0)
        {
            std::cout << "输入无效，请重新输入!" << std::endl;
            continue;
        }
        if (id > 0)
        {
            subject.dispatch(id);
        }
    }

    return 0;
}
