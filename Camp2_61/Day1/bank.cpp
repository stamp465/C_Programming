#include <iostream>
using namespace std;

class Bank {
    public:
        string name;

        bool deposit(float amount, int id);
        float showAccount(int id);

    private:
        float account[1000];
};

bool Bank::deposit(float amount, int id) {
    cout << "from Bank " << amount << " id " << id << endl;
    account[id]+=amount;
    cout << "from Bank " << account[id] << endl;
    return true;
}

float Bank::showAccount(int id) {
    cout << "from showAccount id = " << id << "baht = " << account[id] << endl;
    return account[id];
}

class Krungsri:public Bank {
    public:
        float newCar();
};

float Krungsri::newCar() {
    cout << "from Krungsri, Got 500,000 baht" << endl;
    return 500000.0;
}

class Customer {
    public:
        int id;

        float newCar(Krungsri kr);
        void deposit(float amount, int id, Krungsri *kr);
        void showAccount(int id, Krungsri *kr);
        Customer(string name); //Constructure
        Customer(); //override
        ~Customer(); //destructure
        string getName();

    private:
        string name;
};

string Customer::getName() {
    return this->name;
}

float Customer::newCar(Krungsri kr) {
    return kr.newCar();
}

void Customer::deposit(float amount, int id, Krungsri *kr) {
    cout << kr->deposit(amount, id) << endl;
}
void Customer::showAccount(int id, Krungsri *kr){
    cout << kr->showAccount(id) << endl;
}

Customer::Customer(string name) {//Constructure
    this->name = name;
}

Customer::Customer() { //override
     this->name = "unknown";
}

Customer::~Customer() { //destructure
    cout << "Bye " << this->name;
}

int main() {
    float baht = 5000;
    Krungsri KRBank;
    string name = "Witnapat";

    Customer Witnapat = Customer(name);
    Witnapat.id = 1;

    Witnapat.deposit(baht,Witnapat.id, &KRBank);
    Witnapat.showAccount(Witnapat.id, &KRBank);

    //cout << KRBank.account[1] << endl;
    cout << Witnapat.getName() << endl;

    return 0;
}
