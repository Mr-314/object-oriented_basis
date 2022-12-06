#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int N =3;
struct Results{
  string name;
  int score[N];
};
void showResults(Results student);
void sortBySub(Results* students, int num, int subject);
void sortByTotal(Results* students, int num);

int main(){
  fstream fin;
  fin.open("scoreList.txt",ios::in);
  string str;
  int num=0;
  while(getline(fin , str)){
    num++;
  }
  fin.close();
  Results students[num];
  fin.open("scoreList.txt",ios::in);
  for(int i=0; i<num; i++){
    fin  >>  students[i].name ;
    for (int j=0 ; j<N ; j++ ){
      fin >> students[i].score[j] ;    
    }
  }
  fin.close();
  for (int i= 0; i<num ; i++ ){
    showResults(students[i]);
  }
  cout << endl;

  sortBySub(students, num, 0 );
  cout << "国語の点数順\n";
  for (int i= 0; i<num ; i++ ){
    showResults(students[i]);
  }

  cout << endl;
  sortByTotal(students, num);
  cout << "総点順\n";
  for (int i= 0; i<num ; i++ ){
    showResults(students[i]);
  }
}

void showResults(Results student){
  cout << student.name << " : " ;
  for (int j=0 ; j<N ; j++ ){
    cout << student.score[j] << "  ";    
  }
  cout << endl;
}

void sortBySub(Results* students, int num, int sub){
  Results w;
  for(int i=1; i<num; i++){ 
    for(int j=num-1; j>=i; j--){
      if(students[j-1].score[sub]<students[j].score[sub]){
	w=students[j];
	students[j]=students[j-1];
	students[j-1]=w;
      }
    }
  }
}


void sortByTotal(Results* students, int num){
	Results w;
	int total[num];
	for(int i=0; i<num; i++){
		total[i]=0;
		for(int j=0; j<N ; j++){
			total[i] += students[i].score[j];
		}
	}
		for(int i=1; i<num; i++){
		 for(int j=num-1; j>=i; j--){
			if(total[j-1]<total[j]){
				w=students[j];
				students[j]=students[j-1];
				students[j-1]=w;
			}
		}
	
	}
}