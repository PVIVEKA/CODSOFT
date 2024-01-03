#include <iostream>
#include <string>
using namespace std;
int main(){
int numberofstudents,studentgrades[100];
string name[100];
cout<<"Enter the number of students:";
cin>>numberofstudents;
for(int i=0;i<numberofstudents;i++){
	cout<<"Enter the name of the student:";
	cin>>name[i];
	cout<<"Enter the grade of the student:";
	cin>>studentgrades[i];
}
	int totalgrade=0;
	int highestgrade=studentgrades[0];
	int lowestgrade=studentgrades[0];
	for(int i=0;i<numberofstudents;i++){
	totalgrade+=studentgrades[i];
	if(studentgrades[i]>highestgrade){
		highestgrade=studentgrades[i];
	}
	if(studentgrades[i]<lowestgrade){
		lowestgrade=studentgrades[i];
	}
}
for(int i=0;i<numberofstudents;i++){
cout<<"Student name: "<<name[i]<<"\n"<<"Grade: "<<studentgrades[i]<<"\n";
}
double average=totalgrade/numberofstudents;
cout<<"Highest grade:"<<highestgrade<<"\n";
cout<<"lowest grade:"<<lowestgrade<<"\n";
cout<<"Average grade:"<<average;
}


