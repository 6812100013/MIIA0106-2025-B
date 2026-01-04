// TODO 1) àµÔÁ field ã¹ struct Student ãËé¤Ãº: id, nickname, lineId, phone
// TODO 2) à¢ÕÂ¹ swapStudent(Student&, Student&) (ËéÒÁãªé swap library)
// TODO 3) à¢ÕÂ¹ sortByID(Student[], size) ãËéàÃÕÂ§ id ¹éÍÂ -> ÁÒ¡
// TODO 4) ÃÑº¢éÍÁÙÅ 5 ¤¹ áÅéÇàÃÕÂ§ áÅéÇáÊ´§¼Å
#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string id;
    string nickname;
    string lineId;
    string phone;
};

// TODO: swap à¢ÕÂ¹àÍ§
void swapStudent(Student& a, Student& b) {
    // TODO
    Student temp = a;
    a = b;
    b = temp;
}

// TODO: sort à¢ÕÂ¹àÍ§ (Bubble sort)
void sortByID(Student students[], int size) {
    // TODO
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].id > students[j + 1].id) // ¶éÒ id µÑÇË¹éÒÁÒ¡¡ÇèÒµÑÇËÅÑ§ ¡çãËéÊÅÑº¡Ñ¹
            {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}

void printStudents(Student students[], int size) {
    cout << "ID\tnickname\tLine ID\t Phone \n";
    for (int i = 0; i < size; i++) {
        // TODO: cout << students[i]...
        cout << students[i].id << "\t" << students[i].nickname << "\t"
            << students[i].lineId << "\t" << students[i].phone << "\n";
        cout << "----------------------\n";
    }
}
int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
        // àÍÒÁÒ¨Ò¡¢éÍ 2 ¢Í§ LAB0802
        cout << "Enter ID: ";
        cin >> students[i].id;
        cout << "Enter Nickname: ";
        cin >> students[i].nickname;
        cout << "Enter Line ID: ";
        cin >> students[i].lineId;
        cout << "Enter Phone: ";
        cin >> students[i].phone;

        cout << endl;
    }
    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}