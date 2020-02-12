//Stack with Arrays

#include<iostream>
using namespace std;
#define MAX 4

int front = 0, size = 0;
int ar[MAX];
void insrt(int elt){
	if(size > MAX){
		cout<<"OVERFLOW \n";
	} else {
		front++;
		ar[front] = elt;
		size++;
	}	
}

void delet(){
	if(size > 0){
		front--;
		size--;
	}else{ 
		cout<<"Under Flow \n";
	}	
}

void show(){
	
	cout<<"\n ALL ELEMENTS ARE : \n";
	for(int i =0;i<front+1;i++){
		cout<<"\n"<<ar[i];
		//size++;
	}
	cout<<"size : "<<size;
}

int main(void){
	insrt(1);insrt(2);insrt(3);insrt(4);insrt(4);
	show();
	delet();
	show();
	return 0;	
}