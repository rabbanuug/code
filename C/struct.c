#include <stdio.h>
#include <string.h>

// struct student{
//     int id;
//     char name[16];
// }s1,s2;

// struct student{
//     int id;
//     char name[16];
// };

struct student{
    int id;
    float cgpa;
    char name[20];
};

int main(){
    // struct student s1, s2;
    // s1.id = 10;
    // strcpy(s2.name, "Rayhan");

    // printf("id : %d, name : %s", s1.id, s2.name);

    struct student s;
    printf("enter id, cgpa and name separeted via space\n");
    scanf("%d %f %s", &s.id, &s.cgpa, s.name);
    printf("\nid : %d, cgpa : %f, name : %s", s.id, s.cgpa, s.name);

}