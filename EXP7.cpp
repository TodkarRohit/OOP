// Experiment 7: Demonstration of Types of Inheritance
// 1. Single Inheritance
// 2. Multiple Inheritance
// 3. Multilevel Inheritance
// 4. Hierarchical Inheritance

#include <iostream>
using namespace std;

// 1. Single Inheritance (7-1- single)
namespace SingleInheritance {
    class Student
    {
    public:
        void getStudent()
        {
            cout << "Student details" << endl;
        }
    };

    class Result : public Student
    {
    public:
        void displayResult()
        {
            cout << "Result: Pass" << endl;
        }
    };

    void run()
    {
        Result r;
        r.getStudent();     // Base class function
        r.displayResult();  // Derived class function
    }
}

// 2. Multiple Inheritance (7-2- multiple)
namespace MultipleInheritance {
    class Academic
    {
    public:
        void academicMarks()
        {
            cout << "Academic Marks: 80" << endl;
        }
    };

    class Sports
    {
    public:
        void sportsMarks()
        {
            cout << "Sports Marks: 15" << endl;
        }
    };

    class Student : public Academic, public Sports
    {
    public:
        void display()
        {
            cout << "Total Performance: Good" << endl;
        }
    };

    void run()
    {
        Student s;
        s.academicMarks();
        s.sportsMarks();
        s.display();
    }
}

// 3. Multilevel Inheritance (7-3- multilevel)
namespace MultilevelInheritance {
    class Person
    {
    public:
        void showPerson()
        {
            cout << "I am a Person" << endl;
        }
    };

    class Student : public Person
    {
    public:
        void showStudent()
        {
            cout << "I am a Student" << endl;
        }
    };

    class Result : public Student
    {
    public:
        void showResult()
        {
            cout << "Result: Pass" << endl;
        }
    };

    void run()
    {
        Result r;
        r.showPerson();   // Person class
        r.showStudent();  // Student class
        r.showResult();   // Result class
    }
}

// 4. Hierarchical Inheritance (7-4- hierarchical)
namespace HierarchicalInheritance {
    class Employee
    {
    public:
        void showEmployee()
        {
            cout << "Employee ID: 101" << endl;
        }
    };

    class Developer : public Employee
    {
    public:
        void showDeveloper()
        {
            cout << "Role: Software Developer" << endl;
        }
    };

    class Manager : public Employee
    {
    public:
        void showManager()
        {
            cout << "Role: Project Manager" << endl;
        }
    };

    void run()
    {
        Developer d;
        Manager m;

        cout << "Developer Details:" << endl;
        d.showEmployee();
        d.showDeveloper();

        cout << "\nManager Details:" << endl;
        m.showEmployee();
        m.showManager();
    }
}

int main()
{
    cout << "=== 1. Single Inheritance ===" << endl;
    SingleInheritance::run();

    cout << "\n=== 2. Multiple Inheritance ===" << endl;
    MultipleInheritance::run();

    cout << "\n=== 3. Multilevel Inheritance ===" << endl;
    MultilevelInheritance::run();

    cout << "\n=== 4. Hierarchical Inheritance ===" << endl;
    HierarchicalInheritance::run();

    return 0;
}
