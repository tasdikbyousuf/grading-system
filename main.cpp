#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

void calculateGrade() {
    while (true) {
        // Get student information
        cout << "Enter student name (or type 'exit' to end): ";
        string studentName;
        getline(cin, studentName);

        // Check if the user wants to exit
        if (studentName == "exit") {
            break;
        }

        cout << "Enter student ID: ";
        string studentID;
        getline(cin, studentID);

        // Get the number of subjects
        int numSubjects;
        cout << "Enter the number of subjects: ";
        cin >> numSubjects;

        // Initialize variables
        double totalScore = 0;
        const int maxScorePerSubject = 100;  // Assuming the maximum score for each subject is 100

        // Get grades for each subject
        for (int i = 1; i <= numSubjects; ++i) {
            double score;
            cout << "Enter grade for subject " << i << " (out of " << maxScorePerSubject << "): ";
            cin >> score;

            if (score >= 0 && score <= maxScorePerSubject) {
                totalScore += score;
            } else {
                cout << "Invalid input. Please enter a valid score." << endl;
                return;
            }
        }

        // Calculate average grade
        double averageGrade = totalScore / numSubjects;

        // Display results
        cout << "\nStudent Information:" << endl;
        cout << "Name: " << studentName << endl;
        cout << "ID: " << studentID << endl;
        cout << "\nGrading Results:" << endl;
        cout << "Average Grade: " << fixed << setprecision(2) << averageGrade << endl;
        cout << "\n-----------------------------" << endl;

        // Clear the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int main() {
    // Call the function to calculate grades for multiple students
    calculateGrade();

    return 0;
}
