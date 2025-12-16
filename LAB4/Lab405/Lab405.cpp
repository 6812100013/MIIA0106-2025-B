#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // ตั้งค่า Seed สำหรับการสุ่ม
    srand(time(0));

    // สุ่มเลข 1-100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    const int MAX_ATTEMPTS = 10;

    cout << "=== เกมทายตัวเลขปริศนา (1-100) ===" << endl;
    cout << "** กติกา: คุณมีโอกาสทายทั้งหมด " << MAX_ATTEMPTS << " ครั้ง **" << endl;

    do {
        cout << "\n กรุณ าใส่ตัวเลขที่คุณทาย : ";
        cin >> guess;

        // ตรวจสอบค่า input
        if (guess < 1 || guess > 100) {
            cout << ">> ผิดพลาด! กรุณาใส่ตัวเลขระหว่าง 1 ถึง 100 เท่านั้น" << endl;
            continue;
        }

        attempts++;

        // เงื่อนไขชนะ
        if (guess == secretNumber) {
            cout << "ถูกต้องงงงงง! ตัวเลขปริศนาคือ " << secretNumber << endl;
            cout << "คุณทายถูกภายใน " << attempts << " รอบ" << endl;
            break;
        }

        // เงื่อนไขแพ้ (ครบจำนวนครั้ง)
        if (attempts >= MAX_ATTEMPTS) {
            cout << ">> เกมโอเวอร์! คุณใช้สิทธิ์ครบแล้ว ตัวเลขปริศนาคือ " << secretNumber << endl;
            break;
        }

        // ใบ้ มากไป/น้อยไป
        if (guess < secretNumber) {
            cout << ">> น้อยไป! ลองใหม่อีกครั้ง" << endl;
        }
        else {
            cout << ">> มากไป! ลองใหม่อีกครั้ง" << endl;
        }

    } while (true);

    return 0;
}