/*
Q99: Change the date format from dd/mm/yyyy to dd-Mon-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    printf("Enter date (dd/mm/yyyy): ");
    gets(date);  

    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';
    
    int m = atoi(month);  // convert month to integer

    if (m < 1 || m > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    printf("Output: %s-%s-%s\n", day, months[m - 1], year);
    return 0;
}
