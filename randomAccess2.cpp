#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
    private:
        char name[50];
        char employee_ID[20];
        char joining_DATE[20];
        char position[20];
        char marital_status[20];
        char age[10];
        char salary[20];
        char comment[20];
    public:
        void getEmp_data()
        {
            cout<<"Welcome to InForBrother: "<<endl;
            cout<<"==========";
            cout<<"Employee Name: ";
            cin.getline(name,50);
            cout<<"Employee ID: ";
            cin.getline(employee_ID,20);
            cout<<"joning data: ";
            cin.getline(joining_DATE,20);
            cout<<"Position: ";
            cin.getline(position,20);
            cout<<"Marital Status:"; 
            cin.getline(marital_status,20);
            cout<<"Age : ";
            cin.getline(age,10);
            cout<<"Salary: ";
            cin.getline(salary,20);
            cout<< "Comment : ";
            cin.getline(comment,20);
        }
        void showemp_data()
        {
            cout<<"\n\n Employee data: "<<endl;
            cout<<"============== "<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Employee ID: "<<employee_ID<<endl;
            cout<<"Positon:  "<<position<<endl;
            cout<<" Date of joining "<<joining_DATE<<endl;
            cout<<" Age of employee"<<age<<endl;
            cout<<" Salary of employee"<<salary<<endl;
            cout<<" Marital Status: "<<marital_status<<endl;
            cout<<" Comment :"<<comment<<endl;

        }

};
class Library
{
    public:
    Employee Emp;
    fstream fp,fp1;
    void writeEmployee()
    {
        fp.open("Employee.txt",ios::out);
        if(fp)
        {
            Emp.getEmp_data();
            fp.write((char*)&Emp,sizeof(Emp));
            cout<<"Record store successfully: "<<endl;
        }
        fp.close();
    }
    void w_displayEmp()
    {
        fp.open("Employee.txt",ios::in);
        if (fp)
        {
            fp.read((char*)&Emp,sizeof(Emp));
            Emp.showemp_data();
        }
    }

};
int main()
{
    Library lib;
    lib.writeEmployee();
    lib.w_displayEmp();
    return 0;
}