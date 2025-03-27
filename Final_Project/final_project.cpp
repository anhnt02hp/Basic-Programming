#include <bits/stdc++.h>
using namespace std;

//Task 2: Enter student information
struct Student {
    int studentID;
    char fullName[100],  birthDate[100];
    float algebraScore, calculusScore, basicProgrammingScore;
};

void inputStudentInformation(Student student[], int n) {
    for(int i = 0; i <= n - 1; i++){
        cout << "Enter studentID: ";
        cin >> student[i].studentID;
        cin.ignore(); //Delete \n

        cout << "Enter fullName: ";
        cin.getline(student[i].fullName, 100);

        cout << "Enter Birthday: ";
        cin.getline(student[i].birthDate, 100);

        cout << "Enter algebraScore ";
        cin >> student[i].algebraScore;

        cout << "Enter calculusScore: ";
        cin >> student[i].calculusScore;

        cout << "Enter basicProgrammingScore: "
        cin >> student[i].basicProgrammingScore;
    }
}

//Task 3: Cout to screen with table 
void printStudentInformation(Student student[], int n) {
    cout << left << setw(10) << "ID" 
    << setw(20) << "FullName" 
    << setw(20) << "BirthDay"
    << setw(20) << "AlgebraScore"
    << setw(20) << "CalculusScore"
    << setw(20) << "BasicProgrammingScore"
    << setw(20) << "GPA" << endl;
    cout << "---------------------------------------" << endl;

    for(int i = 0; i <= n - 1; i++){
        cout << left << setw(10) << student[i].studentID
            << setw(20) << student[i].fullName
            << setw(20) << student[i].birthDate
            << setw(20) << student[i].algebraScore
            << setw(20) << student[i].calculusScore
            << setw(20) << student[i].basicProgrammingScore 
            << setw(20) << (student[i].algebraScore + student[i].calculusScore + student[i].basicProgrammingScore) / 3 << endl;
    }
    cout << "---------------------------------------" << endl;
}

//Task 4: Save in text file
void saveStudentInformationInTextFile(Student student[], int n){
    ofstream outFile("student.txt"); //Open file to write

    if(!outFile) {
        cout << "Error!" << endl;
        return;
    }

    outFile << left << setw(10) << "ID" 
        << setw(20) << "FullName" 
        << setw(20) << "BirthDay"
        << setw(20) << "AlgebraScore"
        << setw(20) << "CalculusScore"
        << setw(20) << "BasicProgrammingScore"
        << setw(20) << "GPA" << endl;
        outFile << "---------------------------------------" << endl;

    for(int i = 0; i <= n - 1; i++){
        outFile << left << setw(10) << student[i].studentID
            << setw(20) << student[i].fullName
            << setw(20) << student[i].birthDate
            << setw(20) << student[i].algebraScore
            << setw(20) << student[i].calculusScore
            << setw(20) << student[i].basicProgrammingScore 
            << setw(20) << (student[i].algebraScore + student[i].calculusScore + student[i].basicProgrammingScore) / 3 << endl;
    }
    outFile << "---------------------------------------" << endl;
    outFile.close();
    cout << "Saved!" << endl;
}

//Task 5: Find Max, Min GPA score
Student maxGPA(Student student[], int n){
    int maxIndex = 0;
    float maxScore = (student[0].algebraScore + student[0].calculusScore + student[0].basicProgrammingScore) / 3;

    float gpa = 0;
    for(int i = 0; i <= n - 1; i++){
        gpa = (student[i].algebraScore + student[i].calculusScore + student[i].basicProgrammingScore) / 3;
        if(gpa > maxScore){
            maxScore = gpa;
            maxIndex = i;
        }
    }
    return student[maxIndex];
}

Student minGPA(Student student[], int n){
    int minIndex = 0;
    float minScore = (student[0].algebraScore + student[0].calculusScore + student[0].basicProgrammingScore) / 3;

    float gpa = 0;
    for(int i = 0; i <= n - 1; i++){
        gpa = (student[i].algebraScore + student[i].calculusScore + student[i].basicProgrammingScore) / 3;
        if(gpa < minScore){
            minScore = gpa;
            minIndex = i;
        }
    }
    return student[minIndex];
}

Student maxBP(Student student[], int n){
    int maxIndex = 0;
    float maxScore = student[0].basicProgrammingScore;

    float BPScore = 0;
    for(int i = 0; i <= n - 1; i++){
        BPScore = student[i].basicProgrammingScore
        if(BPScore > maxScore){
            maxScore = BPScore;
            maxIndex = i;
        }
    }
    return student[maxIndex];
}




void printStudentInfor(Student s){
    cout << left << setw(10) << s.studentID
            << setw(20) << s.fullName
            << setw(20) << s.birthDate
            << setw(20) << s.algebraScore
            << setw(20) << s.calculusScore
            << setw(20) << s.basicProgrammingScore << endl;
}

int main(){
    //Task 1: Enter student number
    int n;
    cin >> n;

    Student student[n];

    inputStudentInformation(student, n);

    printStudentInformation(student, n);

    saveStudentInformationInTextFile(student, n);

    printStudentInfor(maxGPA(student, n));
    printStudentInfor(minGPA(student, n));
    printStudentInfor(maxBP(student, n));


    return 0;

}
