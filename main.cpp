#include <iostream>
#include <fstream>
#include <cstdlib>
#include "BMI.h"


using namespace std;
   
int main()
{
	ifstream fin("file.in");
	ofstream fout("file.out", ios::out);
	float height, weight;
	while(fin>>height>>weight)
}
	if(weight == 0 && height == 0) break;
	BMI bmi(height, weight);
	fout<<bmi.getBMI()<<" "<<bmi.getCategory()<<endl;
															}
	fin.close();
    fout.close();
	return 0;
}

