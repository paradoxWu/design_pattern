#include <memory>
#include "Network.h"
#include "Optimizer.h"

class Trainer
{
    public:
        virtual std::shared_ptr<Optimizer> getOptimizer() = 0;
        virtual std::shared_ptr<Network> getNetwork() = 0;

};

class ClassifierTrainer: public Trainer
{
    public:
        std::shared_ptr<Optimizer> getOptimizer() override{
            return std::make_shared<SGD>();
        }
        std::shared_ptr<Network> getNetwork() override{
            return std::make_shared<ConvolutionNN>();
        }
};