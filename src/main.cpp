#define DEBUG_MSG(msg) (std::cout << msg << std::endl);

#include "Output/Output.h"
#include "Bricks/BrickFactory.h"
#include "Bricks/ClayBrick.h"
#include "Bricks/LegoBrick.h"
#include "Bricks/TerracottaBrick.h"

int main(int argc, char** argv)
{
    Brick* clay = BrickFactory::getBrick(BrickType::CLAY);
    Brick* lego = BrickFactory::getBrick(BrickType::LEGO);
    Brick* terracotta = BrickFactory::getBrick(BrickType::TERRACOTTA);

    Output::print(clay->getData());
    Output::print(lego->getData());
    Output::print(terracotta->getData());

    Output::print(clay->getData().c_str());
    Output::print(lego->getData().c_str());
    Output::print(terracotta->getData().c_str());

    return 0;
}