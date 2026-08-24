#include <iostream>
using namespace std;

int main(){
    string name;
    cout << "What is your name?";
    cin >> name;

    int age;
    cout << "How old are you?";
    cin >> age;

    float gpa;
    cout << "What is your GPA?";
    cin >> gpa; 

    char grade;
    cout << "What grade are you?";
    cin >> grade;

    int birth_year;
    cout << "When you were born?";
    cin >> birth_year;

    int next_age = 2026 - birth_year + 1;

    int initial_score;
    cout << "What is your initial score?";
    cin >> initial_score;

    int updated_score;
    cout << "What is your updated score?";
    cin >> updated_score;

    cout << "===========================" << endl;
    cout << "     MY FIRST C++ APP      " << endl;
    cout << "===========================" << endl;
    
    cout << endl;

    cout << "Name       : " << name << endl;
    cout << "Age        : " << age << endl;
    cout << "GPA        : " << gpa << endl;
    cout << "Grade      : " << grade << endl;

    cout << endl;

    cout << "Birth Year : " << birth_year << endl;
    cout << "Next age   : " << next_age << endl;

    cout << endl;

    cout << "Initial Score   : " << initial_score << endl;
    cout << "Updated Score   : " << updated_score<< endl;

    cout << endl;

    cout << "Goal: Become a better programmer!" << endl;
    cout << "===========================" << endl;
    return 0;
}