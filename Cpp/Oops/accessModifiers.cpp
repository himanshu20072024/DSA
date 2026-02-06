#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int roll_no;
        int age;

        Student(string name, int roll_no, int age)
        {
            this -> name = name;
            this -> roll_no = roll_no;
            this -> age =age;
        }

        Student()
        {

        }

        void Details(Student S)
        {
            cout<<S.name<<" "<<S.roll_no<<" "<<S.age<<endl;
        }

        void Details(Student* S)
        {
            cout<<S -> name<<" "<<S -> roll_no<<" "<<S -> age<<endl;
        }

        Student(string password, int adm_no, string name, int roll_no, int age)
        {
            this -> password = password;
            this -> name = name;
            this -> roll_no = roll_no;
            this -> age =age;
            this -> adm_no = adm_no;
        }

        string getPassword()  // getter --> 
        {
            return password;
        }

        void setPassword(string password)
        {
            this -> password = password;
        }

    private:
        string password;
        int adm_no;
};

int main()
{
    Student S1("Himanshu Kumar", 72, 18), S2("Sudhanshu Kumar", 73, 21), S3("12345678", 8975, "Himanshu Kumar", 72, 18);
    S1.Details(&S1);
    S2.Details(S2);
    S3.Details(S3);
    cout<<S3.getPassword();
    cout<<endl;
    S3.setPassword("maine change kar dia password");
    cout<<S3.getPassword();

}


