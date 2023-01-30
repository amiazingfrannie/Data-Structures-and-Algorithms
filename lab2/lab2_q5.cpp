#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

const int NO_OR_STUDENTS = 20;

struct studentType
{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

void getData(ifstream& inFile, studentType sList[], int listSize);
void calculateGrade(studentType sList[], int listSize);
void printStudentDetails(studentType sList[], int listSize);
void printResult(ofstream& outFile, studentType slit[], int listsize);
int highestscore(studentType slist[], int listsize);
void out(ofstream& outFile, studentType slit[], int listsize);

int main(){

    ifstream inData;
    ofstream outData;
    studentType studentList[NO_OR_STUDENTS];

    inData.open("Ch9_Ex2Data.txt");
    if (!inData){
        cout << "The input file does not exist. Program terminates!" << endl;
        return 1; 
    }
    outData.open("out_p5.txt");
    if(!outData){
        cout << " " << endl;
    }

    getData(inData, studentList, NO_OR_STUDENTS);
    calculateGrade(studentList, NO_OR_STUDENTS);
    cout << "the highestscore is " << highestscore(studentList, NO_OR_STUDENTS) << endl;
    printStudentDetails(studentList, NO_OR_STUDENTS);
    out(outData, studentList, NO_OR_STUDENTS);

    return 0; 
}

void getData(ifstream& inFile, studentType sList[], int listSize) {
    for (int i = 0; i < listSize; i++)
    inFile >> sList[i].studentFName >> sList[i].studentLName
               >> sList[i].testScore;
}

void calculateGrade(studentType sList[], int listSize) {
    for (int i = 0; i < listSize; i++)
    {
        switch (sList[i].testScore / 10)
        {
        case 10:
        case 9:
            sList[i].grade = 'A';
            break;
        case 8:
            sList[i].grade = 'B';
            break;
        case 7:
            sList[i].grade = 'C';
            break;
        case 6:
            sList[i].grade = 'D';
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            sList[i].grade = 'F';
        }
    }    
}

void printStudentDetails(studentType sList[], int listSize){

    for(int i = 0; i < listSize; i ++ ){
        cout << sList[i].studentFName << " " 
         << sList[i].studentLName << " " 
         << sList[i].testScore << " " 
         << sList[i].grade << endl;
    }
}

int highestscore(studentType sList[], int listSize){
    int max = sList[0].testScore;
    for (int i = 1; i < listSize; i++){
        if (sList[i].testScore > max){
            max = sList[i].testScore;
        }
    }
    return max;
}


void out(ofstream& outFile, studentType sList[], int listSize){
    for (int i = 0; i < NO_OR_STUDENTS; i++) {
        int max = highestscore(sList, NO_OR_STUDENTS);
        if (sList[i].testScore == max){
            outFile << sList[i].studentFName << " " 
            << sList[i].studentLName << " " 
            << sList[i].testScore << " "
            << sList[i].grade << endl;
        }
    }
}
