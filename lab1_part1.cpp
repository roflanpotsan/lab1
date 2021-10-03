#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Lab 1 Part 1 Var 4" << endl;

    double velocity, river_velocity, new_velocity, river_width, angle1, angle2, time1, time2, temp_vel1, temp_vel2;

    cout << "Input: " << endl << "river_width (b) = ";
    cin >> river_width;

    if (river_width > 0)
    {

        cout << "velocity (v1) = ";
        cin >> velocity;

        cout << "river_velocity (v2) = ";
        cin >> river_velocity;

        cout << "new_velocity (v3) = ";
        cin >> new_velocity;

        if (velocity >= 0 && river_velocity >= 0)
        {
            if (velocity <= river_velocity || velocity == 0) cout << "ANS1: The other side of the river is unreachable." << endl;
            else
            {
                angle1 = acos(river_velocity/velocity);
                temp_vel1 = velocity*sin(angle1);
                time1 = river_width/temp_vel1;
                cout << "ANS1: angle = " << angle1/M_PI*180 << "; time = " << time1 << "s" << endl;
            }
        }
        else cout << "velocity and river_velocity must be >= 0." << endl;

        if (new_velocity < velocity)
        {
            if (new_velocity >= 0 && river_velocity >= 0)
            {
                if (new_velocity <= river_velocity || new_velocity == 0) cout << "ANS1: The other side of the river is unreachable." << endl;
                else
                {
                    angle2 = acos(river_velocity/new_velocity);
                    temp_vel2 = new_velocity*sin(angle2);
                    time2 = river_width/temp_vel2;
                    cout << "ANS2: angle = " << angle2/M_PI*180 << "; time = " << time2 << "s" << endl;
                }
            }
            else cout << "new_velocity and river_velocity must be >= 0." << endl;
        }
        else cout << "new_velocity must be < velocity." << endl;

    }
    else cout << "river_width must be > 0." << endl;


    return 0;
}