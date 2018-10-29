/* Name: Melissa Ma
 * Date: 4/18/2018
 * Section: 8
 * Assignment: 7
 * Due Date: 4/27/2018
 * About this project:
 * Assumptions: Input file is in correct format, there is no trailing whitespace,
 * and the types and limits are appropriate.
 *
 * All work below was performed by Melissa Ma */


#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

/* structure declarations */
struct Student
{
    char last_name[20];
    char first_name[20];
    char course;
    int Test_1;
    int Test_2;
    int Final;
    double test_average;
};

/* function declarations */
void StoreArray(string, string, Student);
char GradeCalculator(double);

int main()
{
    /* the name of the user's file to read from */
    string input_filename;
    string output_filename;

    /* the number of students in the array */
    int size;

    /* the name of the file stream object to be read from */
    ifstream InputFile;

    /* the name of the file stream object ot write to */
    ofstream OutputFile;

    /* the array storing all the data from the file */
    Student * list = new Student[size];


    /* opens a file from the user's input to filename */
    cout << "\nPlease enter the name of the input file.\n" << "Filename: ";
    cin >> input_filename;

    InputFile.open(input_filename.c_str());

    /* error checks */
    while (InputFile.fail()) {
        cout << "That isn't a valid file! Try again: " << endl;
        cin >> input_filename;
        InputFile.open(input_filename.c_str());
    }

        /* creates filestream object for output file */
        cout << "\nPlease enter the name of the output file.\n";
        cin >> output_filename;

        StoreArray(input_filename, output_filename, *list);

        InputFile.close();

        OutputFile.close();

        cout << "\nProcessing Complete\n";

        delete[] list;

    return 0;
}


/* reads records into an array of Student structures */
void StoreArray(string input, string output, Student) {

    /* number of student arrays to be created */
    int size;

    /* number of students in each class */
    int count = 0;

    /* the name of the file stream object to be read from */
    ifstream InputFile;
    ofstream OutputFile;

    /* the array storing all the data from the file */
    Student *list = new Student[size];

    /* stores commas separating integers in file*/
    char junk;

    /* stores class average of students' grades */
    double class_average = 0;

    /* opens the input and output files */
    InputFile.open(input.c_str());
    OutputFile.open(output.c_str(), ios::out);

    /* stores the number of students */
    InputFile >> size;

    /* stores the contents of the file into Student array */
    for (int i = 0; i < size; i++) {

        InputFile.getline(list[i].last_name, 20, ',');

        InputFile.getline(list[i].first_name, 20, ',');

        InputFile >> list[i].course;

        InputFile >> junk;

        InputFile >> list[i].Test_1;

        InputFile >> junk;

        InputFile >> list[i].Test_2;

        InputFile >> junk;

        InputFile >> list[i].Final;

        list[i].test_average = (list[i].Test_1 * .3) + (list[i].Test_2 * .3) + (list[i].Final * .4);

    }

    /* starts writing report to output file */
    OutputFile <<
               "\nStudent Grade Summary\n" <<
               "---------------------\n" <<

               "ENGLISH CLASS\n\n" <<

               "Student Name                             Test Avg\n" <<
               "----------------------------------------------------------------\n";


    /* writes the students in the English class */
    for(int i = 0; i < size; i++) {
        if (list[i].course == 'E') {

            OutputFile << setiosflags(ios::left) << setw(44) << strcat(list[i].first_name, list[i].last_name)
                       << setw(9) << list[i].test_average << GradeCalculator(list[i].test_average) << endl;

            class_average += (list[i].test_average);
            count ++;

        }
    }

    OutputFile << setw(16) << "\nClass Average" << fixed << showpoint
               << setprecision(2) << class_average/count;

    class_average = 0;
    count = 0;


    /* writes the students in the History class */
    OutputFile << "\n\nHISTORY CLASS\n"
               <<"\n"
               <<"Student Name                             Test Avg\n"
               << "----------------------------------------------------------------\n";

    for(int i = 0; i < size; i++) {
        if (list[i].course == 'H') {

            OutputFile << setiosflags(ios::left) << setw(44) << strcat(list[i].first_name, list[i].last_name)
                       << setw(9) << list[i].test_average << GradeCalculator(list[i].test_average) << endl;

            class_average += (list[i].test_average);
            count++;

        }
    }


    OutputFile << setw(16) << "\nClass Average" << fixed << showpoint
               << setprecision(2) << class_average/count;

    class_average = 0;
    count = 0;


    /* writes the students in the Math class */
    OutputFile << "\n\nMATH CLASS\n"
               << "\n"
               << "Student Name                             Test Avg\n"
               << "----------------------------------------------------------------\n";

    for(int i = 0; i < size; i++) {
        if (list[i].course == 'M') {

            OutputFile << setiosflags(ios::left) << setw(44) << strcat(list[i].first_name, list[i].last_name)
                    << setw(9) << list[i].test_average << GradeCalculator(list[i].test_average) << endl;

            class_average += (list[i].test_average);
            count++;

        }
    }

    OutputFile << setw(16) << "\nClass Average" << fixed << showpoint
               << setprecision(2) << class_average/count;



}

/* gives letter grade for test avg */
char GradeCalculator(double test_average)
{
    char Grade;

    if (test_average >=90)
    {
        Grade = 'A';
    }
    
    if (test_average >=80 && test_average <90)
    {
        Grade = 'B';
    }
    
    if (test_average >=69 && test_average <80)
    {
        Grade = 'C';
    }
    
    if (test_average >=60 && test_average <69)
    {
        Grade = 'D';
    }
    
    if (test_average <60)
    {
        Grade = 'F';
    }

    return Grade;

}
