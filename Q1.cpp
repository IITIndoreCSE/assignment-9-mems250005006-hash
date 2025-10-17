#include <iostream>
using namespace std;

struct Item{
    int id;
    float cost;
};
int main(){
    Item items[6];
    
    items[0].id = 1;
    items[0].cost = 45.5;
    items[1].id = 2;
    items[1].cost = 60.0;
    items[2].id = 3;
    items[2].cost=30.0;
    items[3].id= 4;
    items[3].cost = 75.5;
    
    for(int i=0; i<6; i++){
        if (items[i].cost > 50.00){
            cout <<" ID:" << items[i].id<< "cost:" <<items[i].cost<<endl;
            
        }
}

    return 0;
}
