#include <stdio.h>

#define DD 30
#define HH 24 

int main(void)
{
    int temperature_readings[DD][HH] = {{20, 10, 40, 10, 10, 10, -1},
                                        {10, 20, 5, 40},
                                        {10, 20, 10, 30}};
    float sum, sumHours, sumDayAvg;
    for (int i = 0; i < DD; i++) {
        for (int j = 0; j < HH; j++) {    
            sum += temperature_readings[i][j];    // sum of each hour's temperature
            //printf("sum = %.1f, ", sum);
        }  
        sumHours = sum / HH;    // assign a day of average temperature
        //printf("sumHour = %.1f, ", sumHours);
        sumDayAvg += sumHours; 
        //printf("sumDayAvg = %.1f\n", sumDayAvg);
    }
    
    printf("The average temperature for a month is %.1f\n", sumDayAvg / DD);

    return 0;
}