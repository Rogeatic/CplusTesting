#include <iostream>
using namespace std;

class TryClass{
    public:
        int addBy;
};
void counting(int countTo){
    int subscribers = 0;
    int total[countTo];

    if(isdigit(countTo)){
        cout << "bad input" << endl;
    }
    else{
        for (int i=0; i< countTo; i++){
            subscribers += 1;
            total[i] = subscribers;
            cout << total[i] << ", ";
        }
        cout << subscribers << endl;
    }
}
int main() 
{
    TryClass myClass;
    cout << "how many times should we add a subsciber?" << endl;
    cin >> myClass.addBy;
    counting(myClass.addBy);
    return 0;
}