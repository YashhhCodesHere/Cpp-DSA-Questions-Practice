#include <bits/stdc++.h>
using namespace std;

class Binary{
    private:
        string bin;
        // bool check = true;
    public:
        void getBinary();
        void convertOnesCompliment();
        void display();
};

void Binary:: getBinary(){
    cout<<"Enter the binary number: ";
    cin>>bin;
    // Checking input is binary or not:-
    for(int i = 0; i < bin.size(); i++){
        if(bin.at(i) != '0' && bin.at(i) != '1'){
            // check = false;
            cout << "Your given input is not Binary!"<<endl;
            return;
        }
    }
}
void Binary:: convertOnesCompliment(){
    for(int i = 0; i < bin.size(); i++){
        if(bin.at(i) == '1'){
            bin.at(i) = '0';
        }else{
            bin.at(i) = '1';
        }
    }
    cout<<"Your output after one's compliment: "<<endl;
}

void Binary:: display(){
    cout<<"Value of bin is: ";
    for(int i = 0; i < bin.size(); i++){
        cout<< bin[i];
    }
    cout<<endl;
}

int main()
{
    Binary B1;
    B1.getBinary();
    B1.display();
    B1.convertOnesCompliment();
    B1.display();

    return 0;
}