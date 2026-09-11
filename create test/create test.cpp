#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int answer, guess;

    srand(time(0));

    answer = rand() % 100 + 1;

    cout << "<숫자 맞추기 게임>\n1~100중 컴퓨터가 생각한 숫자를 맞춰라!" << endl;
    cin >> guess;

    while (answer != guess) {
       
        if (answer < guess) {
            cout << "DOWN!" << endl;
        }
        else if (answer > guess) {
            cout << "UP!" << endl;
        }
        
        cin >> guess;
    }
    cout << "정답!\n";

        return 0;
}