#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Bool {False, True};

struct admin{
    char* name;
    char* id;
};

struct student{
    char* id;
    struct{
        int programming, data_structure, discrete_math, algorithms;
    }grades;
};

char* takestring(){
    char* s = (char *)calloc(1,sizeof(char));
    int len = 0;
    char t;
    while(scanf("%c",&t) && t != '\n'){
        s = (char *)realloc(s,len + 1);
        *(s+len) = t;
        *(s+len+1) = '\0';
        len++;
    }
    return s;
}

enum Bool found_student(char *s, struct student* arrptr){
    for(int i = 0; i < 10; i++){
        if(!strcmp(s,arrptr[i].id)) return True;
    }
    return False;
}

enum Bool found_admin(char *s, struct admin* arrptr){
    for(int i = 0; i < 2; i++){
        if(!strcmp(s,arrptr[i].id)) return True;
    }
    return False;
}

char* verify_student(struct student* arrptr){
    char *id;
    while(getchar() != '\n');
    do{
        id = takestring();
    }
    while(!found_student(id, arrptr) && printf("Wrong Data... \nPlease Try again: "));
    return id;
}

char* verify_admin(struct admin* arrptr){
    char *id;
    while(getchar() != '\n');
    do{
        id = takestring();
    }
    while(!found_admin(id, arrptr) && printf("Wrong Data... \nPlease Try again: "));
    return id;
}

void showgrades(char* id, struct student* arrptr){
    for(int i = 0; i < 10; i++){
        if(!strcmp(id,arrptr[i].id)){
            printf("Programming = %d\n",arrptr[i].grades.programming);
            printf("Data Structure = %d\n",arrptr[i].grades.data_structure);
            printf("Discrete Math = %d\n",arrptr[i].grades.discrete_math);
            printf("Algorithms = %d\n",arrptr[i].grades.algorithms);
            break;
        }
    }
}
void changedegrees(struct student* arrptr){
    printf("Enter The ID Of The Student Who You Want To Edit His Degree: ");
    char *id = verify_student(arrptr);
    for(int i = 0; i < 10; i++){
        if(!strcmp(id,arrptr[i].id)){
            int choice;
            printf("choose from 1 to 4 (programming, discrete math, Data Structure, Algorithms): ");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    printf("The Old Degree = %d, Enter The New Degree: ",arrptr[i].grades.programming);
                    scanf("%d",&arrptr[i].grades.programming);
                    break;
                case 2:
                    printf("The Old Degree = %d, Enter The New Degree: ",arrptr[i].grades.discrete_math);
                    scanf("%d",&arrptr[i].grades.discrete_math);
                    break;
                case 3:
                    printf("The Old Degree = %d, Enter The New Degree: ",arrptr[i].grades.data_structure);
                    scanf("%d",&arrptr[i].grades.data_structure);
                    break;
                case 4:
                    printf("The Old Degree = %d, Enter The New Degree: ",arrptr[i].grades.algorithms);
                    scanf("%d",&arrptr[i].grades.algorithms);
                    break;
            }

            break;
        }
    }
}

int main()
{
    struct student students[10] = {
        {"AL1546",{50,90,100,30}},
        {"AL1554",{10,90,100,40}},
        {"AL1545",{50,90,100,50}},
        {"AL1524",{50,90,40,60}},
        {"AL1513",{50,90,90,70}},
        {"AL1516",{50,90,50,80}},
        {"AL1578",{50,90,60,90}},
        {"AL1548",{50,90,80,100}},
        {"AL1517",{50,90,70,110}},
        {"AL1579",{50,90,100,120}}
    };

    struct admin admins[2] = {
        {"mohsen","A123456"},
        {"maged","B123456"}
    };



    int choice;
    printf("If You Are a Student Enter 1 And If You Are An Admin Enter 2: ");
    scanf("%d",&choice);
    if(choice == 1){
        printf("Enter Your Id To Display Your Grades: ");
        char *id = verify_student(students);
        showgrades(id,students);
    }
    else if(choice == 2){
        printf("Enter Your Id: ");
        char *id = verify_admin(admins);
        changedegrees(students);
    }
}
