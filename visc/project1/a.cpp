#include<iostream>
#include<cstring>
#include<string>
using namespace std;
void f1(){
    char str1[13] = "chuhailong";
    char str2[14] = "google";
    char str3[20];
    strcpy(str3, str1);
    cout << "strcpy(str3,str1):" << str3 << endl;
    char str4[20];
    strcpy(str4, str2);
    cout << "str4:" << str4 << endl;
    strcat(str4, "\n");
    strcat(str4, str2);
    cout << "strcat(str4,str2)"
         << "\n"
         << str4 << endl;
    int len = strlen(str1);
    cout << "strlen(str1):" << len << endl;
    int len2 = strlen(str4);
    cout << "strlen(str4):" << len2 << endl;
    cout << "string\n";
}
void f2()
{
    string str1 = "runood";
    string str2 = "chhailong";
    string str3;
    int len;
    str3 = str1;
    cout << "str3:" << str3 << endl;
    cout <<"str1 + str2:" << str1 + str2 << endl;
    len = str3.size();
    cout << "str3.size():" << len << endl;
}

void f3()
{
    /*C++指针*/
    // int var = 20;
    // int *p;
    // p = &var;
    // cout << "Value of Var: " << var << endl;
    // cout << "Value of p: " << p << endl;
    // cout << "Value of *p: " << *p << endl;
    /*递增一个指�?*/
    const int MAX = 3;
    int var[MAX] = {10, 100, 200};
    int *ptr;
    ptr = var;
    for (int i = 0; i < MAX;i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        ptr++;
    }
}
void f4()
{
    /*C++基本输入和输�?*/
    // char name[30];
    // cin >> name;
    // cout << "Your name is : " << name << endl;
    /*标准错误�?*/
    // char str[] = "unable to read ...";
    // cerr << "Error message : " << str << endl;
    /*标准日志�?*/
    char str[] = "unable to read ..."; 
    clog << "Error message : " << str << endl;
}
void f5()
{
    /*C++���ݽṹ*/
    struct Books{
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
    };
    Books book1;
    Books book2;
    strcpy(book1.title, "C++�̳�");
    strcpy(book1.author, "Ruboob");
    strcpy(book1.subject, "������Ԩ�");
    book1.book_id = 1122;
    cout << book1.title<< endl;
}
void f6(){
    /*ָ��ṹ���ָ��*/
    struct Books
    {
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
    };
    Books book1;
    Books book2;
    strcpy(book1.title, "C++�̳�");
    strcpy(book1.author, "Ruboob");
    strcpy(book1.subject, "������Ԩ�");
    book1.book_id = 1122;
    Books *p = &book1;
    cout << p->author << endl;
    cout << (*p).author << endl;
}
int main(){
    f6();
}