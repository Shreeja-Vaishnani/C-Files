#include <stdio.h>

// Function declarations
void displayWelcomeMessage();
int getNumberOfStudents();
void displayGrades(int grades[], int n);
float calculateAverage(int grades[], int n);

int main()
 {
    int numStudents, i;
    int grades[100];
    float average;


    displayWelcomeMessage(); // call for function 1


    numStudents = getNumberOfStudents(); // call for function 2


    for(i = 0; i < numStudents; i++) // input for function 3
     {
        printf("Enter the grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }


    displayGrades(grades, numStudents); //call for function 3


    average = calculateAverage(grades, numStudents); // call for function 4
    printf("The average grade is: %.2f\n", average);
printf("------------------------------------------------\n");
printf("My name is Shreeja Vaishnani.\nMy Id is 24CE138");
}

//function 1


void displayWelcomeMessage()
 {
    printf("Welcome to the Charusat university!\n");
    printf("\n-------------------------------\n");
}

//function 2


int getNumberOfStudents()
 {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    return n;
}

//function 3

void displayGrades(int grades[], int n)
 {
    printf("The grades of the students are:\n");
    for(int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, grades[i]);
    }
}

//function 4

float calculateAverage(int grades[], int n)
 {
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += grades[i];
    }
    return (float)sum / n;
}

