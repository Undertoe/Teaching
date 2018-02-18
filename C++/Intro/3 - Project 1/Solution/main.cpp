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
    int count = 20;

    int correct = 0;
    cout << "Starting questions!\n";
    for(int i = 0; i < count; i ++)
    {
        int first = GetRandom();
        int second = GetRandom();
        int getAnswer;
        int answer;

        /// Addition
        if(i % 2 == 0)
        {
            answer = first + second;
            cout << first << " + " << second << " = ???\n";
        }
        /// subtraction
        else
        {
            if(first > second)
            {
                answer = first - second;
                cout << first << " - " << second << " = ???\n";
            }
            else
            {
                answer = second - first;
                cout << second << " - " << first << " = ???\n";
            }
        }
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
    cout << "You got a score of: " << percent << "%\n";
    if(percent > 89.0)
    {
        cout << "That's an A!\n";
    }
    else if(percent > 79.9)
    {
        cout << "Thats a B!\n";
    }
    else if(percent > 69.9)
    {
        cout << "Thats a C!\n";
    }
    else if(percent > 59.9)
    {
        cout << "Thats a D!\n";
    }
    else
    {
        cout << "That's an F\n";
    }


    return 0;
}
