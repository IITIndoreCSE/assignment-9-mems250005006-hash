
#include<iostream>
using namespace std;

struct Color {
    int red , green, blue;
};

int main(){
    Color colors[5];
    colors[0].red = 100;
    colors[0].green = 150;
    colors[0].blue = 200;
    
    colors[1].red = 50;
    colors[1].green = 75;
    colors[1].blue = 100;
    
    colors[2].red =10;
    colors[2].green= 20;
    colors[2].blue=30;
    
    colors[3].red = 40;
    colors[3].red =50;
    colors[3].blue=60;
    
    colors[4].red = 70;
    colors[4].green = 80;
    colors[4].blue = 90;
    
    for(int i = 0; i< 3; i++){
        colors[i].red = 255 - colors[i].red;
        colors[i].green= 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }
    for (int i =0 ; i< 5; i++){
        cout<<"Color"<< i+1<<": R=" << colors[i].red <<"G=" << colors[i].green <<"B="<<
        colors[i].blue<<endl;
        
    }
return 0;
}
