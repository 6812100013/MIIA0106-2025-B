#include <iostream>
#include <string>
using namespace std;


const int BLACK_LINE = 1;
const int WHITE_FLOOR = 0;


class LineFollowingMycar {
public:
    // ฟังก์ชันสั่งงานมอเตอร์ (Action Methods)
    void turnLeft() {
        cout << "[Action]: Turn Left (Left Motor: STOP, Right Motor: RUN)" << endl;
    }

    void turnRight() {
        cout << "[Action]: Turn Right (Left Motor: RUN, Right Motor: STOP)" << endl;
    }

    void moveForward() {
        cout << "[Action]: Run straight ahead. (Left Motor: RUN, Right Motor: RUN)" << endl;
    }

    void stopCar() {
        cout << "[Action]: Stop the car (No line found or error.)" << endl;
    }
};

int main() {
    
    LineFollowingMycar myCar;

    int L, C, R;

    cout << "Line Following Car Simulation " << endl;
    cout << "=========================================" << endl;
    cout << "Enter -1 to exit." << endl << endl;

    while (true) {
        cout << "Enter Sensor Values (Left Center Right): ";
        cin >> L;

        if (L == -1) break;

        cin >> C >> R;

        
        cout << "--- Sensor Status: L=" << L << " C=" << C << " R=" << R << " ---" << endl;

       
        if (L == BLACK_LINE && C == WHITE_FLOOR) {
            myCar.turnLeft();
        }
        else if (R == BLACK_LINE && C == WHITE_FLOOR) {
            myCar.turnRight();
        }
        else if (C == BLACK_LINE) {
            myCar.moveForward();
        }
        else {
            myCar.stopCar();
        }
        cout << endl; 
    }

    return 1;
}