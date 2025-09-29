#include <stdio.h>
#include <string.h>

int main() {
    char name1[50], name2[50];//สร้างตัวแปรอาร์เรย์ของ character (string) ไว้เก็บชื่อของลูกค้า 2 คน

    printf("Enter name of customer 1: ");//ใส่ชื่อลูกค้า1
    scanf("%s", name1);
    printf("Enter name of customer 2: ");//ใส่ชื่อลูกค้า2
    scanf("%s", name2);

    if (strcmp(name1, name2) == 0) {//ใช้ฟังก์ชัน strcmp เปรียบเทียบ string ถ้า เหมือนกัน จะคืนค่า 0 → เงื่อนไขเป็นจริง ถ้า ไม่เหมือนกัน → เงื่อนไขเป็นเท็จ
        printf("Both of your names are the same, which is %s.\n", name1);//แสดงข้อความ Both of your names are the same, which is (ชื่อลูกค้า)
        printf("The length of the name is %d characters.\n", (int)strlen(name1));//แสดงข้อความ The length of the name is (จำนวนตัวอักษรของชื่อ) characters.
    } else {//ถ้าชื่อไม่เหมือนกัน
        printf("Customer 1: %s (%d characters)\n", name1, (int)strlen(name1));//แสดงชื่อของลูกค้าคนที่ 1 พร้อมความยาว
        printf("Customer 2: %s (%d characters)\n", name2, (int)strlen(name2));//แสดงชื่อของลูกค้าคนที่ 2 พร้อมความยาว
    }

    return 0;
}
