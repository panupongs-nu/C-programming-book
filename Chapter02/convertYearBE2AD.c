/***********************************************************************
| Program: convertYearBE2AD
| Objectives: รับค่า input เป็นปี พ.ศ.(yearBE) แปลงเป็นปี ค.ศ.(yearAD)
|	 แล้วแสดงข้อความปี พ.ศ.(yearBE) และ ปี ค.ศ.(yearAD)
| Input: จำนวนเต็ม 1 ตัว เป็นค่าปี พ.ศ. (yearBE)
| Output: แสดงข้อความปี พ.ศ. ที่รับเข้ามา (yearBE) แปลงเป็นปี ค.ศ. (yearAD)
***********************************************************************/
#include <stdio.h>

int main(void) {
	// ประกาศตัวแปรจำนวนเต็ม yearBE เก็บค่าปี พ.ศ. yearAD เก็บค่าปี ค.ศ.
	int yearBE, yearAD;

	// แสดงข้อความบอกผู้ใช้ว่าโปรแกรมนี้ทำอะไร
	printf("This program is for converting the year from BE to AD.\n");
	printf("BE means Buddhist Era and AD stands for Anno Domini.\n");

	// แสดงข้อความบอกผู้ใช้งานให้ระบุค่าปี พ.ศ.
	printf("Please enter a year in BE:");

	// อ่านค่าอินพุตทางแป้นพิมพ์ มาเก็บในตัวแปร yearBE
	scanf("%d",&yearBE);

	// แปลงค่า ปี พ.ศ. เป็น ปี ค.ศ.
	yearAD = yearBE - 543;

	// แสดงข้อความผลลัพธ์การทำงาน
	printf("Year %d BE is %d AD\n", yearBE, yearAD);

  return 0;
}