#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int answer, guess, count = 1;
    char play = 'y';

    srand(time(0));

    while (play == 'y' || play == 'Y') {

        answer = rand() % 100 + 1;
        cout << answer;     // 테스트용
        cout << "<숫자 맞추기 게임>\n1~100중 컴퓨터가 생각한 숫자를 맞춰라! (횟수 제한 5번) " << endl;
        cin >> guess;

        count = 1;

        while (answer != guess && count < 6) {

            

            if (answer < guess) {
                cout << "DOWN!      count:  " << count++ << endl;
            }
            else if (answer > guess) {
                cout << "UP!        count:  " << count++ << endl;
            }

            if (count < 6) {
                cin >> guess;
            }

        }

        if (answer == guess && count < 6) {
            cout << "정답!\n 시도 횟수 :  " << count;
        }

        else if (answer != guess && count > 5) {
            cout << "게임오버! \n 정답 :  " << answer;
        }

        cout << "\n 다시 하시겠습니까? (Y/N) ";
        cin >> play;
    }
    cout << "\n 게임을 종료합니다." << endl;
    
        return 0;
}