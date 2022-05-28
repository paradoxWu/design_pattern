#include <string>

/* */
class Network
{
    public:
        // virtual ~Network();
        virtual std::string getName() = 0;
};

class ConvolutionNN: public Network
{
    std::string getName() override{
        return "convolution neural network";
    };
};

class RecurrentNN: public Network
{
    std::string getName() override{
        return "recurrent neural network";
    }
};

class Transformer: public Network
{
    std::string getName() override{
        return "transformer";
    }
};
