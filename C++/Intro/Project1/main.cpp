#include <iostream>
#include <random>
#include <string>
#include <ctime>

int GetRandom()
{
    return std::rand() % 10;
}

using namespace std;

int main()
{
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    int count = 10;

    int correct = 0;
    cout << "Starting questions!\n";
    for(int i = 0; i < count; i ++)
    {
        int first = GetRandom();
        int second = GetRandom();
        int getAnswer;
        int answer = first + second;

        cout << first << " + " << second << " = ???\n";
        cin >> getAnswer;

        if(answer != getAnswer)
        {
            cout << "Sorry! The answer is: " << answer << "\n";
        }
        else
        {
            cout << "Correct!\n";
            correct ++;
        }
    }

    cout << "Correct count: " << correct << "\n";
    float percent = ((float)correct / (float)count) * 100.0;
    cout << "You got: " << percent << " correct\n";


    return 0;
}
