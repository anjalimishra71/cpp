#include <stdio.h>

typedef struct
{
    int weight;
    int values;
    float p;
} Activity;

void sortAccToProfit(Activity profit[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int f = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (profit[j].p < profit[j + 1].p)
            {

                int w = profit[j].weight;
                profit[j].weight = profit[j + 1].weight;
                profit[j + 1].weight = w;

                int v = profit[j].values;
                profit[j].values = profit[j + 1].values;
                profit[j + 1].values = v;

                float pf = profit[j].p;
                profit[j].p = profit[j + 1].p;
                profit[j + 1].p = pf;
                f = 1;
            }
        }
        if (f == 0)
            break;
    }
}
void selectActivities(Activity profit[],int n, int k)
{
    float totalProfit = 0.0;
    sortAccToProfit(profit, n);

    for (int i = 0; i < n; i++)
    {
        if (profit[i].weight <= k)
        {
            k = k - profit[i].weight;
            totalProfit += (float)profit[i].values;
        }
        else
        {
            // int a=(;
            totalProfit += profit[i].values*((float) k/ profit[i].weight);
            break;
        }
    }

    printf("Total value %.2f", totalProfit);
}

int main()
{
    int n, k;
    printf("enter number of data items!!");
    scanf("%d", &n);

    printf("enter knapsack capacity...");
    scanf("%d", &k);

    Activity profit[n];
    // float p[n];

    printf("enter weight and values ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &profit[i].weight, &profit[i].values);
    }

    for (int i = 0; i < n; i++)
    {
        profit[i].p = (float)profit[i].values / profit[i].weight;
    }

  

    selectActivities(profit, n, k);
  for (int i = 0; i < n; i++)
    {
        printf("\n%.2f  ", profit[i].p);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d %d %d\n  ", profit[i].weight, profit[i].values, profit[i].p);
    // }
    return 0;
}
