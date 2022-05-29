#include <memory>
#include "Network.h"
#include "Optimizer.h"

class Trainer
{
    public:
        void setOptimizer(std::string config);
        void setNetwork(std::string config);
        std::string getOptimizer();
        std::string getNetwork();
    private:
        std::shared_ptr<Optimizer> optimizer_;
        std::shared_ptr<Network> network_;

};

class TrainerBuilder
{
    public:
        Trainer buildTrainer(std::string config){
            this->setOptimizer("SGD");
            this->setNetwork(config);
            return this->trainer_;
        }
        void setOptimizer(std::string config);
        void setNetwork(std::string config);
    protected:
        Trainer trainer_;
};

// class CVTrainer: public Trainer
// {
//     public:
//         std::shared_ptr<Optimizer> getOptimizer() override{
//             return std::make_shared<SGD>();
//         }
//         std::shared_ptr<Network> getNetwork() override{
//             return std::make_shared<ConvolutionNN>();
//         }
// };

// class NLPTrainer: public Trainer
// {
//     public:
//         std::shared_ptr<Optimizer> getOptimizer() override{
//             return std::make_shared<SGD>();
//         }
//         std::shared_ptr<Network> getNetwork() override{
//             return std::make_shared<RecurrentNN>();
//         }
// };