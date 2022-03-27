#include <iostream>
#include <time.h>
using namespace std;

void icon() {
    cout << "...........................................................................\n....■■■■■■■■■.....■■■■■■■■■■..■■■■■■■■■.■■■■■■■■■■■.■■■■■■■■■■.■■■■■■■■■■..\n..■■■■■■■■■■■■■.■■■■■■■■■■■■■.■■■■■■■■■.■■■■■■■■■■■.■■■■■■■■■■.■■■■■■■■■■..\n..■■■■■■.■■■■■■.■■■■■■.■■■■■■.■■■■■■....■■■■■■■.....■■■■■■.....■■■■■■......\n..■■■■■■........■■■■■■.■■■■■■.■■■■■■■■■.■■■■■■■■■■■.■■■■■■■■■■.■■■■■■■■■...\n..■■■■■■........■■■■■■.■■■■■■.■■■■■■■■■.■■■■■■■■■■■.■■■■■■■■■■.■■■■■■■■■...\n..■■■■■■.■■■■■■.■■■■■■.■■■■■■.■■■■■■....■■■■■■■.....■■■■■■.....■■■■■■......\n..■■■■■■■■■■■■■.■■■■■■■■■■■■■.■■■■■■....■■■■■■■.....■■■■■■■■■■.■■■■■■■■■■..\n....■■■■■■■■.......■■■■■■■....■■■■■■....■■■■■■■■....■■■■■■■■■■.■■■■■■■■■■..\n...........................................................................\n.■■■■■..■■■■....■■■■■.......■■■■■....■■■■..■■■■..■■■■■.■■■..■■■■..■■■■■■■■.\n.■■■■■.■■■■■...■■■■■■■....■■■■■■■■■..■■■■..■■■■..■■■■■.■■■■.■■■■..■■■■■■■■.\n.■■■■■■■■■■■..■■■■■■■■■...■■■■.■■■■..■■■■..■■■■..■■■■■.■■■■■■■■■..■■■■.....\n.■■■■■■■■■■■..■■■■.■■■■...■■■■.......■■■■■■■■■■..■■■■■.■■■■■■■■■..■■■■■■■■.\n.■■■■■■■■■■■..■■■■.■■■■...■■■■.......■■■■■■■■■■..■■■■■.■■■■■■■■■..■■■■■■■■.\n.■■■.■■■.■■■.■■■■■■■■■■■..■■■■.■■■■..■■■■..■■■■..■■■■■.■■■■■■■■■..■■■■.....\n.■■■.■■■.■■■.■■■■■..■■■■..■■■■■■■■■..■■■■..■■■■..■■■■■.■■■.■■■■■..■■■■■■■■.\n.■■■.■■■.■■■.■■■■■..■■■■....■■■■■....■■■■..■■■■..■■■■■.■■■..■■■■..■■■■■■■■.\n............................. == ...:@ : .. -= %...........................\n........................... : #@ - .. % # + ..:## - .......................\n.... .... .... .... .... ..@# - ..:#%...%# : ... .... .... .... .... .... .\n........................... + # = ...## - .. + # = ........................\n............................*## : .. % # % .. : ## : ......................\n.............................. : ## - .. % # % .. : ## : ..................\n................................##...*# = ...@# - .........................\n.... .... .... .... .... .... .. % # - ..:#%...%#*... .... .... .... .... .\n............................... = # = .. - ## - .. = #%....................\n..............................%@ - .. - # = ...%#:.........................\n...........................................................................\n..................... = ###############################....................\n.... .... .... .... . = ###############################***: -. .... .... ..\n..................... = ###############################:-:*=##*............\n..................... = ##############################@.....*#%............\n..................... = ##############################%......##............\n.......................*############################## =  - @#*............\n.... .... .... ... .. % ##################################@*.... .... .... \n.......................= ###########################@ - ...................\n.... .... .... .... ... - %#######################: .... .... .... .... ...\n...........................*@###################@* -.......................\n.............-.--.-.--.-.--.-: += % %%= == = +: -. - .--. - .--. - .--. - .\n.... .... .. - @################################################:. .... ...\n..................-:**++==%%@@@#################@@%%=+**-..................\n.... .... .... .... .... .... .... .... .... .... .... .... .... .... .... \n...........................................................................\n";
}
class container {
public:

    int size;// розмір контейнеру
    int filled;//стан контейнеру: наскільки наповнений
    void Fill();
    void PourOut();

};
class coffee_grinder {
public:
    int level = 1;//рівень помолу: дрібний чи ні
    bool state;//стан: меле чи ні
    void SetLevel();
};
class sys_coffee
{
public:
    container ContainerWater;
    container ContainerCoffee; // контейнер з кавою
    container ContainerWaste;// контейнер зі сміттям
    coffee_grinder CoffeeGrinder;//кавомолка

    bool ActivateGrinder();
    bool CreateTablet();
};
class termoblock {
public:
    bool state; //стан термоблоку
    int temperature;// температура термоблоку
    void Heat();
};
class button {
public:
    bool IsPressed;// стан кнопки нажата чи ні
    string value;// що робить кнопка
    void Press();
};
class sys_control {
public:
    termoblock Termoblock;
    sys_coffee coffee;
    button Americano;
    button Espresso;
    button Strength;
    bool SystemsState(); // стан системи
    bool CheckWater();
    bool CheckCoffee();
    bool CheckWaste();
    bool ActivateSystems();
    void StartWater();
    int SetWaterCoffeeWaste();
    string SetStrength();
    void CookCoffee();

};
class CoffeeMachine {
public:
    sys_control control; // підсистема керування
};
void termoblock::Heat()
{
    cout << "Current water temperature is: " << temperature << endl;
    if (temperature < 100) cout << "Boiling water...\n";
    while (temperature != 100) { temperature++; }
    cout << "Water is ready for producing coffee\n";
}
void button::Press()
{
    IsPressed = true;
}
void container::Fill()
{
    cout << "Fill continues...\n Done\n";
    while (filled < size) { filled++; }
}
void container::PourOut()
{
    cout << "Current state of container: " << filled << "\n Pouring Out \n";

    while (filled > 0)
    {
        filled--;
    }
    cout << "Current state of container: " << filled;
}
bool sys_coffee::ActivateGrinder()
{
    if (ContainerCoffee.filled > ContainerCoffee.size / 2) {
        cout << " Coffee is Grinded\n";
        return true;
    }
}
bool sys_coffee::CreateTablet()
{
    if (ActivateGrinder()) { cout << "Creating coffee tablet\n"; }
    return false;
}
void coffee_grinder::SetLevel()
{
    int a;
    cout << "Current grind level is 1. Do you want to change it? 1/0 ";
    cin >> a;
    if (a == 1) {
        cout << "Enter  from 1 to 3: ";
        cin >> a;
        if (a > 3) {
            a = a % 3;
            if (a == 0) a = 3;
        }
        cout << endl << a << " level was chosen\n";
    }
    else cout << "level is still 1.\n";
}
void sys_control::CookCoffee()
{
    int choice;
    coffee.CoffeeGrinder.SetLevel();
    SetStrength();
    cout << " Do you want an Americano or an Espresso? 1/0\n";
    cin >> choice;
    if (choice == 1) { Americano.Press(); }
    else if (choice == 0) { Espresso.Press(); }
    else cout << " Nothing was chosen\n";
    SetWaterCoffeeWaste();
    StartWater();
    cout << "your coffee, sir!\n              ((((  \n            ((((    \n             ))))   \n          _ .---.   \n         ( |`---'|  \n          \|     |  \n          : .___, : \n           `-----'  \n";

}
bool sys_control::SystemsState()
{
    if (CheckCoffee() && CheckWater() && CheckWaste())  return true;
    else return false;
}
bool sys_control::CheckWater()
{


    if (coffee.ContainerWater.filled > coffee.ContainerWater.size / 4) { cout << "Current water state: " << coffee.ContainerWater.filled << "/" << coffee.ContainerWater.size << ". Enough water\n"; return true; }

    else { cout << "Current water state: " << coffee.ContainerWater.filled << "/" << coffee.ContainerWater.size << ". Not enough water\n"; return false; }

}
bool sys_control::CheckCoffee()
{

    if (coffee.ContainerCoffee.filled > coffee.ContainerCoffee.size / 10) { cout << "Current coffee state: " << coffee.ContainerCoffee.filled << "/" << coffee.ContainerCoffee.size << ". Enough coffee\n"; return true; }

    else { cout << "Current coffee state: " << coffee.ContainerCoffee.filled << "/" << coffee.ContainerCoffee.size << ". Not enough coffee\n"; return false; }

}
bool sys_control::CheckWaste()
{
    if (coffee.ContainerWaste.filled < coffee.ContainerWaste.size / 10) { cout << "Current waste state: " << coffee.ContainerWaste.filled << "/" << coffee.ContainerWaste.size << ". Enough free place\n"; return true; }

    else { cout << "Current waste state: " << coffee.ContainerWaste.filled << "/" << coffee.ContainerWaste.size << ". Need to clean up waste\n"; return false; }
}
bool sys_control::ActivateSystems()
{
    if (CheckCoffee() && CheckWater() && CheckWaste()) { cout << "Everything is all right.\n"; return true; }
    else return false;
}
void sys_control::StartWater()
{
    cout << "Water is coming through tablet)0)\n";
}
int sys_control::SetWaterCoffeeWaste()
{
    if (Americano.IsPressed) {
        cout << "Americano was chosen.\n";
        coffee.ContainerWater.filled -= 250;
        Termoblock.Heat();
        coffee.ContainerCoffee.filled -= 30;
        coffee.ActivateGrinder();
        coffee.CreateTablet();
        coffee.ContainerWaste.filled += 30;

    }
    else if (Espresso.IsPressed) {
        cout << "Espresso was chosen.\n";
        coffee.ContainerWater.filled -= 100;
        Termoblock.Heat();
        coffee.ContainerCoffee.filled -= 30;
        coffee.ActivateGrinder();
        coffee.ContainerWaste.filled += 30;
    }
    else { cout << "Please, choose a drink\n." << endl; }
    return 1;

}
string sys_control::SetStrength()
{
    int i;
    string strength;
    strength = "1.light";
    cout << "Set strength of coffee. Current strength is: " << strength << endl << "Choose 1-3. 4 - leave as it is\n";
    cin >> i;
    switch (i)
    {
    case 1:
        strength = "1.light";
        break;
    case 2:
        strength = "2.medium";
        break;
    case 3:
        strength = "3.hard";
        break;
    default:
        break;
    }

    cout << "Current strength is: " << strength << endl;
    return strength;

}
int main()
{
    icon();
    CoffeeMachine coffeeMachine;
    coffeeMachine.control.coffee.ContainerWater.size = 1000;
    coffeeMachine.control.coffee.ContainerCoffee.size = 500;
    coffeeMachine.control.coffee.ContainerWaste.size = 500;
    srand(time(NULL));
    coffeeMachine.control.Termoblock.temperature = rand() % 100;
    coffeeMachine.control.coffee.ContainerWater.filled = rand() % coffeeMachine.control.coffee.ContainerWater.size;
    coffeeMachine.control.coffee.ContainerCoffee.filled = rand() % coffeeMachine.control.coffee.ContainerCoffee.size;
    coffeeMachine.control.coffee.ContainerWaste.filled = rand() % coffeeMachine.control.coffee.ContainerWaste.size;
    int choice;
    while (true) {

        cout << "\n\nCoffee Machine is on. System state : \n";
        coffeeMachine.control.SystemsState();
        cout << "\n Please, choose an action:\n 1. Start making coffee\n 2. Fill water container\n 3. Fill coffee container\n 4. Clean tablet container\n 5. Turn Machine off\n ";
        cin >> choice;
        switch (choice)
        {
        case 1:

            cout << "Cheking systems state\n";
            if (coffeeMachine.control.ActivateSystems()) {
                coffeeMachine.control.CookCoffee();

            }
            break;

        case 2:

            cout << "Fill water container\n";
            coffeeMachine.control.coffee.ContainerWater.Fill();
            break;
        case 3:
            cout << "Fill coffee container\n";
            coffeeMachine.control.coffee.ContainerCoffee.Fill();
            break;
        case 4:
            cout << "Clean tablet container\n";
            coffeeMachine.control.coffee.ContainerWaste.PourOut();
            break;
        case 5:
            cout << "Coffee Machine is off now";
            return 0;
            break;
        default:
            break;

        }
    }


}
