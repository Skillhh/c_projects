#include<stdio.h>

struct date {
    int year;
    int month;
    int day;
};
void readDate(struct date *);
void printDate(struct date);

struct date advanceDay(struct date);

int main(void){
    
    struct date today, tomorrow;

    readDate(&today);
    printDate(today);
    
    tomorrow = advanceDay(today);
    printDate(tomorrow);

    return 0;
}
void readDate(struct date *today){
    scanf("%d", &today->year);
    scanf("%d", &(*today).month);
    scanf("%d", &(*today).day);
}
void printDate(struct date today){
    printf("%02d/%02d/%d\n", today.month, today.day, today.year);
}
struct date advanceDay(struct date today){
    if(today.day == 31 && today.month == 12) {
        today.day = 1;
        today.month = 1;
        today.year += 1;
    }else if(today.day == 30 && today.month == 11){
        today.day = 1;
        today.month += 1;
    }
    else if(today.day == 31){
        today.day = 1;
        today.month += 1;
    }
    else if(today.month == 2 && today.day == 28 ){
        today.month = 3;
        today.day = 1;
    }else{
        today.day += 1;
    }

    return today;
}
