#include <stdio.h>
#include <string.h>

int main()
{
    char subject[21][51];
    double credit[20];
    char grade[21][3];
    double totalPoints = 0.0;
    double totalCredits = 0.0;

    for (int i = 0; i < 20; i++)
    {
        scanf("%s %lf %s", subject[i], &credit[i], grade[i]);
        if (strcmp(grade[i], "P") != 0)
        {
            double gradePoint = 0.0;
            if (strcmp(grade[i], "A+") == 0)
            {
                gradePoint = 4.5;
            }
            else if (strcmp(grade[i], "A0") == 0)
            {
                gradePoint = 4.0;
            }
            else if (strcmp(grade[i], "B+") == 0)
            {
                gradePoint = 3.5;
            }
            else if (strcmp(grade[i], "B0") == 0)
            {
                gradePoint = 3.0;
            }
            else if (strcmp(grade[i], "C+") == 0)
            {
                gradePoint = 2.5;
            }
            else if (strcmp(grade[i], "C0") == 0)
            {
                gradePoint = 2.0;
            }
            else if (strcmp(grade[i], "D+") == 0)
            {
                gradePoint = 1.5;
            }
            else if (strcmp(grade[i], "D0") == 0)
            {
                gradePoint = 1.0;
            }
            else if (strcmp(grade[i], "F") == 0)
            {
                gradePoint = 0.0;
            }
            totalPoints += credit[i] * gradePoint;
            totalCredits += credit[i];
        }
    }

    double GPA = totalPoints / totalCredits;
    printf("%.6f\n", GPA);

    return 0;
}
