#define DEBUG_MSG(msg) (std::cout << msg << std::endl);

#include "Output/Output.h"
#include "Bricks/BrickFactory.h"

int main(int argc, char** argv)
{
    BrickProxy clay = BrickFactory::getBrick(BrickType::CLAY);
    BrickProxy lego = BrickFactory::getBrick(BrickType::LEGO);
    BrickProxy terracotta = BrickFactory::getBrick(BrickType::TERRACOTTA);

    Output::print(clay->getData());
    Output::print(lego->getData());
    Output::print(terracotta->getData());

    Output::print(clay->getData().c_str());
    Output::print(lego->getData().c_str());
    Output::print(terracotta->getData().c_str());

    return 0;
}