#include <iostream>
#include "include/Creator.h"

int main(int argc, char **argv)
{
    std::shared_ptr<Trainer> trainer;
    std::string conf = argv[1];
    if(conf == "classifer"){
        trainer = std::make_shared<ClassifierTrainer>();
    }
    else{
        std::cout<<"No this config now"<<std::endl;
        exit(1);
    }
    std::shared_ptr<Network> network;
    std::shared_ptr<Optimizer> optimizer;
    network = trainer->getNetwork();
    optimizer = trainer->getOptimizer();
    std::cout<<"The backbone is "<<network->getName()<<std::endl;
    std::cout<<"The optimizer is "<<optimizer->getName()<<std::endl;
    return 0;
}