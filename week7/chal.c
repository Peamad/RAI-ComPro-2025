#include <stdio.h>
int main() {

    struct student {
    char name[20];   
    int id;
    float m, e, s, h; 
    float avg;        
    }st[3];
    char subjName[4][10] = {"Math", "English", "Science", "History"};
    float sumM=0,sumE=0,sumS=0,sumH=0;
    float subjAvg[4];

    
    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        scanf("%20s %d %f %f %f %f",
              st[i].name, &st[i].id, &st[i].m, &st[i].e, &st[i].s, &st[i].h);

        
        st[i].avg = (st[i].m + st[i].e + st[i].s + st[i].h) / 4;

        
        sumM += st[i].m;
        sumE += st[i].e;
        sumS += st[i].s;
        sumH += st[i].h;

        printf("\n"); 
    }

    
    printf("Student Averages:\n");
    int topIdx = 0;
    for (int i = 0; i < 3; i++) {
        printf("%s (ID: %d): %.2f\n", st[i].name, st[i].id, st[i].avg);
        if (st[i].avg > st[topIdx].avg) topIdx = i;
    }
    printf("\n");
    printf("Top Student: %s with %.2f\n\n", st[topIdx].name, st[topIdx].avg);

   
    subjAvg[0] = sumM / 3;
    subjAvg[1] = sumE / 3;
    subjAvg[2] = sumS / 3;
    subjAvg[3] = sumH / 3;

    printf("Subject Averages:\n");
    for (int j = 0; j < 4; j++) {
        printf("%s: %.2f\n", subjName[j], subjAvg[j]);
    }
    printf("\n");

    
    int topSubj = 0;
    for (int j = 1; j < 4; j++) {
        if (subjAvg[j] > subjAvg[topSubj]) topSubj = j;
    }
    printf("Top Subject: %s with average %.2f\n", subjName[topSubj], subjAvg[topSubj]);

    return 0;
}
