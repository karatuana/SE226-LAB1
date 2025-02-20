#include <iostream>
using namespace std;

int main() {
    cout<<"Question1\n";
    string name;
    cout << "What is your name?\n";
    cin >> name;
    cout << "Hello " << name << ".\n";

    string student_id;
    cout << "What is your Student ID?\n";
    cin >> student_id;
    cout << "Your ID is " << student_id << ".\n";

    cout<<"Question2\n";
    double var1, var2;
    cout << "Enter first number: ";
    cin >> var1;
    cout << "Enter second number: ";
    cin >> var2;

    double sum_result = var1 + var2;
    double diff_result = var1 - var2;
    double prod_result = var1 * var2;

    cout << "var1: " << var1 << ", var2: " << var2 << ", sum: " << sum_result << ", difference: " << diff_result << ", product: " << prod_result << "\n";

    cout<<"Question3\n";
    string student_name;
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, student_name);

    double lab_grade, midterm_grade, final_grade;
    cout << "Enter Lab grade: ";
    cin >> lab_grade;
    cout << "Enter Midterm grade: ";
    cin >> midterm_grade;
    cout << "Enter Final grade: ";
    cin >> final_grade;

    double last_score = (lab_grade * 0.25) + (midterm_grade * 0.35) + (final_grade * 0.40);

    cout << "Name: " << student_name << "\nLab: " << lab_grade << "\nMidterm: " << midterm_grade << "\nFinal: " << final_grade << "\nLast Score: " << last_score << "\n";

    cout<<"Question4\n";

    cout << "*\n**\n***\n**\n*";

    return 0;
}
