#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");//แสดงข้อความใส่จำนวนนักเรียน
    scanf("%d", &n);

    float math[n], phy[n], chem[n];//ประกาศอาร์เรย์เก็บคะแนน
    float sum_math = 0, sum_phy = 0, sum_chem = 0;//เก็บผลรวมของแต่ละวิชา


    for (int i = 0; i < n; i++) {//วนลูปรับคะแนนนักเรียนทีละคน
        printf("\nEnter scores for Student %d:\n", i + 1);
        printf("Math: ");
        scanf("%f", &math[i]);
        printf("Physics: ");
        scanf("%f", &phy[i]);
        printf("Chemistry: ");
        scanf("%f", &chem[i]);

        sum_math += math[i];
        sum_phy  += phy[i];
        sum_chem += chem[i];
    }


    printf("\nScore Table:\n");//แสดงค่าบนตาราง
    printf("Student   Math     Physics   Chemistry\n");
    for (int i = 0; i < n; i++) {
        printf("%-8d %-8.2f %-8.2f %-8.2f\n", i + 1, math[i], phy[i], chem[i]);
    }


    printf("\nAverage per subject:\n");//คำนวณและแสดงค่าเฉลี่ยของแต่ละวิชา
    printf("Math: %.2f\n", sum_math / n);
    printf("Physics: %.2f\n", sum_phy / n);
    printf("Chemistry: %.2f\n", sum_chem / n);

    return 0;
}
