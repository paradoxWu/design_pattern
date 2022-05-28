#include <string>

class Optimizer
{
    public:
        // virtual ~Optimizer();
        virtual std::string getName() = 0;
};

class SGD: public Optimizer
{
    public:
        std::string getName() override{
            return "SGD Optimizer";
        }

};