#include <iostream>
#include "include/Creator.h"

int main(int argc, char **argv)
{
    std::string conf = argv[1];
    TrainerBuilder* builder = new TrainerBuilder();
    Trainer trainer = builder->buildTrainer(conf);
    std::cout<<"The backbone is "<<trainer.getNetwork()<<std::endl;
    std::cout<<"The optimizer is "<<trainer.getOptimizer()<<std::endl;
    return 0;
}