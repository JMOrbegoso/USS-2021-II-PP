#include "dataSeederClass.h"

void dataSeederClass::seed(academyClass *&academy){
    groupClass *group1, *group2;
    studentClass *student1, *student2, *student3, *student4, *student5;
    subjectClass *subject1, *subject2, *subject3, *subject4;

    group1 = new groupClass("12-12-2021", "15-04-2022", "4 meses");
    group2 = new groupClass("15-01-2022", "15-05-2022", "4 meses");

    student1 = new studentClass("john@doe.com", "123456", "John", "Doe", "91456711");
    student2 = new studentClass("antonio@gomez.com", "123456", "Antonio", "Gomez", "81354711");
    student3 = new studentClass("julia@ramirez.com", "123456", "Julia", "Ramirez", "90456211");
    student4 = new studentClass("rosario@lopez.com", "123456", "Rosario", "Lopez", "01956711");
    student5 = new studentClass("diana@rojas.com", "123456", "Diana", "Rojas", "92486711");

    subject1 = new subjectClass("Algebra 1", 3);
    subject2 = new subjectClass("Geometría", 2);
    subject3 = new subjectClass("Biología", 3);
    subject4 = new subjectClass("Anatomía", 4);

    academy->setName("Academia Orbegoso");
    academy->setRuc("1101110111010");
    academy->setAddress("Av. Bolognesi #110");

    academy->getStudents()->insert(student1);
    academy->getStudents()->insert(student2);
    academy->getStudents()->insert(student3);
    academy->getStudents()->insert(student4);
    academy->getStudents()->insert(student5);

    group1->getSubjects()->insert(subject1);
    group1->getSubjects()->insert(subject2);
    group2->getSubjects()->insert(subject3);
    group2->getSubjects()->insert(subject4);

    group1->getStudents()->insert(student1);
    group1->getStudents()->insert(student2);
    group2->getStudents()->insert(student3);
    group2->getStudents()->insert(student4);

    academy->getGroups()->insert(group1);
    academy->getGroups()->insert(group2);
}
