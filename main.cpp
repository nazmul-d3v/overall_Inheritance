/*
//Single Inheritance
#include<iostream>
using namespace std;
class a
{
protected:
    int x;
public:
    void input()
    {
        cout<<"\n Enter the 1st Number :";
        cin>>x;
    }
};
class b:public a
{
    int y;
public:
    void getdata()
    {
        cout<<"\n Enter the 2nd number:";
        cin>>y;
    }

    void putdata()
    {
        cout <<"\n addition the two number="<<x+y;
    }
};

int main()
{
    b aa;
    aa.input();
    aa.getdata();
    aa.putdata();

}
*
//Multiple Inheritance
#include<iostream>
using namespace std;

class A
{
protected:
    int a;
public:
    void input()
    {
        cout<<"\n Enter 1st number:";
        cin>>a;
    }

};

class B
{
protected:
    int b;
public:
    void getdata()
    {
        cout<<"\n Enter 2nd Number:";
        cin>>b;
    }

};
class C : public A, public B
{
public:
    void addition ()
    {
        cout<<" addition this two number="<<a+b;
    }

};





int main()

{
    C aa;
    aa.input();
    aa.getdata();
    aa.addition();


}

*
#include<iostream>
using namespace std;

class M
{
protected:
    int m;
public:
    void get_m(int);
};
void M::get_m(int m)
{
    this->m=m;
}
class N
{
protected:
    int n;
public:
    void get_n(int);
};

void N ::get_n(int n)
{
    this->n=n;
}

class P : public M, public N
{
public:

    void display();

};
void P ::display()
{
    cout<<"m="<<m<<"\n";
    cout<<"n="<<n<<"\n";
    cout<<"m*n="<<m*n<<"\n";
}


int main()
{
    P aa;

    aa.get_m(322);
    aa.get_n(986);
    aa.display();


}

*
//Multilevel Inheritance
#include<iostream>
using namespace std;
class A
{
protected:
    int roll;
public:
    void getroll()
    {
        cout<<"\n Enter the roll:";
        cin>>roll;
    }
    void putroll()
    {
        cout<<"\n roll number="<<roll;
    }

};

class B : public A
{
protected:
    int sub1,sub2;
public:
    void getmarks()
    {
        cout<<"\n Enter marks of 1st sub:";
        cin>>sub1;
        cout<<"\n Enter marks of 2nd sub:";
        cin>>sub2;
    }
    void putmarks()
    {
        cout<<"\n mark1="<<sub1;
        cout<<"\n mark2="<<sub2;
    }

};

class C: public B
{
protected:
    int sptm;
public:
    void getsptm()
    {
        cout<<"\n Enter sport marks:";
        cin>> sptm;
    }
    void total()
    {
        putroll();
        putmarks();
        cout <<"\n total marks="<<sub1+sub2+sptm;

    }

};


int main()
{
    C aa;
    aa.getroll();
    aa.putroll();
    aa.getmarks();
    aa.putmarks();
    aa.getsptm();
    aa.total();
}

*
// Multilevel Inheritance
#include<iostream>
using namespace std;

class student
{
protected:
    int roll_number;
public:
    void get_number(int);
    void put_number();
};
void student ::get_number(int a)
{
    this-> roll_number=a;
}
void student ::put_number()
{
    cout<<"Roll Number:"<<roll_number<<"\n";
}
class test : public student
{
protected:
    float sub1;
    float sub2;
public:
    void get_marks(float, float);
    void put_marks();
};

void test ::get_marks( float x, float y)
{
    sub1=x;
    sub2=y;
}

void test ::put_marks()
{
    cout<<"\n Marks for sub1="<<sub1;
    cout<<"\n Marks for sub2="<<sub2;
}
class result : public test
{

protected:
    float total;
public:
    void display();
};

void result ::display()
{
    total= sub1+sub2;
    put_number();
    put_marks();
    cout <<"\n Total="<<total;
}

int main()
{
result aa;

aa.get_number(1);
aa.put_number();
aa.get_marks(89.3, 98.3);
aa.put_marks();
aa.display();

}

*

#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;
public:
    student() : roll_number(0) {}

    void get_number()
    {
        cout << "Enter Roll Number: ";
        cin >> roll_number;
    }
    void put_number()
    {
        cout << "Roll Number: " << roll_number << "\n";
    }
};

class test : public student
{
protected:
    float sub1, sub2;
public:
    test() : sub1(0), sub2(0) {}

    void get_marks()
    {
        cout << "Enter marks for Subject 1: ";
        cin >> sub1;
        cout << "Enter marks for Subject 2: ";
        cin >> sub2;
    }
    void put_marks()
    {
        cout << "\nMarks for Subject 1 = " << sub1;
        cout << "\nMarks for Subject 2 = " << sub2;
    }
};

class result : public test
{
protected:
    float total;
public:
    result() : total(0) {}

    void display()
    {
        total = sub1 + sub2;
        put_number();
        put_marks();
        cout << "\nTotal Marks = " << total << endl;
    }
};

int main()
{
    result aa;
    aa.get_number();
    aa.get_marks();


    aa.display();

    return 0;
}

*
// Hierarchical Inheritance
#include<iostream>
using namespace std;

class A
{
public:
    void message()
    {
        cout<<"\n welcome in inheritance:";
    }
};

class B: public A
{
public:
    void display()
    {
        cout<<"\n inside class B";
    }
};

class C: public B
{
public:
    void putdata()
    {
        cout<<"\n inside class C";
    }


};



int main ()
{
    B aa;
    C bb;
    aa.message();
    aa.display();
    bb.message();
    bb.putdata();

}


*/

//Hybrid Inheritance
#include<iostream>
using namespace std;
class A
{
public:
    void putdata()
    {
        cout<<"\n Inside class A:";
    }
};
class B : public A
{
public:
    void display()
    {
        cout<<"\n Inside class B:";
    }
};

class C
{
public:
    void message()

    {
        cout<<"\n Inside class C:";
    }

};
class D : public B, public C
{
public:
    void print() {
        cout << "\n Inside class D:";
    }
};





int main()
{
D dd;
dd.putdata();
dd.display();
dd.message();
dd.print();

}




































