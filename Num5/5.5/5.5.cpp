#include <iostream>
#include <fstream>
#include <string>
using namespace std;
typedef struct student{
    char ID[20];
    char name[20];
    double score;
}STD;
char troupper(char ch){
    if (ch>='A'&&ch<='Z')
        return ch;
    else if (ch>='a'&&ch<='z')
        return (ch-'a'+'A');
    else {
        cout <<"Please input again ! "<<endl;
        char cc;
        cin>>cc;
        return troupper(cc);
    }

}
bool Check();
void Add_students(){
    fstream outFile;
    outFile.open("E:\\Data\\student.dat",ios::app|ios::binary|ios::out);
    if (!outFile){cout << "Error !"<<endl;exit(0);}
    STD stu;
    char ch='Y';
    do{
        cout << "ID:"<<endl;
        cin>>stu.ID;
        cout<<"Name:"<<endl;
        cin>>stu.name;
        cout<<"Score:"<<endl;
        cin>>stu.score;
        outFile.write((char*)&stu,sizeof(STD));
        cout<<"Input another? Y or N"<<endl;
        cin>>ch;
    }while(troupper(ch)=='Y');
    outFile.close();
    cout << "Add students successfully! "<<endl;
    return ;
}
void show_student(){
    fstream inFile;
    inFile.open("E:\\Data\\student.dat",ios::in|ios::binary);
    if (!inFile){cout << "Error !"<<endl;exit(0);}
    STD stu[333];
    int cnt=0;
    for(int i=1;!inFile.fail();i++){
        inFile.read((char *)&stu[i],sizeof(STD));
        if (inFile.fail()) break;
        cnt++ ;
        cout << "Fuck "<<"cnt"<<endl;
    }
    for (int i=1;i<=cnt ;i++){
        cout << "ID:";
        cout << stu[i].ID<<endl;
        cout << "Name:";
        cout << stu[i].name<<endl;
        cout << "Score:";
        cout << stu[i].score<<endl<<endl;
    }
    inFile.close();
    cout << "Show ending !"<<endl;
    return ;
}
void query_sutdent(){
    fstream inFile;
    inFile.open("E:\\Data\\student.dat",ios::in|ios::binary);
    if (!inFile){cout << "Error !"<<endl;exit(0);}
    STD stu[333];
    int cnt=0;
    for(int i=1;!inFile.fail();i++){
        inFile.read((char *)&stu[i],sizeof(STD));
        if (inFile.fail()) break;
        cnt++ ;
    }
    inFile.close();

    cout << "Please input the name of the student you want to check !"<<endl;
    char again='Y';
    do{
        char name[20] ;
        cin>>name;//这里只支持英文全名
        //cin.ignore();
        bool flag ;
        for (int i=1;i<=cnt;i++){
        //char a[81];
        //stu[i].name.copy(a,stu[i].name.length,0);
            if (name==stu[i].name){
                flag=1;
                cout << "ID:"<<endl;
                cout << stu[i].ID<<endl;
                cout << "Name:"<<endl;
                cout << stu[i].name<<endl;
                cout << "Score:"<<endl;
                cout << stu[i].score<<endl;
        }
    }
    if(flag==0) cout << "Sorry , Not find!"<<endl;
    cout << "Check another?Y or N"<<endl;
    cin>>again;
}while(troupper(again)=='Y');
    cout << "Check ending !"<<endl;
    return;
}
void change_student(){
    fstream inFile;
    inFile.open("E:\\Data\\student.dat",ios::in|ios::binary);
    if (!inFile){cout << "Error !"<<endl;exit(0);}
    STD stu[333];
    int cnt=0;
    for(int i=1;!inFile.fail();i++){
        inFile.read((char *)&stu[i],sizeof(STD));
        if (inFile.fail()) break;
        cnt++ ;
    }

   inFile.close();
    string I;
    char temp;
    do{
        cout << "Please input the ID of the student you want to change !"<<endl;
        cin>>I;
        //cin.ignore();
        for (int i=1;i<=cnt;i++)
    {
            if (I==stu[i].ID)
            {
                cout << "ID:"<<endl;
                cout << stu[i].ID<<endl;
                cout << "Name:"<<endl;
                cout << stu[i].name<<endl;
                cout << "Score:"<<endl;
                cout << stu[i].score<<endl;
                do
                {
                    cout << "Which do want to change ? "<<endl<<"N stand for name , I stand for ID and  S stand for Socre  "<<endl;
                    cin>>temp;
                    //cin.ignore();
                    
                    if (troupper(temp)=='N') {cout << "Please input new name :  ";cin>>stu[i].name;}
                    else if (troupper(temp)=='I') {cout << "Please input new name :  ";cin>>stu[i].ID;}
                    else if (troupper(temp)=='S') {cout << "Please input new name :  ";cin>>stu[i].score;}
                    
                    cout<<"GO ON ?Yes or No"<<endl;
                    cin >>temp;
                    //cin.ignore();
                }while (troupper(temp)=='Y');
            break;
        }
    }
    cout << "Check another student?"<<endl;
    cin>>temp;
    //cin.ignore();
}while(troupper(temp)=='Y');
    inFile.open("E:\\Data\\student.dat",ios::out|ios::binary|ios::trunc);
    if (!inFile){cout << "error!";exit (0);}
    for(int i=1;i<=cnt;i++){
        cout<<cnt;
        inFile.write((char *)&stu[i],sizeof(STD));
    }
    inFile.close();
    cout<<"Change ending !"<<endl;
    return;
}
void delete_student(){
    fstream inFile;
    
    inFile.open("E:\\Data\\student.dat",ios::in|ios::binary);
    if (!inFile){cout << "Error !"<<endl;exit(0);}
    
    STD stu[333];
    int cnt=0;
    for(int i=1;!inFile.fail();i++){
        inFile.read((char *)&stu[i],sizeof(STD));
        if (inFile.fail()) break;
        cnt++ ;
    }
    inFile.close();
    
    char tem='Y';
    fstream outFile;
    do{
        outFile.open("E:\\Data\\student.dat",ios::out|ios::binary|ios::trunc);
        cout << "Please input the ID of the student you want to delete !"<<endl;
        string I;
        cin>>I;
        for (int i=1;i<=cnt;i++){
        
        if (I==stu[i].ID){
            cout << "ID: ";
            cout << stu[i].ID<<endl;
            cout << "Name: ";
            cout << stu[i].name<<endl;
            cout << "Score: ";
            cout << stu[i].score<<endl;
            cout << "Delete "<<stu[i].name<<"?"<<endl;
            cin>>tem;
            if (troupper(tem)=='Y')
                continue;
        }
        outFile.write((char*)&stu[i],sizeof(STD));//读到输入的学号就跳过，不往文件里写
    }
    outFile.close();
    cout <<"Delete another ?";
    cin>>tem;
}while(troupper(tem)=='Y');
    cout <<"Delete successfully!"<<endl;
    return;
}
int main(){
    int tem=6;
    cout << "Please choose your need."<<endl;
    cout <<"1.Create a student information table !"<<endl;
    cout <<"2.Show the student information table !"<<endl;
    cout <<"3.Query a student's information !"<<endl;
    cout <<"4.Change students' information !"<<endl;
    cout <<"5.Delete a student's information !"<<endl;
    cout <<"6.Quit the system !"<<endl;
    cin>>tem;
    while (tem!=6){
        int cnt =0;
        if (tem ==1 ) Add_students();
        else if (tem == 2) show_student();
        else if (tem == 3) query_sutdent();
        else if (tem == 4) change_student();
        else if (tem == 5) delete_student();
        else {
            if (Check())cin>>tem;
            else break;
        }
        cout << "Please choose your need."<<endl;
        cin>>tem;
    }
    cout << "Thank you very much !"<<endl;
}
bool Check(){
    static int cnt=0;
    ++cnt;
    if (cnt <=5){
        cout << "Please choose your need again!"<<endl;
        return 1;
    }
    cout << "System pause for invald input !"<<endl;
    return 0;
}