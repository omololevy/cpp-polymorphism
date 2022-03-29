#include <iostream>
#include <string>
using namespace std;

class ProgLangs {
    public:
    void languageUse(){
        cout << "Programming languages are for coding \n";
    }
};

class Python: public ProgLangs{
    public:
    void languageUse(){
        cout << "Python is used majorly in AI \n";
    }
    
};

class Assembly: public ProgLangs{
    public:
    void languageUse(){
        cout << "Assembly language is used for communication with computer hardwares \n";
    }
};

class Purchase{
    public:
    int hirePurchase(int deposit, int principle, int rate, int time){
        return deposit + principle * rate/100 * time;
    }
    int cash(int amount, int discount){
        return amount - discount/100;
    }
};

int main(){
    ProgLangs javascript;
    Python faceDetection_py;
    Assembly myAssembly;
    Purchase car, lorry;

    javascript.languageUse();
    faceDetection_py.languageUse();
    myAssembly.languageUse();

    cout << "Total amount payable for the car on hirepurchase is: "<< car.hirePurchase(1000000, 100000, 10, 12) <<"\n";
    cout << "Total amount payable for the lorry on a cash sale is: "<< lorry.cash(4000000, 15) <<"\n";
    return 0;
}