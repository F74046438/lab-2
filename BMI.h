#include <string>
using namespace std;


class BMI{
	public:
	    BMI(float w, float h);   
		void setH(float h);
		void setW(float w);
		float getBMI();
	    string getCategory();
	private:
		float height;
		float weight;
 		string category;
};
