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