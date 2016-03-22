#include "BMI.h"
#include <string>

using namespace std;

  

BMI::BMI(float w, float h){
	setW(w);
	setH(h);
}
  	   	    
void BMI::setH(float h){
    height=h/100;
}

void BMI::setW(float w){
	weight=w;      
}



float BMI::getBMI(){
	return weight/height/height;
}
	
string BMI::getCategory() {
	float b=getBMI();
	if(b<15)
	category="Very severely underweight";
																			       
	else if(15<=b&&b<16)
	category="Severely underweight";
																					       
	else if(16<=b&&b<18.5)
	category="Underweight";
																							       
	else if(18.5<=b&&b<25)
	category="Normal";
																									       
	else if(25<=b&&b<30)
	category="Overweight";								
	
	else if(30<=b&&b<35)
	category="Obese Class I (Moderately obese)";
	
	else if(35<=b&&b<40)
	category="Obese Class II (Severely obese)";

	else if(40<=b)
	category="Obese Class III (Very severely obese)";

	return category;
}		
