#include<iostream>
using namespace std;
//student--test
class student
{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no=a;
    }
    void print_number(void){
        cout<<"Your roll no is:"<<roll_no<<endl;
    }
};
class Test:virtual public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(void){
        cout<<"your marks are:"<<endl;
        cout<<"Maths:"<<maths<<endl;
        cout<<"physics:"<<physics<<endl;

    }
};
//student--sports
class sports:virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(void){
        cout<<"Your PT score is:"<<score<<endl;
    }

};
//test-result,test-sports
class Result:public Test,public sports{
    private:
    float total;
    public:
    void display(void){
        total=maths+physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is:"<<total<<endl;
    }


};
//main function
int main(){
    Result harry;
    harry.set_number(4200);
    harry.set_marks(78.9,99.5);
    harry.set_score(9);
    harry.display();
    

    return 0;
}