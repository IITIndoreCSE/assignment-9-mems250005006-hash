
#include<iostream>
using namespace std;

struct Point {
    float x, y;
};

int main() {
    Point points[7];
    int count = 0;
    
    for(int i = 0; i < 7; i++) {
        cin >> points[i].x >> points[i].y;
    }
    
    for(int i = 0; i < 7; i++) {
        if(points[i].x > 0 && points[i].y > 0) {
            count++;
        }
    }
    
    cout << "Points in first quadrant: " << count << endl;
    return 0;
}
