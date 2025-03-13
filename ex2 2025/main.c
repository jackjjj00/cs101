#include <stdio.h>
#include<string.h>
typedef struct employee{
    int id ;
    char name[12];
    int age ;
    float salary;
}employee_t;
void emp_info (employee_t emp){
    printf("employee name =%s\n",emp.name);
    printf("employee age =%d\n",emp.age);
    printf("employee id =%d\n",emp.id);
    printf("employee salary =%02f\n\n",emp.salary);
}
void emp_average_age(employee_t emp[],int n){
    
}
void emp_writefile(employee_t emp[],int n){
    FILE*fp=fopen("employee.bin","wb+");
    for(int i=0;i<n;i++){
        fwrite(&emp[i],sizeof(employee_t),1,fp);
    }
    fclose(fp);
}
void emp_readfile(employee_t emp[]){
    FILE*fp=fopen("employee.bin","rb");
    int i=0;
    while(fread(&emp[i],sizeof(employee_t),1,fp)){
        printf("[%d] %d %s\n", i, emp[i].id,emp[i].name);
        i++;
    }
    fclose(fp);
}
int main()
{
    employee_t emp[3];
    emp[0].id=1;
    emp[0].age=20;
    emp[0].salary=10000;
    strcpy(emp[0].name,"IU");
    
    emp[1].id=2;
    emp[1].age=31;
    emp[1].salary=30000;
    strcpy(emp[1].name,"Taylor");
    
    emp[2].id=3;
    emp[2].age=45;
    emp[2].salary=40000;
    strcpy(emp[2].name,"Nick");
   
    emp_writefile(emp,3);
    employee_t read_emp[10];
    emp_readfile(read_emp);
    
   for(int j=0;j<3;j++){
       emp_info(read_emp[j]);
   }
    
    
    return 0;
}
