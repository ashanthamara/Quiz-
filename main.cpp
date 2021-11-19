#include <iostream>
#include "CoffeeMachineInterface.cpp"
#include "OldCoffeeMachine.cpp"
#include "CoffeeTouchScreenAdapter.cpp"

using namespace std;

class TouchScreen{
private:
    CoffeeMachineInterface *interface;

public:
    TouchScreen(CoffeeMachineInterface *coffeeMachineInterface){interface = coffeeMachineInterface;}
    void select(int type){
        
        if (type == 1){interface->chooseFirstSelection();}
        if (type == 2){interface->chooseSecondSelection();}
    }
};


int main()
{
    OldCoffeeMachine *oldCoffeeMachine = new OldCoffeeMachine();
    CoffeeTouchScreenAdapter *adapter = new CoffeeTouchScreenAdapter();
    adapter->connect(oldCoffeeMachine);
    TouchScreen *touchScreen = new TouchScreen(adapter);

    touchScreen->select(1);
    touchScreen->select(2);
    return 0;
}