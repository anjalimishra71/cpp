#include <stdio.h>

typedef struct
{
    int start;
    int end;
} Activity;

void sortEndingPosition(Activity activities[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int f = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (activities[j].end > activities[j + 1].end)
            {

                int temp = activities[j].end;
                activities[j].end = activities[j + 1].end;
                activities[j + 1].end = temp;

                int temp2 = activities[j].start;
                activities[j].start = activities[j + 1].start;
                activities[j + 1].start = temp2;
                f = 1;
            }
        }
        if (f == 0)
            break;
    }
}
void selectActivities(Activity activities[], int n)
{
    sortEndingPosition(activities, n);

    printf("Selected activities:\n");

    // The first activity always gets selected
    int i = 0;
    printf("Activity: (%d, %d)\n", activities[i].start, activities[i].end);

    for (int j = 1; j < n; j++)
    {
        if (activities[i].end <= activities[j].start)
        {
            printf("Activity: (%d, %d)\n", activities[j].start, activities[j].end);
            i = j;
        }
    }
}

int main()
{
    // Activity activities[] = {{2, 5}, {3, 4}, {1, 3}, {8, 9}, {4, 7}, {9, 11}, {7, 10}, {9, 13}, {11, 12}, {12, 14}};
    // int s = sizeof(activities) / sizeof(activities[0]);

    int n;
    printf("enter number of activites!!");
    scanf("%d", &n);

    Activity activities[n];

    printf("enter activities of start and finish time ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &activities[i].start, &activities[i].end);
    }

    selectActivities(activities, n);

    return 0;
}
