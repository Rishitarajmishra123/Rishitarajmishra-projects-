#include <stdio.h>
int main() {
 int n;
 int marks[100][3]; // marks for 3 subjects
 int total[100];
 float average[100];
 char grade[100];
 char name[100][50]; // storing names
 printf("Enter number of students: ");
 scanf("%d", &n);
 // Input
 for (int i = 0; i < n; i++) {
 printf("Enter name of student %d: ", i + 1);
 scanf("%s", name[i]);
 total[i] = 0;
 printf("Enter marks in 3 subjects:\n");
 for (int j = 0; j < 3; j++) {
 printf("Subject %d: ", j + 1);
 scanf("%d", &marks[i][j]);
 total[i] += marks[i][j];
 }
 average[i] = total[i] / 3.0;
 // Grade assignment
 if (average[i] >= 90)
 grade[i] = 'A';
 else if (average[i] >= 75)
 grade[i] = 'B';
 else if (average[i] >= 60)
 grade[i] = 'C';
 else if (average[i] >= 40)
 grade[i] = 'D';
 else
 grade[i] = 'F';
 }
 // Output
 printf("\nReport Card:\n");
 printf("------------------------------------------\n");
 printf("Name\tTotal\tAverage\tGrade\n");
 printf("------------------------------------------\n");
 for (int i = 0; i < n; i++) {
 printf("%s\t%d\t%.2f\t%c\n", name[i], total[i], average[i], grade[i]);
 }
 return 0;
}