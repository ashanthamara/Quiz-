using namespace std;
class CoffeeTouchScreenAdapter : public CoffeeMachineInterface{
private:
    OldCoffeeMachine *oldMachine;

public:
    void connect(OldCoffeeMachine *coffeeMachine){oldMachine = coffeeMachine;}
    void chooseFirstSelection(){oldMachine->selectA();}
    void chooseSecondSelection(){oldMachine->selectB();}
};