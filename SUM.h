#ifndef SUM_H
#define SUM_H

class sum{
	
	private:
		int a,b,answer; //decrrairing the variable as private members
		public:
		//	public setters and getters to access the private member variables
			int geta();
			void seta(int);
			void setb(int);
		
			int getb() ;
			int getanswer() const;
};



#endif