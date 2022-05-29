# include <iostream>
# include "../include/Creator.h"


void Trainer::setNetwork(std::string config)
{
    if ("cnn"==config)
        this->network_ = std::make_shared<ConvolutionNN>();
    if("rnn"==config)
        this->network_ = std::make_shared<RecurrentNN>();
    if("transformer"==config)
        this->network_ = std::make_shared<Transformer>();
}
void Trainer::setOptimizer(std::string config)
{
    if(config!=""){
        this->optimizer_ = std::make_shared<SGD>();
    }
}

std::string Trainer::getOptimizer()
{
    return this->optimizer_->getName();
}

std::string Trainer::getNetwork()
{
    return this->network_->getName();
}

void TrainerBuilder::setNetwork(std::string config)
{
    this->trainer_.setNetwork(config);
}

void TrainerBuilder::setOptimizer(std::string config)
{
    this->trainer_.setOptimizer(config);
}