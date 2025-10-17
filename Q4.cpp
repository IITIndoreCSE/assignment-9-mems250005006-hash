
#include<iostream>
using namespace std;

struct SalesRecord {
    string month;
    float amount;
};

int main() {
    SalesRecord sales[12];
    int maxIndex = 0, minIndex = 0;
    
    for(int i = 0; i < 12; i++) {
        cin >> sales[i].month >> sales[i].amount;
    }
    
    for(int i = 1; i < 12; i++) {
        if(sales[i].amount > sales[maxIndex].amount) {
            maxIndex = i;
        }
        if(sales[i].amount < sales[minIndex].amount) {
            minIndex = i;
        }
    }
    
    cout << "Max: " << sales[maxIndex].month << " Min: " << sales[minIndex].month << endl;
    return 0;
}
