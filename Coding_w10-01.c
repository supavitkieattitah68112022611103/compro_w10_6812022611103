#include <stdio.h>

int main() {

    int a;


    printf("Enter Number of Students: ");//ใส่จำนวนนักเรียน
    scanf("%d", &a);

    int data[a];//ประกาศอาเรย์เก็บจำนวนนักเรียน
    int sum = 0;//ประกาศตัวแปรเก็บผลรวมคะแนน
    for (int i=0 ; i < a; i++)
    {
    printf("Enter %d student score(one per line):\n", i+1);//ใส่คะแนนของนักเรียนบรรทัดละ1คน
    scanf("%d", &data[i]);
    sum += data[i];//เก็บคะแนนรวม
    }

    for (int i = 0; i < a; i++) {
    printf("score %d = %d\n", i + 1, data[i]);//แสดงคะแนนนักเรียนแต่ละคน
    }
    float avg=(float)sum / a;//นำคะแนนรวมหารจำนวนนักเรียน
    printf ("Number of students: %d\n", a );//แสดงจำนวนนักเรียนที้งหมด

    printf("Average score: %.2f",avg);//แสดงค่าเฉลี่ยคะแนนทั้งหมด




 
    return 0;

}