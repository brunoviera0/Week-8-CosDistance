#include <iostream>
#include <fstream>
#include <string>
#include "double_vector.h"

using namespace std;
int main() {
    ifstream file("2D_vectors.txt");
    double x; 
    double y;

    while (file >> x >> y) {
        double_vector vector1(x, y);
        
        if (file >> x >> y) {
            double_vector vector2(x, y);
            double distance = cosine_distance(vector1, vector2);
            
            cout << "Distance between (" << vector1.x << ", " << vector1.y
                      << ") and (" << vector2.x << ", " << vector2.y
                      << ") is " << distance << endl;
        }
    }

    return 0;
}
