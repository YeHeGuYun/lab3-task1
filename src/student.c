/* student.c */ 
#include <stdio.h> 
#include "student.h"
/* Source file with structure * StudentData
* StudentAddress
*/
void sstudent (void) {
/* student is the variable of stucture StudentData*/
struct StudentData student;
/* Assinging the values to StudentData*/ student.stu_name = "Zhiwen Zheng"; student.stu_id = 123456;
student.stu_age = 20;
/* new structure */
student.stuAddress.street = "Заславская 12";
student.stuAddress.state = "Central"; student.stuAddress.city = "Minsk"; student.stuAddress.country = "China";
/* Displaying the values of struct memeber */
printf ("Hello, %s!", student.stu_name); printf("\nStudent Id is: %d", student.stu_id); printf("\nStudent Age is: %d", student.stu_age); printf("\n Country %s, Regin %s, City %s, Address
%s", student.stuAddress.country, student.stuAddress.state, student.stuAddress.city, student.stuAddress.street);
printf ("\nGoodbye!"); return 0;
}