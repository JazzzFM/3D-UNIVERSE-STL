#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "stl.hpp"
#include "Vector3D.hpp"


using namespace std;


class Torus : public STL {
     public:
	Torus(const char nombre[]);
	void Draw1(   
	             double x1, double x2, double x3, 
                 double x4, double x5, double x6,
                 double x7, double x8, double x9,
				 double x10, double x11, double x12,
				 double x13, double x14, double x15, 
                 double x16, double x17, double x18,
                 double x19, double x20, double x21,
				 double x22, double x23, double x24,
				 double x25, double x26, double x27, 
                 double x28, double x29, double x30,
                 double x31, double x32, double x33,
				 double x34, double x35, double x36,
				 double x37, double x38, double x39,
				 double x40, double x41, double x42,
				 double x43, double x44, double x45,
				 double x46, double x47, double x48,
				 double x49, double x50, double x51,
				 double x52, double x53, double x54,
				 double x55, double x56, double x57,
				 double x58, double x59, double x60,
				 int n, double d1,  double d2, double d3
				  );
	  
		void Draw2(   
	             double x1, double x2, double x3, 
                 double x4, double x5, double x6,
                 double x7, double x8, double x9,
				 double x10, double x11, double x12,
				 double x13, double x14, double x15, 
                 double x16, double x17, double x18,
                 double x19, double x20, double x21,
				 double x22, double x23, double x24,
				 double x25, double x26, double x27, 
                 double x28, double x29, double x30,
                 double x31, double x32, double x33,
				 double x34, double x35, double x36,
				 double x37, double x38, double x39,
				 double x40, double x41, double x42,
				 double x43, double x44, double x45,
				 double x46, double x47, double x48,
				 double x49, double x50, double x51,
				 double x52, double x53, double x54,
				 double x55, double x56, double x57,
				 double x58, double x59, double x60,
				 int n, double d1,  double d2, double d3
				  );		 
				  
				  
       void Draw3(   
	             double x1, double x2, double x3, 
                 double x4, double x5, double x6,
                 double x7, double x8, double x9,
				 double x10, double x11, double x12,
				 double x13, double x14, double x15, 
                 double x16, double x17, double x18,
                 double x19, double x20, double x21,
				 double x22, double x23, double x24,
				 double x25, double x26, double x27, 
                 double x28, double x29, double x30,
                 double x31, double x32, double x33,
				 double x34, double x35, double x36,
				 double x37, double x38, double x39,
				 double x40, double x41, double x42,
				 double x43, double x44, double x45,
				 double x46, double x47, double x48,
				 double x49, double x50, double x51,
				 double x52, double x53, double x54,
				 double x55, double x56, double x57,
				 double x58, double x59, double x60,
				 int n, double d1,  double d2, double d3
				  );		 				   
				  
};


Torus::Torus(const char nombre[]) : STL(nombre)
{
}




































void Torus::Draw1(
                 double x1, double x2, double x3, 
                 double x4, double x5, double x6,
                 double x7, double x8, double x9,
				 double x10, double x11, double x12,
				 double x13, double x14, double x15, 
                 double x16, double x17, double x18,
                 double x19, double x20, double x21,
				 double x22, double x23, double x24,
				 double x25, double x26, double x27, 
                 double x28, double x29, double x30,
                 double x31, double x32, double x33,
				 double x34, double x35, double x36,
				 double x37, double x38, double x39,
				 double x40, double x41, double x42,
				 double x43, double x44, double x45,
				 double x46, double x47, double x48,
				 double x49, double x50, double x51,
				 double x52, double x53, double x54,
				 double x55, double x56, double x57,
				 double x58, double x59, double x60,
				 int n, double d1,  double d2, double d3
                 )
{
      double gold= (1 + sqrt(5))/2;
      double g = 0.975 / (gold*gold);
      
      
         Vector3D w[20] = {
         Vector3D( x1 , x2, x3 ),//0
         Vector3D( x4 , x5, x6 ),//1
         Vector3D( x7 , x8, x9 ),//2
         Vector3D( x10 , x11, x12 ),//3
         Vector3D( x13 , x14, x15 ),//4
         Vector3D( x16 , x17, x18 ),//5
         Vector3D( x19 , x20, x21 ),//6
         Vector3D( x22 , x23, x24 ),//7
         Vector3D( x25 , x26, x27 ),//8
         Vector3D( x28 , x29, x30 ),//9
         Vector3D( x31 , x32, x33 ),//10
         Vector3D( x34 , x35, x36 ),//11
         Vector3D( x37 , x38, x39 ),//12
         Vector3D( x40 , x41, x42 ),//13
         Vector3D( x43 , x44, x45 ),//14
         Vector3D( x46 , x47, x48 ),//15
         Vector3D( x49 , x50, x51 ),//16
         Vector3D( x52 , x53, x54 ),//17
         Vector3D( x55 , x56, x57 ),//18
         Vector3D( x58 , x59, x60 ),//19
         
 };
      
    /* facet(w[9], w[15], w[14]);
     facet(w[8], w[9], w[14]);
     facet(w[13], w[8], w[14]);*/
     
        /*
       
	
  /*   facet(w[1], w[7], w[5]);
     facet(w[0], w[1], w[5]);
     facet(w[6], w[0], w[5]);
     
     
     
     facet(w[12], w[8], w[13]);
     facet(w[16], w[12], w[13]);
     facet(w[19], w[16], w[13]);
     
     facet(w[17],w[18], w[7]);
     facet(w[2], w[17], w[7]);
     facet(w[1], w[2], w[7]);
     
	 facet(w[18], w[17], w[15]);
     facet(w[10], w[18], w[15]);
     facet(w[9], w[10], w[15]);
     
	 facet(w[4], w[0], w[6]);
     facet(w[19], w[4], w[6]);
     facet(w[16], w[19], w[6]);
     
     facet(w[11], w[10], w[9]);
     facet(w[12], w[11], w[9]);
     facet(w[8], w[12], w[9]);
     */
    /*    double v1 =  x34 - x28;
		   double v2 =  x35 - x29 ;      
           double v3 =  x36 - x30; 
		 
		  double w1 =  x31 - x28;
		  double w2 =  x32 - x29;       
          double w3 =  x33 - x30;  
    
    double z1[3];
    	// We calculate the vector normal to face A.
 	 double z11 = ( ( (v2 * w3 ) - ( w2 * v3 )));  z1[ 1] = z11;
 	 double z12 = ( ( w1 * v3 ) - ( v1 * w3 ));  z1[ 2] = z12;
 	 double z13 = ( ( v1 * w2 ) - ( w1 * v2 ));  z1[ 3] = z13;
          double D = sqrt( (z11 * z11) + (z12 * z12) + (z13 * z13));
    cout<<endl<<"z1 = (  ";
 	for( int i = 1; i <= 3; ++i) 
 {
	 	
	 	if( i < 3)
	 	{
	 		cout<<z1[ i]/D<<",   ";
		 }
		 else
	 	cout<<z1[3]/D<<" )";
 } */
     /*
     
	 facet(w[2], w[1], w[0]);
     facet(w[3], w[2], w[0]);
     facet(w[4], w[3], w[0]);
     
     */
           
     /*
     facet(w[11], w[12], w[16]);
     facet(w[5], w[11], w[16]);
     facet(w[6], w[5], w[16]);
     
     facet(w[14], w[15], w[17]);
     facet(w[3], w[14], w[17]);
     facet(w[2], w[3], w[17]);
     */
      
     /*
	 facet(w[7], w[18], w[10]);
     facet(w[5], w[7],  w[10]);
     facet(w[11], w[5], w[10]);
    
     facet(w[14], w[3], w[4]); //w1
     facet(w[13], w[14], w[4]);
     facet(w[19], w[13], w[4]);*/
     
    
    
    
    
	
	Vector3D v[20] = {
         Vector3D( x1 + d1, x2 + d2, x3 + d3 ),//0
         Vector3D( x4 + d1, x5 + d2, x6 + d3 ),//1
         Vector3D( x7 + d1, x8 + d2, x9 + d3 ),//2
         Vector3D( x10 +d1, x11 +d2, x12 +d3 ),//3
         Vector3D( x13 +d1, x14 +d2, x15 +d3 ),//4
         Vector3D( x16 +d1, x17 +d2, x18 +d3 ),//5
         Vector3D( x19 +d1, x20 +d2, x21 +d3 ),//6
         Vector3D( x22 +d1, x23 +d2, x24 +d3 ),//7
         Vector3D( x25 +d1, x26 +d2, x27 +d3 ),//8
         Vector3D( x28 +d1, x29 +d2, x30 +d3 ),//9
         Vector3D( x31 +d1, x32 +d2, x33 +d3 ),//10
         Vector3D( x34 +d1, x35 +d2, x36 +d3 ),//11
         Vector3D( x37 +d1, x38 +d2, x39 +d3 ),//12
         Vector3D( x40 +d1, x41 +d2, x42 +d3 ),//13
         Vector3D( x43 +d1, x44 +d2, x45 +d3 ),//14
         Vector3D( x46 +d1, x47 +d2, x48 +d3 ),//15
         Vector3D( x49 +d1, x50 +d2, x51 +d3 ),//16
         Vector3D( x52 +d1, x53 +d2, x54 +d3 ),//17
         Vector3D( x55 +d1, x56 +d2, x57 +d3 ),//18
         Vector3D( x58 +d1, x59 +d2, x60 +d3 ),//19
         
     };
     
     	
if( n == 0 )
{
	
     facet(v[9], v[15], v[14]);
     facet(v[8], v[9], v[14]);
     facet(v[13], v[8], v[14]);
    
	
     facet(v[1], v[7], v[5]);
     facet(v[0], v[1], v[5]);
     facet(v[6], v[0], v[5]);
     
     facet(v[12], v[8], v[13]);
     facet(v[16], v[12], v[13]);
     facet(v[19], v[16], v[13]);
     
     facet(v[17], v[18], v[7]);
     facet(v[2], v[17], v[7]);
     facet(v[1], v[2], v[7]);
     
	 facet(v[18], v[17], v[15]);
     facet(v[10], v[18], v[15]);
     facet(v[9], v[10], v[15]);
     
	 facet(v[4], v[0], v[6]);
     facet(v[19], v[4], v[6]);
     facet(v[16], v[19], v[6]);
     
     facet(v[11], v[10], v[9]);
     facet(v[12], v[11], v[9]);
     facet(v[8], v[12], v[9]);
     
	 facet(v[2], v[1], v[0]);
     facet(v[3], v[2], v[0]);
     facet(v[4], v[3], v[0]);
     
     facet(v[11], v[12], v[16]);
     facet(v[5], v[11], v[16]);
     facet(v[6], v[5], v[16]);
     
     facet(v[14], v[15], v[17]);
     facet(v[3], v[14], v[17]);
     facet(v[2], v[3], v[17]);
     
	 facet(v[7], v[18], v[10]);
     facet(v[5], v[7], v[10]);
     facet(v[11], v[5], v[10]);
     
     facet(v[14], v[3], v[4]); //w1
     facet(v[13], v[14], v[4]);
     facet(v[19], v[13], v[4]);
     
     
}
 else
 {
 	
    facet(v[11], v[10], v[9]);//s
     facet(v[12], v[11], v[9]);
     facet(v[8], v[12], v[9]);
 	
 	 facet(v[9], v[15], v[14]);//a
     facet(v[8], v[9], v[14]);
     facet(v[13], v[8], v[14]);
     
     facet(v[18], v[17], v[15]);//d
     facet(v[10], v[18], v[15]);
     facet(v[9], v[10], v[15]);
    
    facet(v[7], v[18], v[10]); //e
     facet(v[5], v[7], v[10]);
     facet(v[11], v[5], v[10]);
     
     facet(v[11], v[12], v[16]);//f
     facet(v[5], v[11], v[16]);
     facet(v[6], v[5], v[16]);

     facet(v[12], v[8], v[13]); //c
     facet(v[16], v[12], v[13]);
     facet(v[19], v[16], v[13]);
     
     facet(v[1], v[7], v[5]);// w 3
     facet(v[0], v[1], v[5]);
     facet(v[6], v[0], v[5]);
     
    facet(v[17], v[18], v[7]);    //w 4
     facet(v[2], v[17], v[7]);
     facet(v[1], v[2], v[7]);
     
	 facet(v[4], v[0], v[6]);// w 2
     facet(v[19], v[4], v[6]);
     facet(v[16], v[19], v[6]);
     
	 facet(v[2], v[1], v[0]); ////b center
     facet(v[3], v[2], v[0]);
     facet(v[4], v[3], v[0]);
     
     facet(v[14], v[15], v[17]); //w5
     facet(v[3], v[14], v[17]);
     facet(v[2], v[3], v[17]);
     
     
     facet(v[14], v[3], v[4]);//w1
     facet(v[13], v[14], v[4]);
     facet(v[19], v[13], v[4]);
     
   
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	
	 
	 
	
 	double a[ 4];
           a [ 0 ] = 0.0;
 	
 	
 	for(int k=0; k<=0; ++k)
 	{
	 
 	
 	// We calculate the vector normal to face A.
 	double a1 = ( ( (x41-x44) * (x48-x45) ) - ( (x47-x44) * (x42-x45)) );  a[ 1] = a1;
 	double a2 = ( ( (x46-x43) * (x42-x45) ) - ( (x40-x43) * (x48-x45)) );  a[ 2] = a2;
 	double a3 = ( ( (x40-x43) * (x47-x44) ) - ( (x46-x43) * (x41-x44)) );  a[ 3] = a3;

 	
 	
 	double l = sqrt( (a1*a1) + (a2*a2) + (a3*a3));
 	
 	//Let  d  be any arbitrary real number.
 		double d = 1.0;
 	//We now calculate the unit vector asociated to 	
 	
 	a1=pow(-1, k)*d * (a1 / l);
 	a2=pow(-1, k)*d * (a2 / l);
 	a3=pow(-1, k)*d * (a3 / l);
 	
 	
 	
 	//
 	
 	d = 0.666666 * gold + 0.0;
 	
 	double v1 =  x52 - x4;
		  double v2 =  x53 - x5;       
          double v3 =  x54 - x6; 
		 
		  double w1 =  x4 - x7;
		  double w2 =  x5 - x8;       
          double w3 =  x6 - x9;                    
                 
     double u1 = ( ( (v2 * w3 ) - ( w2 * v3 )));
 	 double u2 = ( ( w1 * v3 ) - ( v1 * w3 ));
 	 double u3 = ( ( v1 * w2 ) - ( w1 * v2 )); 
 	
 	double x[ n + 1];
           x [ 0 ] = 0.0;
     
    double x01 = (x1 * g) + (a1*d);
	double x02 = (x2 * g) + (a2*d);
	double x03 = (x3 * g) + (a3*d);
	
	double x04 = (x4 * g) + (a1*d);
	double x05 = (x5 * g) + (a2*d);
	double x06 = (x6 * g) + (a3*d);
	
	double x07 = (x7 * g) + (a1*d);
	double x08 = (x8 * g) + (a2*d);
	double x09 = (x9 * g) + (a3*d);	 
	
	double x010 = (x10 * g) + (a1*d);
	double x011 = (x11 * g) + (a2*d);
	double x012 = (x12 * g) + (a3*d);
	
	double x013 = (x13 * g) + (a1*d);
	double x014 = (x14 * g) + (a2*d);
	double x015 = (x15 * g) + (a3*d);
	
	double x016 = (x16 * g) + (a1*d);
	double x017 = (x17 * g) + (a2*d);
	double x018 = (x18 * g) + (a3*d);
	
	double x019 = (x19 * g) + (a1*d);
	double x020 = (x20 * g) + (a2*d);
	double x021 = (x21 * g) + (a3*d);
	
	double x022 = (x22 * g) + (a1*d);
	double x023 = (x23 * g) + (a2*d);
	double x024 = (x24 * g) + (a3*d);
	
	double x025 = (x25 * g) + (a1*d);
	double x026 = (x26 * g) + (a2*d);
	double x027 = (x27 * g) + (a3*d);
	
	double x028 = (x28 * g) + (a1*d);
	double x029 = (x29 * g) + (a2*d);
	double x030 = (x30* g) + (a3*d);	
	
	double x031 = (x31 * g) + (a1*d);
	double x032 = (x32 * g) + (a2*d);
	double x033 = (x33 * g) + (a3*d);
    
     
    double x034 = (x34 * g) + (a1*d);
	double x035 = (x35 * g) + (a2*d);
	double x036 = (x36 * g) + (a3*d);	
	
	double x037 = (x37 * g) + (a1*d);
	double x038 = (x38 * g) + (a2*d);
	double x039 = (x39 * g) + (a3*d);	 
	
	double x040 = (x40 * g) + (a1*d);
	double x041 = (x41 * g) + (a2*d);
	double x042 = (x42 * g) + (a3*d);
	
	double x043 = (x43 * g) + (a1*d);
	double x044 = (x44 * g) + (a2*d);
	double x045 = (x45 * g) + (a3*d);
	
	double x046 = (x46 * g) + (a1*d);
	double x047 = (x47 * g) + (a2*d);
	double x048 = (x48 * g) + (a3*d);
	
	double x049 = (x49 * g) + (a1*d);
	double x050 = (x50 * g) + (a2*d);
	double x051 = (x51 * g) + (a3*d);

	double x052 = (x52 * g) + (a1*d);
	double x053 = (x53 * g) + (a2*d);
	double x054 = (x54 * g) + (a3*d);
	
	double x055 = (x55 * g) + (a1*d);
	double x056 = (x56 * g) + (a2*d);
	double x057 = (x57 * g) + (a3*d);
	
	double x058 = (x58 * g) + (a1*d);
	double x059 = (x59 * g) + (a2*d);
	double x060 = (x60 * g) + (a3*d);  	     	        
  
	 
	Draw1(
                  x01,  x02,  x03, 
                  x04,  x05, x06,
                  x07,  x08, x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n - 1,d1,d2,d3
                 );
                 
                 
                 
                 
            
                 
                 
                 
                 
                 
                 
                 
                 
                
                 
                 
                 
                
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
          
		  
		  
		  
		  
		 		 
		  
	       v1 =  x13 - x1;
		   v2 =  x14 - x2;       
           v3 =  x15 - x3; 
		 
		   w1 =  x4 - x1;
		   w2 =  x5 - x2;       
           w3 =  x6 - x3;                    
                 
     double b[ 4];
           b [ 0 ] = 0.0;
 	
 	
 	for(int k=0; k<=0; ++k)
 	{
 		// We calculate the vector normal to face A.
 	 double b1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  b[ 1] = a1;
 	 double b2 = ( ( w1 * v3 ) - ( v1 * w3 ));  b[ 2] = a2;
 	 double b3 = ( ( v1 * w2 ) - ( w1 * v2 ));  b[ 3] = a3;
          double D = sqrt( (b1 * b1) + (b2 * b2) + (b3 * b3));
   /* cout<<endl<<"b = (  ";
 	for( int i = 1; i <= 3; ++i) 
 {
	 	
	 	if( i < 3)
	 	{
	 		cout<<b[ i]/D<<",   ";
		 }
		 else
	 	cout<<b[3]/D<<" )";
	 
 }*/
 	
 	 l = sqrt( (b1*b1) + (b2*b2) + (b3*b3));
 	 d = 0.666666 * gold;
 	
 	b1=pow(-1, k)*d * (b1 / l);
 	b2=pow(-1, k)*d * (b2 / l);
 	b3=pow(-1, k)*d * (b3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y01 = (x1 * g) + (b1*d);
	double y02 = (x2 * g) + (b2*d);
	double y03 = (x3 * g) + (b3*d);
     
     
    double y04 = (x4 * g) + (b1*d);
	double y05 = (x5 * g) + (b2*d);
	double y06 = (x6 * g) + (b3*d);	
	
	double y07 = (x7 * g) + (b1*d);
	double y08 = (x8 * g) + (b2*d);
	double y09 = (x9 * g) + (b3*d);	 
	
	double y010 = (x10 * g) + (b1*d);
	double y011 = (x11 * g) + (b2*d);
	double y012 = (x12 * g) + (b3*d);
	
	double y013 = (x13 * g) + (b1*d);
	double y014 = (x14 * g) + (b2*d);
	double y015 = (x15 * g) + (b3*d);

	double y016 = (x16 * g) + (b1*d);
	double y017 = (x17 * g) + (b2*d);
	double y018 = (x18 * g) + (b3*d);

	double y019 = (x19 * g) + (b1*d);
	double y020 = (x20 * g) + (b2*d);
	double y021 = (x21 * g) + (b3*d);
	
	double y022 = (x22 * g) + (b1*d);
	double y023 = (x23 * g) + (b2*d);
	double y024 = (x24 * g) + (b3*d);
	
	double y025 = (x25 * g) + (b1*d);
	double y026 = (x26 * g) + (b2*d);
	double y027 = (x27 * g) + (b3*d);
	
	double y028 = (x28 * g) + (b1*d);
	double y029 = (x29 * g) + (b2*d);
	double y030 = (x30* g) + (b3*d);	
	
	double y031 = (x31 * g) + (b1*d);
	double y032 = (x32 * g) + (b2*d);
	double y033 = (x33 * g) + (b3*d);
    
     
    double y034 = (x34 * g) + (b1*d);
	double y035 = (x35 * g) + (b2*d);
	double y036 = (x36 * g) + (b3*d);	
	
	double y037 = (x37 * g) + (b1*d);
	double y038 = (x38 * g) + (b2*d);
	double y039 = (x39 * g) + (b3*d);	 
	
	double y040 = (x40 * g) + (b1*d);
	double y041 = (x41 * g) + (b2*d);
	double y042 = (x42 * g) + (b3*d);
	
	double y043 = (x43 * g) + (b1*d);
	double y044 = (x44 * g) + (b2*d);
	double y045 = (x45 * g) + (b3*d);
	
	double y046 = (x46 * g) + (b1*d);
	double y047 = (x47 * g) + (b2*d);
	double y048 = (x48 * g) + (b3*d);

	double y049 = (x49 * g) + (b1*d);
	double y050 = (x50 * g) + (b2*d);
	double y051 = (x51 * g) + (b3*d);
	
	double y052 = (x52 * g) + (b1*d);
	double y053 = (x53 * g) + (b2*d);
	double y054 = (x54 * g) + (b3*d);
	
	double y055 = (x55 * g) + (b1*d);
	double y056 = (x56 * g) + (b2*d);
	double y057 = (x57 * g) + (b3*d);
	
	double y058 = (x58 * g) + (b1*d);
	double y059 = (x59 * g) + (b2*d);
	double y060 = (x60 * g) + (b3*d);  	     	        
  
	 
	Draw1(
                  y01,  y02,  y03, 
                  y04,  y05,  y06,
                  y07,  y08,  y09,
				  y010, y011, y012,
				  y013, y014, y015, 
                  y016, y017, y018,
                  y019, y020, y021,
				  y022, y023, y024,
				  y025, y026, y027, 
                  y028, y029, y030,
                  y031, y032, y033,
				  y034, y035, y036,
				  y037, y038, y039,
				  y040, y041, y042,
				  y043, y044, y045,
				  y046, y047, y048,
				  y049, y050, y051,
				  y052, y053, y054,
				  y055, y056, y057,
				  y058, y059, y060,
				 n - 1, d1, d2, d3
                 );		      
			
                 
          v1 =  x1 - x13;
		  v2 =  x2 - x14;       
          v3 =  x3 - x15; 
		 
		  w1 =  x58 - x13;
		  w2 =  x59 - x14;       
          w3 =  x60 - x15;      
		  
		  
		  
		  
		  
		  
		  	         
      double c[ 4];
           c [ 0 ] = 0.0;
 	
 	
 	
 		// We calculate the vector normal to face A.
 	double c1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  c[ 1] = c1;
 	double c2 = ( ( w1 * v3 ) - ( v1 * w3 ));  c[ 2] = c2;
 	double c3 = ( ( v1 * w2 ) - ( w1 * v2 ));  c[ 3] = c3;

  
 	
 	
 	 l = sqrt( (c1*c1) + (c2*c2) + (c3*c3));
 	 d = -0.666666 * gold;
 	
 	c1=pow(-1, k)*d * (c1 / l);
 	c2=pow(-1, k)*d * (c2 / l);
 	c3=pow(-1, k)*(-1)*d * (c3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y101 = (x1 * g) + (c1*d);
	double y102 = (x2 * g) + (c2*d);
	double y103 = (x3 * g) + (c3*d);
     
     
    double y104 = (x4 * g) + (c1*d);
	double y105 = (x5 * g) + (c2*d);
	double y106 = (x6 * g) + (c3*d);	
	
	double y107 = (x7 * g) + (c1*d);
	double y108 = (x8 * g) + (c2*d);
	double y109 = (x9 * g) + (c3*d);	 
	
	double y1010 = (x10 * g) + (c1*d);
	double y1011 = (x11 * g) + (c2*d);
	double y1012 = (x12 * g) + (c3*d);
	
	double y1013 = (x13 * g) + (c1*d);
	double y1014 = (x14 * g) + (c2*d);
	double y1015 = (x15 * g) + (c3*d);

	double y1016 = (x16 * g) + (c1*d);
	double y1017 = (x17 * g) + (c2*d);
	double y1018 = (x18 * g) + (c3*d);

	double y1019 = (x19 * g) + (c1*d);
	double y1020 = (x20 * g) + (c2*d);
	double y1021 = (x21 * g) + (c3*d);
	
	double y1022 = (x22 * g) + (c1*d);
	double y1023 = (x23 * g) + (c2*d);
	double y1024 = (x24 * g) + (c3*d);

	double y1025 = (x25 * g) + (c1 *d);
	double y1026 = (x26 * g) + (c2 *d);
	double y1027 = (x27 * g) + (c3*d);
	
	double y1028 = (x28 * g) + (c1*d);
	double y1029 = (x29 * g) + (c2*d);
	double y1030 = (x30* g) + (c3*d);	
	
	double y1031 = (x31 * g) + (c1*d);
	double y1032 = (x32 * g) + (c2*d);
	double y1033 = (x33 * g) + (c3*d);
    
     
    double y1034 = (x34 * g) + (c1*d);
	double y1035 = (x35 * g) + (c2*d);
	double y1036 = (x36 * g) + (c3*d);	
	
	double y1037 = (x37 * g) + (c1*d);
	double y1038 = (x38 * g) + (c2*d);
	double y1039 = (x39 * g) + (c3*d);	 
	
	double y1040 = (x40 * g) + (c1*d);
	double y1041 = (x41 * g) + (c2*d);
	double y1042 = (x42 * g) + (c3*d);

	double y1043 = (x43 * g) + (c1*d);
	double y1044 = (x44 * g) + (c2*d);
	double y1045 = (x45 * g) + (c3*d);
	
	double y1046 = (x46 * g) + (c1*d);
	double y1047 = (x47 * g) + (c2*d);
	double y1048 = (x48 * g) + (c3*d);

	double y1049 = (x49 * g) + (c1*d);
	double y1050 = (x50 * g) + (c2*d);
	double y1051 = (x51 * g) + (c3*d);

	double y1052 = (x52 * g) + (c1*d);
	double y1053 = (x53 * g) + (c2*d);
	double y1054 = (x54 * g) + (c3*d);
	
	double y1055 = (x55 * g) + (c1*d);
	double y1056 = (x56 * g) + (c2*d);
	double y1057 = (x57 * g) + (c3*d);

	double y1058 = (x58 * g) + (c1*d);
	double y1059 = (x59 * g) + (c2*d);
	double y1060 = (x60 * g) + (c3*d);  	     	        
  
	 
	Draw1(
                  y101,  y102,  y103, 
                  y104,  y105,  y106,
                  y107,  y108,  y109,
				  y1010, y1011, y1012,
				  y1013, y1014, y1015, 
                  y1016, y1017, y1018,
                  y1019, y1020, y1021,
				  y1022, y1023, y1024,
				  y1025, y1026, y1027, 
                  y1028, y1029, y1030,
                  y1031, y1032, y1033,
				  y1034, y1035, y1036,
				  y1037, y1038, y1039,
				  y1040, y1041, y1042,
				  y1043, y1044, y1045,
				  y1046, y1047, y1048,
				  y1049, y1050, y1051,
				  y1052, y1053, y1054,
				  y1055, y1056, y1057,
				  y1058, y1059, y1060,
				 n - 1,d1,d2,d3
                 );
				 
				 //////////////////////////////////////////////   f
		  v1 =  x34 - x37;
		  v2 =  x35 - x38;       
          v3 =  x36 - x39; 
		 
		  w1 =  x49 - x37;
		  w2 =  x50 - x38;       
          w3 =  x51 - x39;                    
                 
     double f1 = ( ( v2 * w3 ) - ( w2 * v3 ));
 	 double f2 = ( ( w1 * v3 ) - ( v1 * w3 ));
 	 double f3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
 	
 	 l = sqrt( (f1*f1) + (f2*f2) + (f3*f3));
 	 d = 0.666666 * gold;
 	
 	f1=-pow(-1, k)*d * (f1 / l);
 	f2=-pow(-1, k)*d * (f2 / l);
 	f3=-pow(-1, k)*d * (f3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y201 = (x1 * g) + (f1*d);
	double y202 = (x2 * g) + (f2*d);
	double y203 = (x3 * g) + (f3*d);
     
     
    double y204 = (x4 * g) + (f1*d);
	double y205 = (x5 * g) + (f2*d);
	double y206 = (x6 * g) + (f3*d);	
	
	double y207 = (x7 * g) + (f1*d);
	double y208 = (x8 * g) + (f2*d);
	double y209 = (x9 * g) + (f3*d);	 
	
	double y2010 = (x10 * g) + (f1*d);
	double y2011 = (x11 * g) + (f2*d);
	double y2012 = (x12 * g) + (f3*d);
	
	double y2013 = (x13 * g) + (f1*d);
	double y2014 = (x14 * g) + (f2*d);
	double y2015 = (x15 * g) + (f3*d);

	double y2016 = (x16 * g) + (f1*d);
	double y2017 = (x17 * g) + (f2*d);
	double y2018 = (x18 * g) + (f3*d);

	double y2019 = (x19 * g) + (f1*d);
	double y2020 = (x20 * g) + (f2*d);
	double y2021 = (x21 * g) + (f3*d);

	double y2022 = (x22 * g) + (f1*d);
	double y2023 = (x23 * g) + (f2*d);
	double y2024 = (x24 * g) + (f3*d);

	double y2025 = (x25 * g) + (f1 *d);
	double y2026 = (x26 * g) + (f2 *d);
	double y2027 = (x27 * g) + (f3*d);
	
	double y2028 = (x28 * g) + (f1*d);
	double y2029 = (x29 * g) + (f2*d);
	double y2030 = (x30* g) +  (f3*d);	

	double y2031 = (x31 * g) + (f1*d);
	double y2032 = (x32 * g) + (f2*d);
	double y2033 = (x33 * g) + (f3*d);
    
     
    double y2034 = (x34 * g) + (f1*d);
	double y2035 = (x35 * g) + (f2*d);
	double y2036 = (x36 * g) + (f3*d);	
	
	double y2037 = (x37 * g) + (f1*d);
	double y2038 = (x38 * g) + (f2*d);
	double y2039 = (x39 * g) + (f3*d);	 
	
	double y2040 = (x40 * g) + (f1*d);
	double y2041 = (x41 * g) + (f2*d);
	double y2042 = (x42 * g) + (f3*d);

	double y2043 = (x43 * g) + (f1*d);
	double y2044 = (x44 * g) + (f2*d);
	double y2045 = (x45 * g) + (f3*d);
	
	double y2046 = (x46 * g) + (f1*d);
	double y2047 = (x47 * g) + (f2*d);
	double y2048 = (x48 * g) + (f3*d);

	double y2049 = (x49 * g) + (f1*d);
	double y2050 = (x50 * g) + (f2*d);
	double y2051 = (x51 * g) + (f3*d);

	double y2052 = (x52 * g) + (f1*d);
	double y2053 = (x53 * g) + (f2*d);
	double y2054 = (x54 * g) + (f3*d);
	
	double y2055 = (x55 * g) + (f1*d);
	double y2056 = (x56 * g) + (f2*d);
	double y2057 = (x57 * g) + (f3*d);

	double y2058 = (x58 * g) + (f1*d);
	double y2059 = (x59 * g) + (f2*d);
	double y2060 = (x60 * g) + (f3*d);  	     	        
  
	 
	Draw1(
                  y201,  y202,  y203, 
                  y204,  y205,  y206,
                  y207,  y208,  y209,
				  y2010, y2011, y2012,
				  y2013, y2014, y2015, 
                  y2016, y2017, y2018,
                  y2019, y2020, y2021,
				  y2022, y2023, y2024,
				  y2025, y2026, y2027, 
                  y2028, y2029, y2030,
                  y2031, y2032, y2033,
				  y2034, y2035, y2036,
				  y2037, y2038, y2039,
				  y2040, y2041, y2042,
				  y2043, y2044, y2045,
				  y2046, y2047, y2048,
				  y2049, y2050, y2051,
				  y2052, y2053, y2054,
				  y2055, y2056, y2057,
				  y2058, y2059, y2060,
				 n - 1,d1,d2,d3
                 );	
				 
	     //////////////////////////////////////////////   e
		  v1 =  x31 - x34;
		  v2 =  x32 - x35;       
          v3 =  x33 - x36; 
		 
		  w1 =  x16 - x34;
		  w2 =  x17 - x35;       
          w3 =  x18 - x36;                    
                 
     double e1 = ( ( v2 * w3 ) - ( w2 * v3 ));
 	 double e2 = ( ( w1 * v3 ) - ( v1 * w3 ));
 	 double e3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
 	
 	 l = sqrt( (e1*e1) + (e2*e2) + (e3*e3));
 	 d = 0.666666 * gold;
 	
 	e1=-pow(-1, k)*d * (e1 / l);
 	e2=-pow(-1, k)*d * (e2 / l);
 	e3=-pow(-1, k)*d * (e3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y301 = (x1 * g) + (e1*d);
	double y302 = (x2 * g) + (e2*d);
	double y303 = (x3 * g) + (e3*d);
     
     
    double y304 = (x4 * g) + (e1*d);
	double y305 = (x5 * g) + (e2*d);
	double y306 = (x6 * g) + (e3*d);	
	
	double y307 = (x7 * g) + (e1*d);
	double y308 = (x8 * g) + (e2*d);
	double y309 = (x9 * g) + (e3*d);	 
	
	double y3010 = (x10 * g) + (e1*d);
	double y3011 = (x11 * g) + (e2*d);
	double y3012 = (x12 * g) + (e3*d);

	double y3013 = (x13 * g) + (e1*d);
	double y3014 = (x14 * g) + (e2*d);
	double y3015 = (x15 * g) + (e3*d);

	double y3016 = (x16 * g) + (e1*d);
	double y3017 = (x17 * g) + (e2*d);
	double y3018 = (x18 * g) + (e3*d);

	double y3019 = (x19 * g) + (e1*d);
	double y3020 = (x20 * g) + (e2*d);
	double y3021 = (x21 * g) + (e3*d);

	double y3022 = (x22 * g) + (e1*d);
	double y3023 = (x23 * g) + (e2*d);
	double y3024 = (x24 * g) + (e3*d);

	double y3025 = (x25 * g) + (e1 *d);
	double y3026 = (x26 * g) + (e2 *d);
	double y3027 = (x27 * g) + (e3*d);
	
	double y3028 = (x28 * g) + (e1*d);
	double y3029 = (x29 * g) + (e2*d);
	double y3030 = (x30* g) +  (e3*d);	

	double y3031 = (x31 * g) + (e1*d);
	double y3032 = (x32 * g) + (e2*d);
	double y3033 = (x33 * g) + (e3*d);
    
     
    double y3034 = (x34 * g) + (e1*d);
	double y3035 = (x35 * g) + (e2*d);
	double y3036 = (x36 * g) + (e3*d);	
	
	double y3037 = (x37 * g) + (e1*d);
	double y3038 = (x38 * g) + (e2*d);
	double y3039 = (x39 * g) + (e3*d);	 
	
	double y3040 = (x40 * g) + (e1*d);
	double y3041 = (x41 * g) + (e2*d);
	double y3042 = (x42 * g) + (e3*d);

	double y3043 = (x43 * g) + (e1*d);
	double y3044 = (x44 * g) + (e2*d);
	double y3045 = (x45 * g) + (e3*d);
	
	double y3046 = (x46 * g) + (e1*d);
	double y3047 = (x47 * g) + (e2*d);
	double y3048 = (x48 * g) + (e3*d);

	double y3049 = (x49 * g) + (e1*d);
	double y3050 = (x50 * g) + (e2*d);
	double y3051 = (x51 * g) + (e3*d);

	double y3052 = (x52 * g) + (e1*d);
	double y3053 = (x53 * g) + (e2*d);
	double y3054 = (x54 * g) + (e3*d);
	
	double y3055 = (x55 * g) + (e1*d);
	double y3056 = (x56 * g) + (e2*d);
	double y3057 = (x57 * g) + (e3*d);

	double y3058 = (x58 * g) + (e1*d);
	double y3059 = (x59 * g) + (e2*d);
	double y3060 = (x60 * g) + (e3*d);  	     	        
  
	 
	Draw1(
                  y301,  y302,  y303, 
                  y304,  y305,  y306,
                  y307,  y308,  y309,
				  y3010, y3011, y3012,
				  y3013, y3014, y3015, 
                  y3016, y3017, y3018,
                  y3019, y3020, y3021,
				  y3022, y3023, y3024,
				  y3025, y3026, y3027, 
                  y3028, y3029, y3030,
                  y3031, y3032, y3033,
				  y3034, y3035, y3036,
				  y3037, y3038, y3039,
				  y3040, y3041, y3042,
				  y3043, y3044, y3045,
				  y3046, y3047, y3048,
				  y3049, y3050, y3051,
				  y3052, y3053, y3054,
				  y3055, y3056, y3057,
				  y3058, y3059, y3060,
				 n - 1
                 ,d1,d2,d3);
				 
	 	//////////////////////////////////////////////   d
		  v1 =  x28 - x31;
		  v2 =  x29 - x32;       
          v3 =  x30 - x33; 
		 
		  w1 =  x55 - x31;
		  w2 =  x56 - x32;       
          w3 =  x57 - x33;                    
                 
      e1 = ( ( v2 * w3 ) - ( w2 * v3 ));
 	  e2 = ( ( w1 * v3 ) - ( v1 * w3 ));
 	  e3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
 	
 	 l = sqrt( (e1*e1) + (e2*e2) + (e3*e3));
 	 d = 0.666666 * gold;
 	
 	e1=-pow(-1, k)*d * (e1 / l);
 	e2=-pow(-1, k)*d * (e2 / l);
 	e3=-pow(-1, k)*d * (e3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y401 = (x1 * g) + (e1*d);
	double y402 = (x2 * g) + (e2*d);
	double y403 = (x3 * g) + (e3*d);
     
    double y404 = (x4 * g) + (e1*d);
	double y405 = (x5 * g) + (e2*d);
	double y406 = (x6 * g) + (e3*d);	
	
	double y407 = (x7 * g) + (e1*d);
	double y408 = (x8 * g) + (e2*d);
	double y409 = (x9 * g) + (e3*d);	 
	
	double y4010 = (x10 * g) + (e1*d);
	double y4011 = (x11 * g) + (e2*d);
	double y4012 = (x12 * g) + (e3*d);

	double y4013 = (x13 * g) + (e1*d);
	double y4014 = (x14 * g) + (e2*d);
	double y4015 = (x15 * g) + (e3*d);

	double y4016 = (x16 * g) + (e1*d);
	double y4017 = (x17 * g) + (e2*d);
	double y4018 = (x18 * g) + (e3*d);

	double y4019 = (x19 * g) + (e1*d);
	double y4020 = (x20 * g) + (e2*d);
	double y4021 = (x21 * g) + (e3*d);

	double y4022 = (x22 * g) + (e1*d);
	double y4023 = (x23 * g) + (e2*d);
	double y4024 = (x24 * g) + (e3*d);

	double y4025 = (x25 * g) + (e1 *d);
	double y4026 = (x26 * g) + (e2 *d);
	double y4027 = (x27 * g) + (e3*d);
	
	double y4028 = (x28 * g) + (e1*d);
	double y4029 = (x29 * g) + (e2*d);
	double y4030 = (x30* g) +  (e3*d);	

	double y4031 = (x31 * g) + (e1*d);
	double y4032 = (x32 * g) + (e2*d);
	double y4033 = (x33 * g) + (e3*d);
    
    double y4034 = (x34 * g) + (e1*d);
	double y4035 = (x35 * g) + (e2*d);
	double y4036 = (x36 * g) + (e3*d);	
	
	double y4037 = (x37 * g) + (e1*d);
	double y4038 = (x38 * g) + (e2*d);
	double y4039 = (x39 * g) + (e3*d);	 

	double y4040 = (x40 * g) + (e1*d);
	double y4041 = (x41 * g) + (e2*d);
	double y4042 = (x42 * g) + (e3*d);

	double y4043 = (x43 * g) + (e1*d);
	double y4044 = (x44 * g) + (e2*d);
	double y4045 = (x45 * g) + (e3*d);
	
	double y4046 = (x46 * g) + (e1*d);
	double y4047 = (x47 * g) + (e2*d);
	double y4048 = (x48 * g) + (e3*d);

	double y4049 = (x49 * g) + (e1*d);
	double y4050 = (x50 * g) + (e2*d);
	double y4051 = (x51 * g) + (e3*d);

	double y4052 = (x52 * g) + (e1*d);
	double y4053 = (x53 * g) + (e2*d);
	double y4054 = (x54 * g) + (e3*d);
	
	double y4055 = (x55 * g) + (e1*d);
	double y4056 = (x56 * g) + (e2*d);
	double y4057 = (x57 * g) + (e3*d);

	double y4058 = (x58 * g) + (e1*d);
	double y4059 = (x59 * g) + (e2*d);
	double y4060 = (x60 * g) + (e3*d);  	     	        
  
	 
	Draw1(
                  y401,  y402,  y403, 
                  y404,  y405,  y406,
                  y407,  y408,  y409,
				  y4010, y4011, y4012,
				  y4013, y4014, y4015, 
                  y4016, y4017, y4018,
                  y4019, y4020, y4021,
				  y4022, y4023, y4024,
				  y4025, y4026, y4027, 
                  y4028, y4029, y4030,
                  y4031, y4032, y4033,
				  y4034, y4035, y4036,
				  y4037, y4038, y4039,
				  y4040, y4041, y4042,
				  y4043, y4044, y4045,
				  y4046, y4047, y4048,
				  y4049, y4050, y4051,
				  y4052, y4053, y4054,
				  y4055, y4056, y4057,
				  y4058, y4059, y4060,
				 n - 1
                 ,d1,d2,d3);		
				 
				 
				 
				 
				 
				 
	
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double aj1 = (x46 - x52) / 2;
 	double aj2 = (x47 - x53) / 2;
 	double aj3 = (x48 - x54) / 2; 
 	
 	 l = sqrt( (aj1*aj1) + (aj2*aj2) + (aj3*aj3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	aj1=pow(-1, k)*d * (aj1 / l);
 	aj2=pow(-1, k)*d * (aj2 / l);
 	aj3=pow(-1, k)*d * (aj3 / l);
     
     
	double xj01 = (x1 * g) + (aj1*d);
	double xj02 = (x2 * g) + (aj2*d);
	double xj03 = (x3 * g) + (aj3*d);
     
     
    double xj04 = (x4 * g) + (aj1*d);
	double xj05 = (x5 * g) + (aj2*d);
	double xj06 = (x6 * g) + (aj3*d);	

	double xj07 = (x7 * g) + (aj1*d);
	double xj08 = (x8 * g) + (aj2*d);
	double xj09 = (x9 * g) + (aj3*d);	 
	
	double xj010 = (x10 * g) + (aj1*d);
	double xj011 = (x11 * g) + (aj2*d);
	double xj012 = (x12 * g) + (aj3*d);
	
	double xj013 = (x13 * g) + (aj1*d);
	double xj014 = (x14 * g) + (aj2*d);
	double xj015 = (x15 * g) + (aj3*d);
	
	double xj016 = (x16 * g) + (aj1*d);
	double xj017 = (x17 * g) + (aj2*d);
	double xj018 = (x18 * g) + (aj3*d);

	double xj019 = (x19 * g) + (aj1*d);
	double xj020 = (x20 * g) + (aj2*d);
	double xj021 = (x21 * g) + (aj3*d);

	double xj022 = (x22 * g) + (aj1*d);
	double xj023 = (x23 * g) + (aj2*d);
	double xj024 = (x24 * g) + (aj3*d);
	
	double xj025 = (x25 * g) + (aj1*d);
	double xj026 = (x26 * g) + (aj2*d);
	double xj027 = (x27 * g) + (aj3*d);
	
	double xj028 = (x28 * g) + (aj1*d);
	double xj029 = (x29 * g) + (aj2*d);
	double xj030 = (x30 * g) + (aj3*d);	
	
	double xj031 = (x31 * g) + (aj1*d);
	double xj032 = (x32 * g) + (aj2*d);
	double xj033 = (x33 * g) + (aj3*d);
    
     
    double xj034 = (x34 * g) + (aj1*d);
	double xj035 = (x35 * g) + (aj2*d);
	double xj036 = (x36 * g) + (aj3*d);	
	
	double xj037 = (x37 * g) + (aj1*d);
	double xj038 = (x38 * g) + (aj2*d);
	double xj039 = (x39 * g) + (aj3*d);	 
	
	double xj040 = (x40 * g) + (aj1*d);
	double xj041 = (x41 * g) + (aj2*d);
	double xj042 = (x42 * g) + (aj3*d);
	
	double xj043 = (x43 * g) + (aj1*d);
	double xj044 = (x44 * g) + (aj2*d);
	double xj045 = (x45 * g) + (aj3*d);
	
	double xj046 = (x46 * g) + (aj1*d);
	double xj047 = (x47 * g) + (aj2*d);
	double xj048 = (x48 * g) + (aj3*d);
	
	double xj049 = (x49 * g) + (aj1*d);
	double xj050 = (x50 * g) + (aj2*d);
	double xj051 = (x51 * g) + (aj3*d);

	double xj052 = (x52 * g) + (aj1*d);
	double xj053 = (x53 * g) + (aj2*d);
	double xj054 = (x54 * g) + (aj3*d);
	
	double xj055 = (x55 * g) + (aj1*d);
	double xj056 = (x56 * g) + (aj2*d);
	double xj057 = (x57 * g) + (aj3*d);
	
	double xj058 = (x58 * g) + (aj1*d);
	double xj059 = (x59 * g) + (aj2*d);
	double xj060 = (x60 * g) + (aj3*d);  	     	        
  
	 
	Draw1(
                  xj01,  xj02,  xj03, 
                  xj04,  xj05,  xj06,
                  xj07,  xj08,  xj09,
				  xj010, xj011, xj012,
				  xj013, xj014, xj015, 
                  xj016, xj017, xj018,
                  xj019, xj020,  xj021,
				  xj022, xj023,  xj024,
				  xj025, xj026,  xj027, 
                  xj028, xj029,  xj030,
                  xj031, xj032,  xj033,
				  xj034, xj035,  xj036,
				  xj037, xj038,  xj039,
				  xj040, xj041,  xj042,
				  xj043, xj044,  xj045,
				  xj046, xj047,  xj048,
				  xj049, xj050,  xj051,
				  xj052, xj053,  xj054,
				  xj055, xj056,  xj057,
				  xj058, xj059,  xj060,
				 n - 1
                 ,d1,d2,d3);	
                 
                 
     
	 //0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double ai1 = (x40 - x43) / 2;
 	double ai2 = (x41 - x44) / 2;
 	double ai3 = (x42 - x45) / 2; 
 	
 	 l = sqrt( (ai1*ai1) + (ai2*ai2) + (ai3*ai3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	ai1=pow(-1, k)*d * (ai1 / l);
 	ai2=pow(-1, k)*d * (ai2 / l);
 	ai3=pow(-1, k)*d * (ai3 / l);
     
     
	double xi01 = (x1 * g) + (ai1*d);
	double xi02 = (x2 * g) + (ai2*d);
	double xi03 = (x3 * g) + (ai3*d);
     
     
    double xi04 = (x4 * g) + (ai1*d);
	double xi05 = (x5 * g) + (ai2*d);
	double xi06 = (x6 * g) + (ai3*d);	
	
	double xi07 = (x7 * g) + (ai1*d);
	double xi08 = (x8 * g) + (ai2*d);
	double xi09 = (x9 * g) + (ai3*d);	 
	
	double xi010 = (x10 * g) + (ai1*d);
	double xi011 = (x11 * g) + (ai2*d);
	double xi012 = (x12 * g) + (ai3*d);
	
	double xi013 = (x13 * g) + (ai1*d);
	double xi014 = (x14 * g) + (ai2*d);
	double xi015 = (x15 * g) + (ai3*d);
	
	double xi016 = (x16 * g) + (ai1*d);
	double xi017 = (x17 * g) + (ai2*d);
	double xi018 = (x18 * g) + (ai3*d);
	
	double xi019 = (x19 * g) + (ai1*d);
	double xi020 = (x20 * g) + (ai2*d);
	double xi021 = (x21 * g) + (ai3*d);
	
	double xi022 = (x22 * g) + (ai1*d);
	double xi023 = (x23 * g) + (ai2*d);
	double xi024 = (x24 * g) + (ai3*d);
	
	double xi025 = (x25 * g) + (ai1*d);
	double xi026 = (x26 * g) + (ai2*d);
	double xi027 = (x27 * g) + (ai3*d);
	
	double xi028 = (x28 * g) + (ai1*d);
	double xi029 = (x29 * g) + (ai2*d);
	double xi030 = (x30 * g) + (ai3*d);	
	
	double xi031 = (x31 * g) + (ai1*d);
	double xi032 = (x32 * g) + (ai2*d);
	double xi033 = (x33 * g) + (ai3*d);
    
     
    double xi034 = (x34 * g) + (ai1*d);
	double xi035 = (x35 * g) + (ai2*d);
	double xi036 = (x36 * g) + (ai3*d);	
	
	double xi037 = (x37 * g) + (ai1*d);
	double xi038 = (x38 * g) + (ai2*d);
	double xi039 = (x39 * g) + (ai3*d);	 
	
	double xi040 = (x40 * g) + (ai1*d);
	double xi041 = (x41 * g) + (ai2*d);
	double xi042 = (x42 * g) + (ai3*d);
	
	double xi043 = (x43 * g) + (ai1*d);
	double xi044 = (x44 * g) + (ai2*d);
	double xi045 = (x45 * g) + (ai3*d);
	
	double xi046 = (x46 * g) + (ai1*d);
	double xi047 = (x47 * g) + (ai2*d);
	double xi048 = (x48 * g) + (ai3*d);
	
	double xi049 = (x49 * g) + (ai1*d);
	double xi050 = (x50 * g) + (ai2*d);
	double xi051 = (x51 * g) + (ai3*d);

	double xi052 = (x52 * g) + (ai1*d);
	double xi053 = (x53 * g) + (ai2*d);
	double xi054 = (x54 * g) + (ai3*d);
	
	double xi055 = (x55 * g) + (ai1*d);
	double xi056 = (x56 * g) + (ai2*d);
	double xi057 = (x57 * g) + (ai3*d);
	
	double xi058 = (x58 * g) + (ai1*d);
	double xi059 = (x59 * g) + (ai2*d);
	double xi060 = (x60 * g) + (ai3*d);  	     	        
  
	 
	Draw1(
                  xi01,  xi02,  xi03, 
                  xi04,  xi05,  xi06,
                  xi07,  xi08,  xi09,
				  xi010, xi011, xi012,
				  xi013, xi014, xi015, 
                  xi016, xi017, xi018,
                  xi019, xi020,  xi021,
				  xi022, xi023,  xi024,
				  xi025, xi026,  xi027, 
                  xi028, xi029,  xi030,
                  xi031, xi032,  xi033,
				  xi034, xi035,  xi036,
				  xi037, xi038,  xi039,
				  xi040, xi041,  xi042,
				  xi043, xi044,  xi045,
				  xi046, xi047,  xi048,
				  xi049, xi050,  xi051,
				  xi052, xi053,  xi054,
				  xi055, xi056,  xi057,
				  xi058, xi059,  xi060,
				 n - 1
                 ,d1,d2,d3);	            
				 
	  
	  
	  
	 //0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double ak1 = (x55 - x22) / 2;
 	double ak2 = (x56 - x23) / 2;
 	double ak3 = (x57 - x24) / 2; 
 	
 	 l = sqrt( (ak1*ak1) + (ak2*ak2) + (ak3*ak3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	ak1=pow(-1, k)*d * (ak1 / l);
 	ak2=pow(-1, k)*d * (ak2 / l);
 	ak3=pow(-1, k)*d * (ak3 / l);
     
     
	double xk01 = (x1 * g) + (ak1*d);
	double xk02 = (x2 * g) + (ak2*d);
	double xk03 = (x3 * g) + (ak3*d);
     
    double xk04 = (x4 * g) + (ak1*d);
	double xk05 = (x5 * g) + (ak2*d);
	double xk06 = (x6 * g) + (ak3*d);	

	double xk07 = (x7 * g) + (ak1*d);
	double xk08 = (x8 * g) + (ak2*d);
	double xk09 = (x9 * g) + (ak3*d);	 
	
	double xk010 = (x10 * g) + (ak1*d);
	double xk011 = (x11 * g) + (ak2*d);
	double xk012 = (x12 * g) + (ak3*d);
	
	double xk013 = (x13 * g) + (ak1*d);
	double xk014 = (x14 * g) + (ak2*d);
	double xk015 = (x15 * g) + (ak3*d);
	
	double xk016 = (x16 * g) + (ak1*d);
	double xk017 = (x17 * g) + (ak2*d);
	double xk018 = (x18 * g) + (ak3*d);

	double xk019 = (x19 * g) + (ak1*d);
	double xk020 = (x20 * g) + (ak2*d);
	double xk021 = (x21 * g) + (ak3*d);

	double xk022 = (x22 * g) + (ak1*d);
	double xk023 = (x23 * g) + (ak2*d);
	double xk024 = (x24 * g) + (ak3*d);
	
	double xk025 = (x25 * g) + (ak1*d);
	double xk026 = (x26 * g) + (ak2*d);
	double xk027 = (x27 * g) + (ak3*d);
	
	double xk028 = (x28 * g) + (ak1*d);
	double xk029 = (x29 * g) + (ak2*d);
	double xk030 = (x30 * g) + (ak3*d);	
	
	double xk031 = (x31 * g) + (ak1*d);
	double xk032 = (x32 * g) + (ak2*d);
	double xk033 = (x33 * g) + (ak3*d);
     
    double xk034 = (x34 * g) + (ak1*d);
	double xk035 = (x35 * g) + (ak2*d);
	double xk036 = (x36 * g) + (ak3*d);	
	
	double xk037 = (x37 * g) + (ak1*d);
	double xk038 = (x38 * g) + (ak2*d);
	double xk039 = (x39 * g) + (ak3*d);	 

	double xk040 = (x40 * g) + (ak1*d);
	double xk041 = (x41 * g) + (ak2*d);
	double xk042 = (x42 * g) + (ak3*d);
	
	double xk043 = (x43 * g) + (ak1*d);
	double xk044 = (x44 * g) + (ak2*d);
	double xk045 = (x45 * g) + (ak3*d);
	
	double xk046 = (x46 * g) + (ak1*d);
	double xk047 = (x47 * g) + (ak2*d);
	double xk048 = (x48 * g) + (ak3*d);
	
	double xk049 = (x49 * g) + (ak1*d);
	double xk050 = (x50 * g) + (ak2*d);
	double xk051 = (x51 * g) + (ak3*d);

	double xk052 = (x52 * g) + (ak1*d);
	double xk053 = (x53 * g) + (ak2*d);
	double xk054 = (x54 * g) + (ak3*d);
	
	double xk055 = (x55 * g) + (ak1*d);
	double xk056 = (x56 * g) + (ak2*d);
	double xk057 = (x57 * g) + (ak3*d);
	
	double xk058 = (x58 * g) + (ak1*d);
	double xk059 = (x59 * g) + (ak2*d);
	double xk060 = (x60 * g) + (ak3*d);  	     	        
  

	Draw1(
                  xk01,  xk02,  xk03, 
                  xk04,  xk05,  xk06,
                  xk07,  xk08,  xk09,
				  xk010, xk011, xk012,
				  xk013, xk014, xk015, 
                  xk016, xk017, xk018,
                  xk019, xk020,  xk021,
				  xk022, xk023,  xk024,
				  xk025, xk026,  xk027, 
                  xk028, xk029,  xk030,
                  xk031, xk032,  xk033,
				  xk034, xk035,  xk036,
				  xk037, xk038,  xk039,
				  xk040, xk041,  xk042,
				  xk043, xk044,  xk045,
				  xk046, xk047,  xk048,
				  xk049, xk050,  xk051,
				  xk052, xk053,  xk054,
				  xk055, xk056,  xk057,
				  xk058, xk059,  xk060,
				 n - 1
                 ,d1,d2,d3);	 		
				
				 
     //0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double al1 = (x16 - x19) / 2;
 	double al2 = (x17 - x20) / 2;
 	double al3 = (x18 - x21) / 2; 
 	
 	
 	
 	double le = sqrt( (al1*al1) + (al2*al2) + (al3*al3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	al1=pow(-1, k)*d * (al1 / le);
 	al2=pow(-1, k)*d * (al2 / le);
 	al3=pow(-1, k)*d * (al3 / le);
     
     
	double xl01 = (x1 * g) + (al1*d);
	double xl02 = (x2 * g) + (al2*d);
	double xl03 = (x3 * g) + (al3*d);
     
    double xl04 = (x4 * g) + (al1*d);
	double xl05 = (x5 * g) + (al2*d);
	double xl06 = (x6 * g) + (al3*d);	

	double xl07 = (x7 * g) + (al1*d);
	double xl08 = (x8 * g) + (al2*d);
	double xl09 = (x9 * g) + (al3*d);	 
	
	double xl010 = (x10 * g) + (al1*d);
	double xl011 = (x11 * g) + (al2*d);
	double xl012 = (x12 * g) + (al3*d);
	
	double xl013 = (x13 * g) + (al1*d);
	double xl014 = (x14 * g) + (al2*d);
	double xl015 = (x15 * g) + (al3*d);

	double xl016 = (x16 * g) + (al1*d);
	double xl017 = (x17 * g) + (al2*d);
	double xl018 = (x18 * g) + (al3*d);

	double xl019 = (x19 * g) + (al1*d);
	double xl020 = (x20 * g) + (al2*d);
	double xl021 = (x21 * g) + (al3*d);

	double xl022 = (x22 * g) + (al1*d);
	double xl023 = (x23 * g) + (al2*d);
	double xl024 = (x24 * g) + (al3*d);
	
	double xl025 = (x25 * g) + (al1*d);
	double xl026 = (x26 * g) + (al2*d);
	double xl027 = (x27 * g) + (al3*d);

	double xl028 = (x28 * g) + (al1*d);
	double xl029 = (x29 * g) + (al2*d);
	double xl030 = (x30 * g) + (al3*d);	
	
	double xl031 = (x31 * g) + (al1*d);
	double xl032 = (x32 * g) + (al2*d);
	double xl033 = (x33 * g) + (al3*d);
     
    double xl034 = (x34 * g) + (al1*d);
	double xl035 = (x35 * g) + (al2*d);
	double xl036 = (x36 * g) + (al3*d);	
	
	double xl037 = (x37 * g) + (al1*d);
	double xl038 = (x38 * g) + (al2*d);
	double xl039 = (x39 * g) + (al3*d);	 
	
	double xl040 = (x40 * g) + (al1*d);
	double xl041 = (x41 * g) + (al2*d);
	double xl042 = (x42 * g) + (al3*d);
	
	double xl043 = (x43 * g) + (al1*d);
	double xl044 = (x44 * g) + (al2*d);
	double xl045 = (x45 * g) + (al3*d);
	
	double xl046 = (x46 * g) + (al1*d);
	double xl047 = (x47 * g) + (al2*d);
	double xl048 = (x48 * g) + (al3*d);
	
	double xl049 = (x49 * g) + (al1*d);
	double xl050 = (x50 * g) + (al2*d);
	double xl051 = (x51 * g) + (al3*d);

	double xl052 = (x52 * g) + (al1*d);
	double xl053 = (x53 * g) + (al2*d);
	double xl054 = (x54 * g) + (al3*d);
	
	double xl055 = (x55 * g) + (al1*d);
	double xl056 = (x56 * g) + (al2*d);
	double xl057 = (x57 * g) + (al3*d);
	
	double xl058 = (x58 * g) + (al1*d);
	double xl059 = (x59 * g) + (al2*d);
	double xl060 = (x60 * g) + (al3*d);  	     	        
  
	 
	Draw1(
                  xl01,  xl02,  xl03, 
                  xl04,  xl05,  xl06,
                  xl07,  xl08,  xl09,
				  xl010, xl011, xl012,
				  xl013, xl014, xl015, 
                  xl016, xl017, xl018,
                  xl019, xl020,  xl021,
				  xl022, xl023,  xl024,
				  xl025, xl026,  xl027, 
                  xl028, xl029,  xl030,
                  xl031, xl032,  xl033,
				  xl034, xl035,  xl036,
				  xl037, xl038,  xl039,
				  xl040, xl041,  xl042,
				  xl043, xl044,  xl045,
				  xl046, xl047,  xl048,
				  xl049, xl050,  xl051,
				  xl052, xl053,  xl054,
				  xl055, xl056,  xl057,
				  xl058, xl059,  xl060,
				 n - 1
                 ,d1,d2,d3);	 
				 
				 
//0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double am1 = (x49 - x58) / 2;
 	double am2 = (x50 - x59) / 2;
 	double am3 = (x51 - x60) / 2; 
 	
 	 l = sqrt( (am1*am1) + (am2*am2) + (am3*am3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	am1=pow(-1, k)*d * (am1 / l);
 	am2=pow(-1, k)*d * (am2 / l);
 	am3=pow(-1, k)*d * (am3 / l);
     
     
	double xm01 = (x1 * g) + (am1*d);
	double xm02 = (x2 * g) + (am2*d);
	double xm03 = (x3 * g) + (am3*d);
     
    double xm04 = (x4 * g) + (am1*d);
	double xm05 = (x5 * g) + (am2*d);
	double xm06 = (x6 * g) + (am3*d);	

	double xm07 = (x7 * g) + (am1*d);
	double xm08 = (x8 * g) + (am2*d);
	double xm09 = (x9 * g)   + (am3*d);	 
	
	double xm010 = (x10 * g) + (am1*d);
	double xm011 = (x11 * g) + (am2*d);
	double xm012 = (x12 * g) + (am3*d);
	
	double xm013 = (x13 * g) + (am1*d);
	double xm014 = (x14 * g) + (am2*d);
	double xm015 = (x15 * g) + (am3*d);

	double xm016 = (x16 * g) + (am1*d);
	double xm017 = (x17 * g) + (am2*d);
	double xm018 = (x18 * g) + (am3*d);

	double xm019 = (x19 * g) + (am1*d);
	double xm020 = (x20 * g) + (am2*d);
	double xm021 = (x21 * g) + (am3*d);

	double xm022 = (x22 * g) + (am1*d);
	double xm023 = (x23 * g) + (am2*d);
	double xm024 = (x24 * g) + (am3*d);
	
	double xm025 = (x25 * g) + (am1*d);
	double xm026 = (x26 * g) + (am2*d);
	double xm027 = (x27 * g) + (am3*d);

	double xm028 = (x28 * g) + (am1*d);
	double xm029 = (x29 * g) + (am2*d);
	double xm030 = (x30 * g) + (am3*d);	
	
	double xm031 = (x31 * g) + (am1*d);
	double xm032 = (x32 * g) + (am2*d);
	double xm033 = (x33 * g) + (am3*d);
     
    double xm034 = (x34 * g) + (am1*d);
	double xm035 = (x35 * g) + (am2*d);
	double xm036 = (x36 * g) + (am3*d);	

	double xm037 = (x37 * g) + (am1*d);
	double xm038 = (x38 * g) + (am2*d);
	double xm039 = (x39 * g) + (am3*d);	 
	
	double xm040 = (x40 * g) + (am1*d);
	double xm041 = (x41 * g) + (am2*d);
	double xm042 = (x42 * g) + (am3*d);
	
	double xm043 = (x43 * g) + (am1*d);
	double xm044 = (x44 * g) + (am2*d);
	double xm045 = (x45 * g) + (am3*d);
	
	double xm046 = (x46 * g) + (am1*d);
	double xm047 = (x47 * g) + (am2*d);
	double xm048 = (x48 * g) + (am3*d);
	
	double xm049 = (x49 * g) + (am1*d);
	double xm050 = (x50 * g) + (am2*d);
	double xm051 = (x51 * g) + (am3*d);

	double xm052 = (x52 * g) + (am1*d);
	double xm053 = (x53 * g) + (am2*d);
	double xm054 = (x54 * g) + (am3*d);

	double xm055 = (x55 * g) + (am1*d);
	double xm056 = (x56 * g) + (am2*d);
	double xm057 = (x57 * g) + (am3*d);

	double xm058 = (x58 * g) + (am1*d);
	double xm059 = (x59 * g) + (am2*d);
	double xm060 = (x60 * g) + (am3*d);  	     	        
  
	 
	Draw1(
                  xm01,  xm02,  xm03, 
                  xm04,  xm05,  xm06,
                  xm07,  xm08,  xm09,
				  xm010, xm011, xm012,
				  xm013, xm014, xm015, 
                  xm016, xm017, xm018,
                  xm019, xm020,  xm021,
				  xm022, xm023,  xm024,
				  xm025, xm026,  xm027, 
                  xm028, xm029,  xm030,
                  xm031, xm032,  xm033,
				  xm034, xm035,  xm036,
				  xm037, xm038,  xm039,
				  xm040, xm041,  xm042,
				  xm043, xm044,  xm045,
				  xm046, xm047,  xm048,
				  xm049, xm050,  xm051,
				  xm052, xm053,  xm054,
				  xm055, xm056,  xm057,
				  xm058, xm059,  xm060,
				 n - 1
                 ,d1,d2,d3);	 
				 
				 
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 				 						 	 
				 
	};
				 
				 
				 
    
	  }     
     
    
     
     
	 
	 
	 

}

}











































void Torus::Draw2(
                 double x1, double x2, double x3, 
                 double x4, double x5, double x6,
                 double x7, double x8, double x9,
				 double x10, double x11, double x12,
				 double x13, double x14, double x15, 
                 double x16, double x17, double x18,
                 double x19, double x20, double x21,
				 double x22, double x23, double x24,
				 double x25, double x26, double x27, 
                 double x28, double x29, double x30,
                 double x31, double x32, double x33,
				 double x34, double x35, double x36,
				 double x37, double x38, double x39,
				 double x40, double x41, double x42,
				 double x43, double x44, double x45,
				 double x46, double x47, double x48,
				 double x49, double x50, double x51,
				 double x52, double x53, double x54,
				 double x55, double x56, double x57,
				 double x58, double x59, double x60,
				 int n, double d1,  double d2, double d3
                 )
{
      double gold= (1 + sqrt(5))/2;
      double g = 0.975 / (gold*gold);
      
      
         Vector3D w[20] = {
         Vector3D( x1 , x2, x3 ),//0
         Vector3D( x4 , x5, x6 ),//1
         Vector3D( x7 , x8, x9 ),//2
         Vector3D( x10 , x11, x12 ),//3
         Vector3D( x13 , x14, x15 ),//4
         Vector3D( x16 , x17, x18 ),//5
         Vector3D( x19 , x20, x21 ),//6
         Vector3D( x22 , x23, x24 ),//7
         Vector3D( x25 , x26, x27 ),//8
         Vector3D( x28 , x29, x30 ),//9
         Vector3D( x31 , x32, x33 ),//10
         Vector3D( x34 , x35, x36 ),//11
         Vector3D( x37 , x38, x39 ),//12
         Vector3D( x40 , x41, x42 ),//13
         Vector3D( x43 , x44, x45 ),//14
         Vector3D( x46 , x47, x48 ),//15
         Vector3D( x49 , x50, x51 ),//16
         Vector3D( x52 , x53, x54 ),//17
         Vector3D( x55 , x56, x57 ),//18
         Vector3D( x58 , x59, x60 ),//19
         
 };
      
    /* facet(w[9], w[15], w[14]);
     facet(w[8], w[9], w[14]);
     facet(w[13], w[8], w[14]);*/
     
        /*
       
	
  /*   facet(w[1], w[7], w[5]);
     facet(w[0], w[1], w[5]);
     facet(w[6], w[0], w[5]);
     
     
     
     facet(w[12], w[8], w[13]);
     facet(w[16], w[12], w[13]);
     facet(w[19], w[16], w[13]);
     
     facet(w[17],w[18], w[7]);
     facet(w[2], w[17], w[7]);
     facet(w[1], w[2], w[7]);
     
	 facet(w[18], w[17], w[15]);
     facet(w[10], w[18], w[15]);
     facet(w[9], w[10], w[15]);
     
	 facet(w[4], w[0], w[6]);
     facet(w[19], w[4], w[6]);
     facet(w[16], w[19], w[6]);
     
     facet(w[11], w[10], w[9]);
     facet(w[12], w[11], w[9]);
     facet(w[8], w[12], w[9]);
     */
    /*    double v1 =  x34 - x28;
		   double v2 =  x35 - x29 ;      
           double v3 =  x36 - x30; 
		 
		  double w1 =  x31 - x28;
		  double w2 =  x32 - x29;       
          double w3 =  x33 - x30;  
    
    double z1[3];
    	// We calculate the vector normal to face A.
 	 double z11 = ( ( (v2 * w3 ) - ( w2 * v3 )));  z1[ 1] = z11;
 	 double z12 = ( ( w1 * v3 ) - ( v1 * w3 ));  z1[ 2] = z12;
 	 double z13 = ( ( v1 * w2 ) - ( w1 * v2 ));  z1[ 3] = z13;
          double D = sqrt( (z11 * z11) + (z12 * z12) + (z13 * z13));
    cout<<endl<<"z1 = (  ";
 	for( int i = 1; i <= 3; ++i) 
 {
	 	
	 	if( i < 3)
	 	{
	 		cout<<z1[ i]/D<<",   ";
		 }
		 else
	 	cout<<z1[3]/D<<" )";
 } */
     /*
     
	 facet(w[2], w[1], w[0]);
     facet(w[3], w[2], w[0]);
     facet(w[4], w[3], w[0]);
     
     */
           
     /*
     facet(w[11], w[12], w[16]);
     facet(w[5], w[11], w[16]);
     facet(w[6], w[5], w[16]);
     
     facet(w[14], w[15], w[17]);
     facet(w[3], w[14], w[17]);
     facet(w[2], w[3], w[17]);
     */
      
     /*
	 facet(w[7], w[18], w[10]);
     facet(w[5], w[7],  w[10]);
     facet(w[11], w[5], w[10]);
    
     facet(w[14], w[3], w[4]); //w1
     facet(w[13], w[14], w[4]);
     facet(w[19], w[13], w[4]);*/
     
    
    
    
    
	
	Vector3D v[20] = {
         Vector3D( x1 + d1, x2 + d2, x3 + d3 ),//0
         Vector3D( x4 + d1, x5 + d2, x6 + d3 ),//1
         Vector3D( x7 + d1, x8 + d2, x9 + d3 ),//2
         Vector3D( x10 +d1, x11 +d2, x12 +d3 ),//3
         Vector3D( x13 +d1, x14 +d2, x15 +d3 ),//4
         Vector3D( x16 +d1, x17 +d2, x18 +d3 ),//5
         Vector3D( x19 +d1, x20 +d2, x21 +d3 ),//6
         Vector3D( x22 +d1, x23 +d2, x24 +d3 ),//7
         Vector3D( x25 +d1, x26 +d2, x27 +d3 ),//8
         Vector3D( x28 +d1, x29 +d2, x30 +d3 ),//9
         Vector3D( x31 +d1, x32 +d2, x33 +d3 ),//10
         Vector3D( x34 +d1, x35 +d2, x36 +d3 ),//11
         Vector3D( x37 +d1, x38 +d2, x39 +d3 ),//12
         Vector3D( x40 +d1, x41 +d2, x42 +d3 ),//13
         Vector3D( x43 +d1, x44 +d2, x45 +d3 ),//14
         Vector3D( x46 +d1, x47 +d2, x48 +d3 ),//15
         Vector3D( x49 +d1, x50 +d2, x51 +d3 ),//16
         Vector3D( x52 +d1, x53 +d2, x54 +d3 ),//17
         Vector3D( x55 +d1, x56 +d2, x57 +d3 ),//18
         Vector3D( x58 +d1, x59 +d2, x60 +d3 ),//19
         
     };
     
     	
if( n == 0 )
{
	
     facet(v[9], v[15], v[14]);
     facet(v[8], v[9], v[14]);
     facet(v[13], v[8], v[14]);
    
	
     facet(v[1], v[7], v[5]);
     facet(v[0], v[1], v[5]);
     facet(v[6], v[0], v[5]);
     
     facet(v[12], v[8], v[13]);
     facet(v[16], v[12], v[13]);
     facet(v[19], v[16], v[13]);
     
     facet(v[17], v[18], v[7]);
     facet(v[2], v[17], v[7]);
     facet(v[1], v[2], v[7]);
     
	 facet(v[18], v[17], v[15]);
     facet(v[10], v[18], v[15]);
     facet(v[9], v[10], v[15]);
     
	 facet(v[4], v[0], v[6]);
     facet(v[19], v[4], v[6]);
     facet(v[16], v[19], v[6]);
     
     facet(v[11], v[10], v[9]);
     facet(v[12], v[11], v[9]);
     facet(v[8], v[12], v[9]);
     
	 facet(v[2], v[1], v[0]);
     facet(v[3], v[2], v[0]);
     facet(v[4], v[3], v[0]);
     
     facet(v[11], v[12], v[16]);
     facet(v[5], v[11], v[16]);
     facet(v[6], v[5], v[16]);
     
     facet(v[14], v[15], v[17]);
     facet(v[3], v[14], v[17]);
     facet(v[2], v[3], v[17]);
     
	 facet(v[7], v[18], v[10]);
     facet(v[5], v[7], v[10]);
     facet(v[11], v[5], v[10]);
     
     facet(v[14], v[3], v[4]); //w1
     facet(v[13], v[14], v[4]);
     facet(v[19], v[13], v[4]);
     
     
}
 else
 {
 	
    facet(v[11], v[10], v[9]);//s
     facet(v[12], v[11], v[9]);
     facet(v[8], v[12], v[9]);
 	
 	 facet(v[9], v[15], v[14]);//a
     facet(v[8], v[9], v[14]);
     facet(v[13], v[8], v[14]);
     
     facet(v[18], v[17], v[15]);//d
     facet(v[10], v[18], v[15]);
     facet(v[9], v[10], v[15]);
    
    facet(v[7], v[18], v[10]); //e
     facet(v[5], v[7], v[10]);
     facet(v[11], v[5], v[10]);
     
     facet(v[11], v[12], v[16]);//f
     facet(v[5], v[11], v[16]);
     facet(v[6], v[5], v[16]);

     facet(v[12], v[8], v[13]); //c
     facet(v[16], v[12], v[13]);
     facet(v[19], v[16], v[13]);
     
     facet(v[1], v[7], v[5]);// w 3
     facet(v[0], v[1], v[5]);
     facet(v[6], v[0], v[5]);
     
    facet(v[17], v[18], v[7]);    //w 4
     facet(v[2], v[17], v[7]);
     facet(v[1], v[2], v[7]);
     
	 facet(v[4], v[0], v[6]);// w 2
     facet(v[19], v[4], v[6]);
     facet(v[16], v[19], v[6]);
     
	 facet(v[2], v[1], v[0]); ////b center
     facet(v[3], v[2], v[0]);
     facet(v[4], v[3], v[0]);
     
     facet(v[14], v[15], v[17]); //w5
     facet(v[3], v[14], v[17]);
     facet(v[2], v[3], v[17]);
     
     
     facet(v[14], v[3], v[4]);//w1
     facet(v[13], v[14], v[4]);
     facet(v[19], v[13], v[4]);
     
   
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	
	 
	 
	                                 /////////////////////   w4
 	       double v1 =  x52 - x22;
		   double v2 =  x53 - x23;       
           double v3 =  x54 - x24; 
		 
		   double w1 =  x55 - x22;
		   double w2 =  x56 - x23;       
           double w3 =  x57 - x24;                    
                 
 	
 	
 	for(int k=0; k<=0; ++k)
 	{
 		// We calculate the vector normal to face A.
 	 double a1 = ( ( (v2 * w3 ) - ( w2 * v3 ))); 
 	 double a2 = ( ( w1 * v3 ) - ( v1 * w3 ));  
 	 double a3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
          double D = sqrt( (a1 * a1) + (a2 * a2) + (a3 * a3));
 	
 	
  double l = sqrt( (a1*a1) + (a2*a2) + (a3*a3));
 	double d = 0.666666 * gold;
 	
 	a1=pow(-1, k)*d * (a1 / l);
 	a2=pow(-1, k)*d * (a2 / l);
 	a3=pow(-1, k)*d * (a3 / l);
 	

     
    double x01 = (x1 * g) + (a1*d);
	double x02 = (x2 * g) + (a2*d);
	double x03 = (x3 * g) + (a3*d);
	
	double x04 = (x4 * g) + (a1*d);
	double x05 = (x5 * g) + (a2*d);
	double x06 = (x6 * g) + (a3*d);
	
	double x07 = (x7 * g) + (a1*d);
	double x08 = (x8 * g) + (a2*d);
	double x09 = (x9 * g) + (a3*d);	 
	
	double x010 = (x10 * g) + (a1*d);
	double x011 = (x11 * g) + (a2*d);
	double x012 = (x12 * g) + (a3*d);
	
	double x013 = (x13 * g) + (a1*d);
	double x014 = (x14 * g) + (a2*d);
	double x015 = (x15 * g) + (a3*d);
	
	double x016 = (x16 * g) + (a1*d);
	double x017 = (x17 * g) + (a2*d);
	double x018 = (x18 * g) + (a3*d);
	
	double x019 = (x19 * g) + (a1*d);
	double x020 = (x20 * g) + (a2*d);
	double x021 = (x21 * g) + (a3*d);
	
	double x022 = (x22 * g) + (a1*d);
	double x023 = (x23 * g) + (a2*d);
	double x024 = (x24 * g) + (a3*d);
	
	double x025 = (x25 * g) + (a1*d);
	double x026 = (x26 * g) + (a2*d);
	double x027 = (x27 * g) + (a3*d);
	
	double x028 = (x28 * g) + (a1*d);
	double x029 = (x29 * g) + (a2*d);
	double x030 = (x30* g) + (a3*d);	
	
	double x031 = (x31 * g) + (a1*d);
	double x032 = (x32 * g) + (a2*d);
	double x033 = (x33 * g) + (a3*d);
    
     
    double x034 = (x34 * g) + (a1*d);
	double x035 = (x35 * g) + (a2*d);
	double x036 = (x36 * g) + (a3*d);	
	
	double x037 = (x37 * g) + (a1*d);
	double x038 = (x38 * g) + (a2*d);
	double x039 = (x39 * g) + (a3*d);	 
	
	double x040 = (x40 * g) + (a1*d);
	double x041 = (x41 * g) + (a2*d);
	double x042 = (x42 * g) + (a3*d);
	
	double x043 = (x43 * g) + (a1*d);
	double x044 = (x44 * g) + (a2*d);
	double x045 = (x45 * g) + (a3*d);
	
	double x046 = (x46 * g) + (a1*d);
	double x047 = (x47 * g) + (a2*d);
	double x048 = (x48 * g) + (a3*d);
	
	double x049 = (x49 * g) + (a1*d);
	double x050 = (x50 * g) + (a2*d);
	double x051 = (x51 * g) + (a3*d);

	double x052 = (x52 * g) + (a1*d);
	double x053 = (x53 * g) + (a2*d);
	double x054 = (x54 * g) + (a3*d);
	
	double x055 = (x55 * g) + (a1*d);
	double x056 = (x56 * g) + (a2*d);
	double x057 = (x57 * g) + (a3*d);
	
	double x058 = (x58 * g) + (a1*d);
	double x059 = (x59 * g) + (a2*d);
	double x060 = (x60 * g) + (a3*d);  	     	        
  
	 
	Draw2(
                  x01,  x02,  x03, 
                  x04,  x05, x06,
                  x07,  x08, x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n - 1,d1,d2,d3
                 );
                 
                 
                 
                 
            
                 
                 
                 
                 
                 
                 
                 
                 
                
                 
                 
                 
                
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
          
		  
		  
		  
		  
		 		 
		  /////////////////////////////  w2
	       v1 =  x13 - x19;
		   v2 =  x14 - x20;       
           v3 =  x15 - x21; 
		 
		   w1 =  x1 - x19;
		   w2 =  x2 - x20;       
           w3 =  x3 - x21;                    
                 
     double b[ 4];
           b [ 0 ] = 0.0;
 	
 	
 	for(int k=0; k<=0; ++k)
 	{
 		// We calculate the vector normal to face A.
 	 double b1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  b[ 1] = a1;
 	 double b2 = ( ( w1 * v3 ) - ( v1 * w3 ));  b[ 2] = a2;
 	 double b3 = ( ( v1 * w2 ) - ( w1 * v2 ));  b[ 3] = a3;
          double D = sqrt( (b1 * b1) + (b2 * b2) + (b3 * b3));
   /* cout<<endl<<"b = (  ";
 	for( int i = 1; i <= 3; ++i) 
 {
	 	
	 	if( i < 3)
	 	{
	 		cout<<b[ i]/D<<",   ";
		 }
		 else
	 	cout<<b[3]/D<<" )";
	 
 }*/
 	
 	 l = sqrt( (b1*b1) + (b2*b2) + (b3*b3));
 	 d = 0.666666 * gold;
 	
 	b1=pow(-1, k)*d * (b1 / l);
 	b2=pow(-1, k)*d * (b2 / l);
 	b3=pow(-1, k)*d * (b3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y01 = (x1 * g) + (b1*d);
	double y02 = (x2 * g) + (b2*d);
	double y03 = (x3 * g) + (b3*d);
     
     
    double y04 = (x4 * g) + (b1*d);
	double y05 = (x5 * g) + (b2*d);
	double y06 = (x6 * g) + (b3*d);	
	
	double y07 = (x7 * g) + (b1*d);
	double y08 = (x8 * g) + (b2*d);
	double y09 = (x9 * g) + (b3*d);	 
	
	double y010 = (x10 * g) + (b1*d);
	double y011 = (x11 * g) + (b2*d);
	double y012 = (x12 * g) + (b3*d);
	
	double y013 = (x13 * g) + (b1*d);
	double y014 = (x14 * g) + (b2*d);
	double y015 = (x15 * g) + (b3*d);

	double y016 = (x16 * g) + (b1*d);
	double y017 = (x17 * g) + (b2*d);
	double y018 = (x18 * g) + (b3*d);

	double y019 = (x19 * g) + (b1*d);
	double y020 = (x20 * g) + (b2*d);
	double y021 = (x21 * g) + (b3*d);
	
	double y022 = (x22 * g) + (b1*d);
	double y023 = (x23 * g) + (b2*d);
	double y024 = (x24 * g) + (b3*d);
	
	double y025 = (x25 * g) + (b1*d);
	double y026 = (x26 * g) + (b2*d);
	double y027 = (x27 * g) + (b3*d);
	
	double y028 = (x28 * g) + (b1*d);
	double y029 = (x29 * g) + (b2*d);
	double y030 = (x30* g) + (b3*d);	
	
	double y031 = (x31 * g) + (b1*d);
	double y032 = (x32 * g) + (b2*d);
	double y033 = (x33 * g) + (b3*d);
    
     
    double y034 = (x34 * g) + (b1*d);
	double y035 = (x35 * g) + (b2*d);
	double y036 = (x36 * g) + (b3*d);	
	
	double y037 = (x37 * g) + (b1*d);
	double y038 = (x38 * g) + (b2*d);
	double y039 = (x39 * g) + (b3*d);	 
	
	double y040 = (x40 * g) + (b1*d);
	double y041 = (x41 * g) + (b2*d);
	double y042 = (x42 * g) + (b3*d);
	
	double y043 = (x43 * g) + (b1*d);
	double y044 = (x44 * g) + (b2*d);
	double y045 = (x45 * g) + (b3*d);
	
	double y046 = (x46 * g) + (b1*d);
	double y047 = (x47 * g) + (b2*d);
	double y048 = (x48 * g) + (b3*d);

	double y049 = (x49 * g) + (b1*d);
	double y050 = (x50 * g) + (b2*d);
	double y051 = (x51 * g) + (b3*d);
	
	double y052 = (x52 * g) + (b1*d);
	double y053 = (x53 * g) + (b2*d);
	double y054 = (x54 * g) + (b3*d);
	
	double y055 = (x55 * g) + (b1*d);
	double y056 = (x56 * g) + (b2*d);
	double y057 = (x57 * g) + (b3*d);
	
	double y058 = (x58 * g) + (b1*d);
	double y059 = (x59 * g) + (b2*d);
	double y060 = (x60 * g) + (b3*d);  	     	        
  
	 
	Draw2(
                  y01,  y02,  y03, 
                  y04,  y05,  y06,
                  y07,  y08,  y09,
				  y010, y011, y012,
				  y013, y014, y015, 
                  y016, y017, y018,
                  y019, y020, y021,
				  y022, y023, y024,
				  y025, y026, y027, 
                  y028, y029, y030,
                  y031, y032, y033,
				  y034, y035, y036,
				  y037, y038, y039,
				  y040, y041, y042,
				  y043, y044, y045,
				  y046, y047, y048,
				  y049, y050, y051,
				  y052, y053, y054,
				  y055, y056, y057,
				  y058, y059, y060,
				 n - 1, d1, d2, d3
                 );		      
			
			
			
			
			
			
			/////////////////////////////////////       e
                 
          v1 =  x22 - x31;
		  v2 =  x23 - x32;       
          v3 =  x24 - x33; 
		 
		  w1 =  x55 - x31;
		  w2 =  x56 - x32;       
          w3 =  x57 - x33;      
		  
         
      double c[ 4];
           c [ 0 ] = 0.0;
 	
 	
 	
 		// We calculate the vector normal to face A.
 	double c1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  c[ 1] = c1;
 	double c2 = ( ( w1 * v3 ) - ( v1 * w3 ));  c[ 2] = c2;
 	double c3 = ( ( v1 * w2 ) - ( w1 * v2 ));  c[ 3] = c3;

  
 	
 	
 	 l = sqrt( (c1*c1) + (c2*c2) + (c3*c3));
 	 d = -0.666666 * gold;
 	
 	c1=pow(-1, k)*d * (c1 / l);
 	c2=pow(-1, k)*d * (c2 / l);
 	c3=pow(-1, k)*(-1)*d * (c3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y101 = (x1 * g) + (c1*d);
	double y102 = (x2 * g) + (c2*d);
	double y103 = (x3 * g) + (c3*d);
     
     
    double y104 = (x4 * g) + (c1*d);
	double y105 = (x5 * g) + (c2*d);
	double y106 = (x6 * g) + (c3*d);	
	
	double y107 = (x7 * g) + (c1*d);
	double y108 = (x8 * g) + (c2*d);
	double y109 = (x9 * g) + (c3*d);	 
	
	double y1010 = (x10 * g) + (c1*d);
	double y1011 = (x11 * g) + (c2*d);
	double y1012 = (x12 * g) + (c3*d);
	
	double y1013 = (x13 * g) + (c1*d);
	double y1014 = (x14 * g) + (c2*d);
	double y1015 = (x15 * g) + (c3*d);

	double y1016 = (x16 * g) + (c1*d);
	double y1017 = (x17 * g) + (c2*d);
	double y1018 = (x18 * g) + (c3*d);

	double y1019 = (x19 * g) + (c1*d);
	double y1020 = (x20 * g) + (c2*d);
	double y1021 = (x21 * g) + (c3*d);
	
	double y1022 = (x22 * g) + (c1*d);
	double y1023 = (x23 * g) + (c2*d);
	double y1024 = (x24 * g) + (c3*d);

	double y1025 = (x25 * g) + (c1 *d);
	double y1026 = (x26 * g) + (c2 *d);
	double y1027 = (x27 * g) + (c3*d);
	
	double y1028 = (x28 * g) + (c1*d);
	double y1029 = (x29 * g) + (c2*d);
	double y1030 = (x30* g) + (c3*d);	
	
	double y1031 = (x31 * g) + (c1*d);
	double y1032 = (x32 * g) + (c2*d);
	double y1033 = (x33 * g) + (c3*d);
    
     
    double y1034 = (x34 * g) + (c1*d);
	double y1035 = (x35 * g) + (c2*d);
	double y1036 = (x36 * g) + (c3*d);	
	
	double y1037 = (x37 * g) + (c1*d);
	double y1038 = (x38 * g) + (c2*d);
	double y1039 = (x39 * g) + (c3*d);	 
	
	double y1040 = (x40 * g) + (c1*d);
	double y1041 = (x41 * g) + (c2*d);
	double y1042 = (x42 * g) + (c3*d);

	double y1043 = (x43 * g) + (c1*d);
	double y1044 = (x44 * g) + (c2*d);
	double y1045 = (x45 * g) + (c3*d);
	
	double y1046 = (x46 * g) + (c1*d);
	double y1047 = (x47 * g) + (c2*d);
	double y1048 = (x48 * g) + (c3*d);

	double y1049 = (x49 * g) + (c1*d);
	double y1050 = (x50 * g) + (c2*d);
	double y1051 = (x51 * g) + (c3*d);

	double y1052 = (x52 * g) + (c1*d);
	double y1053 = (x53 * g) + (c2*d);
	double y1054 = (x54 * g) + (c3*d);
	
	double y1055 = (x55 * g) + (c1*d);
	double y1056 = (x56 * g) + (c2*d);
	double y1057 = (x57 * g) + (c3*d);

	double y1058 = (x58 * g) + (c1*d);
	double y1059 = (x59 * g) + (c2*d);
	double y1060 = (x60 * g) + (c3*d);  	     	        
  
	 
	Draw2(
                  y101,  y102,  y103, 
                  y104,  y105,  y106,
                  y107,  y108,  y109,
				  y1010, y1011, y1012,
				  y1013, y1014, y1015, 
                  y1016, y1017, y1018,
                  y1019, y1020, y1021,
				  y1022, y1023, y1024,
				  y1025, y1026, y1027, 
                  y1028, y1029, y1030,
                  y1031, y1032, y1033,
				  y1034, y1035, y1036,
				  y1037, y1038, y1039,
				  y1040, y1041, y1042,
				  y1043, y1044, y1045,
				  y1046, y1047, y1048,
				  y1049, y1050, y1051,
				  y1052, y1053, y1054,
				  y1055, y1056, y1057,
				  y1058, y1059, y1060,
				 n - 1,d1,d2,d3
                 );
				 
				 
				 
				 
				 
				 
				 
				 
				 //////////////////////////////////////////////   s
		  v1 =  x34 - x28;
		  v2 =  x35 - x29;       
          v3 =  x36 - x30; 
		 
		  w1 =  x37 - x28;
		  w2 =  x38 - x29;       
          w3 =  x39 - x30;                    
                 
     double f1 = ( ( v2 * w3 ) - ( w2 * v3 ));
 	 double f2 = ( ( w1 * v3 ) - ( v1 * w3 ));
 	 double f3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
 	
 	 l = sqrt( (f1*f1) + (f2*f2) + (f3*f3));
 	 d = 0.666666 * gold;
 	
 	f1=-pow(-1, k)*d * (f1 / l);
 	f2=-pow(-1, k)*d * (f2 / l);
 	f3=-pow(-1, k)*d * (f3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y201 = (x1 * g) + (f1*d);
	double y202 = (x2 * g) + (f2*d);
	double y203 = (x3 * g) + (f3*d);
     
     
    double y204 = (x4 * g) + (f1*d);
	double y205 = (x5 * g) + (f2*d);
	double y206 = (x6 * g) + (f3*d);	
	
	double y207 = (x7 * g) + (f1*d);
	double y208 = (x8 * g) + (f2*d);
	double y209 = (x9 * g) + (f3*d);	 
	
	double y2010 = (x10 * g) + (f1*d);
	double y2011 = (x11 * g) + (f2*d);
	double y2012 = (x12 * g) + (f3*d);
	
	double y2013 = (x13 * g) + (f1*d);
	double y2014 = (x14 * g) + (f2*d);
	double y2015 = (x15 * g) + (f3*d);

	double y2016 = (x16 * g) + (f1*d);
	double y2017 = (x17 * g) + (f2*d);
	double y2018 = (x18 * g) + (f3*d);

	double y2019 = (x19 * g) + (f1*d);
	double y2020 = (x20 * g) + (f2*d);
	double y2021 = (x21 * g) + (f3*d);

	double y2022 = (x22 * g) + (f1*d);
	double y2023 = (x23 * g) + (f2*d);
	double y2024 = (x24 * g) + (f3*d);

	double y2025 = (x25 * g) + (f1 *d);
	double y2026 = (x26 * g) + (f2 *d);
	double y2027 = (x27 * g) + (f3*d);
	
	double y2028 = (x28 * g) + (f1*d);
	double y2029 = (x29 * g) + (f2*d);
	double y2030 = (x30* g) +  (f3*d);	

	double y2031 = (x31 * g) + (f1*d);
	double y2032 = (x32 * g) + (f2*d);
	double y2033 = (x33 * g) + (f3*d);
    
     
    double y2034 = (x34 * g) + (f1*d);
	double y2035 = (x35 * g) + (f2*d);
	double y2036 = (x36 * g) + (f3*d);	
	
	double y2037 = (x37 * g) + (f1*d);
	double y2038 = (x38 * g) + (f2*d);
	double y2039 = (x39 * g) + (f3*d);	 
	
	double y2040 = (x40 * g) + (f1*d);
	double y2041 = (x41 * g) + (f2*d);
	double y2042 = (x42 * g) + (f3*d);

	double y2043 = (x43 * g) + (f1*d);
	double y2044 = (x44 * g) + (f2*d);
	double y2045 = (x45 * g) + (f3*d);
	
	double y2046 = (x46 * g) + (f1*d);
	double y2047 = (x47 * g) + (f2*d);
	double y2048 = (x48 * g) + (f3*d);

	double y2049 = (x49 * g) + (f1*d);
	double y2050 = (x50 * g) + (f2*d);
	double y2051 = (x51 * g) + (f3*d);

	double y2052 = (x52 * g) + (f1*d);
	double y2053 = (x53 * g) + (f2*d);
	double y2054 = (x54 * g) + (f3*d);
	
	double y2055 = (x55 * g) + (f1*d);
	double y2056 = (x56 * g) + (f2*d);
	double y2057 = (x57 * g) + (f3*d);

	double y2058 = (x58 * g) + (f1*d);
	double y2059 = (x59 * g) + (f2*d);
	double y2060 = (x60 * g) + (f3*d);  	     	        
  
	 
	Draw2(
                  y201,  y202,  y203, 
                  y204,  y205,  y206,
                  y207,  y208,  y209,
				  y2010, y2011, y2012,
				  y2013, y2014, y2015, 
                  y2016, y2017, y2018,
                  y2019, y2020, y2021,
				  y2022, y2023, y2024,
				  y2025, y2026, y2027, 
                  y2028, y2029, y2030,
                  y2031, y2032, y2033,
				  y2034, y2035, y2036,
				  y2037, y2038, y2039,
				  y2040, y2041, y2042,
				  y2043, y2044, y2045,
				  y2046, y2047, y2048,
				  y2049, y2050, y2051,
				  y2052, y2053, y2054,
				  y2055, y2056, y2057,
				  y2058, y2059, y2060,
				 n - 1,d1,d2,d3
                 );	
				 
	     //////////////////////////////////////////////   w3
		  v1 =  x4 - x16;
		  v2 =  x5 - x17;       
          v3 =  x6 - x18; 
		
		  w1 =  x22 - x16;
		  w2 =  x23 - x17;       
          w3 =  x24 - x18;                    
                 
     double e1 = ( ( v2 * w3 ) - ( w2 * v3 ));
 	 double e2 = ( ( w1 * v3 ) - ( v1 * w3 ));
 	 double e3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
 	
 	 l = sqrt( (e1*e1) + (e2*e2) + (e3*e3));
 	 d = 0.666666 * gold;
 	
 	e1=-pow(-1, k)*d * (e1 / l);
 	e2=-pow(-1, k)*d * (e2 / l);
 	e3=-pow(-1, k)*d * (e3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y301 = (x1 * g) + (e1*d);
	double y302 = (x2 * g) + (e2*d);
	double y303 = (x3 * g) + (e3*d);
     
     
    double y304 = (x4 * g) + (e1*d);
	double y305 = (x5 * g) + (e2*d);
	double y306 = (x6 * g) + (e3*d);	
	
	double y307 = (x7 * g) + (e1*d);
	double y308 = (x8 * g) + (e2*d);
	double y309 = (x9 * g) + (e3*d);	 
	
	double y3010 = (x10 * g) + (e1*d);
	double y3011 = (x11 * g) + (e2*d);
	double y3012 = (x12 * g) + (e3*d);

	double y3013 = (x13 * g) + (e1*d);
	double y3014 = (x14 * g) + (e2*d);
	double y3015 = (x15 * g) + (e3*d);

	double y3016 = (x16 * g) + (e1*d);
	double y3017 = (x17 * g) + (e2*d);
	double y3018 = (x18 * g) + (e3*d);

	double y3019 = (x19 * g) + (e1*d);
	double y3020 = (x20 * g) + (e2*d);
	double y3021 = (x21 * g) + (e3*d);

	double y3022 = (x22 * g) + (e1*d);
	double y3023 = (x23 * g) + (e2*d);
	double y3024 = (x24 * g) + (e3*d);

	double y3025 = (x25 * g) + (e1 *d);
	double y3026 = (x26 * g) + (e2 *d);
	double y3027 = (x27 * g) + (e3*d);
	
	double y3028 = (x28 * g) + (e1*d);
	double y3029 = (x29 * g) + (e2*d);
	double y3030 = (x30* g) +  (e3*d);	

	double y3031 = (x31 * g) + (e1*d);
	double y3032 = (x32 * g) + (e2*d);
	double y3033 = (x33 * g) + (e3*d);
    
     
    double y3034 = (x34 * g) + (e1*d);
	double y3035 = (x35 * g) + (e2*d);
	double y3036 = (x36 * g) + (e3*d);	
	
	double y3037 = (x37 * g) + (e1*d);
	double y3038 = (x38 * g) + (e2*d);
	double y3039 = (x39 * g) + (e3*d);	 
	
	double y3040 = (x40 * g) + (e1*d);
	double y3041 = (x41 * g) + (e2*d);
	double y3042 = (x42 * g) + (e3*d);

	double y3043 = (x43 * g) + (e1*d);
	double y3044 = (x44 * g) + (e2*d);
	double y3045 = (x45 * g) + (e3*d);
	
	double y3046 = (x46 * g) + (e1*d);
	double y3047 = (x47 * g) + (e2*d);
	double y3048 = (x48 * g) + (e3*d);

	double y3049 = (x49 * g) + (e1*d);
	double y3050 = (x50 * g) + (e2*d);
	double y3051 = (x51 * g) + (e3*d);

	double y3052 = (x52 * g) + (e1*d);
	double y3053 = (x53 * g) + (e2*d);
	double y3054 = (x54 * g) + (e3*d);
	
	double y3055 = (x55 * g) + (e1*d);
	double y3056 = (x56 * g) + (e2*d);
	double y3057 = (x57 * g) + (e3*d);

	double y3058 = (x58 * g) + (e1*d);
	double y3059 = (x59 * g) + (e2*d);
	double y3060 = (x60 * g) + (e3*d);  	     	        
  
	 
	Draw2(
                  y301,  y302,  y303, 
                  y304,  y305,  y306,
                  y307,  y308,  y309,
				  y3010, y3011, y3012,
				  y3013, y3014, y3015, 
                  y3016, y3017, y3018,
                  y3019, y3020, y3021,
				  y3022, y3023, y3024,
				  y3025, y3026, y3027, 
                  y3028, y3029, y3030,
                  y3031, y3032, y3033,
				  y3034, y3035, y3036,
				  y3037, y3038, y3039,
				  y3040, y3041, y3042,
				  y3043, y3044, y3045,
				  y3046, y3047, y3048,
				  y3049, y3050, y3051,
				  y3052, y3053, y3054,
				  y3055, y3056, y3057,
				  y3058, y3059, y3060,
				 n - 1
                 ,d1,d2,d3);
				 
	 	//////////////////////////////////////////////   f
		  v1 =  x34 - x49;
		  v2 =  x35 - x50;       
          v3 =  x36 - x51; 
		 
		  w1 =  x37 - x49;
		  w2 =  x38 - x50;       
          w3 =  x39 - x51;                    
                 
      e1 = ( ( v2 * w3 ) - ( w2 * v3 ));
 	  e2 = ( ( w1 * v3 ) - ( v1 * w3 ));
 	  e3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
 	
 	 l = sqrt( (e1*e1) + (e2*e2) + (e3*e3));
 	 d = 0.666666 * gold;
 	
 	e1=-pow(-1, k)*d * (e1 / l);
 	e2=-pow(-1, k)*d * (e2 / l);
 	e3=-pow(-1, k)*d * (e3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y401 = (x1 * g) + (e1*d);
	double y402 = (x2 * g) + (e2*d);
	double y403 = (x3 * g) + (e3*d);
     
    double y404 = (x4 * g) + (e1*d);
	double y405 = (x5 * g) + (e2*d);
	double y406 = (x6 * g) + (e3*d);	
	
	double y407 = (x7 * g) + (e1*d);
	double y408 = (x8 * g) + (e2*d);
	double y409 = (x9 * g) + (e3*d);	 
	
	double y4010 = (x10 * g) + (e1*d);
	double y4011 = (x11 * g) + (e2*d);
	double y4012 = (x12 * g) + (e3*d);

	double y4013 = (x13 * g) + (e1*d);
	double y4014 = (x14 * g) + (e2*d);
	double y4015 = (x15 * g) + (e3*d);

	double y4016 = (x16 * g) + (e1*d);
	double y4017 = (x17 * g) + (e2*d);
	double y4018 = (x18 * g) + (e3*d);

	double y4019 = (x19 * g) + (e1*d);
	double y4020 = (x20 * g) + (e2*d);
	double y4021 = (x21 * g) + (e3*d);

	double y4022 = (x22 * g) + (e1*d);
	double y4023 = (x23 * g) + (e2*d);
	double y4024 = (x24 * g) + (e3*d);

	double y4025 = (x25 * g) + (e1 *d);
	double y4026 = (x26 * g) + (e2 *d);
	double y4027 = (x27 * g) + (e3*d);
	
	double y4028 = (x28 * g) + (e1*d);
	double y4029 = (x29 * g) + (e2*d);
	double y4030 = (x30* g) +  (e3*d);	

	double y4031 = (x31 * g) + (e1*d);
	double y4032 = (x32 * g) + (e2*d);
	double y4033 = (x33 * g) + (e3*d);
    
    double y4034 = (x34 * g) + (e1*d);
	double y4035 = (x35 * g) + (e2*d);
	double y4036 = (x36 * g) + (e3*d);	
	
	double y4037 = (x37 * g) + (e1*d);
	double y4038 = (x38 * g) + (e2*d);
	double y4039 = (x39 * g) + (e3*d);	 

	double y4040 = (x40 * g) + (e1*d);
	double y4041 = (x41 * g) + (e2*d);
	double y4042 = (x42 * g) + (e3*d);

	double y4043 = (x43 * g) + (e1*d);
	double y4044 = (x44 * g) + (e2*d);
	double y4045 = (x45 * g) + (e3*d);
	
	double y4046 = (x46 * g) + (e1*d);
	double y4047 = (x47 * g) + (e2*d);
	double y4048 = (x48 * g) + (e3*d);

	double y4049 = (x49 * g) + (e1*d);
	double y4050 = (x50 * g) + (e2*d);
	double y4051 = (x51 * g) + (e3*d);

	double y4052 = (x52 * g) + (e1*d);
	double y4053 = (x53 * g) + (e2*d);
	double y4054 = (x54 * g) + (e3*d);
	
	double y4055 = (x55 * g) + (e1*d);
	double y4056 = (x56 * g) + (e2*d);
	double y4057 = (x57 * g) + (e3*d);

	double y4058 = (x58 * g) + (e1*d);
	double y4059 = (x59 * g) + (e2*d);
	double y4060 = (x60 * g) + (e3*d);  	     	        
  
	 
	Draw2(
                  y401,  y402,  y403, 
                  y404,  y405,  y406,
                  y407,  y408,  y409,
				  y4010, y4011, y4012,
				  y4013, y4014, y4015, 
                  y4016, y4017, y4018,
                  y4019, y4020, y4021,
				  y4022, y4023, y4024,
				  y4025, y4026, y4027, 
                  y4028, y4029, y4030,
                  y4031, y4032, y4033,
				  y4034, y4035, y4036,
				  y4037, y4038, y4039,
				  y4040, y4041, y4042,
				  y4043, y4044, y4045,
				  y4046, y4047, y4048,
				  y4049, y4050, y4051,
				  y4052, y4053, y4054,
				  y4055, y4056, y4057,
				  y4058, y4059, y4060,
				 n - 1
                 ,d1,d2,d3);		
				 
				 
				 
				 
				 
				 
	
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double aj1 = (x43 - x40) / 2;
 	double aj2 = (x44 - x41) / 2;
 	double aj3 = (x45 - x42) / 2; 
 	
 	 l = sqrt( (aj1*aj1) + (aj2*aj2) + (aj3*aj3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	aj1=pow(-1, k)*d * (aj1 / l);
 	aj2=pow(-1, k)*d * (aj2 / l);
 	aj3=pow(-1, k)*d * (aj3 / l);
 	
 	 
     
     
	double xj01 = (x1 * g) + (aj1*d);
	double xj02 = (x2 * g) + (aj2*d);
	double xj03 = (x3 * g) + (aj3*d);
     
     
    double xj04 = (x4 * g) + (aj1*d);
	double xj05 = (x5 * g) + (aj2*d);
	double xj06 = (x6 * g) + (aj3*d);	

	double xj07 = (x7 * g) + (aj1*d);
	double xj08 = (x8 * g) + (aj2*d);
	double xj09 = (x9 * g) + (aj3*d);	 
	
	double xj010 = (x10 * g) + (aj1*d);
	double xj011 = (x11 * g) + (aj2*d);
	double xj012 = (x12 * g) + (aj3*d);
	
	double xj013 = (x13 * g) + (aj1*d);
	double xj014 = (x14 * g) + (aj2*d);
	double xj015 = (x15 * g) + (aj3*d);
	
	double xj016 = (x16 * g) + (aj1*d);
	double xj017 = (x17 * g) + (aj2*d);
	double xj018 = (x18 * g) + (aj3*d);

	double xj019 = (x19 * g) + (aj1*d);
	double xj020 = (x20 * g) + (aj2*d);
	double xj021 = (x21 * g) + (aj3*d);

	double xj022 = (x22 * g) + (aj1*d);
	double xj023 = (x23 * g) + (aj2*d);
	double xj024 = (x24 * g) + (aj3*d);
	
	double xj025 = (x25 * g) + (aj1*d);
	double xj026 = (x26 * g) + (aj2*d);
	double xj027 = (x27 * g) + (aj3*d);
	
	double xj028 = (x28 * g) + (aj1*d);
	double xj029 = (x29 * g) + (aj2*d);
	double xj030 = (x30 * g) + (aj3*d);	
	
	double xj031 = (x31 * g) + (aj1*d);
	double xj032 = (x32 * g) + (aj2*d);
	double xj033 = (x33 * g) + (aj3*d);
    
     
    double xj034 = (x34 * g) + (aj1*d);
	double xj035 = (x35 * g) + (aj2*d);
	double xj036 = (x36 * g) + (aj3*d);	
	
	double xj037 = (x37 * g) + (aj1*d);
	double xj038 = (x38 * g) + (aj2*d);
	double xj039 = (x39 * g) + (aj3*d);	 
	
	double xj040 = (x40 * g) + (aj1*d);
	double xj041 = (x41 * g) + (aj2*d);
	double xj042 = (x42 * g) + (aj3*d);
	
	double xj043 = (x43 * g) + (aj1*d);
	double xj044 = (x44 * g) + (aj2*d);
	double xj045 = (x45 * g) + (aj3*d);
	
	double xj046 = (x46 * g) + (aj1*d);
	double xj047 = (x47 * g) + (aj2*d);
	double xj048 = (x48 * g) + (aj3*d);
	
	double xj049 = (x49 * g) + (aj1*d);
	double xj050 = (x50 * g) + (aj2*d);
	double xj051 = (x51 * g) + (aj3*d);

	double xj052 = (x52 * g) + (aj1*d);
	double xj053 = (x53 * g) + (aj2*d);
	double xj054 = (x54 * g) + (aj3*d);
	
	double xj055 = (x55 * g) + (aj1*d);
	double xj056 = (x56 * g) + (aj2*d);
	double xj057 = (x57 * g) + (aj3*d);
	
	double xj058 = (x58 * g) + (aj1*d);
	double xj059 = (x59 * g) + (aj2*d);
	double xj060 = (x60 * g) + (aj3*d);  	     	        
  
	 
	Draw2(
                  xj01,  xj02,  xj03, 
                  xj04,  xj05,  xj06,
                  xj07,  xj08,  xj09,
				  xj010, xj011, xj012,
				  xj013, xj014, xj015, 
                  xj016, xj017, xj018,
                  xj019, xj020,  xj021,
				  xj022, xj023,  xj024,
				  xj025, xj026,  xj027, 
                  xj028, xj029,  xj030,
                  xj031, xj032,  xj033,
				  xj034, xj035,  xj036,
				  xj037, xj038,  xj039,
				  xj040, xj041,  xj042,
				  xj043, xj044,  xj045,
				  xj046, xj047,  xj048,
				  xj049, xj050,  xj051,
				  xj052, xj053,  xj054,
				  xj055, xj056,  xj057,
				  xj058, xj059,  xj060,
				 n - 1
                 ,d1,d2,d3);
                 
                 
     
	 //0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double ai1 = (-x37 + x25) / 2;
 	double ai2 = (-x38 + x26) / 2;
 	double ai3 = (-x39 + x27) / 2;
	 
 	 
 	 l = sqrt( (ai1*ai1) + (ai2*ai2) + (ai3*ai3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	ai1=pow(-1, k)*d * (ai1 / l);
 	ai2=pow(-1, k)*d * (ai2 / l);
 	ai3=pow(-1, k)*d * (ai3 / l);
 	
 	
     
     
	double xi01 = (x1 * g) + (ai1*d);
	double xi02 = (x2 * g) + (ai2*d);
	double xi03 = (x3 * g) + (ai3*d);
     
     
    double xi04 = (x4 * g) + (ai1*d);
	double xi05 = (x5 * g) + (ai2*d);
	double xi06 = (x6 * g) + (ai3*d);	
	
	double xi07 = (x7 * g) + (ai1*d);
	double xi08 = (x8 * g) + (ai2*d);
	double xi09 = (x9 * g) + (ai3*d);	 
	
	double xi010 = (x10 * g) + (ai1*d);
	double xi011 = (x11 * g) + (ai2*d);
	double xi012 = (x12 * g) + (ai3*d);
	
	double xi013 = (x13 * g) + (ai1*d);
	double xi014 = (x14 * g) + (ai2*d);
	double xi015 = (x15 * g) + (ai3*d);
	
	double xi016 = (x16 * g) + (ai1*d);
	double xi017 = (x17 * g) + (ai2*d);
	double xi018 = (x18 * g) + (ai3*d);
	
	double xi019 = (x19 * g) + (ai1*d);
	double xi020 = (x20 * g) + (ai2*d);
	double xi021 = (x21 * g) + (ai3*d);
	
	double xi022 = (x22 * g) + (ai1*d);
	double xi023 = (x23 * g) + (ai2*d);
	double xi024 = (x24 * g) + (ai3*d);
	
	double xi025 = (x25 * g) + (ai1*d);
	double xi026 = (x26 * g) + (ai2*d);
	double xi027 = (x27 * g) + (ai3*d);
	
	double xi028 = (x28 * g) + (ai1*d);
	double xi029 = (x29 * g) + (ai2*d);
	double xi030 = (x30 * g) + (ai3*d);	
	
	double xi031 = (x31 * g) + (ai1*d);
	double xi032 = (x32 * g) + (ai2*d);
	double xi033 = (x33 * g) + (ai3*d);
    
     
    double xi034 = (x34 * g) + (ai1*d);
	double xi035 = (x35 * g) + (ai2*d);
	double xi036 = (x36 * g) + (ai3*d);	
	
	double xi037 = (x37 * g) + (ai1*d);
	double xi038 = (x38 * g) + (ai2*d);
	double xi039 = (x39 * g) + (ai3*d);	 
	
	double xi040 = (x40 * g) + (ai1*d);
	double xi041 = (x41 * g) + (ai2*d);
	double xi042 = (x42 * g) + (ai3*d);
	
	double xi043 = (x43 * g) + (ai1*d);
	double xi044 = (x44 * g) + (ai2*d);
	double xi045 = (x45 * g) + (ai3*d);
	
	double xi046 = (x46 * g) + (ai1*d);
	double xi047 = (x47 * g) + (ai2*d);
	double xi048 = (x48 * g) + (ai3*d);
	
	double xi049 = (x49 * g) + (ai1*d);
	double xi050 = (x50 * g) + (ai2*d);
	double xi051 = (x51 * g) + (ai3*d);

	double xi052 = (x52 * g) + (ai1*d);
	double xi053 = (x53 * g) + (ai2*d);
	double xi054 = (x54 * g) + (ai3*d);
	
	double xi055 = (x55 * g) + (ai1*d);
	double xi056 = (x56 * g) + (ai2*d);
	double xi057 = (x57 * g) + (ai3*d);
	
	double xi058 = (x58 * g) + (ai1*d);
	double xi059 = (x59 * g) + (ai2*d);
	double xi060 = (x60 * g) + (ai3*d);  	     	        
  
	 
	Draw2(
                  xi01,  xi02,  xi03, 
                  xi04,  xi05,  xi06,
                  xi07,  xi08,  xi09,
				  xi010, xi011, xi012,
				  xi013, xi014, xi015, 
                  xi016, xi017, xi018,
                  xi019, xi020,  xi021,
				  xi022, xi023,  xi024,
				  xi025, xi026,  xi027, 
                  xi028, xi029,  xi030,
                  xi031, xi032,  xi033,
				  xi034, xi035,  xi036,
				  xi037, xi038,  xi039,
				  xi040, xi041,  xi042,
				  xi043, xi044,  xi045,
				  xi046, xi047,  xi048,
				  xi049, xi050,  xi051,
				  xi052, xi053,  xi054,
				  xi055, xi056,  xi057,
				  xi058, xi059,  xi060,
				 n - 1
                 ,d1,d2,d3);	            
				 
	  
	  
	  
	 //0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double ak1 = (x25 - x40) / 2;
 	double ak2 = (x26 - x41) / 2;
 	double ak3 = (x27 - x42) / 2; 
 	
 	 l = sqrt( (ak1*ak1) + (ak2*ak2) + (ak3*ak3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	ak1=pow(-1, k)*d * (ak1 / l);
 	ak2=pow(-1, k)*d * (ak2 / l);
 	ak3=pow(-1, k)*d * (ak3 / l);
     
     
	double xk01 = (x1 * g) + (ak1*d);
	double xk02 = (x2 * g) + (ak2*d);
	double xk03 = (x3 * g) + (ak3*d);
     
    double xk04 = (x4 * g) + (ak1*d);
	double xk05 = (x5 * g) + (ak2*d);
	double xk06 = (x6 * g) + (ak3*d);	

	double xk07 = (x7 * g) + (ak1*d);
	double xk08 = (x8 * g) + (ak2*d);
	double xk09 = (x9 * g) + (ak3*d);	 
	
	double xk010 = (x10 * g) + (ak1*d);
	double xk011 = (x11 * g) + (ak2*d);
	double xk012 = (x12 * g) + (ak3*d);
	
	double xk013 = (x13 * g) + (ak1*d);
	double xk014 = (x14 * g) + (ak2*d);
	double xk015 = (x15 * g) + (ak3*d);
	
	double xk016 = (x16 * g) + (ak1*d);
	double xk017 = (x17 * g) + (ak2*d);
	double xk018 = (x18 * g) + (ak3*d);

	double xk019 = (x19 * g) + (ak1*d);
	double xk020 = (x20 * g) + (ak2*d);
	double xk021 = (x21 * g) + (ak3*d);

	double xk022 = (x22 * g) + (ak1*d);
	double xk023 = (x23 * g) + (ak2*d);
	double xk024 = (x24 * g) + (ak3*d);
	
	double xk025 = (x25 * g) + (ak1*d);
	double xk026 = (x26 * g) + (ak2*d);
	double xk027 = (x27 * g) + (ak3*d);
	
	double xk028 = (x28 * g) + (ak1*d);
	double xk029 = (x29 * g) + (ak2*d);
	double xk030 = (x30 * g) + (ak3*d);	
	
	double xk031 = (x31 * g) + (ak1*d);
	double xk032 = (x32 * g) + (ak2*d);
	double xk033 = (x33 * g) + (ak3*d);
     
    double xk034 = (x34 * g) + (ak1*d);
	double xk035 = (x35 * g) + (ak2*d);
	double xk036 = (x36 * g) + (ak3*d);	
	
	double xk037 = (x37 * g) + (ak1*d);
	double xk038 = (x38 * g) + (ak2*d);
	double xk039 = (x39 * g) + (ak3*d);	 

	double xk040 = (x40 * g) + (ak1*d);
	double xk041 = (x41 * g) + (ak2*d);
	double xk042 = (x42 * g) + (ak3*d);
	
	double xk043 = (x43 * g) + (ak1*d);
	double xk044 = (x44 * g) + (ak2*d);
	double xk045 = (x45 * g) + (ak3*d);
	
	double xk046 = (x46 * g) + (ak1*d);
	double xk047 = (x47 * g) + (ak2*d);
	double xk048 = (x48 * g) + (ak3*d);
	
	double xk049 = (x49 * g) + (ak1*d);
	double xk050 = (x50 * g) + (ak2*d);
	double xk051 = (x51 * g) + (ak3*d);

	double xk052 = (x52 * g) + (ak1*d);
	double xk053 = (x53 * g) + (ak2*d);
	double xk054 = (x54 * g) + (ak3*d);
	
	double xk055 = (x55 * g) + (ak1*d);
	double xk056 = (x56 * g) + (ak2*d);
	double xk057 = (x57 * g) + (ak3*d);
	
	double xk058 = (x58 * g) + (ak1*d);
	double xk059 = (x59 * g) + (ak2*d);
	double xk060 = (x60 * g) + (ak3*d);  	     	        
  
	 
	Draw2(
                  xk01,  xk02,  xk03, 
                  xk04,  xk05,  xk06,
                  xk07,  xk08,  xk09,
				  xk010, xk011, xk012,
				  xk013, xk014, xk015, 
                  xk016, xk017, xk018,
                  xk019, xk020,  xk021,
				  xk022, xk023,  xk024,
				  xk025, xk026,  xk027, 
                  xk028, xk029,  xk030,
                  xk031, xk032,  xk033,
				  xk034, xk035,  xk036,
				  xk037, xk038,  xk039,
				  xk040, xk041,  xk042,
				  xk043, xk044,  xk045,
				  xk046, xk047,  xk048,
				  xk049, xk050,  xk051,
				  xk052, xk053,  xk054,
				  xk055, xk056,  xk057,
				  xk058, xk059,  xk060,
				 n - 1
                 ,d1,d2,d3);	 		
				 
				 
     //0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double al1 = -(x37 - x34) / 2;
 	double al2 = -(x38 - x35) / 2;
 	double al3 = -(x39 - x36) / 2; 
 	
 	
 	
 	double le = sqrt( (al1*al1) + (al2*al2) + (al3*al3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	al1=pow(-1, k)*d * (al1 / le);
 	al2=pow(-1, k)*d * (al2 / le);
 	al3=pow(-1, k)*d * (al3 / le);
     
     
	double xl01 = (x1 * g) + (al1*d);
	double xl02 = (x2 * g) + (al2*d);
	double xl03 = (x3 * g) + (al3*d);
     
    double xl04 = (x4 * g) + (al1*d);
	double xl05 = (x5 * g) + (al2*d);
	double xl06 = (x6 * g) + (al3*d);	

	double xl07 = (x7 * g) + (al1*d);
	double xl08 = (x8 * g) + (al2*d);
	double xl09 = (x9 * g) + (al3*d);	 
	
	double xl010 = (x10 * g) + (al1*d);
	double xl011 = (x11 * g) + (al2*d);
	double xl012 = (x12 * g) + (al3*d);
	
	double xl013 = (x13 * g) + (al1*d);
	double xl014 = (x14 * g) + (al2*d);
	double xl015 = (x15 * g) + (al3*d);

	double xl016 = (x16 * g) + (al1*d);
	double xl017 = (x17 * g) + (al2*d);
	double xl018 = (x18 * g) + (al3*d);

	double xl019 = (x19 * g) + (al1*d);
	double xl020 = (x20 * g) + (al2*d);
	double xl021 = (x21 * g) + (al3*d);

	double xl022 = (x22 * g) + (al1*d);
	double xl023 = (x23 * g) + (al2*d);
	double xl024 = (x24 * g) + (al3*d);
	
	double xl025 = (x25 * g) + (al1*d);
	double xl026 = (x26 * g) + (al2*d);
	double xl027 = (x27 * g) + (al3*d);

	double xl028 = (x28 * g) + (al1*d);
	double xl029 = (x29 * g) + (al2*d);
	double xl030 = (x30 * g) + (al3*d);	
	
	double xl031 = (x31 * g) + (al1*d);
	double xl032 = (x32 * g) + (al2*d);
	double xl033 = (x33 * g) + (al3*d);
     
    double xl034 = (x34 * g) + (al1*d);
	double xl035 = (x35 * g) + (al2*d);
	double xl036 = (x36 * g) + (al3*d);	
	
	double xl037 = (x37 * g) + (al1*d);
	double xl038 = (x38 * g) + (al2*d);
	double xl039 = (x39 * g) + (al3*d);	 
	
	double xl040 = (x40 * g) + (al1*d);
	double xl041 = (x41 * g) + (al2*d);
	double xl042 = (x42 * g) + (al3*d);
	
	double xl043 = (x43 * g) + (al1*d);
	double xl044 = (x44 * g) + (al2*d);
	double xl045 = (x45 * g) + (al3*d);
	
	double xl046 = (x46 * g) + (al1*d);
	double xl047 = (x47 * g) + (al2*d);
	double xl048 = (x48 * g) + (al3*d);
	
	double xl049 = (x49 * g) + (al1*d);
	double xl050 = (x50 * g) + (al2*d);
	double xl051 = (x51 * g) + (al3*d);

	double xl052 = (x52 * g) + (al1*d);
	double xl053 = (x53 * g) + (al2*d);
	double xl054 = (x54 * g) + (al3*d);
	
	double xl055 = (x55 * g) + (al1*d);
	double xl056 = (x56 * g) + (al2*d);
	double xl057 = (x57 * g) + (al3*d);
	
	double xl058 = (x58 * g) + (al1*d);
	double xl059 = (x59 * g) + (al2*d);
	double xl060 = (x60 * g) + (al3*d);  	     	        
  
	 
	Draw2(
                  xl01,  xl02,  xl03, 
                  xl04,  xl05,  xl06,
                  xl07,  xl08,  xl09,
				  xl010, xl011, xl012,
				  xl013, xl014, xl015, 
                  xl016, xl017, xl018,
                  xl019, xl020,  xl021,
				  xl022, xl023,  xl024,
				  xl025, xl026,  xl027, 
                  xl028, xl029,  xl030,
                  xl031, xl032,  xl033,
				  xl034, xl035,  xl036,
				  xl037, xl038,  xl039,
				  xl040, xl041,  xl042,
				  xl043, xl044,  xl045,
				  xl046, xl047,  xl048,
				  xl049, xl050,  xl051,
				  xl052, xl053,  xl054,
				  xl055, xl056,  xl057,
				  xl058, xl059,  xl060,
				 n - 1
                 ,d1,d2,d3);	 
				 
				 
//0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double am1 = (x34 - x16) / 2;
 	double am2 = (x35 - x17) / 2;
 	double am3 = (x36 - x18) / 2; 
 	
 	 l = sqrt( (am1*am1) + (am2*am2) + (am3*am3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	am1=pow(-1, k)*d * (am1 / l);
 	am2=pow(-1, k)*d * (am2 / l);
 	am3=pow(-1, k)*d * (am3 / l);
     
     
	double xm01 = (x1 * g) + (am1*d);
	double xm02 = (x2 * g) + (am2*d);
	double xm03 = (x3 * g) + (am3*d);
     
    double xm04 = (x4 * g) + (am1*d);
	double xm05 = (x5 * g) + (am2*d);
	double xm06 = (x6 * g) + (am3*d);	

	double xm07 = (x7 * g) + (am1*d);
	double xm08 = (x8 * g) + (am2*d);
	double xm09 = (x9 * g)   + (am3*d);	 
	
	double xm010 = (x10 * g) + (am1*d);
	double xm011 = (x11 * g) + (am2*d);
	double xm012 = (x12 * g) + (am3*d);
	
	double xm013 = (x13 * g) + (am1*d);
	double xm014 = (x14 * g) + (am2*d);
	double xm015 = (x15 * g) + (am3*d);

	double xm016 = (x16 * g) + (am1*d);
	double xm017 = (x17 * g) + (am2*d);
	double xm018 = (x18 * g) + (am3*d);

	double xm019 = (x19 * g) + (am1*d);
	double xm020 = (x20 * g) + (am2*d);
	double xm021 = (x21 * g) + (am3*d);

	double xm022 = (x22 * g) + (am1*d);
	double xm023 = (x23 * g) + (am2*d);
	double xm024 = (x24 * g) + (am3*d);
	
	double xm025 = (x25 * g) + (am1*d);
	double xm026 = (x26 * g) + (am2*d);
	double xm027 = (x27 * g) + (am3*d);

	double xm028 = (x28 * g) + (am1*d);
	double xm029 = (x29 * g) + (am2*d);
	double xm030 = (x30 * g) + (am3*d);	
	
	double xm031 = (x31 * g) + (am1*d);
	double xm032 = (x32 * g) + (am2*d);
	double xm033 = (x33 * g) + (am3*d);
     
    double xm034 = (x34 * g) + (am1*d);
	double xm035 = (x35 * g) + (am2*d);
	double xm036 = (x36 * g) + (am3*d);	

	double xm037 = (x37 * g) + (am1*d);
	double xm038 = (x38 * g) + (am2*d);
	double xm039 = (x39 * g) + (am3*d);	 
	
	double xm040 = (x40 * g) + (am1*d);
	double xm041 = (x41 * g) + (am2*d);
	double xm042 = (x42 * g) + (am3*d);
	
	double xm043 = (x43 * g) + (am1*d);
	double xm044 = (x44 * g) + (am2*d);
	double xm045 = (x45 * g) + (am3*d);
	
	double xm046 = (x46 * g) + (am1*d);
	double xm047 = (x47 * g) + (am2*d);
	double xm048 = (x48 * g) + (am3*d);
	
	double xm049 = (x49 * g) + (am1*d);
	double xm050 = (x50 * g) + (am2*d);
	double xm051 = (x51 * g) + (am3*d);

	double xm052 = (x52 * g) + (am1*d);
	double xm053 = (x53 * g) + (am2*d);
	double xm054 = (x54 * g) + (am3*d);

	double xm055 = (x55 * g) + (am1*d);
	double xm056 = (x56 * g) + (am2*d);
	double xm057 = (x57 * g) + (am3*d);

	double xm058 = (x58 * g) + (am1*d);
	double xm059 = (x59 * g) + (am2*d);
	double xm060 = (x60 * g) + (am3*d);  	     	        
  
	 
	Draw2(
                  xm01,  xm02,  xm03, 
                  xm04,  xm05,  xm06,
                  xm07,  xm08,  xm09,
				  xm010, xm011, xm012,
				  xm013, xm014, xm015, 
                  xm016, xm017, xm018,
                  xm019, xm020,  xm021,
				  xm022, xm023,  xm024,
				  xm025, xm026,  xm027, 
                  xm028, xm029,  xm030,
                  xm031, xm032,  xm033,
				  xm034, xm035,  xm036,
				  xm037, xm038,  xm039,
				  xm040, xm041,  xm042,
				  xm043, xm044,  xm045,
				  xm046, xm047,  xm048,
				  xm049, xm050,  xm051,
				  xm052, xm053,  xm054,
				  xm055, xm056,  xm057,
				  xm058, xm059,  xm060,
				 n - 1
                 ,d1,d2,d3);	 
				 
				 
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 				 						 	 
				 
	};
				 
				 
				 
    
	  }     
     
    
     
     
	 
	 
	 

}

}


























































void Torus::Draw3(
                 double x1, double x2, double x3, 
                 double x4, double x5, double x6,
                 double x7, double x8, double x9,
				 double x10, double x11, double x12,
				 double x13, double x14, double x15, 
                 double x16, double x17, double x18,
                 double x19, double x20, double x21,
				 double x22, double x23, double x24,
				 double x25, double x26, double x27, 
                 double x28, double x29, double x30,
                 double x31, double x32, double x33,
				 double x34, double x35, double x36,
				 double x37, double x38, double x39,
				 double x40, double x41, double x42,
				 double x43, double x44, double x45,
				 double x46, double x47, double x48,
				 double x49, double x50, double x51,
				 double x52, double x53, double x54,
				 double x55, double x56, double x57,
				 double x58, double x59, double x60,
				 int n, double d1,  double d2, double d3
                 )
{
      double gold= (1 + sqrt(5))/2;
      double g = 0.975 / (gold*gold);
      
      
         Vector3D w[20] = {
         Vector3D( x1 , x2, x3 ),//0
         Vector3D( x4 , x5, x6 ),//1
         Vector3D( x7 , x8, x9 ),//2
         Vector3D( x10 , x11, x12 ),//3
         Vector3D( x13 , x14, x15 ),//4
         Vector3D( x16 , x17, x18 ),//5
         Vector3D( x19 , x20, x21 ),//6
         Vector3D( x22 , x23, x24 ),//7
         Vector3D( x25 , x26, x27 ),//8
         Vector3D( x28 , x29, x30 ),//9
         Vector3D( x31 , x32, x33 ),//10
         Vector3D( x34 , x35, x36 ),//11
         Vector3D( x37 , x38, x39 ),//12
         Vector3D( x40 , x41, x42 ),//13
         Vector3D( x43 , x44, x45 ),//14
         Vector3D( x46 , x47, x48 ),//15
         Vector3D( x49 , x50, x51 ),//16
         Vector3D( x52 , x53, x54 ),//17
         Vector3D( x55 , x56, x57 ),//18
         Vector3D( x58 , x59, x60 ),//19
         
 };
      
    /* facet(w[9], w[15], w[14]);
     facet(w[8], w[9], w[14]);
     facet(w[13], w[8], w[14]);*/
     
        /*
       
	
  /*   facet(w[1], w[7], w[5]);
     facet(w[0], w[1], w[5]);
     facet(w[6], w[0], w[5]);
     
     
     
     facet(w[12], w[8], w[13]);
     facet(w[16], w[12], w[13]);
     facet(w[19], w[16], w[13]);
     
     facet(w[17],w[18], w[7]);
     facet(w[2], w[17], w[7]);
     facet(w[1], w[2], w[7]);
     
	 facet(w[18], w[17], w[15]);
     facet(w[10], w[18], w[15]);
     facet(w[9], w[10], w[15]);
     
	 facet(w[4], w[0], w[6]);
     facet(w[19], w[4], w[6]);
     facet(w[16], w[19], w[6]);
     
     facet(w[11], w[10], w[9]);
     facet(w[12], w[11], w[9]);
     facet(w[8], w[12], w[9]);
     */
    /*    double v1 =  x34 - x28;
		   double v2 =  x35 - x29 ;      
           double v3 =  x36 - x30; 
		 
		  double w1 =  x31 - x28;
		  double w2 =  x32 - x29;       
          double w3 =  x33 - x30;  
    
    double z1[3];
    	// We calculate the vector normal to face A.
 	 double z11 = ( ( (v2 * w3 ) - ( w2 * v3 )));  z1[ 1] = z11;
 	 double z12 = ( ( w1 * v3 ) - ( v1 * w3 ));  z1[ 2] = z12;
 	 double z13 = ( ( v1 * w2 ) - ( w1 * v2 ));  z1[ 3] = z13;
          double D = sqrt( (z11 * z11) + (z12 * z12) + (z13 * z13));
    cout<<endl<<"z1 = (  ";
 	for( int i = 1; i <= 3; ++i) 
 {
	 	
	 	if( i < 3)
	 	{
	 		cout<<z1[ i]/D<<",   ";
		 }
		 else
	 	cout<<z1[3]/D<<" )";
 } */
     /*
     
	 facet(w[2], w[1], w[0]);
     facet(w[3], w[2], w[0]);
     facet(w[4], w[3], w[0]);
     
     */
           
     /*
     facet(w[11], w[12], w[16]);
     facet(w[5], w[11], w[16]);
     facet(w[6], w[5], w[16]);
     
     facet(w[14], w[15], w[17]);
     facet(w[3], w[14], w[17]);
     facet(w[2], w[3], w[17]);
     */
      
     /*
	 facet(w[7], w[18], w[10]);
     facet(w[5], w[7],  w[10]);
     facet(w[11], w[5], w[10]);
    
     facet(w[14], w[3], w[4]); //w1
     facet(w[13], w[14], w[4]);
     facet(w[19], w[13], w[4]);*/
     
    
    
    
    
	
	Vector3D v[20] = {
         Vector3D( x1 + d1, x2 + d2, x3 + d3 ),//0
         Vector3D( x4 + d1, x5 + d2, x6 + d3 ),//1
         Vector3D( x7 + d1, x8 + d2, x9 + d3 ),//2
         Vector3D( x10 +d1, x11 +d2, x12 +d3 ),//3
         Vector3D( x13 +d1, x14 +d2, x15 +d3 ),//4
         Vector3D( x16 +d1, x17 +d2, x18 +d3 ),//5
         Vector3D( x19 +d1, x20 +d2, x21 +d3 ),//6
         Vector3D( x22 +d1, x23 +d2, x24 +d3 ),//7
         Vector3D( x25 +d1, x26 +d2, x27 +d3 ),//8
         Vector3D( x28 +d1, x29 +d2, x30 +d3 ),//9
         Vector3D( x31 +d1, x32 +d2, x33 +d3 ),//10
         Vector3D( x34 +d1, x35 +d2, x36 +d3 ),//11
         Vector3D( x37 +d1, x38 +d2, x39 +d3 ),//12
         Vector3D( x40 +d1, x41 +d2, x42 +d3 ),//13
         Vector3D( x43 +d1, x44 +d2, x45 +d3 ),//14
         Vector3D( x46 +d1, x47 +d2, x48 +d3 ),//15
         Vector3D( x49 +d1, x50 +d2, x51 +d3 ),//16
         Vector3D( x52 +d1, x53 +d2, x54 +d3 ),//17
         Vector3D( x55 +d1, x56 +d2, x57 +d3 ),//18
         Vector3D( x58 +d1, x59 +d2, x60 +d3 ),//19
         
     };
     
     	
if( n == 0 )
{
	
     facet(v[9], v[15], v[14]);
     facet(v[8], v[9], v[14]);
     facet(v[13], v[8], v[14]);
    
	
     facet(v[1], v[7], v[5]);
     facet(v[0], v[1], v[5]);
     facet(v[6], v[0], v[5]);
     
     facet(v[12], v[8], v[13]);
     facet(v[16], v[12], v[13]);
     facet(v[19], v[16], v[13]);
     
     facet(v[17], v[18], v[7]);
     facet(v[2], v[17], v[7]);
     facet(v[1], v[2], v[7]);
     
	 facet(v[18], v[17], v[15]);
     facet(v[10], v[18], v[15]);
     facet(v[9], v[10], v[15]);
     
	 facet(v[4], v[0], v[6]);
     facet(v[19], v[4], v[6]);
     facet(v[16], v[19], v[6]);
     
     facet(v[11], v[10], v[9]);
     facet(v[12], v[11], v[9]);
     facet(v[8], v[12], v[9]);
     
	 facet(v[2], v[1], v[0]);
     facet(v[3], v[2], v[0]);
     facet(v[4], v[3], v[0]);
     
     facet(v[11], v[12], v[16]);
     facet(v[5], v[11], v[16]);
     facet(v[6], v[5], v[16]);
     
     facet(v[14], v[15], v[17]);
     facet(v[3], v[14], v[17]);
     facet(v[2], v[3], v[17]);
     
	 facet(v[7], v[18], v[10]);
     facet(v[5], v[7], v[10]);
     facet(v[11], v[5], v[10]);
     
     facet(v[14], v[3], v[4]); //w1
     facet(v[13], v[14], v[4]);
     facet(v[19], v[13], v[4]);
     
     
}
 else
 {
 	
    facet(v[11], v[10], v[9]);//s
     facet(v[12], v[11], v[9]);
     facet(v[8], v[12], v[9]);
 	
 	 facet(v[9], v[15], v[14]);//a
     facet(v[8], v[9], v[14]);
     facet(v[13], v[8], v[14]);
     
     facet(v[18], v[17], v[15]);//d
     facet(v[10], v[18], v[15]);
     facet(v[9], v[10], v[15]);
    
    facet(v[7], v[18], v[10]); //e
     facet(v[5], v[7], v[10]);
     facet(v[11], v[5], v[10]);
     
     facet(v[11], v[12], v[16]);//f
     facet(v[5], v[11], v[16]);
     facet(v[6], v[5], v[16]);

     facet(v[12], v[8], v[13]); //c
     facet(v[16], v[12], v[13]);
     facet(v[19], v[16], v[13]);
     
     facet(v[1], v[7], v[5]);// w 3
     facet(v[0], v[1], v[5]);
     facet(v[6], v[0], v[5]);
     
    facet(v[17], v[18], v[7]);    //w 4
     facet(v[2], v[17], v[7]);
     facet(v[1], v[2], v[7]);
     
	 facet(v[4], v[0], v[6]);// w 2
     facet(v[19], v[4], v[6]);
     facet(v[16], v[19], v[6]);
     
	 facet(v[2], v[1], v[0]); ////b center
     facet(v[3], v[2], v[0]);
     facet(v[4], v[3], v[0]);
     
     facet(v[14], v[15], v[17]); //w5
     facet(v[3], v[14], v[17]);
     facet(v[2], v[3], v[17]);
     
     
     facet(v[14], v[3], v[4]);//w1
     facet(v[13], v[14], v[4]);
     facet(v[19], v[13], v[4]);
     
   
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	
	 
	 
	                                 /////////////////////   f
 	       double v1 =  x34 - x49;
		   double v2 =  x35 - x50;       
           double v3 =  x36 - x51; 
		 
		   double w1 =  x37 - x49;
		   double w2 =  x38 - x50;       
           double w3 =  x39 - x51;                    
                 
 	
 	
 	for(int k=0; k<=0; ++k)
 	{
 		// We calculate the vector normal to face A.
 	 double a1 = ( ( (v2 * w3 ) - ( w2 * v3 ))); 
 	 double a2 = ( ( w1 * v3 ) - ( v1 * w3 ));  
 	 double a3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
          double D = sqrt( (a1 * a1) + (a2 * a2) + (a3 * a3));
 	
 	
  double l = sqrt( (a1*a1) + (a2*a2) + (a3*a3));
 	double d = 0.666666 * gold;
 	
 	a1=pow(-1, k)*d * (a1 / l);
 	a2=pow(-1, k)*d * (a2 / l);
 	a3=pow(-1, k)*d * (a3 / l);
 	

     
    double x01 = (x1 * g) + (a1*d);
	double x02 = (x2 * g) + (a2*d);
	double x03 = (x3 * g) + (a3*d);
	
	double x04 = (x4 * g) + (a1*d);
	double x05 = (x5 * g) + (a2*d);
	double x06 = (x6 * g) + (a3*d);
	
	double x07 = (x7 * g) + (a1*d);
	double x08 = (x8 * g) + (a2*d);
	double x09 = (x9 * g) + (a3*d);	 
	
	double x010 = (x10 * g) + (a1*d);
	double x011 = (x11 * g) + (a2*d);
	double x012 = (x12 * g) + (a3*d);
	
	double x013 = (x13 * g) + (a1*d);
	double x014 = (x14 * g) + (a2*d);
	double x015 = (x15 * g) + (a3*d);
	
	double x016 = (x16 * g) + (a1*d);
	double x017 = (x17 * g) + (a2*d);
	double x018 = (x18 * g) + (a3*d);
	
	double x019 = (x19 * g) + (a1*d);
	double x020 = (x20 * g) + (a2*d);
	double x021 = (x21 * g) + (a3*d);
	
	double x022 = (x22 * g) + (a1*d);
	double x023 = (x23 * g) + (a2*d);
	double x024 = (x24 * g) + (a3*d);
	
	double x025 = (x25 * g) + (a1*d);
	double x026 = (x26 * g) + (a2*d);
	double x027 = (x27 * g) + (a3*d);
	
	double x028 = (x28 * g) + (a1*d);
	double x029 = (x29 * g) + (a2*d);
	double x030 = (x30* g) + (a3*d);	
	
	double x031 = (x31 * g) + (a1*d);
	double x032 = (x32 * g) + (a2*d);
	double x033 = (x33 * g) + (a3*d);
    
     
    double x034 = (x34 * g) + (a1*d);
	double x035 = (x35 * g) + (a2*d);
	double x036 = (x36 * g) + (a3*d);	
	
	double x037 = (x37 * g) + (a1*d);
	double x038 = (x38 * g) + (a2*d);
	double x039 = (x39 * g) + (a3*d);	 
	
	double x040 = (x40 * g) + (a1*d);
	double x041 = (x41 * g) + (a2*d);
	double x042 = (x42 * g) + (a3*d);
	
	double x043 = (x43 * g) + (a1*d);
	double x044 = (x44 * g) + (a2*d);
	double x045 = (x45 * g) + (a3*d);
	
	double x046 = (x46 * g) + (a1*d);
	double x047 = (x47 * g) + (a2*d);
	double x048 = (x48 * g) + (a3*d);
	
	double x049 = (x49 * g) + (a1*d);
	double x050 = (x50 * g) + (a2*d);
	double x051 = (x51 * g) + (a3*d);

	double x052 = (x52 * g) + (a1*d);
	double x053 = (x53 * g) + (a2*d);
	double x054 = (x54 * g) + (a3*d);
	
	double x055 = (x55 * g) + (a1*d);
	double x056 = (x56 * g) + (a2*d);
	double x057 = (x57 * g) + (a3*d);
	
	double x058 = (x58 * g) + (a1*d);
	double x059 = (x59 * g) + (a2*d);
	double x060 = (x60 * g) + (a3*d);  	     	        
  
	 
	Draw3(
                  x01,  x02,  x03, 
                  x04,  x05, x06,
                  x07,  x08, x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n - 1,d1,d2,d3
                 );
                 
                 
                 
                 
            
                 
                 
                 
                 
                 
                 
                 
                 
                
                 
                 
                 
                
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
          
		  
		  
		  
		  
		 		 
		  /////////////////////////////  w1
	       v1 =  x43 - x13;
		   v2 =  x44 - x14;       
           v3 =  x45 - x15; 
		 
		   w1 =  x10 - x13;
		   w2 =  x11 - x14;       
           w3 =  x12 - x15;                    
                 
     double b[ 4];
           b [ 0 ] = 0.0;
 	
 	
 	for(int k=0; k<=0; ++k)
 	{
 		// We calculate the vector normal to face A.
 	 double b1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  b[ 1] = a1;
 	 double b2 = ( ( w1 * v3 ) - ( v1 * w3 ));  b[ 2] = a2;
 	 double b3 = ( ( v1 * w2 ) - ( w1 * v2 ));  b[ 3] = a3;
          double D = sqrt( (b1 * b1) + (b2 * b2) + (b3 * b3));
   /* cout<<endl<<"b = (  ";
 	for( int i = 1; i <= 3; ++i) 
 {
	 	
	 	if( i < 3)
	 	{
	 		cout<<b[ i]/D<<",   ";
		 }
		 else
	 	cout<<b[3]/D<<" )";
	 
 }*/
 	
 	 l = sqrt( (b1*b1) + (b2*b2) + (b3*b3));
 	 d = 0.666666 * gold;
 	
 	b1=pow(-1, k)*d * (b1 / l);
 	b2=pow(-1, k)*d * (b2 / l);
 	b3=pow(-1, k)*d * (b3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y01 = (x1 * g) + (b1*d);
	double y02 = (x2 * g) + (b2*d);
	double y03 = (x3 * g) + (b3*d);
     
     
    double y04 = (x4 * g) + (b1*d);
	double y05 = (x5 * g) + (b2*d);
	double y06 = (x6 * g) + (b3*d);	
	
	double y07 = (x7 * g) + (b1*d);
	double y08 = (x8 * g) + (b2*d);
	double y09 = (x9 * g) + (b3*d);	 
	
	double y010 = (x10 * g) + (b1*d);
	double y011 = (x11 * g) + (b2*d);
	double y012 = (x12 * g) + (b3*d);
	
	double y013 = (x13 * g) + (b1*d);
	double y014 = (x14 * g) + (b2*d);
	double y015 = (x15 * g) + (b3*d);

	double y016 = (x16 * g) + (b1*d);
	double y017 = (x17 * g) + (b2*d);
	double y018 = (x18 * g) + (b3*d);

	double y019 = (x19 * g) + (b1*d);
	double y020 = (x20 * g) + (b2*d);
	double y021 = (x21 * g) + (b3*d);
	
	double y022 = (x22 * g) + (b1*d);
	double y023 = (x23 * g) + (b2*d);
	double y024 = (x24 * g) + (b3*d);
	
	double y025 = (x25 * g) + (b1*d);
	double y026 = (x26 * g) + (b2*d);
	double y027 = (x27 * g) + (b3*d);
	
	double y028 = (x28 * g) + (b1*d);
	double y029 = (x29 * g) + (b2*d);
	double y030 = (x30* g) + (b3*d);	
	
	double y031 = (x31 * g) + (b1*d);
	double y032 = (x32 * g) + (b2*d);
	double y033 = (x33 * g) + (b3*d);
    
     
    double y034 = (x34 * g) + (b1*d);
	double y035 = (x35 * g) + (b2*d);
	double y036 = (x36 * g) + (b3*d);	
	
	double y037 = (x37 * g) + (b1*d);
	double y038 = (x38 * g) + (b2*d);
	double y039 = (x39 * g) + (b3*d);	 
	
	double y040 = (x40 * g) + (b1*d);
	double y041 = (x41 * g) + (b2*d);
	double y042 = (x42 * g) + (b3*d);
	
	double y043 = (x43 * g) + (b1*d);
	double y044 = (x44 * g) + (b2*d);
	double y045 = (x45 * g) + (b3*d);
	
	double y046 = (x46 * g) + (b1*d);
	double y047 = (x47 * g) + (b2*d);
	double y048 = (x48 * g) + (b3*d);

	double y049 = (x49 * g) + (b1*d);
	double y050 = (x50 * g) + (b2*d);
	double y051 = (x51 * g) + (b3*d);
	
	double y052 = (x52 * g) + (b1*d);
	double y053 = (x53 * g) + (b2*d);
	double y054 = (x54 * g) + (b3*d);
	
	double y055 = (x55 * g) + (b1*d);
	double y056 = (x56 * g) + (b2*d);
	double y057 = (x57 * g) + (b3*d);
	
	double y058 = (x58 * g) + (b1*d);
	double y059 = (x59 * g) + (b2*d);
	double y060 = (x60 * g) + (b3*d);  	     	        
  
	 
	Draw3(
                  y01,  y02,  y03, 
                  y04,  y05,  y06,
                  y07,  y08,  y09,
				  y010, y011, y012,
				  y013, y014, y015, 
                  y016, y017, y018,
                  y019, y020, y021,
				  y022, y023, y024,
				  y025, y026, y027, 
                  y028, y029, y030,
                  y031, y032, y033,
				  y034, y035, y036,
				  y037, y038, y039,
				  y040, y041, y042,
				  y043, y044, y045,
				  y046, y047, y048,
				  y049, y050, y051,
				  y052, y053, y054,
				  y055, y056, y057,
				  y058, y059, y060,
				 n - 1, d1, d2, d3
                 );		      
			
			
			
			
			
			
			/////////////////////////////////////       s
                 
          v1 =  x34 - x28;
		  v2 =  x35 - x29;       
          v3 =  x36 - x30; 
		 
		  w1 =  x31 - x28;
		  w2 =  x32 - x29;       
          w3 =  x33 - x30;      
		  
         
      double c[ 4];
           c [ 0 ] = 0.0;
 	
 	
 	
 		// We calculate the vector normal to face A.
 	double c1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  c[ 1] = c1;
 	double c2 = ( ( w1 * v3 ) - ( v1 * w3 ));  c[ 2] = c2;
 	double c3 = ( ( v1 * w2 ) - ( w1 * v2 ));  c[ 3] = c3;

  
 	
 	
 	 l = sqrt( (c1*c1) + (c2*c2) + (c3*c3));
 	 d = -0.666666 * gold;
 	
 	c1=pow(-1, k)*d * (c1 / l);
 	c2=pow(-1, k)*d * (c2 / l);
 	c3=pow(-1, k)*(-1)*d * (c3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y101 = (x1 * g) + (c1*d);
	double y102 = (x2 * g) + (c2*d);
	double y103 = (x3 * g) + (c3*d);
     
     
    double y104 = (x4 * g) + (c1*d);
	double y105 = (x5 * g) + (c2*d);
	double y106 = (x6 * g) + (c3*d);	
	
	double y107 = (x7 * g) + (c1*d);
	double y108 = (x8 * g) + (c2*d);
	double y109 = (x9 * g) + (c3*d);	 
	
	double y1010 = (x10 * g) + (c1*d);
	double y1011 = (x11 * g) + (c2*d);
	double y1012 = (x12 * g) + (c3*d);
	
	double y1013 = (x13 * g) + (c1*d);
	double y1014 = (x14 * g) + (c2*d);
	double y1015 = (x15 * g) + (c3*d);

	double y1016 = (x16 * g) + (c1*d);
	double y1017 = (x17 * g) + (c2*d);
	double y1018 = (x18 * g) + (c3*d);

	double y1019 = (x19 * g) + (c1*d);
	double y1020 = (x20 * g) + (c2*d);
	double y1021 = (x21 * g) + (c3*d);
	
	double y1022 = (x22 * g) + (c1*d);
	double y1023 = (x23 * g) + (c2*d);
	double y1024 = (x24 * g) + (c3*d);

	double y1025 = (x25 * g) + (c1 *d);
	double y1026 = (x26 * g) + (c2 *d);
	double y1027 = (x27 * g) + (c3*d);
	
	double y1028 = (x28 * g) + (c1*d);
	double y1029 = (x29 * g) + (c2*d);
	double y1030 = (x30* g) + (c3*d);	
	
	double y1031 = (x31 * g) + (c1*d);
	double y1032 = (x32 * g) + (c2*d);
	double y1033 = (x33 * g) + (c3*d);
    
     
    double y1034 = (x34 * g) + (c1*d);
	double y1035 = (x35 * g) + (c2*d);
	double y1036 = (x36 * g) + (c3*d);	
	
	double y1037 = (x37 * g) + (c1*d);
	double y1038 = (x38 * g) + (c2*d);
	double y1039 = (x39 * g) + (c3*d);	 
	
	double y1040 = (x40 * g) + (c1*d);
	double y1041 = (x41 * g) + (c2*d);
	double y1042 = (x42 * g) + (c3*d);

	double y1043 = (x43 * g) + (c1*d);
	double y1044 = (x44 * g) + (c2*d);
	double y1045 = (x45 * g) + (c3*d);
	
	double y1046 = (x46 * g) + (c1*d);
	double y1047 = (x47 * g) + (c2*d);
	double y1048 = (x48 * g) + (c3*d);

	double y1049 = (x49 * g) + (c1*d);
	double y1050 = (x50 * g) + (c2*d);
	double y1051 = (x51 * g) + (c3*d);

	double y1052 = (x52 * g) + (c1*d);
	double y1053 = (x53 * g) + (c2*d);
	double y1054 = (x54 * g) + (c3*d);
	
	double y1055 = (x55 * g) + (c1*d);
	double y1056 = (x56 * g) + (c2*d);
	double y1057 = (x57 * g) + (c3*d);

	double y1058 = (x58 * g) + (c1*d);
	double y1059 = (x59 * g) + (c2*d);
	double y1060 = (x60 * g) + (c3*d);  	     	        
  
	 
	Draw3(
                  y101,  y102,  y103, 
                  y104,  y105,  y106,
                  y107,  y108,  y109,
				  y1010, y1011, y1012,
				  y1013, y1014, y1015, 
                  y1016, y1017, y1018,
                  y1019, y1020, y1021,
				  y1022, y1023, y1024,
				  y1025, y1026, y1027, 
                  y1028, y1029, y1030,
                  y1031, y1032, y1033,
				  y1034, y1035, y1036,
				  y1037, y1038, y1039,
				  y1040, y1041, y1042,
				  y1043, y1044, y1045,
				  y1046, y1047, y1048,
				  y1049, y1050, y1051,
				  y1052, y1053, y1054,
				  y1055, y1056, y1057,
				  y1058, y1059, y1060,
				 n - 1,d1,d2,d3
                 );
				 
				 
				 
				 
				 
				 
				 
				 
				 //////////////////////////////////////////////   w2
		  v1 =  x13 - x19;
		  v2 =  x14 - x20;       
          v3 =  x15 - x21; 
		 
		  w1 =  x1 - x19;
		  w2 =  x2 - x20;       
          w3 =  x3 - x21;                    
                 
     double f1 = ( ( v2 * w3 ) - ( w2 * v3 ));
 	 double f2 = ( ( w1 * v3 ) - ( v1 * w3 ));
 	 double f3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
 	
 	 l = sqrt( (f1*f1) + (f2*f2) + (f3*f3));
 	 d = 0.666666 * gold;
 	
 	f1=-pow(-1, k)*d * (f1 / l);
 	f2=-pow(-1, k)*d * (f2 / l);
 	f3=-pow(-1, k)*d * (f3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y201 = (x1 * g) + (f1*d);
	double y202 = (x2 * g) + (f2*d);
	double y203 = (x3 * g) + (f3*d);
     
     
    double y204 = (x4 * g) + (f1*d);
	double y205 = (x5 * g) + (f2*d);
	double y206 = (x6 * g) + (f3*d);	
	
	double y207 = (x7 * g) + (f1*d);
	double y208 = (x8 * g) + (f2*d);
	double y209 = (x9 * g) + (f3*d);	 
	
	double y2010 = (x10 * g) + (f1*d);
	double y2011 = (x11 * g) + (f2*d);
	double y2012 = (x12 * g) + (f3*d);
	
	double y2013 = (x13 * g) + (f1*d);
	double y2014 = (x14 * g) + (f2*d);
	double y2015 = (x15 * g) + (f3*d);

	double y2016 = (x16 * g) + (f1*d);
	double y2017 = (x17 * g) + (f2*d);
	double y2018 = (x18 * g) + (f3*d);

	double y2019 = (x19 * g) + (f1*d);
	double y2020 = (x20 * g) + (f2*d);
	double y2021 = (x21 * g) + (f3*d);

	double y2022 = (x22 * g) + (f1*d);
	double y2023 = (x23 * g) + (f2*d);
	double y2024 = (x24 * g) + (f3*d);

	double y2025 = (x25 * g) + (f1 *d);
	double y2026 = (x26 * g) + (f2 *d);
	double y2027 = (x27 * g) + (f3*d);
	
	double y2028 = (x28 * g) + (f1*d);
	double y2029 = (x29 * g) + (f2*d);
	double y2030 = (x30* g) +  (f3*d);	

	double y2031 = (x31 * g) + (f1*d);
	double y2032 = (x32 * g) + (f2*d);
	double y2033 = (x33 * g) + (f3*d);
    
     
    double y2034 = (x34 * g) + (f1*d);
	double y2035 = (x35 * g) + (f2*d);
	double y2036 = (x36 * g) + (f3*d);	
	
	double y2037 = (x37 * g) + (f1*d);
	double y2038 = (x38 * g) + (f2*d);
	double y2039 = (x39 * g) + (f3*d);	 
	
	double y2040 = (x40 * g) + (f1*d);
	double y2041 = (x41 * g) + (f2*d);
	double y2042 = (x42 * g) + (f3*d);

	double y2043 = (x43 * g) + (f1*d);
	double y2044 = (x44 * g) + (f2*d);
	double y2045 = (x45 * g) + (f3*d);
	
	double y2046 = (x46 * g) + (f1*d);
	double y2047 = (x47 * g) + (f2*d);
	double y2048 = (x48 * g) + (f3*d);

	double y2049 = (x49 * g) + (f1*d);
	double y2050 = (x50 * g) + (f2*d);
	double y2051 = (x51 * g) + (f3*d);

	double y2052 = (x52 * g) + (f1*d);
	double y2053 = (x53 * g) + (f2*d);
	double y2054 = (x54 * g) + (f3*d);
	
	double y2055 = (x55 * g) + (f1*d);
	double y2056 = (x56 * g) + (f2*d);
	double y2057 = (x57 * g) + (f3*d);

	double y2058 = (x58 * g) + (f1*d);
	double y2059 = (x59 * g) + (f2*d);
	double y2060 = (x60 * g) + (f3*d);  	     	        
  
	 
	Draw3(
                  y201,  y202,  y203, 
                  y204,  y205,  y206,
                  y207,  y208,  y209,
				  y2010, y2011, y2012,
				  y2013, y2014, y2015, 
                  y2016, y2017, y2018,
                  y2019, y2020, y2021,
				  y2022, y2023, y2024,
				  y2025, y2026, y2027, 
                  y2028, y2029, y2030,
                  y2031, y2032, y2033,
				  y2034, y2035, y2036,
				  y2037, y2038, y2039,
				  y2040, y2041, y2042,
				  y2043, y2044, y2045,
				  y2046, y2047, y2048,
				  y2049, y2050, y2051,
				  y2052, y2053, y2054,
				  y2055, y2056, y2057,
				  y2058, y2059, y2060,
				 n - 1,d1,d2,d3
                 );	
				 
	     //////////////////////////////////////////////   C
		  v1 =  x37 - x40;
		  v2 =  x38 - x41;       
          v3 =  x39 - x42; 
		
		  w1 =  x25 - x40;
		  w2 =  x26 - x41;       
          w3 =  x27 - x42;                    
                 
     double e1 = ( ( v2 * w3 ) - ( w2 * v3 ));
 	 double e2 = ( ( w1 * v3 ) - ( v1 * w3 ));
 	 double e3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
 	
 	 l = sqrt( (e1*e1) + (e2*e2) + (e3*e3));
 	 d = 0.666666 * gold;
 	
 	e1=-pow(-1, k)*d * (e1 / l);
 	e2=-pow(-1, k)*d * (e2 / l);
 	e3=-pow(-1, k)*d * (e3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y301 = (x1 * g) + (e1*d);
	double y302 = (x2 * g) + (e2*d);
	double y303 = (x3 * g) + (e3*d);
     
     
    double y304 = (x4 * g) + (e1*d);
	double y305 = (x5 * g) + (e2*d);
	double y306 = (x6 * g) + (e3*d);	
	
	double y307 = (x7 * g) + (e1*d);
	double y308 = (x8 * g) + (e2*d);
	double y309 = (x9 * g) + (e3*d);	 
	
	double y3010 = (x10 * g) + (e1*d);
	double y3011 = (x11 * g) + (e2*d);
	double y3012 = (x12 * g) + (e3*d);

	double y3013 = (x13 * g) + (e1*d);
	double y3014 = (x14 * g) + (e2*d);
	double y3015 = (x15 * g) + (e3*d);

	double y3016 = (x16 * g) + (e1*d);
	double y3017 = (x17 * g) + (e2*d);
	double y3018 = (x18 * g) + (e3*d);

	double y3019 = (x19 * g) + (e1*d);
	double y3020 = (x20 * g) + (e2*d);
	double y3021 = (x21 * g) + (e3*d);

	double y3022 = (x22 * g) + (e1*d);
	double y3023 = (x23 * g) + (e2*d);
	double y3024 = (x24 * g) + (e3*d);

	double y3025 = (x25 * g) + (e1 *d);
	double y3026 = (x26 * g) + (e2 *d);
	double y3027 = (x27 * g) + (e3*d);
	
	double y3028 = (x28 * g) + (e1*d);
	double y3029 = (x29 * g) + (e2*d);
	double y3030 = (x30* g) +  (e3*d);	

	double y3031 = (x31 * g) + (e1*d);
	double y3032 = (x32 * g) + (e2*d);
	double y3033 = (x33 * g) + (e3*d);
    
     
    double y3034 = (x34 * g) + (e1*d);
	double y3035 = (x35 * g) + (e2*d);
	double y3036 = (x36 * g) + (e3*d);	
	
	double y3037 = (x37 * g) + (e1*d);
	double y3038 = (x38 * g) + (e2*d);
	double y3039 = (x39 * g) + (e3*d);	 
	
	double y3040 = (x40 * g) + (e1*d);
	double y3041 = (x41 * g) + (e2*d);
	double y3042 = (x42 * g) + (e3*d);

	double y3043 = (x43 * g) + (e1*d);
	double y3044 = (x44 * g) + (e2*d);
	double y3045 = (x45 * g) + (e3*d);
	
	double y3046 = (x46 * g) + (e1*d);
	double y3047 = (x47 * g) + (e2*d);
	double y3048 = (x48 * g) + (e3*d);

	double y3049 = (x49 * g) + (e1*d);
	double y3050 = (x50 * g) + (e2*d);
	double y3051 = (x51 * g) + (e3*d);

	double y3052 = (x52 * g) + (e1*d);
	double y3053 = (x53 * g) + (e2*d);
	double y3054 = (x54 * g) + (e3*d);
	
	double y3055 = (x55 * g) + (e1*d);
	double y3056 = (x56 * g) + (e2*d);
	double y3057 = (x57 * g) + (e3*d);

	double y3058 = (x58 * g) + (e1*d);
	double y3059 = (x59 * g) + (e2*d);
	double y3060 = (x60 * g) + (e3*d);  	     	        
  
	 
	Draw3(
                  y301,  y302,  y303, 
                  y304,  y305,  y306,
                  y307,  y308,  y309,
				  y3010, y3011, y3012,
				  y3013, y3014, y3015, 
                  y3016, y3017, y3018,
                  y3019, y3020, y3021,
				  y3022, y3023, y3024,
				  y3025, y3026, y3027, 
                  y3028, y3029, y3030,
                  y3031, y3032, y3033,
				  y3034, y3035, y3036,
				  y3037, y3038, y3039,
				  y3040, y3041, y3042,
				  y3043, y3044, y3045,
				  y3046, y3047, y3048,
				  y3049, y3050, y3051,
				  y3052, y3053, y3054,
				  y3055, y3056, y3057,
				  y3058, y3059, y3060,
				 n - 1
                 ,d1,d2,d3);
				 
	 	//////////////////////////////////////////////   b
		  v1 =  x7 - x1;
		  v2 =  x8 - x2;       
          v3 =  x9 - x3; 
		 
		  w1 =  x4 - x1;
		  w2 =  x5 - x2;       
          w3 =  x6 - x3;                    
                 
      e1 = ( ( v2 * w3 ) - ( w2 * v3 ));
 	  e2 = ( ( w1 * v3 ) - ( v1 * w3 ));
 	  e3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
 	
 	 l = sqrt( (e1*e1) + (e2*e2) + (e3*e3));
 	 d = 0.666666 * gold;
 	
 	e1=-pow(-1, k)*d * (e1 / l);
 	e2=-pow(-1, k)*d * (e2 / l);
 	e3=-pow(-1, k)*d * (e3 / l);
     
     //  1.9999, -1.99999, 1.99999
	double y401 = (x1 * g) + (e1*d);
	double y402 = (x2 * g) + (e2*d);
	double y403 = (x3 * g) + (e3*d);
     
    double y404 = (x4 * g) + (e1*d);
	double y405 = (x5 * g) + (e2*d);
	double y406 = (x6 * g) + (e3*d);	
	
	double y407 = (x7 * g) + (e1*d);
	double y408 = (x8 * g) + (e2*d);
	double y409 = (x9 * g) + (e3*d);	 
	
	double y4010 = (x10 * g) + (e1*d);
	double y4011 = (x11 * g) + (e2*d);
	double y4012 = (x12 * g) + (e3*d);

	double y4013 = (x13 * g) + (e1*d);
	double y4014 = (x14 * g) + (e2*d);
	double y4015 = (x15 * g) + (e3*d);

	double y4016 = (x16 * g) + (e1*d);
	double y4017 = (x17 * g) + (e2*d);
	double y4018 = (x18 * g) + (e3*d);

	double y4019 = (x19 * g) + (e1*d);
	double y4020 = (x20 * g) + (e2*d);
	double y4021 = (x21 * g) + (e3*d);

	double y4022 = (x22 * g) + (e1*d);
	double y4023 = (x23 * g) + (e2*d);
	double y4024 = (x24 * g) + (e3*d);

	double y4025 = (x25 * g) + (e1 *d);
	double y4026 = (x26 * g) + (e2 *d);
	double y4027 = (x27 * g) + (e3*d);
	
	double y4028 = (x28 * g) + (e1*d);
	double y4029 = (x29 * g) + (e2*d);
	double y4030 = (x30* g) +  (e3*d);	

	double y4031 = (x31 * g) + (e1*d);
	double y4032 = (x32 * g) + (e2*d);
	double y4033 = (x33 * g) + (e3*d);
    
    double y4034 = (x34 * g) + (e1*d);
	double y4035 = (x35 * g) + (e2*d);
	double y4036 = (x36 * g) + (e3*d);	
	
	double y4037 = (x37 * g) + (e1*d);
	double y4038 = (x38 * g) + (e2*d);
	double y4039 = (x39 * g) + (e3*d);	 

	double y4040 = (x40 * g) + (e1*d);
	double y4041 = (x41 * g) + (e2*d);
	double y4042 = (x42 * g) + (e3*d);

	double y4043 = (x43 * g) + (e1*d);
	double y4044 = (x44 * g) + (e2*d);
	double y4045 = (x45 * g) + (e3*d);
	
	double y4046 = (x46 * g) + (e1*d);
	double y4047 = (x47 * g) + (e2*d);
	double y4048 = (x48 * g) + (e3*d);

	double y4049 = (x49 * g) + (e1*d);
	double y4050 = (x50 * g) + (e2*d);
	double y4051 = (x51 * g) + (e3*d);

	double y4052 = (x52 * g) + (e1*d);
	double y4053 = (x53 * g) + (e2*d);
	double y4054 = (x54 * g) + (e3*d);
	
	double y4055 = (x55 * g) + (e1*d);
	double y4056 = (x56 * g) + (e2*d);
	double y4057 = (x57 * g) + (e3*d);

	double y4058 = (x58 * g) + (e1*d);
	double y4059 = (x59 * g) + (e2*d);
	double y4060 = (x60 * g) + (e3*d);  	     	        
  
	 
	Draw3(
                  y401,  y402,  y403, 
                  y404,  y405,  y406,
                  y407,  y408,  y409,
				  y4010, y4011, y4012,
				  y4013, y4014, y4015, 
                  y4016, y4017, y4018,
                  y4019, y4020, y4021,
				  y4022, y4023, y4024,
				  y4025, y4026, y4027, 
                  y4028, y4029, y4030,
                  y4031, y4032, y4033,
				  y4034, y4035, y4036,
				  y4037, y4038, y4039,
				  y4040, y4041, y4042,
				  y4043, y4044, y4045,
				  y4046, y4047, y4048,
				  y4049, y4050, y4051,
				  y4052, y4053, y4054,
				  y4055, y4056, y4057,
				  y4058, y4059, y4060,
				 n - 1
                 ,d1,d2,d3);		
				 
				 
				 
				 
				 
				 
	
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double aj1 = (x37 - x25) / 2;
 	double aj2 = (x38 - x26) / 2;
 	double aj3 = (x39 - x27) / 2; 
 	
 	 l = sqrt( (aj1*aj1) + (aj2*aj2) + (aj3*aj3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	aj1=pow(-1, k)*d * (aj1 / l);
 	aj2=pow(-1, k)*d * (aj2 / l);
 	aj3=pow(-1, k)*d * (aj3 / l);
     
     
	double xj01 = (x1 * g) + (aj1*d);
	double xj02 = (x2 * g) + (aj2*d);
	double xj03 = (x3 * g) + (aj3*d);
     
     
    double xj04 = (x4 * g) + (aj1*d);
	double xj05 = (x5 * g) + (aj2*d);
	double xj06 = (x6 * g) + (aj3*d);	

	double xj07 = (x7 * g) + (aj1*d);
	double xj08 = (x8 * g) + (aj2*d);
	double xj09 = (x9 * g) + (aj3*d);	 
	
	double xj010 = (x10 * g) + (aj1*d);
	double xj011 = (x11 * g) + (aj2*d);
	double xj012 = (x12 * g) + (aj3*d);
	
	double xj013 = (x13 * g) + (aj1*d);
	double xj014 = (x14 * g) + (aj2*d);
	double xj015 = (x15 * g) + (aj3*d);
	
	double xj016 = (x16 * g) + (aj1*d);
	double xj017 = (x17 * g) + (aj2*d);
	double xj018 = (x18 * g) + (aj3*d);

	double xj019 = (x19 * g) + (aj1*d);
	double xj020 = (x20 * g) + (aj2*d);
	double xj021 = (x21 * g) + (aj3*d);

	double xj022 = (x22 * g) + (aj1*d);
	double xj023 = (x23 * g) + (aj2*d);
	double xj024 = (x24 * g) + (aj3*d);
	
	double xj025 = (x25 * g) + (aj1*d);
	double xj026 = (x26 * g) + (aj2*d);
	double xj027 = (x27 * g) + (aj3*d);
	
	double xj028 = (x28 * g) + (aj1*d);
	double xj029 = (x29 * g) + (aj2*d);
	double xj030 = (x30 * g) + (aj3*d);	
	
	double xj031 = (x31 * g) + (aj1*d);
	double xj032 = (x32 * g) + (aj2*d);
	double xj033 = (x33 * g) + (aj3*d);
    
     
    double xj034 = (x34 * g) + (aj1*d);
	double xj035 = (x35 * g) + (aj2*d);
	double xj036 = (x36 * g) + (aj3*d);	
	
	double xj037 = (x37 * g) + (aj1*d);
	double xj038 = (x38 * g) + (aj2*d);
	double xj039 = (x39 * g) + (aj3*d);	 
	
	double xj040 = (x40 * g) + (aj1*d);
	double xj041 = (x41 * g) + (aj2*d);
	double xj042 = (x42 * g) + (aj3*d);
	
	double xj043 = (x43 * g) + (aj1*d);
	double xj044 = (x44 * g) + (aj2*d);
	double xj045 = (x45 * g) + (aj3*d);
	
	double xj046 = (x46 * g) + (aj1*d);
	double xj047 = (x47 * g) + (aj2*d);
	double xj048 = (x48 * g) + (aj3*d);
	
	double xj049 = (x49 * g) + (aj1*d);
	double xj050 = (x50 * g) + (aj2*d);
	double xj051 = (x51 * g) + (aj3*d);

	double xj052 = (x52 * g) + (aj1*d);
	double xj053 = (x53 * g) + (aj2*d);
	double xj054 = (x54 * g) + (aj3*d);
	
	double xj055 = (x55 * g) + (aj1*d);
	double xj056 = (x56 * g) + (aj2*d);
	double xj057 = (x57 * g) + (aj3*d);
	
	double xj058 = (x58 * g) + (aj1*d);
	double xj059 = (x59 * g) + (aj2*d);
	double xj060 = (x60 * g) + (aj3*d);  	     	        
  
	 
	Draw3(
                  xj01,  xj02,  xj03, 
                  xj04,  xj05,  xj06,
                  xj07,  xj08,  xj09,
				  xj010, xj011, xj012,
				  xj013, xj014, xj015, 
                  xj016, xj017, xj018,
                  xj019, xj020,  xj021,
				  xj022, xj023,  xj024,
				  xj025, xj026,  xj027, 
                  xj028, xj029,  xj030,
                  xj031, xj032,  xj033,
				  xj034, xj035,  xj036,
				  xj037, xj038,  xj039,
				  xj040, xj041,  xj042,
				  xj043, xj044,  xj045,
				  xj046, xj047,  xj048,
				  xj049, xj050,  xj051,
				  xj052, xj053,  xj054,
				  xj055, xj056,  xj057,
				  xj058, xj059,  xj060,
				 n - 1
                 ,d1,d2,d3);	
                 
                 
     
	 //0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double ai1 = -(x49 - x37) / 2;
 	double ai2 = -(x50 - x38) / 2;
 	double ai3 = -(x51 - x39) / 2; 
 	
 	 l = sqrt( (ai1*ai1) + (ai2*ai2) + (ai3*ai3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	ai1=pow(-1, k)*d * (ai1 / l);
 	ai2=pow(-1, k)*d * (ai2 / l);
 	ai3=pow(-1, k)*d * (ai3 / l);
     
     
	double xi01 = (x1 * g) + (ai1*d);
	double xi02 = (x2 * g) + (ai2*d);
	double xi03 = (x3 * g) + (ai3*d);
     
     
    double xi04 = (x4 * g) + (ai1*d);
	double xi05 = (x5 * g) + (ai2*d);
	double xi06 = (x6 * g) + (ai3*d);	
	
	double xi07 = (x7 * g) + (ai1*d);
	double xi08 = (x8 * g) + (ai2*d);
	double xi09 = (x9 * g) + (ai3*d);	 
	
	double xi010 = (x10 * g) + (ai1*d);
	double xi011 = (x11 * g) + (ai2*d);
	double xi012 = (x12 * g) + (ai3*d);
	
	double xi013 = (x13 * g) + (ai1*d);
	double xi014 = (x14 * g) + (ai2*d);
	double xi015 = (x15 * g) + (ai3*d);
	
	double xi016 = (x16 * g) + (ai1*d);
	double xi017 = (x17 * g) + (ai2*d);
	double xi018 = (x18 * g) + (ai3*d);
	
	double xi019 = (x19 * g) + (ai1*d);
	double xi020 = (x20 * g) + (ai2*d);
	double xi021 = (x21 * g) + (ai3*d);
	
	double xi022 = (x22 * g) + (ai1*d);
	double xi023 = (x23 * g) + (ai2*d);
	double xi024 = (x24 * g) + (ai3*d);
	
	double xi025 = (x25 * g) + (ai1*d);
	double xi026 = (x26 * g) + (ai2*d);
	double xi027 = (x27 * g) + (ai3*d);
	
	double xi028 = (x28 * g) + (ai1*d);
	double xi029 = (x29 * g) + (ai2*d);
	double xi030 = (x30 * g) + (ai3*d);	
	
	double xi031 = (x31 * g) + (ai1*d);
	double xi032 = (x32 * g) + (ai2*d);
	double xi033 = (x33 * g) + (ai3*d);
    
     
    double xi034 = (x34 * g) + (ai1*d);
	double xi035 = (x35 * g) + (ai2*d);
	double xi036 = (x36 * g) + (ai3*d);	
	
	double xi037 = (x37 * g) + (ai1*d);
	double xi038 = (x38 * g) + (ai2*d);
	double xi039 = (x39 * g) + (ai3*d);	 
	
	double xi040 = (x40 * g) + (ai1*d);
	double xi041 = (x41 * g) + (ai2*d);
	double xi042 = (x42 * g) + (ai3*d);
	
	double xi043 = (x43 * g) + (ai1*d);
	double xi044 = (x44 * g) + (ai2*d);
	double xi045 = (x45 * g) + (ai3*d);
	
	double xi046 = (x46 * g) + (ai1*d);
	double xi047 = (x47 * g) + (ai2*d);
	double xi048 = (x48 * g) + (ai3*d);
	
	double xi049 = (x49 * g) + (ai1*d);
	double xi050 = (x50 * g) + (ai2*d);
	double xi051 = (x51 * g) + (ai3*d);

	double xi052 = (x52 * g) + (ai1*d);
	double xi053 = (x53 * g) + (ai2*d);
	double xi054 = (x54 * g) + (ai3*d);
	
	double xi055 = (x55 * g) + (ai1*d);
	double xi056 = (x56 * g) + (ai2*d);
	double xi057 = (x57 * g) + (ai3*d);
	
	double xi058 = (x58 * g) + (ai1*d);
	double xi059 = (x59 * g) + (ai2*d);
	double xi060 = (x60 * g) + (ai3*d);  	     	        
  
	 
	Draw3(
                  xi01,  xi02,  xi03, 
                  xi04,  xi05,  xi06,
                  xi07,  xi08,  xi09,
				  xi010, xi011, xi012,
				  xi013, xi014, xi015, 
                  xi016, xi017, xi018,
                  xi019, xi020,  xi021,
				  xi022, xi023,  xi024,
				  xi025, xi026,  xi027, 
                  xi028, xi029,  xi030,
                  xi031, xi032,  xi033,
				  xi034, xi035,  xi036,
				  xi037, xi038,  xi039,
				  xi040, xi041,  xi042,
				  xi043, xi044,  xi045,
				  xi046, xi047,  xi048,
				  xi049, xi050,  xi051,
				  xi052, xi053,  xi054,
				  xi055, xi056,  xi057,
				  xi058, xi059,  xi060,
				 n - 1
                 ,d1,d2,d3);	            
				 
	  
	  
	  
	 //0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double ak1 = (x19 - x49) / 2;
 	double ak2 = (x20 - x50) / 2;
 	double ak3 = (x21 - x51) / 2; 
 	
 	 l = sqrt( (ak1*ak1) + (ak2*ak2) + (ak3*ak3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	ak1=pow(-1, k)*d * (ak1 / l);
 	ak2=pow(-1, k)*d * (ak2 / l);
 	ak3=pow(-1, k)*d * (ak3 / l);
     
     
	double xk01 = (x1 * g) + (ak1*d);
	double xk02 = (x2 * g) + (ak2*d);
	double xk03 = (x3 * g) + (ak3*d);
     
    double xk04 = (x4 * g) + (ak1*d);
	double xk05 = (x5 * g) + (ak2*d);
	double xk06 = (x6 * g) + (ak3*d);	

	double xk07 = (x7 * g) + (ak1*d);
	double xk08 = (x8 * g) + (ak2*d);
	double xk09 = (x9 * g) + (ak3*d);	 
	
	double xk010 = (x10 * g) + (ak1*d);
	double xk011 = (x11 * g) + (ak2*d);
	double xk012 = (x12 * g) + (ak3*d);
	
	double xk013 = (x13 * g) + (ak1*d);
	double xk014 = (x14 * g) + (ak2*d);
	double xk015 = (x15 * g) + (ak3*d);
	
	double xk016 = (x16 * g) + (ak1*d);
	double xk017 = (x17 * g) + (ak2*d);
	double xk018 = (x18 * g) + (ak3*d);

	double xk019 = (x19 * g) + (ak1*d);
	double xk020 = (x20 * g) + (ak2*d);
	double xk021 = (x21 * g) + (ak3*d);

	double xk022 = (x22 * g) + (ak1*d);
	double xk023 = (x23 * g) + (ak2*d);
	double xk024 = (x24 * g) + (ak3*d);
	
	double xk025 = (x25 * g) + (ak1*d);
	double xk026 = (x26 * g) + (ak2*d);
	double xk027 = (x27 * g) + (ak3*d);
	
	double xk028 = (x28 * g) + (ak1*d);
	double xk029 = (x29 * g) + (ak2*d);
	double xk030 = (x30 * g) + (ak3*d);	
	
	double xk031 = (x31 * g) + (ak1*d);
	double xk032 = (x32 * g) + (ak2*d);
	double xk033 = (x33 * g) + (ak3*d);
     
    double xk034 = (x34 * g) + (ak1*d);
	double xk035 = (x35 * g) + (ak2*d);
	double xk036 = (x36 * g) + (ak3*d);	
	
	double xk037 = (x37 * g) + (ak1*d);
	double xk038 = (x38 * g) + (ak2*d);
	double xk039 = (x39 * g) + (ak3*d);	 

	double xk040 = (x40 * g) + (ak1*d);
	double xk041 = (x41 * g) + (ak2*d);
	double xk042 = (x42 * g) + (ak3*d);
	
	double xk043 = (x43 * g) + (ak1*d);
	double xk044 = (x44 * g) + (ak2*d);
	double xk045 = (x45 * g) + (ak3*d);
	
	double xk046 = (x46 * g) + (ak1*d);
	double xk047 = (x47 * g) + (ak2*d);
	double xk048 = (x48 * g) + (ak3*d);
	
	double xk049 = (x49 * g) + (ak1*d);
	double xk050 = (x50 * g) + (ak2*d);
	double xk051 = (x51 * g) + (ak3*d);

	double xk052 = (x52 * g) + (ak1*d);
	double xk053 = (x53 * g) + (ak2*d);
	double xk054 = (x54 * g) + (ak3*d);
	
	double xk055 = (x55 * g) + (ak1*d);
	double xk056 = (x56 * g) + (ak2*d);
	double xk057 = (x57 * g) + (ak3*d);
	
	double xk058 = (x58 * g) + (ak1*d);
	double xk059 = (x59 * g) + (ak2*d);
	double xk060 = (x60 * g) + (ak3*d);  	     	        
  
	 
	Draw3(
                  xk01,  xk02,  xk03, 
                  xk04,  xk05,  xk06,
                  xk07,  xk08,  xk09,
				  xk010, xk011, xk012,
				  xk013, xk014, xk015, 
                  xk016, xk017, xk018,
                  xk019, xk020,  xk021,
				  xk022, xk023,  xk024,
				  xk025, xk026,  xk027, 
                  xk028, xk029,  xk030,
                  xk031, xk032,  xk033,
				  xk034, xk035,  xk036,
				  xk037, xk038,  xk039,
				  xk040, xk041,  xk042,
				  xk043, xk044,  xk045,
				  xk046, xk047,  xk048,
				  xk049, xk050,  xk051,
				  xk052, xk053,  xk054,
				  xk055, xk056,  xk057,
				  xk058, xk059,  xk060,
				 n - 1
                 ,d1,d2,d3);	 		
				 
				 
     //0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double al1 = -(x1 - x19) / 2;
 	double al2 = -(x2 - x20) / 2;
 	double al3 = -(x3 - x21) / 2; 
 	
 	
 	
 	double le = sqrt( (al1*al1) + (al2*al2) + (al3*al3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	al1=pow(-1, k)*d * (al1 / le);
 	al2=pow(-1, k)*d * (al2 / le);
 	al3=pow(-1, k)*d * (al3 / le);
     
     
	double xl01 = (x1 * g) + (al1*d);
	double xl02 = (x2 * g) + (al2*d);
	double xl03 = (x3 * g) + (al3*d);
     
    double xl04 = (x4 * g) + (al1*d);
	double xl05 = (x5 * g) + (al2*d);
	double xl06 = (x6 * g) + (al3*d);	

	double xl07 = (x7 * g) + (al1*d);
	double xl08 = (x8 * g) + (al2*d);
	double xl09 = (x9 * g) + (al3*d);	 
	
	double xl010 = (x10 * g) + (al1*d);
	double xl011 = (x11 * g) + (al2*d);
	double xl012 = (x12 * g) + (al3*d);
	
	double xl013 = (x13 * g) + (al1*d);
	double xl014 = (x14 * g) + (al2*d);
	double xl015 = (x15 * g) + (al3*d);

	double xl016 = (x16 * g) + (al1*d);
	double xl017 = (x17 * g) + (al2*d);
	double xl018 = (x18 * g) + (al3*d);

	double xl019 = (x19 * g) + (al1*d);
	double xl020 = (x20 * g) + (al2*d);
	double xl021 = (x21 * g) + (al3*d);

	double xl022 = (x22 * g) + (al1*d);
	double xl023 = (x23 * g) + (al2*d);
	double xl024 = (x24 * g) + (al3*d);
	
	double xl025 = (x25 * g) + (al1*d);
	double xl026 = (x26 * g) + (al2*d);
	double xl027 = (x27 * g) + (al3*d);

	double xl028 = (x28 * g) + (al1*d);
	double xl029 = (x29 * g) + (al2*d);
	double xl030 = (x30 * g) + (al3*d);	
	
	double xl031 = (x31 * g) + (al1*d);
	double xl032 = (x32 * g) + (al2*d);
	double xl033 = (x33 * g) + (al3*d);
     
    double xl034 = (x34 * g) + (al1*d);
	double xl035 = (x35 * g) + (al2*d);
	double xl036 = (x36 * g) + (al3*d);	
	
	double xl037 = (x37 * g) + (al1*d);
	double xl038 = (x38 * g) + (al2*d);
	double xl039 = (x39 * g) + (al3*d);	 
	
	double xl040 = (x40 * g) + (al1*d);
	double xl041 = (x41 * g) + (al2*d);
	double xl042 = (x42 * g) + (al3*d);
	
	double xl043 = (x43 * g) + (al1*d);
	double xl044 = (x44 * g) + (al2*d);
	double xl045 = (x45 * g) + (al3*d);
	
	double xl046 = (x46 * g) + (al1*d);
	double xl047 = (x47 * g) + (al2*d);
	double xl048 = (x48 * g) + (al3*d);
	
	double xl049 = (x49 * g) + (al1*d);
	double xl050 = (x50 * g) + (al2*d);
	double xl051 = (x51 * g) + (al3*d);

	double xl052 = (x52 * g) + (al1*d);
	double xl053 = (x53 * g) + (al2*d);
	double xl054 = (x54 * g) + (al3*d);
	
	double xl055 = (x55 * g) + (al1*d);
	double xl056 = (x56 * g) + (al2*d);
	double xl057 = (x57 * g) + (al3*d);
	
	double xl058 = (x58 * g) + (al1*d);
	double xl059 = (x59 * g) + (al2*d);
	double xl060 = (x60 * g) + (al3*d);  	     	        
  
	 
	Draw3(
                  xl01,  xl02,  xl03, 
                  xl04,  xl05,  xl06,
                  xl07,  xl08,  xl09,
				  xl010, xl011, xl012,
				  xl013, xl014, xl015, 
                  xl016, xl017, xl018,
                  xl019, xl020,  xl021,
				  xl022, xl023,  xl024,
				  xl025, xl026,  xl027, 
                  xl028, xl029,  xl030,
                  xl031, xl032,  xl033,
				  xl034, xl035,  xl036,
				  xl037, xl038,  xl039,
				  xl040, xl041,  xl042,
				  xl043, xl044,  xl045,
				  xl046, xl047,  xl048,
				  xl049, xl050,  xl051,
				  xl052, xl053,  xl054,
				  xl055, xl056,  xl057,
				  xl058, xl059,  xl060,
				 n - 1
                 ,d1,d2,d3);	 
				 
				 
//0.975                      //0.64
	g = (1.0 / (gold * gold * gold ));	
		
	double am1 = -(x1 - x4) / 2;
 	double am2 = -(x2 - x5) / 2;
 	double am3 = -(x3 - x6) / 2; 
 	
 	 l = sqrt( (am1*am1) + (am2*am2) + (am3*am3));
 	    //0.675
 	 d = 0.685 * gold;
 	
 	am1=pow(-1, k)*d * (am1 / l);
 	am2=pow(-1, k)*d * (am2 / l);
 	am3=pow(-1, k)*d * (am3 / l);
     
     
	double xm01 = (x1 * g) + (am1*d);
	double xm02 = (x2 * g) + (am2*d);
	double xm03 = (x3 * g) + (am3*d);
     
    double xm04 = (x4 * g) + (am1*d);
	double xm05 = (x5 * g) + (am2*d);
	double xm06 = (x6 * g) + (am3*d);	

	double xm07 = (x7 * g) + (am1*d);
	double xm08 = (x8 * g) + (am2*d);
	double xm09 = (x9 * g)   + (am3*d);	 
	
	double xm010 = (x10 * g) + (am1*d);
	double xm011 = (x11 * g) + (am2*d);
	double xm012 = (x12 * g) + (am3*d);
	
	double xm013 = (x13 * g) + (am1*d);
	double xm014 = (x14 * g) + (am2*d);
	double xm015 = (x15 * g) + (am3*d);

	double xm016 = (x16 * g) + (am1*d);
	double xm017 = (x17 * g) + (am2*d);
	double xm018 = (x18 * g) + (am3*d);

	double xm019 = (x19 * g) + (am1*d);
	double xm020 = (x20 * g) + (am2*d);
	double xm021 = (x21 * g) + (am3*d);

	double xm022 = (x22 * g) + (am1*d);
	double xm023 = (x23 * g) + (am2*d);
	double xm024 = (x24 * g) + (am3*d);
	
	double xm025 = (x25 * g) + (am1*d);
	double xm026 = (x26 * g) + (am2*d);
	double xm027 = (x27 * g) + (am3*d);

	double xm028 = (x28 * g) + (am1*d);
	double xm029 = (x29 * g) + (am2*d);
	double xm030 = (x30 * g) + (am3*d);	
	
	double xm031 = (x31 * g) + (am1*d);
	double xm032 = (x32 * g) + (am2*d);
	double xm033 = (x33 * g) + (am3*d);
     
    double xm034 = (x34 * g) + (am1*d);
	double xm035 = (x35 * g) + (am2*d);
	double xm036 = (x36 * g) + (am3*d);	

	double xm037 = (x37 * g) + (am1*d);
	double xm038 = (x38 * g) + (am2*d);
	double xm039 = (x39 * g) + (am3*d);	 
	
	double xm040 = (x40 * g) + (am1*d);
	double xm041 = (x41 * g) + (am2*d);
	double xm042 = (x42 * g) + (am3*d);
	
	double xm043 = (x43 * g) + (am1*d);
	double xm044 = (x44 * g) + (am2*d);
	double xm045 = (x45 * g) + (am3*d);
	
	double xm046 = (x46 * g) + (am1*d);
	double xm047 = (x47 * g) + (am2*d);
	double xm048 = (x48 * g) + (am3*d);
	
	double xm049 = (x49 * g) + (am1*d);
	double xm050 = (x50 * g) + (am2*d);
	double xm051 = (x51 * g) + (am3*d);

	double xm052 = (x52 * g) + (am1*d);
	double xm053 = (x53 * g) + (am2*d);
	double xm054 = (x54 * g) + (am3*d);

	double xm055 = (x55 * g) + (am1*d);
	double xm056 = (x56 * g) + (am2*d);
	double xm057 = (x57 * g) + (am3*d);

	double xm058 = (x58 * g) + (am1*d);
	double xm059 = (x59 * g) + (am2*d);
	double xm060 = (x60 * g) + (am3*d);  	     	        
  
	 
	Draw3(
                  xm01,  xm02,  xm03, 
                  xm04,  xm05,  xm06,
                  xm07,  xm08,  xm09,
				  xm010, xm011, xm012,
				  xm013, xm014, xm015, 
                  xm016, xm017, xm018,
                  xm019, xm020,  xm021,
				  xm022, xm023,  xm024,
				  xm025, xm026,  xm027, 
                  xm028, xm029,  xm030,
                  xm031, xm032,  xm033,
				  xm034, xm035,  xm036,
				  xm037, xm038,  xm039,
				  xm040, xm041,  xm042,
				  xm043, xm044,  xm045,
				  xm046, xm047,  xm048,
				  xm049, xm050,  xm051,
				  xm052, xm053,  xm054,
				  xm055, xm056,  xm057,
				  xm058, xm059,  xm060,
				 n - 1
                 ,d1,d2,d3);	 
				 
				 
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 				 						 	 
				 
	};
				 
				 
				 
    
	  }     
     
    
     
     
	 
	 
	 

}

}



























int main(int argc, char* argv[])
{
	double L = 2.75;

    int n = 1;
    Torus t("000.stl");
    
    double gold= (1 + sqrt(5))/2;
    double g1= 1/gold;
    double g2= 1/(gold*gold);
    
    double a = sqrt(((-g2-g2) * (-g2-g2)));
    
    double angle = 3.14159265358979 * 1.0;
    double angle1 = 3.14159265358979 * 0.5;
    double angle2 = 3.14159265358979 * 1.0;
    
    double c = cos(angle);
    double s = sin(angle);
    double d1 = 0.0;
    double d2 = 0.0;
    double d3 = 0.0;
    
          
    
    
    double x1 = g2 ; //0
	double x2 = 0.0 ;
	double x3 = 1.0 ;
	
	double x4 = -g2;//1
	double x5 = 0.0;
	double x6 = 1.0;
	
	double x7 = -g1;//2
	double x8 = g1;
	double x9 = g1;	 
	
	double x10 = 0.0;//3
	double x11 = 1.0;
	double x12 = g2;	
	
	double x13 = g1;//4
	double x14 = g1;
	double x15 = g1;
	
	double x16 = 0.0;//5
	double x17 = -1.0;
	double x18 = g2;
	
	double x19 = g1;//6
	double x20 = -g1;
	double x21 = g1;
	
	double x22 = -g1;//7
	double x23 = -g1;
	double x24 = g1;
	
	double x25 = g2;//8
	double x26 = 0.0;
	double x27 = -1.0;
	
	double x28 = -g2;//9
	double x29 = 0.0;
	double x30 = -1.0;	
	
	double x31 = -g1;//10
	double x32 = -g1;
	double x33 = -g1;
    
     
    double x34 = 0.0;//11
	double x35 = -1.0;
	double x36 = -g2;
	
	double x37 = g1;//12
	double x38 = -g1;
	double x39 = -g1;	 
	
	double x40 = g1;//13
	double x41 = g1;
	double x42 = -g1;
	
	double x43 = 0.0;//14
	double x44 = 1.0;
	double x45 = -g2;
	
	double x46 = -g1;//15
	double x47 = g1;
	double x48 = -g1;
	
	double x49 = 1.0;//16
	double x50 = -g2;
	double x51 = 0.0;

	double x52 = -1.0;//17
	double x53 = g2;
	double x54 = 0.0;
	
	double x55 = -1.0;//18
	double x56 = -g2;
	double x57 = 0.0;
	
	double x58 = 1.0;//19
	double x59 = g2;
	double x60 = 0.0; 	     
	
	
	       double v1 =  1.0 - 0.0;
		   double v2 =  0.0 - 0.0;       
           double v3 =  0.0 - 0.0; 
		 
		  double w1 =  0.0 - 0.0;
		  double w2 =  1.0 - 0.0;       
          double w3 =  0.0 - 0.0;                    
                
     
 		
	
	//Rotation in the z axis
	
	
	
	///////////////////////////////////////////origin
	for( double i = 1.0; i <=1.0 ; ++i)
  {
  //	double partition = 2.0  ;
  	//i = i * partition;
  angle = 3.14159265358979323846264338 * i;
   c = cos(angle);
   s = sin(angle);
	//i=i/partition;
	
	double n1 = 1.0;//-0.10995;
	double n2 = 0.0;//0.940809;
	double n3 = 0.0;//-0.53262;
	
	
	  
	
	double x01 = ((c + ((n1 * n1) * (1 - c))) *      x1)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x2)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x3); //0
	double x02 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x1)  +  ((c + ((n2 * n2) * (1 - c))) *      x2)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x3);
	double x03 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x1)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x2)  +   ((c + ((n3 * n3) * (1 - c))) *      x3);
	
	double x04 = ((c + ((n1 * n1) * (1 - c))) *      x4)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x5)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x6); //1
	double x05 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x4)  +  ((c + ((n2 * n2) * (1 - c))) *      x5)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x6);
	double x06 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x4)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x5)  +   ((c + ((n3 * n3) * (1 - c))) *      x6);
	
	double x07 = ((c + ((n1 * n1) * (1 - c))) *      x7)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x8)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x9); //2
	double x08 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x7)  +  ((c + ((n2 * n2) * (1 - c))) *      x8)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x9);
	double x09 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x7)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x8)  +   ((c + ((n3 * n3) * (1 - c))) *      x9);
	
	double x010 = ((c + ((n1 * n1) * (1 - c))) *      x10)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x11)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x12); //3
	double x011 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x10)  +  ((c + ((n2 * n2) * (1 - c))) *      x11)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x12);
	double x012 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x10)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x11)  +   ((c + ((n3 * n3) * (1 - c))) *      x12);
	
	double x013 = ((c + ((n1 * n1) * (1 - c))) *      x13)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x14)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x15); //4
	double x014 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x13)  +  ((c + ((n2 * n2) * (1 - c))) *      x14)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x15);
	double x015 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x13)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x14)  +   ((c + ((n3 * n3) * (1 - c))) *      x15);
	
	double x016 = ((c + ((n1 * n1) * (1 - c))) *      x16)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x17)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x18); //5
	double x017 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x16)  +  ((c + ((n2 * n2) * (1 - c))) *      x17)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x18);
	double x018 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x16)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x17)  +   ((c + ((n3 * n3) * (1 - c))) *      x18);
	
	double x019 = ((c + ((n1 * n1) * (1 - c))) *      x19)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x20)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x21); //6
	double x020 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x19)  +  ((c + ((n2 * n2) * (1 - c))) *      x20)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x21);
	double x021 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x19)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x20)  +   ((c + ((n3 * n3) * (1 - c))) *      x21);
	
	double x022 = ((c + ((n1 * n1) * (1 - c))) *      x22)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x23)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x24); //7
	double x023 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x22)  +  ((c + ((n2 * n2) * (1 - c))) *      x23)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x24);
	double x024 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x22)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x23)  +   ((c + ((n3 * n3) * (1 - c))) *      x24);
	
	double x025 = ((c + ((n1 * n1) * (1 - c))) *      x25)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x26)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x27); //8
	double x026 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x25)  +  ((c + ((n2 * n2) * (1 - c))) *      x26)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x27);
	double x027 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x25)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x26)  +   ((c + ((n3 * n3) * (1 - c))) *      x27);
	
	double x028 = ((c + ((n1 * n1) * (1 - c))) *      x28)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x29)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x30); //9
	double x029 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x28)  +  ((c + ((n2 * n2) * (1 - c))) *      x29)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x30);
	double x030 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x28)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x29)  +   ((c + ((n3 * n3) * (1 - c))) *      x30);
	
	double x031 = ((c + ((n1 * n1) * (1 - c))) *      x31)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x32)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x33); //10
	double x032 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x31)  +  ((c + ((n2 * n2) * (1 - c))) *      x32)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x33);
	double x033 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x31)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x32)  +   ((c + ((n3 * n3) * (1 - c))) *      x33);
	
	double x034 = ((c + ((n1 * n1) * (1 - c))) *      x34)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x35)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x36); //11
	double x035 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x34)  +  ((c + ((n2 * n2) * (1 - c))) *      x35)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x36);
	double x036 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x34)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x35)  +   ((c + ((n3 * n3) * (1 - c))) *      x36);
	
	double x037 = ((c + ((n1 * n1) * (1 - c))) *      x37)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x38)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x39); //12
	double x038 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x37)  +  ((c + ((n2 * n2) * (1 - c))) *      x38)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x39);
	double x039 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x37)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x38)  +   ((c + ((n3 * n3) * (1 - c))) *      x39);
	
	double x040 = ((c + ((n1 * n1) * (1 - c))) *      x40)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x41)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x42); //13
	double x041 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x40)  +  ((c + ((n2 * n2) * (1 - c))) *      x41)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x42);
	double x042 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x40)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x41)  +   ((c + ((n3 * n3) * (1 - c))) *      x42);
	
	double x043 = ((c + ((n1 * n1) * (1 - c))) *      x43)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x44)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x45); //14
	double x044 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x43)  +  ((c + ((n2 * n2) * (1 - c))) *      x44)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x45);
	double x045 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x43)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x44)  +   ((c + ((n3 * n3) * (1 - c))) *      x45);
	
	double x046 = ((c + ((n1 * n1) * (1 - c))) *      x46)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x47)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x48); //15
	double x047 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x46)  +  ((c + ((n2 * n2) * (1 - c))) *      x47)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x48);
	double x048 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x46)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x47)  +   ((c + ((n3 * n3) * (1 - c))) *      x48);
	
	double x049 = ((c + ((n1 * n1) * (1 - c))) *      x49)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x50)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x51); //16
	double x050 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x49)  +  ((c + ((n2 * n2) * (1 - c))) *      x50)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x51);
	double x051 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x49)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x50)  +   ((c + ((n3 * n3) * (1 - c))) *      x51);
	
	double x052 = ((c + ((n1 * n1) * (1 - c))) *      x52)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x53)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x54); //17
	double x053 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x52)  +  ((c + ((n2 * n2) * (1 - c))) *      x53)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x54);
	double x054 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x52)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x53)  +   ((c + ((n3 * n3) * (1 - c))) *      x54);
	
	double x055 = ((c + ((n1 * n1) * (1 - c))) *      x55)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x56)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x57); //18
	double x056 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x55)  +  ((c + ((n2 * n2) * (1 - c))) *      x56)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x57);
	double x057 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x55)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x56)  +   ((c + ((n3 * n3) * (1 - c))) *      x57);
	
	double x058 = ((c + ((n1 * n1) * (1 - c))) *      x58)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x59)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x60); //17
	double x059 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x58)  +  ((c + ((n2 * n2) * (1 - c))) *      x59)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x60);
	double x060 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x58)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x59)  +   ((c + ((n3 * n3) * (1 - c))) *      x60);
	

/*      
		t.Draw2(
                  x01,  x02,  x03, 
                  x04,  x05,  x06,
                  x07,  x08,  x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n, 0.0, 0.0, 0.0
                 );  */   
                 
             }
	
	
	
	
	
	
	
	//////////////////////////////////////////// 1R1
	for( double i = 1.0; i <=1.0 ; ++i)
  {
  //	double partition = 2.0  ;
  	//i = i * partition;
  angle = 3.14159265358979323846264338 * i;
   c = cos(angle);
   s = sin(angle);
	//i=i/partition;
	
	double n1 = 0.0;//-0.10995;
	double n2 = 0.0;//0.940809;
	double n3 = 1.0;//-0.53262;
	
	
	  
	
	
	double x01 = ((c + ((n1 * n1) * (1 - c))) *      x1)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x2)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x3); //0
	double x02 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x1)  +  ((c + ((n2 * n2) * (1 - c))) *      x2)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x3);
	double x03 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x1)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x2)  +   ((c + ((n3 * n3) * (1 - c))) *      x3);
	
	double x04 = ((c + ((n1 * n1) * (1 - c))) *      x4)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x5)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x6); //1
	double x05 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x4)  +  ((c + ((n2 * n2) * (1 - c))) *      x5)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x6);
	double x06 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x4)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x5)  +   ((c + ((n3 * n3) * (1 - c))) *      x6);
	
	double x07 = ((c + ((n1 * n1) * (1 - c))) *      x7)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x8)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x9); //2
	double x08 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x7)  +  ((c + ((n2 * n2) * (1 - c))) *      x8)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x9);
	double x09 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x7)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x8)  +   ((c + ((n3 * n3) * (1 - c))) *      x9);
	
	double x010 = ((c + ((n1 * n1) * (1 - c))) *      x10)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x11)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x12); //3
	double x011 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x10)  +  ((c + ((n2 * n2) * (1 - c))) *      x11)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x12);
	double x012 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x10)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x11)  +   ((c + ((n3 * n3) * (1 - c))) *      x12);
	
	double x013 = ((c + ((n1 * n1) * (1 - c))) *      x13)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x14)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x15); //4
	double x014 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x13)  +  ((c + ((n2 * n2) * (1 - c))) *      x14)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x15);
	double x015 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x13)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x14)  +   ((c + ((n3 * n3) * (1 - c))) *      x15);
	
	double x016 = ((c + ((n1 * n1) * (1 - c))) *      x16)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x17)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x18); //5
	double x017 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x16)  +  ((c + ((n2 * n2) * (1 - c))) *      x17)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x18);
	double x018 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x16)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x17)  +   ((c + ((n3 * n3) * (1 - c))) *      x18);
	
	double x019 = ((c + ((n1 * n1) * (1 - c))) *      x19)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x20)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x21); //6
	double x020 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x19)  +  ((c + ((n2 * n2) * (1 - c))) *      x20)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x21);
	double x021 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x19)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x20)  +   ((c + ((n3 * n3) * (1 - c))) *      x21);
	
	double x022 = ((c + ((n1 * n1) * (1 - c))) *      x22)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x23)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x24); //7
	double x023 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x22)  +  ((c + ((n2 * n2) * (1 - c))) *      x23)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x24);
	double x024 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x22)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x23)  +   ((c + ((n3 * n3) * (1 - c))) *      x24);
	
	double x025 = ((c + ((n1 * n1) * (1 - c))) *      x25)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x26)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x27); //8
	double x026 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x25)  +  ((c + ((n2 * n2) * (1 - c))) *      x26)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x27);
	double x027 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x25)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x26)  +   ((c + ((n3 * n3) * (1 - c))) *      x27);
	
	double x028 = ((c + ((n1 * n1) * (1 - c))) *      x28)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x29)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x30); //9
	double x029 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x28)  +  ((c + ((n2 * n2) * (1 - c))) *      x29)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x30);
	double x030 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x28)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x29)  +   ((c + ((n3 * n3) * (1 - c))) *      x30);
	
	double x031 = ((c + ((n1 * n1) * (1 - c))) *      x31)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x32)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x33); //10
	double x032 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x31)  +  ((c + ((n2 * n2) * (1 - c))) *      x32)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x33);
	double x033 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x31)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x32)  +   ((c + ((n3 * n3) * (1 - c))) *      x33);
	
	double x034 = ((c + ((n1 * n1) * (1 - c))) *      x34)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x35)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x36); //11
	double x035 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x34)  +  ((c + ((n2 * n2) * (1 - c))) *      x35)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x36);
	double x036 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x34)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x35)  +   ((c + ((n3 * n3) * (1 - c))) *      x36);
	
	double x037 = ((c + ((n1 * n1) * (1 - c))) *      x37)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x38)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x39); //12
	double x038 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x37)  +  ((c + ((n2 * n2) * (1 - c))) *      x38)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x39);
	double x039 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x37)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x38)  +   ((c + ((n3 * n3) * (1 - c))) *      x39);
	
	double x040 = ((c + ((n1 * n1) * (1 - c))) *      x40)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x41)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x42); //13
	double x041 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x40)  +  ((c + ((n2 * n2) * (1 - c))) *      x41)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x42);
	double x042 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x40)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x41)  +   ((c + ((n3 * n3) * (1 - c))) *      x42);
	
	double x043 = ((c + ((n1 * n1) * (1 - c))) *      x43)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x44)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x45); //14
	double x044 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x43)  +  ((c + ((n2 * n2) * (1 - c))) *      x44)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x45);
	double x045 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x43)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x44)  +   ((c + ((n3 * n3) * (1 - c))) *      x45);
	
	double x046 = ((c + ((n1 * n1) * (1 - c))) *      x46)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x47)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x48); //15
	double x047 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x46)  +  ((c + ((n2 * n2) * (1 - c))) *      x47)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x48);
	double x048 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x46)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x47)  +   ((c + ((n3 * n3) * (1 - c))) *      x48);
	
	double x049 = ((c + ((n1 * n1) * (1 - c))) *      x49)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x50)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x51); //16
	double x050 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x49)  +  ((c + ((n2 * n2) * (1 - c))) *      x50)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x51);
	double x051 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x49)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x50)  +   ((c + ((n3 * n3) * (1 - c))) *      x51);
	
	double x052 = ((c + ((n1 * n1) * (1 - c))) *      x52)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x53)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x54); //17
	double x053 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x52)  +  ((c + ((n2 * n2) * (1 - c))) *      x53)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x54);
	double x054 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x52)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x53)  +   ((c + ((n3 * n3) * (1 - c))) *      x54);
	
	double x055 = ((c + ((n1 * n1) * (1 - c))) *      x55)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x56)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x57); //18
	double x056 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x55)  +  ((c + ((n2 * n2) * (1 - c))) *      x56)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x57);
	double x057 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x55)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x56)  +   ((c + ((n3 * n3) * (1 - c))) *      x57);
	
	double x058 = ((c + ((n1 * n1) * (1 - c))) *      x58)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x59)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x60); //17
	double x059 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x58)  +  ((c + ((n2 * n2) * (1 - c))) *      x59)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x60);
	double x060 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x58)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x59)  +   ((c + ((n3 * n3) * (1 - c))) *      x60);
	

      
		t.Draw1(
                  x01,  x02,  x03, 
                  x04,  x05,  x06,
                  x07,  x08,  x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n, 0.0*L, -L*(0.5671), 0.917587*L
                 );     
                 
             }
             
             
             /////////////////////////////////////////////1R2
          for( double i = 1.0; i <=1.0 ; ++i)
  {
  //	double partition = 2.0  ;
  	//i = i * partition;
  angle = 3.14159265358979323846264338 * i;
   c = cos(angle);
   s = sin(angle);
	//i=i/partition;
	
	double n1 = -1.0;//-0.10995;
	double n2 = 0.0;//0.940809;
	double n3 = 0.0;//-0.53262;
	
	
	  
	
	
	double x01 = ((c + ((n1 * n1) * (1 - c))) *      x1)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x2)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x3); //0
	double x02 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x1)  +  ((c + ((n2 * n2) * (1 - c))) *      x2)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x3);
	double x03 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x1)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x2)  +   ((c + ((n3 * n3) * (1 - c))) *      x3);
	
	double x04 = ((c + ((n1 * n1) * (1 - c))) *      x4)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x5)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x6); //1
	double x05 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x4)  +  ((c + ((n2 * n2) * (1 - c))) *      x5)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x6);
	double x06 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x4)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x5)  +   ((c + ((n3 * n3) * (1 - c))) *      x6);
	
	double x07 = ((c + ((n1 * n1) * (1 - c))) *      x7)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x8)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x9); //2
	double x08 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x7)  +  ((c + ((n2 * n2) * (1 - c))) *      x8)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x9);
	double x09 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x7)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x8)  +   ((c + ((n3 * n3) * (1 - c))) *      x9);
	
	double x010 = ((c + ((n1 * n1) * (1 - c))) *      x10)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x11)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x12); //3
	double x011 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x10)  +  ((c + ((n2 * n2) * (1 - c))) *      x11)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x12);
	double x012 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x10)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x11)  +   ((c + ((n3 * n3) * (1 - c))) *      x12);
	
	double x013 = ((c + ((n1 * n1) * (1 - c))) *      x13)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x14)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x15); //4
	double x014 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x13)  +  ((c + ((n2 * n2) * (1 - c))) *      x14)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x15);
	double x015 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x13)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x14)  +   ((c + ((n3 * n3) * (1 - c))) *      x15);
	
	double x016 = ((c + ((n1 * n1) * (1 - c))) *      x16)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x17)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x18); //5
	double x017 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x16)  +  ((c + ((n2 * n2) * (1 - c))) *      x17)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x18);
	double x018 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x16)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x17)  +   ((c + ((n3 * n3) * (1 - c))) *      x18);
	
	double x019 = ((c + ((n1 * n1) * (1 - c))) *      x19)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x20)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x21); //6
	double x020 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x19)  +  ((c + ((n2 * n2) * (1 - c))) *      x20)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x21);
	double x021 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x19)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x20)  +   ((c + ((n3 * n3) * (1 - c))) *      x21);
	
	double x022 = ((c + ((n1 * n1) * (1 - c))) *      x22)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x23)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x24); //7
	double x023 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x22)  +  ((c + ((n2 * n2) * (1 - c))) *      x23)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x24);
	double x024 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x22)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x23)  +   ((c + ((n3 * n3) * (1 - c))) *      x24);
	
	double x025 = ((c + ((n1 * n1) * (1 - c))) *      x25)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x26)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x27); //8
	double x026 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x25)  +  ((c + ((n2 * n2) * (1 - c))) *      x26)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x27);
	double x027 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x25)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x26)  +   ((c + ((n3 * n3) * (1 - c))) *      x27);
	
	double x028 = ((c + ((n1 * n1) * (1 - c))) *      x28)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x29)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x30); //9
	double x029 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x28)  +  ((c + ((n2 * n2) * (1 - c))) *      x29)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x30);
	double x030 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x28)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x29)  +   ((c + ((n3 * n3) * (1 - c))) *      x30);
	
	double x031 = ((c + ((n1 * n1) * (1 - c))) *      x31)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x32)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x33); //10
	double x032 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x31)  +  ((c + ((n2 * n2) * (1 - c))) *      x32)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x33);
	double x033 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x31)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x32)  +   ((c + ((n3 * n3) * (1 - c))) *      x33);
	
	double x034 = ((c + ((n1 * n1) * (1 - c))) *      x34)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x35)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x36); //11
	double x035 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x34)  +  ((c + ((n2 * n2) * (1 - c))) *      x35)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x36);
	double x036 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x34)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x35)  +   ((c + ((n3 * n3) * (1 - c))) *      x36);
	
	double x037 = ((c + ((n1 * n1) * (1 - c))) *      x37)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x38)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x39); //12
	double x038 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x37)  +  ((c + ((n2 * n2) * (1 - c))) *      x38)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x39);
	double x039 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x37)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x38)  +   ((c + ((n3 * n3) * (1 - c))) *      x39);
	
	double x040 = ((c + ((n1 * n1) * (1 - c))) *      x40)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x41)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x42); //13
	double x041 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x40)  +  ((c + ((n2 * n2) * (1 - c))) *      x41)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x42);
	double x042 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x40)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x41)  +   ((c + ((n3 * n3) * (1 - c))) *      x42);
	
	double x043 = ((c + ((n1 * n1) * (1 - c))) *      x43)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x44)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x45); //14
	double x044 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x43)  +  ((c + ((n2 * n2) * (1 - c))) *      x44)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x45);
	double x045 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x43)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x44)  +   ((c + ((n3 * n3) * (1 - c))) *      x45);
	
	double x046 = ((c + ((n1 * n1) * (1 - c))) *      x46)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x47)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x48); //15
	double x047 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x46)  +  ((c + ((n2 * n2) * (1 - c))) *      x47)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x48);
	double x048 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x46)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x47)  +   ((c + ((n3 * n3) * (1 - c))) *      x48);
	
	double x049 = ((c + ((n1 * n1) * (1 - c))) *      x49)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x50)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x51); //16
	double x050 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x49)  +  ((c + ((n2 * n2) * (1 - c))) *      x50)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x51);
	double x051 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x49)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x50)  +   ((c + ((n3 * n3) * (1 - c))) *      x51);
	
	double x052 = ((c + ((n1 * n1) * (1 - c))) *      x52)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x53)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x54); //17
	double x053 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x52)  +  ((c + ((n2 * n2) * (1 - c))) *      x53)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x54);
	double x054 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x52)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x53)  +   ((c + ((n3 * n3) * (1 - c))) *      x54);
	
	double x055 = ((c + ((n1 * n1) * (1 - c))) *      x55)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x56)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x57); //18
	double x056 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x55)  +  ((c + ((n2 * n2) * (1 - c))) *      x56)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x57);
	double x057 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x55)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x56)  +   ((c + ((n3 * n3) * (1 - c))) *      x57);
	
	double x058 = ((c + ((n1 * n1) * (1 - c))) *      x58)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x59)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x60); //17
	double x059 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x58)  +  ((c + ((n2 * n2) * (1 - c))) *      x59)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x60);
	double x060 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x58)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x59)  +   ((c + ((n3 * n3) * (1 - c))) *      x60);
	

      
		t.Draw1(
                  x01,  x02,  x03, 
                  x04,  x05,  x06,
                  x07,  x08,  x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n, 0.0, -L*0.5671, -L*0.917587
                 );     
                 
             }   
             
             
             
             
             
         
          ////////////////////////////////////////////////////1R3   
             for( double i = 1.0; i <=2.0 ; ++i)
  {
  //	double partition = 2.0  ;
  	//i = i * partition;
  angle = 3.14159265358979323846264338 * i;
   c = cos(angle);
   s = sin(angle);
	//i=i/partition;
	
	double n1 = 0.0;//-0.10995;
	double n2 = -1.0;//0.940809;
	double n3 = 0.0;//-0.53262;
	

	  
	
	
	double x01 = ((c + ((n1 * n1) * (1 - c))) *      x1)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x2)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x3); //0
	double x02 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x1)  +  ((c + ((n2 * n2) * (1 - c))) *      x2)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x3);
	double x03 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x1)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x2)  +   ((c + ((n3 * n3) * (1 - c))) *      x3);
	
	double x04 = ((c + ((n1 * n1) * (1 - c))) *      x4)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x5)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x6); //1
	double x05 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x4)  +  ((c + ((n2 * n2) * (1 - c))) *      x5)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x6);
	double x06 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x4)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x5)  +   ((c + ((n3 * n3) * (1 - c))) *      x6);
	
	double x07 = ((c + ((n1 * n1) * (1 - c))) *      x7)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x8)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x9); //2
	double x08 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x7)  +  ((c + ((n2 * n2) * (1 - c))) *      x8)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x9);
	double x09 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x7)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x8)  +   ((c + ((n3 * n3) * (1 - c))) *      x9);
	
	double x010 = ((c + ((n1 * n1) * (1 - c))) *      x10)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x11)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x12); //3
	double x011 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x10)  +  ((c + ((n2 * n2) * (1 - c))) *      x11)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x12);
	double x012 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x10)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x11)  +   ((c + ((n3 * n3) * (1 - c))) *      x12);
	
	double x013 = ((c + ((n1 * n1) * (1 - c))) *      x13)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x14)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x15); //4
	double x014 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x13)  +  ((c + ((n2 * n2) * (1 - c))) *      x14)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x15);
	double x015 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x13)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x14)  +   ((c + ((n3 * n3) * (1 - c))) *      x15);
	
	double x016 = ((c + ((n1 * n1) * (1 - c))) *      x16)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x17)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x18); //5
	double x017 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x16)  +  ((c + ((n2 * n2) * (1 - c))) *      x17)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x18);
	double x018 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x16)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x17)  +   ((c + ((n3 * n3) * (1 - c))) *      x18);
	
	double x019 = ((c + ((n1 * n1) * (1 - c))) *      x19)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x20)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x21); //6
	double x020 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x19)  +  ((c + ((n2 * n2) * (1 - c))) *      x20)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x21);
	double x021 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x19)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x20)  +   ((c + ((n3 * n3) * (1 - c))) *      x21);
	
	double x022 = ((c + ((n1 * n1) * (1 - c))) *      x22)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x23)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x24); //7
	double x023 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x22)  +  ((c + ((n2 * n2) * (1 - c))) *      x23)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x24);
	double x024 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x22)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x23)  +   ((c + ((n3 * n3) * (1 - c))) *      x24);
	
	double x025 = ((c + ((n1 * n1) * (1 - c))) *      x25)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x26)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x27); //8
	double x026 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x25)  +  ((c + ((n2 * n2) * (1 - c))) *      x26)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x27);
	double x027 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x25)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x26)  +   ((c + ((n3 * n3) * (1 - c))) *      x27);
	
	double x028 = ((c + ((n1 * n1) * (1 - c))) *      x28)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x29)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x30); //9
	double x029 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x28)  +  ((c + ((n2 * n2) * (1 - c))) *      x29)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x30);
	double x030 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x28)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x29)  +   ((c + ((n3 * n3) * (1 - c))) *      x30);
	
	double x031 = ((c + ((n1 * n1) * (1 - c))) *      x31)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x32)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x33); //10
	double x032 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x31)  +  ((c + ((n2 * n2) * (1 - c))) *      x32)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x33);
	double x033 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x31)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x32)  +   ((c + ((n3 * n3) * (1 - c))) *      x33);
	
	double x034 = ((c + ((n1 * n1) * (1 - c))) *      x34)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x35)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x36); //11
	double x035 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x34)  +  ((c + ((n2 * n2) * (1 - c))) *      x35)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x36);
	double x036 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x34)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x35)  +   ((c + ((n3 * n3) * (1 - c))) *      x36);
	
	double x037 = ((c + ((n1 * n1) * (1 - c))) *      x37)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x38)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x39); //12
	double x038 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x37)  +  ((c + ((n2 * n2) * (1 - c))) *      x38)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x39);
	double x039 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x37)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x38)  +   ((c + ((n3 * n3) * (1 - c))) *      x39);
	
	double x040 = ((c + ((n1 * n1) * (1 - c))) *      x40)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x41)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x42); //13
	double x041 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x40)  +  ((c + ((n2 * n2) * (1 - c))) *      x41)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x42);
	double x042 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x40)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x41)  +   ((c + ((n3 * n3) * (1 - c))) *      x42);
	
	double x043 = ((c + ((n1 * n1) * (1 - c))) *      x43)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x44)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x45); //14
	double x044 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x43)  +  ((c + ((n2 * n2) * (1 - c))) *      x44)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x45);
	double x045 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x43)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x44)  +   ((c + ((n3 * n3) * (1 - c))) *      x45);
	
	double x046 = ((c + ((n1 * n1) * (1 - c))) *      x46)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x47)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x48); //15
	double x047 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x46)  +  ((c + ((n2 * n2) * (1 - c))) *      x47)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x48);
	double x048 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x46)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x47)  +   ((c + ((n3 * n3) * (1 - c))) *      x48);
	
	double x049 = ((c + ((n1 * n1) * (1 - c))) *      x49)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x50)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x51); //16
	double x050 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x49)  +  ((c + ((n2 * n2) * (1 - c))) *      x50)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x51);
	double x051 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x49)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x50)  +   ((c + ((n3 * n3) * (1 - c))) *      x51);
	
	double x052 = ((c + ((n1 * n1) * (1 - c))) *      x52)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x53)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x54); //17
	double x053 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x52)  +  ((c + ((n2 * n2) * (1 - c))) *      x53)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x54);
	double x054 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x52)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x53)  +   ((c + ((n3 * n3) * (1 - c))) *      x54);
	
	double x055 = ((c + ((n1 * n1) * (1 - c))) *      x55)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x56)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x57); //18
	double x056 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x55)  +  ((c + ((n2 * n2) * (1 - c))) *      x56)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x57);
	double x057 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x55)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x56)  +   ((c + ((n3 * n3) * (1 - c))) *      x57);
	
	double x058 = ((c + ((n1 * n1) * (1 - c))) *      x58)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x59)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x60); //17
	double x059 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x58)  +  ((c + ((n2 * n2) * (1 - c))) *      x59)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x60);
	double x060 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x58)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x59)  +   ((c + ((n3 * n3) * (1 - c))) *      x60);
	
                  if(i == 1.0)
      {
	  
        	
      
		          t.Draw1(
                  x01,  x02,  x03, 
                  x04,  x05,  x06,
                  x07,  x08,  x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n, 0.0*L, L*(0.5617), -0.917587*L
                 );  }
      
		          
				 else
				  {
				 t.Draw1(
                  x01,  x02,  x03, 
                  x04,  x05,  x06,
                  x07,  x08,  x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n, 0.0, L*0.5617, L*0.917587
                 ); 
					} ; 
                 
             }
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
    
	
	
	
	
	
	
	
	
	
	
	for( double i = 1.0; i <=2.0 ; ++i)
  {
  //	double partition = 2.0  ;
  	//i = i * partition;
  angle = 3.14159265358979323846264338 * i;
   c = cos(angle);
   s = sin(angle);
	//i=i/partition;
	
	double n1 = 0.0;//-0.10995;
	double n2 = 0.0;//0.940809;
	double n3 = 1.0;//-0.53262;
	
	
	  
	
	
	double x01 = ((c + ((n1 * n1) * (1 - c))) *      x1)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x2)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x3); //0
	double x02 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x1)  +  ((c + ((n2 * n2) * (1 - c))) *      x2)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x3);
	double x03 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x1)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x2)  +   ((c + ((n3 * n3) * (1 - c))) *      x3);
	
	double x04 = ((c + ((n1 * n1) * (1 - c))) *      x4)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x5)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x6); //1
	double x05 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x4)  +  ((c + ((n2 * n2) * (1 - c))) *      x5)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x6);
	double x06 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x4)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x5)  +   ((c + ((n3 * n3) * (1 - c))) *      x6);
	
	double x07 = ((c + ((n1 * n1) * (1 - c))) *      x7)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x8)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x9); //2
	double x08 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x7)  +  ((c + ((n2 * n2) * (1 - c))) *      x8)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x9);
	double x09 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x7)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x8)  +   ((c + ((n3 * n3) * (1 - c))) *      x9);
	
	double x010 = ((c + ((n1 * n1) * (1 - c))) *      x10)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x11)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x12); //3
	double x011 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x10)  +  ((c + ((n2 * n2) * (1 - c))) *      x11)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x12);
	double x012 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x10)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x11)  +   ((c + ((n3 * n3) * (1 - c))) *      x12);
	
	double x013 = ((c + ((n1 * n1) * (1 - c))) *      x13)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x14)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x15); //4
	double x014 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x13)  +  ((c + ((n2 * n2) * (1 - c))) *      x14)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x15);
	double x015 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x13)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x14)  +   ((c + ((n3 * n3) * (1 - c))) *      x15);
	
	double x016 = ((c + ((n1 * n1) * (1 - c))) *      x16)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x17)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x18); //5
	double x017 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x16)  +  ((c + ((n2 * n2) * (1 - c))) *      x17)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x18);
	double x018 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x16)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x17)  +   ((c + ((n3 * n3) * (1 - c))) *      x18);
	
	double x019 = ((c + ((n1 * n1) * (1 - c))) *      x19)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x20)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x21); //6
	double x020 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x19)  +  ((c + ((n2 * n2) * (1 - c))) *      x20)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x21);
	double x021 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x19)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x20)  +   ((c + ((n3 * n3) * (1 - c))) *      x21);
	
	double x022 = ((c + ((n1 * n1) * (1 - c))) *      x22)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x23)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x24); //7
	double x023 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x22)  +  ((c + ((n2 * n2) * (1 - c))) *      x23)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x24);
	double x024 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x22)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x23)  +   ((c + ((n3 * n3) * (1 - c))) *      x24);
	
	double x025 = ((c + ((n1 * n1) * (1 - c))) *      x25)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x26)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x27); //8
	double x026 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x25)  +  ((c + ((n2 * n2) * (1 - c))) *      x26)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x27);
	double x027 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x25)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x26)  +   ((c + ((n3 * n3) * (1 - c))) *      x27);
	
	double x028 = ((c + ((n1 * n1) * (1 - c))) *      x28)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x29)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x30); //9
	double x029 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x28)  +  ((c + ((n2 * n2) * (1 - c))) *      x29)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x30);
	double x030 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x28)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x29)  +   ((c + ((n3 * n3) * (1 - c))) *      x30);
	
	double x031 = ((c + ((n1 * n1) * (1 - c))) *      x31)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x32)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x33); //10
	double x032 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x31)  +  ((c + ((n2 * n2) * (1 - c))) *      x32)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x33);
	double x033 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x31)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x32)  +   ((c + ((n3 * n3) * (1 - c))) *      x33);
	
	double x034 = ((c + ((n1 * n1) * (1 - c))) *      x34)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x35)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x36); //11
	double x035 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x34)  +  ((c + ((n2 * n2) * (1 - c))) *      x35)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x36);
	double x036 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x34)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x35)  +   ((c + ((n3 * n3) * (1 - c))) *      x36);
	
	double x037 = ((c + ((n1 * n1) * (1 - c))) *      x37)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x38)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x39); //12
	double x038 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x37)  +  ((c + ((n2 * n2) * (1 - c))) *      x38)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x39);
	double x039 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x37)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x38)  +   ((c + ((n3 * n3) * (1 - c))) *      x39);
	
	double x040 = ((c + ((n1 * n1) * (1 - c))) *      x40)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x41)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x42); //13
	double x041 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x40)  +  ((c + ((n2 * n2) * (1 - c))) *      x41)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x42);
	double x042 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x40)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x41)  +   ((c + ((n3 * n3) * (1 - c))) *      x42);
	
	double x043 = ((c + ((n1 * n1) * (1 - c))) *      x43)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x44)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x45); //14
	double x044 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x43)  +  ((c + ((n2 * n2) * (1 - c))) *      x44)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x45);
	double x045 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x43)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x44)  +   ((c + ((n3 * n3) * (1 - c))) *      x45);
	
	double x046 = ((c + ((n1 * n1) * (1 - c))) *      x46)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x47)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x48); //15
	double x047 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x46)  +  ((c + ((n2 * n2) * (1 - c))) *      x47)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x48);
	double x048 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x46)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x47)  +   ((c + ((n3 * n3) * (1 - c))) *      x48);
	
	double x049 = ((c + ((n1 * n1) * (1 - c))) *      x49)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x50)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x51); //16
	double x050 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x49)  +  ((c + ((n2 * n2) * (1 - c))) *      x50)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x51);
	double x051 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x49)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x50)  +   ((c + ((n3 * n3) * (1 - c))) *      x51);
	
	double x052 = ((c + ((n1 * n1) * (1 - c))) *      x52)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x53)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x54); //17
	double x053 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x52)  +  ((c + ((n2 * n2) * (1 - c))) *      x53)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x54);
	double x054 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x52)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x53)  +   ((c + ((n3 * n3) * (1 - c))) *      x54);
	
	double x055 = ((c + ((n1 * n1) * (1 - c))) *      x55)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x56)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x57); //18
	double x056 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x55)  +  ((c + ((n2 * n2) * (1 - c))) *      x56)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x57);
	double x057 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x55)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x56)  +   ((c + ((n3 * n3) * (1 - c))) *      x57);
	
	double x058 = ((c + ((n1 * n1) * (1 - c))) *      x58)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x59)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x60); //17
	double x059 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x58)  +  ((c + ((n2 * n2) * (1 - c))) *      x59)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x60);
	double x060 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x58)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x59)  +   ((c + ((n3 * n3) * (1 - c))) *      x60);
	





           



if(i==1.0)
{
           v1 =  x52 - x22;
		   v2 =  x53 - x23 ;      
           v3 =  x54 - x24; 
		 
		   w1 =  x55 - x22;
		   w2 =  x56 - x23;       
           w3 =  x57 - x24;                    
                 
     
 	 double b1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  
 	 double b2 = ( ( w1 * v3 ) - ( v1 * w3 ));  
 	 double b3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
          double D = sqrt( (b1 * b1) + (b2 * b2) + (b3 * b3));
   
 	 double l = sqrt( (b1*b1) + (b2*b2) + (b3*b3));
 	double d = 0.666666 * gold;
 	
 	b1= d * (b1 / l);
 	b2= d * (b2 / l);
 	b3= d * (b3 / l);
 	
 	
 	

t.Draw2(
                  x01,  x02,  x03, 
                  x04,  x05,  x06,
                  x07,  x08,  x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n, b1*L, b2*L, b3*L
                 );  
             }
      else{
      	v1 =  x58 - x1;
		   v2 =  x59 - x2;       
           v3 =  x60 - x3; 
		 
		   w1 =  x13 - x1;
		   w2 =  x14 - x2;       
           w3 =  x15 - x3;                    
                 
     
 	 double b1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  
 	 double b2 = ( ( w1 * v3 ) - ( v1 * w3 ));  
 	 double b3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
          double D = sqrt( (b1 * b1) + (b2 * b2) + (b3 * b3));
   
 	 double l = sqrt( (b1*b1) + (b2*b2) + (b3*b3));
 	double d = 0.666666 * gold;
 	
 	b1= d * (b1 / l);
 	b2= d * (b2 / l);
 	b3= d * (b3 / l);

    
	  
		t.Draw2(
                  x01,  x02,  x03, 
                  x04,  x05,  x06,
                  x07,  x08,  x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n, b1*L, b2*L, b3*L
                 );     
             };
             }
                      
             
        
		
		
		for( double i = 1.0; i <=1.0 ; ++i)
  {
  //	double partition = 2.0  ;
  	//i = i * partition;
  angle = 3.14159265358979323846264338 * i;
   c = cos(angle);
   s = sin(angle);
	//i=i/partition;
	
	double n1 = 0.0;//-0.10995;
	double n2 = 1.0;//0.940809;
	double n3 = 0.0;//-0.53262;
	
	
	  
	
	
	double x01 = ((c + ((n1 * n1) * (1 - c))) *      x1)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x2)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x3); //0
	double x02 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x1)  +  ((c + ((n2 * n2) * (1 - c))) *      x2)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x3);
	double x03 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x1)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x2)  +   ((c + ((n3 * n3) * (1 - c))) *      x3);
	
	double x04 = ((c + ((n1 * n1) * (1 - c))) *      x4)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x5)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x6); //1
	double x05 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x4)  +  ((c + ((n2 * n2) * (1 - c))) *      x5)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x6);
	double x06 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x4)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x5)  +   ((c + ((n3 * n3) * (1 - c))) *      x6);
	
	double x07 = ((c + ((n1 * n1) * (1 - c))) *      x7)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x8)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x9); //2
	double x08 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x7)  +  ((c + ((n2 * n2) * (1 - c))) *      x8)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x9);
	double x09 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x7)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x8)  +   ((c + ((n3 * n3) * (1 - c))) *      x9);
	
	double x010 = ((c + ((n1 * n1) * (1 - c))) *      x10)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x11)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x12); //3
	double x011 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x10)  +  ((c + ((n2 * n2) * (1 - c))) *      x11)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x12);
	double x012 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x10)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x11)  +   ((c + ((n3 * n3) * (1 - c))) *      x12);
	
	double x013 = ((c + ((n1 * n1) * (1 - c))) *      x13)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x14)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x15); //4
	double x014 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x13)  +  ((c + ((n2 * n2) * (1 - c))) *      x14)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x15);
	double x015 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x13)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x14)  +   ((c + ((n3 * n3) * (1 - c))) *      x15);
	
	double x016 = ((c + ((n1 * n1) * (1 - c))) *      x16)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x17)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x18); //5
	double x017 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x16)  +  ((c + ((n2 * n2) * (1 - c))) *      x17)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x18);
	double x018 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x16)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x17)  +   ((c + ((n3 * n3) * (1 - c))) *      x18);
	
	double x019 = ((c + ((n1 * n1) * (1 - c))) *      x19)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x20)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x21); //6
	double x020 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x19)  +  ((c + ((n2 * n2) * (1 - c))) *      x20)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x21);
	double x021 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x19)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x20)  +   ((c + ((n3 * n3) * (1 - c))) *      x21);
	
	double x022 = ((c + ((n1 * n1) * (1 - c))) *      x22)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x23)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x24); //7
	double x023 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x22)  +  ((c + ((n2 * n2) * (1 - c))) *      x23)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x24);
	double x024 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x22)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x23)  +   ((c + ((n3 * n3) * (1 - c))) *      x24);
	
	double x025 = ((c + ((n1 * n1) * (1 - c))) *      x25)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x26)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x27); //8
	double x026 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x25)  +  ((c + ((n2 * n2) * (1 - c))) *      x26)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x27);
	double x027 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x25)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x26)  +   ((c + ((n3 * n3) * (1 - c))) *      x27);
	
	double x028 = ((c + ((n1 * n1) * (1 - c))) *      x28)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x29)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x30); //9
	double x029 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x28)  +  ((c + ((n2 * n2) * (1 - c))) *      x29)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x30);
	double x030 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x28)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x29)  +   ((c + ((n3 * n3) * (1 - c))) *      x30);
	
	double x031 = ((c + ((n1 * n1) * (1 - c))) *      x31)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x32)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x33); //10
	double x032 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x31)  +  ((c + ((n2 * n2) * (1 - c))) *      x32)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x33);
	double x033 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x31)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x32)  +   ((c + ((n3 * n3) * (1 - c))) *      x33);
	
	double x034 = ((c + ((n1 * n1) * (1 - c))) *      x34)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x35)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x36); //11
	double x035 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x34)  +  ((c + ((n2 * n2) * (1 - c))) *      x35)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x36);
	double x036 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x34)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x35)  +   ((c + ((n3 * n3) * (1 - c))) *      x36);
	
	double x037 = ((c + ((n1 * n1) * (1 - c))) *      x37)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x38)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x39); //12
	double x038 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x37)  +  ((c + ((n2 * n2) * (1 - c))) *      x38)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x39);
	double x039 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x37)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x38)  +   ((c + ((n3 * n3) * (1 - c))) *      x39);
	
	double x040 = ((c + ((n1 * n1) * (1 - c))) *      x40)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x41)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x42); //13
	double x041 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x40)  +  ((c + ((n2 * n2) * (1 - c))) *      x41)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x42);
	double x042 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x40)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x41)  +   ((c + ((n3 * n3) * (1 - c))) *      x42);
	
	double x043 = ((c + ((n1 * n1) * (1 - c))) *      x43)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x44)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x45); //14
	double x044 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x43)  +  ((c + ((n2 * n2) * (1 - c))) *      x44)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x45);
	double x045 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x43)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x44)  +   ((c + ((n3 * n3) * (1 - c))) *      x45);
	
	double x046 = ((c + ((n1 * n1) * (1 - c))) *      x46)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x47)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x48); //15
	double x047 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x46)  +  ((c + ((n2 * n2) * (1 - c))) *      x47)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x48);
	double x048 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x46)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x47)  +   ((c + ((n3 * n3) * (1 - c))) *      x48);
	
	double x049 = ((c + ((n1 * n1) * (1 - c))) *      x49)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x50)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x51); //16
	double x050 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x49)  +  ((c + ((n2 * n2) * (1 - c))) *      x50)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x51);
	double x051 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x49)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x50)  +   ((c + ((n3 * n3) * (1 - c))) *      x51);
	
	double x052 = ((c + ((n1 * n1) * (1 - c))) *      x52)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x53)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x54); //17
	double x053 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x52)  +  ((c + ((n2 * n2) * (1 - c))) *      x53)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x54);
	double x054 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x52)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x53)  +   ((c + ((n3 * n3) * (1 - c))) *      x54);
	
	double x055 = ((c + ((n1 * n1) * (1 - c))) *      x55)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x56)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x57); //18
	double x056 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x55)  +  ((c + ((n2 * n2) * (1 - c))) *      x56)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x57);
	double x057 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x55)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x56)  +   ((c + ((n3 * n3) * (1 - c))) *      x57);
	
	double x058 = ((c + ((n1 * n1) * (1 - c))) *      x58)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x59)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x60); //17
	double x059 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x58)  +  ((c + ((n2 * n2) * (1 - c))) *      x59)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x60);
	double x060 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x58)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x59)  +   ((c + ((n3 * n3) * (1 - c))) *      x60);
	





    
        	v1 =  x55 - x46;
		   v2 =  x56 - x47;       
           v3 =  x57 - x48; 
		 
		   w1 =  x52 - x46;
		   w2 =  x53 - x47;       
           w3 =  x54 - x48;                    
                 
     
 	 double b1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  
 	 double b2 = ( ( w1 * v3 ) - ( v1 * w3 ));  
 	 double b3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
          double D = sqrt( (b1 * b1) + (b2 * b2) + (b3 * b3));
   
 	 double l = sqrt( (b1*b1) + (b2*b2) + (b3*b3));
 	double d = 0.666666 * gold;
 	
 	b1= d * (b1 / l);
 	b2= d * (b2 / l);
 	b3= d * (b3 / l);

	  
		t.Draw2(
                  x01,  x02,  x03, 
                  x04,  x05,  x06,
                  x07,  x08,  x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n, b1*L, b2*L, b3*L
                 );     
             
             }  
			  
			  
			  
			  
			  
			  ////////////////////////////////////////////////
		for( double i = 1.0; i <=1.0 ; ++i)
  {
  //	double partition = 2.0  ;
  	//i = i * partition;
  angle = 3.14159265358979323846264338 * i;
   c = cos(angle);
   s = sin(angle);
	//i=i/partition;
	
	double n1 = 1.0;//-0.10995;
	double n2 = 0.0;//0.940809;
	double n3 = 0.0;//-0.53262;
	
	
	  
	
	
	double x01 = ((c + ((n1 * n1) * (1 - c))) *      x1)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x2)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x3); //0
	double x02 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x1)  +  ((c + ((n2 * n2) * (1 - c))) *      x2)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x3);
	double x03 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x1)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x2)  +   ((c + ((n3 * n3) * (1 - c))) *      x3);
	
	double x04 = ((c + ((n1 * n1) * (1 - c))) *      x4)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x5)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x6); //1
	double x05 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x4)  +  ((c + ((n2 * n2) * (1 - c))) *      x5)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x6);
	double x06 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x4)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x5)  +   ((c + ((n3 * n3) * (1 - c))) *      x6);
	
	double x07 = ((c + ((n1 * n1) * (1 - c))) *      x7)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x8)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x9); //2
	double x08 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x7)  +  ((c + ((n2 * n2) * (1 - c))) *      x8)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x9);
	double x09 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x7)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x8)  +   ((c + ((n3 * n3) * (1 - c))) *      x9);
	
	double x010 = ((c + ((n1 * n1) * (1 - c))) *      x10)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x11)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x12); //3
	double x011 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x10)  +  ((c + ((n2 * n2) * (1 - c))) *      x11)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x12);
	double x012 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x10)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x11)  +   ((c + ((n3 * n3) * (1 - c))) *      x12);
	
	double x013 = ((c + ((n1 * n1) * (1 - c))) *      x13)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x14)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x15); //4
	double x014 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x13)  +  ((c + ((n2 * n2) * (1 - c))) *      x14)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x15);
	double x015 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x13)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x14)  +   ((c + ((n3 * n3) * (1 - c))) *      x15);
	
	double x016 = ((c + ((n1 * n1) * (1 - c))) *      x16)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x17)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x18); //5
	double x017 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x16)  +  ((c + ((n2 * n2) * (1 - c))) *      x17)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x18);
	double x018 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x16)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x17)  +   ((c + ((n3 * n3) * (1 - c))) *      x18);
	
	double x019 = ((c + ((n1 * n1) * (1 - c))) *      x19)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x20)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x21); //6
	double x020 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x19)  +  ((c + ((n2 * n2) * (1 - c))) *      x20)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x21);
	double x021 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x19)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x20)  +   ((c + ((n3 * n3) * (1 - c))) *      x21);
	
	double x022 = ((c + ((n1 * n1) * (1 - c))) *      x22)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x23)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x24); //7
	double x023 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x22)  +  ((c + ((n2 * n2) * (1 - c))) *      x23)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x24);
	double x024 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x22)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x23)  +   ((c + ((n3 * n3) * (1 - c))) *      x24);
	
	double x025 = ((c + ((n1 * n1) * (1 - c))) *      x25)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x26)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x27); //8
	double x026 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x25)  +  ((c + ((n2 * n2) * (1 - c))) *      x26)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x27);
	double x027 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x25)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x26)  +   ((c + ((n3 * n3) * (1 - c))) *      x27);
	
	double x028 = ((c + ((n1 * n1) * (1 - c))) *      x28)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x29)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x30); //9
	double x029 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x28)  +  ((c + ((n2 * n2) * (1 - c))) *      x29)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x30);
	double x030 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x28)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x29)  +   ((c + ((n3 * n3) * (1 - c))) *      x30);
	
	double x031 = ((c + ((n1 * n1) * (1 - c))) *      x31)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x32)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x33); //10
	double x032 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x31)  +  ((c + ((n2 * n2) * (1 - c))) *      x32)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x33);
	double x033 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x31)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x32)  +   ((c + ((n3 * n3) * (1 - c))) *      x33);
	
	double x034 = ((c + ((n1 * n1) * (1 - c))) *      x34)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x35)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x36); //11
	double x035 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x34)  +  ((c + ((n2 * n2) * (1 - c))) *      x35)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x36);
	double x036 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x34)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x35)  +   ((c + ((n3 * n3) * (1 - c))) *      x36);
	
	double x037 = ((c + ((n1 * n1) * (1 - c))) *      x37)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x38)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x39); //12
	double x038 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x37)  +  ((c + ((n2 * n2) * (1 - c))) *      x38)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x39);
	double x039 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x37)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x38)  +   ((c + ((n3 * n3) * (1 - c))) *      x39);
	
	double x040 = ((c + ((n1 * n1) * (1 - c))) *      x40)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x41)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x42); //13
	double x041 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x40)  +  ((c + ((n2 * n2) * (1 - c))) *      x41)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x42);
	double x042 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x40)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x41)  +   ((c + ((n3 * n3) * (1 - c))) *      x42);
	
	double x043 = ((c + ((n1 * n1) * (1 - c))) *      x43)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x44)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x45); //14
	double x044 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x43)  +  ((c + ((n2 * n2) * (1 - c))) *      x44)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x45);
	double x045 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x43)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x44)  +   ((c + ((n3 * n3) * (1 - c))) *      x45);
	
	double x046 = ((c + ((n1 * n1) * (1 - c))) *      x46)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x47)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x48); //15
	double x047 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x46)  +  ((c + ((n2 * n2) * (1 - c))) *      x47)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x48);
	double x048 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x46)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x47)  +   ((c + ((n3 * n3) * (1 - c))) *      x48);
	
	double x049 = ((c + ((n1 * n1) * (1 - c))) *      x49)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x50)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x51); //16
	double x050 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x49)  +  ((c + ((n2 * n2) * (1 - c))) *      x50)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x51);
	double x051 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x49)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x50)  +   ((c + ((n3 * n3) * (1 - c))) *      x51);
	
	double x052 = ((c + ((n1 * n1) * (1 - c))) *      x52)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x53)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x54); //17
	double x053 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x52)  +  ((c + ((n2 * n2) * (1 - c))) *      x53)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x54);
	double x054 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x52)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x53)  +   ((c + ((n3 * n3) * (1 - c))) *      x54);
	
	double x055 = ((c + ((n1 * n1) * (1 - c))) *      x55)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x56)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x57); //18
	double x056 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x55)  +  ((c + ((n2 * n2) * (1 - c))) *      x56)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x57);
	double x057 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x55)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x56)  +   ((c + ((n3 * n3) * (1 - c))) *      x57);
	
	double x058 = ((c + ((n1 * n1) * (1 - c))) *      x58)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x59)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x60); //17
	double x059 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x58)  +  ((c + ((n2 * n2) * (1 - c))) *      x59)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x60);
	double x060 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x58)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x59)  +   ((c + ((n3 * n3) * (1 - c))) *      x60);
	





    
        	v1 = x37 - x40;
		   v2 =  x38 - x41;       
           v3 =  x39 - x42; 
		 
		   w1 =  x25 - x40;
		   w2 =  x26 - x41;       
           w3 =  x27 - x42;                    
                 
     
 	 double b1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  
 	 double b2 = ( ( w1 * v3 ) - ( v1 * w3 ));  
 	 double b3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
          double D = sqrt( (b1 * b1) + (b2 * b2) + (b3 * b3));
   
 	 double l = sqrt( (b1*b1) + (b2*b2) + (b3*b3));
 	double d = 0.666666 * gold;
 	
 	b1= d * (b1 / l);
 	b2= d * (b2 / l);
 	b3= d * (b3 / l);

	  
		t.Draw2(
                  x01,  x02,  x03, 
                  x04,  x05,  x06,
                  x07,  x08,  x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n, b1*L, b2*L, b3*L
                 );     
             
             }  	  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
	
			  
			  
			  
			  
			  
			  
				
	
	for( double i = 1.0; i <=2.0 ; ++i)
  {
  //	double partition = 2.0  ;
  	//i = i * partition;
  angle = 3.14159265358979323846264338 * i;
   c = cos(angle);
   s = sin(angle);
	//i=i/partition;
	
	double n1 = 0.0;//-0.10995;
	double n2 = 0.0;//0.940809;
	double n3 = 1.0;//-0.53262;
	
	
	  
	
	
	double x01 = ((c + ((n1 * n1) * (1 - c))) *      x1)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x2)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x3); //0
	double x02 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x1)  +  ((c + ((n2 * n2) * (1 - c))) *      x2)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x3);
	double x03 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x1)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x2)  +   ((c + ((n3 * n3) * (1 - c))) *      x3);
	
	double x04 = ((c + ((n1 * n1) * (1 - c))) *      x4)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x5)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x6); //1
	double x05 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x4)  +  ((c + ((n2 * n2) * (1 - c))) *      x5)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x6);
	double x06 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x4)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x5)  +   ((c + ((n3 * n3) * (1 - c))) *      x6);
	
	double x07 = ((c + ((n1 * n1) * (1 - c))) *      x7)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x8)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x9); //2
	double x08 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x7)  +  ((c + ((n2 * n2) * (1 - c))) *      x8)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x9);
	double x09 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x7)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x8)  +   ((c + ((n3 * n3) * (1 - c))) *      x9);
	
	double x010 = ((c + ((n1 * n1) * (1 - c))) *      x10)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x11)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x12); //3
	double x011 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x10)  +  ((c + ((n2 * n2) * (1 - c))) *      x11)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x12);
	double x012 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x10)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x11)  +   ((c + ((n3 * n3) * (1 - c))) *      x12);
	
	double x013 = ((c + ((n1 * n1) * (1 - c))) *      x13)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x14)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x15); //4
	double x014 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x13)  +  ((c + ((n2 * n2) * (1 - c))) *      x14)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x15);
	double x015 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x13)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x14)  +   ((c + ((n3 * n3) * (1 - c))) *      x15);
	
	double x016 = ((c + ((n1 * n1) * (1 - c))) *      x16)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x17)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x18); //5
	double x017 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x16)  +  ((c + ((n2 * n2) * (1 - c))) *      x17)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x18);
	double x018 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x16)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x17)  +   ((c + ((n3 * n3) * (1 - c))) *      x18);
	
	double x019 = ((c + ((n1 * n1) * (1 - c))) *      x19)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x20)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x21); //6
	double x020 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x19)  +  ((c + ((n2 * n2) * (1 - c))) *      x20)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x21);
	double x021 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x19)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x20)  +   ((c + ((n3 * n3) * (1 - c))) *      x21);
	
	double x022 = ((c + ((n1 * n1) * (1 - c))) *      x22)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x23)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x24); //7
	double x023 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x22)  +  ((c + ((n2 * n2) * (1 - c))) *      x23)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x24);
	double x024 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x22)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x23)  +   ((c + ((n3 * n3) * (1 - c))) *      x24);
	
	double x025 = ((c + ((n1 * n1) * (1 - c))) *      x25)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x26)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x27); //8
	double x026 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x25)  +  ((c + ((n2 * n2) * (1 - c))) *      x26)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x27);
	double x027 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x25)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x26)  +   ((c + ((n3 * n3) * (1 - c))) *      x27);
	
	double x028 = ((c + ((n1 * n1) * (1 - c))) *      x28)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x29)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x30); //9
	double x029 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x28)  +  ((c + ((n2 * n2) * (1 - c))) *      x29)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x30);
	double x030 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x28)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x29)  +   ((c + ((n3 * n3) * (1 - c))) *      x30);
	
	double x031 = ((c + ((n1 * n1) * (1 - c))) *      x31)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x32)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x33); //10
	double x032 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x31)  +  ((c + ((n2 * n2) * (1 - c))) *      x32)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x33);
	double x033 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x31)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x32)  +   ((c + ((n3 * n3) * (1 - c))) *      x33);
	
	double x034 = ((c + ((n1 * n1) * (1 - c))) *      x34)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x35)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x36); //11
	double x035 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x34)  +  ((c + ((n2 * n2) * (1 - c))) *      x35)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x36);
	double x036 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x34)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x35)  +   ((c + ((n3 * n3) * (1 - c))) *      x36);
	
	double x037 = ((c + ((n1 * n1) * (1 - c))) *      x37)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x38)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x39); //12
	double x038 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x37)  +  ((c + ((n2 * n2) * (1 - c))) *      x38)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x39);
	double x039 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x37)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x38)  +   ((c + ((n3 * n3) * (1 - c))) *      x39);
	
	double x040 = ((c + ((n1 * n1) * (1 - c))) *      x40)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x41)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x42); //13
	double x041 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x40)  +  ((c + ((n2 * n2) * (1 - c))) *      x41)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x42);
	double x042 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x40)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x41)  +   ((c + ((n3 * n3) * (1 - c))) *      x42);
	
	double x043 = ((c + ((n1 * n1) * (1 - c))) *      x43)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x44)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x45); //14
	double x044 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x43)  +  ((c + ((n2 * n2) * (1 - c))) *      x44)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x45);
	double x045 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x43)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x44)  +   ((c + ((n3 * n3) * (1 - c))) *      x45);
	
	double x046 = ((c + ((n1 * n1) * (1 - c))) *      x46)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x47)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x48); //15
	double x047 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x46)  +  ((c + ((n2 * n2) * (1 - c))) *      x47)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x48);
	double x048 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x46)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x47)  +   ((c + ((n3 * n3) * (1 - c))) *      x48);
	
	double x049 = ((c + ((n1 * n1) * (1 - c))) *      x49)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x50)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x51); //16
	double x050 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x49)  +  ((c + ((n2 * n2) * (1 - c))) *      x50)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x51);
	double x051 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x49)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x50)  +   ((c + ((n3 * n3) * (1 - c))) *      x51);
	
	double x052 = ((c + ((n1 * n1) * (1 - c))) *      x52)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x53)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x54); //17
	double x053 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x52)  +  ((c + ((n2 * n2) * (1 - c))) *      x53)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x54);
	double x054 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x52)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x53)  +   ((c + ((n3 * n3) * (1 - c))) *      x54);
	
	double x055 = ((c + ((n1 * n1) * (1 - c))) *      x55)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x56)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x57); //18
	double x056 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x55)  +  ((c + ((n2 * n2) * (1 - c))) *      x56)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x57);
	double x057 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x55)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x56)  +   ((c + ((n3 * n3) * (1 - c))) *      x57);
	
	double x058 = ((c + ((n1 * n1) * (1 - c))) *      x58)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x59)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x60); //17
	double x059 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x58)  +  ((c + ((n2 * n2) * (1 - c))) *      x59)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x60);
	double x060 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x58)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x59)  +   ((c + ((n3 * n3) * (1 - c))) *      x60);
	





           



if(i==1.0)
{
           v1 =  x22 - x31;
		   v2 =  x23 - x32 ;      
           v3 =  x24 - x33; 
		 
		   w1 =  x55 - x31;
		   w2 =  x56 - x32;       
           w3 =  x57 - x33;                    
                 
     
 	 double b1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  
 	 double b2 = ( ( w1 * v3 ) - ( v1 * w3 ));  
 	 double b3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
          double D = sqrt( (b1 * b1) + (b2 * b2) + (b3 * b3));
   
 	 double l = sqrt( (b1*b1) + (b2*b2) + (b3*b3));
 	double d = 0.666666 * gold;
 	
 	b1= d * (b1 / l);
 	b2= d * (b2 / l);
 	b3= d * (b3 / l);

t.Draw3(
                  x01,  x02,  x03, 
                  x04,  x05,  x06,
                  x07,  x08,  x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n, b1*L, b2*L, b3*L
                 );
             }
      else{
      	   v1 = x43 - x13;
		   v2 = x44 - x14;       
           v3 = x45 - x15; 
		 
		   w1 = x10 - x13;
		   w2 = x11 - x14;       
           w3 = x12 - x15;                    
                 
     
 	 double b1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  
 	 double b2 = ( ( w1 * v3 ) - ( v1 * w3 ));  
 	 double b3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
          double D = sqrt( (b1 * b1) + (b2 * b2) + (b3 * b3));
   
 	 double l = sqrt( (b1*b1) + (b2*b2) + (b3*b3));
 	double d = 0.666666 * gold;
 	
 	b1= d * (b1 / l);
 	b2= d * (b2 / l);
 	b3= d * (b3 / l);

cout<<endl<<endl<<endl<<"b1 = "<<b1;
 	cout<<endl<<endl<<endl<<"b2 = "<<b2;
 	cout<<endl<<endl<<endl<<"b3 = "<<b3;	  
		t.Draw3(
                  x01,  x02,  x03, 
                  x04,  x05,  x06,
                  x07,  x08,  x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n, b1*L, b2*L, b3*L
                 );     
             };
             }
                      
             
        
		
		
		for( double i = 1.0; i <=1.0 ; ++i)
  {
  //	double partition = 2.0  ;
  	//i = i * partition;
  angle = 3.14159265358979323846264338 * i;
   c = cos(angle);
   s = sin(angle);
	//i=i/partition;
	
	double n1 = 0.0;//-0.10995;
	double n2 = 1.0;//0.940809;
	double n3 = 0.0;//-0.53262;
	
	
	  
	
	
	double x01 = ((c + ((n1 * n1) * (1 - c))) *      x1)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x2)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x3); //0
	double x02 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x1)  +  ((c + ((n2 * n2) * (1 - c))) *      x2)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x3);
	double x03 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x1)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x2)  +   ((c + ((n3 * n3) * (1 - c))) *      x3);
	
	double x04 = ((c + ((n1 * n1) * (1 - c))) *      x4)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x5)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x6); //1
	double x05 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x4)  +  ((c + ((n2 * n2) * (1 - c))) *      x5)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x6);
	double x06 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x4)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x5)  +   ((c + ((n3 * n3) * (1 - c))) *      x6);
	
	double x07 = ((c + ((n1 * n1) * (1 - c))) *      x7)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x8)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x9); //2
	double x08 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x7)  +  ((c + ((n2 * n2) * (1 - c))) *      x8)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x9);
	double x09 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x7)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x8)  +   ((c + ((n3 * n3) * (1 - c))) *      x9);
	
	double x010 = ((c + ((n1 * n1) * (1 - c))) *      x10)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x11)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x12); //3
	double x011 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x10)  +  ((c + ((n2 * n2) * (1 - c))) *      x11)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x12);
	double x012 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x10)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x11)  +   ((c + ((n3 * n3) * (1 - c))) *      x12);
	
	double x013 = ((c + ((n1 * n1) * (1 - c))) *      x13)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x14)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x15); //4
	double x014 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x13)  +  ((c + ((n2 * n2) * (1 - c))) *      x14)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x15);
	double x015 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x13)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x14)  +   ((c + ((n3 * n3) * (1 - c))) *      x15);
	
	double x016 = ((c + ((n1 * n1) * (1 - c))) *      x16)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x17)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x18); //5
	double x017 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x16)  +  ((c + ((n2 * n2) * (1 - c))) *      x17)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x18);
	double x018 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x16)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x17)  +   ((c + ((n3 * n3) * (1 - c))) *      x18);
	
	double x019 = ((c + ((n1 * n1) * (1 - c))) *      x19)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x20)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x21); //6
	double x020 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x19)  +  ((c + ((n2 * n2) * (1 - c))) *      x20)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x21);
	double x021 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x19)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x20)  +   ((c + ((n3 * n3) * (1 - c))) *      x21);
	
	double x022 = ((c + ((n1 * n1) * (1 - c))) *      x22)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x23)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x24); //7
	double x023 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x22)  +  ((c + ((n2 * n2) * (1 - c))) *      x23)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x24);
	double x024 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x22)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x23)  +   ((c + ((n3 * n3) * (1 - c))) *      x24);
	
	double x025 = ((c + ((n1 * n1) * (1 - c))) *      x25)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x26)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x27); //8
	double x026 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x25)  +  ((c + ((n2 * n2) * (1 - c))) *      x26)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x27);
	double x027 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x25)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x26)  +   ((c + ((n3 * n3) * (1 - c))) *      x27);
	
	double x028 = ((c + ((n1 * n1) * (1 - c))) *      x28)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x29)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x30); //9
	double x029 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x28)  +  ((c + ((n2 * n2) * (1 - c))) *      x29)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x30);
	double x030 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x28)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x29)  +   ((c + ((n3 * n3) * (1 - c))) *      x30);
	
	double x031 = ((c + ((n1 * n1) * (1 - c))) *      x31)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x32)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x33); //10
	double x032 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x31)  +  ((c + ((n2 * n2) * (1 - c))) *      x32)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x33);
	double x033 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x31)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x32)  +   ((c + ((n3 * n3) * (1 - c))) *      x33);
	
	double x034 = ((c + ((n1 * n1) * (1 - c))) *      x34)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x35)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x36); //11
	double x035 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x34)  +  ((c + ((n2 * n2) * (1 - c))) *      x35)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x36);
	double x036 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x34)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x35)  +   ((c + ((n3 * n3) * (1 - c))) *      x36);
	
	double x037 = ((c + ((n1 * n1) * (1 - c))) *      x37)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x38)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x39); //12
	double x038 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x37)  +  ((c + ((n2 * n2) * (1 - c))) *      x38)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x39);
	double x039 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x37)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x38)  +   ((c + ((n3 * n3) * (1 - c))) *      x39);
	
	double x040 = ((c + ((n1 * n1) * (1 - c))) *      x40)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x41)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x42); //13
	double x041 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x40)  +  ((c + ((n2 * n2) * (1 - c))) *      x41)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x42);
	double x042 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x40)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x41)  +   ((c + ((n3 * n3) * (1 - c))) *      x42);
	
	double x043 = ((c + ((n1 * n1) * (1 - c))) *      x43)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x44)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x45); //14
	double x044 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x43)  +  ((c + ((n2 * n2) * (1 - c))) *      x44)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x45);
	double x045 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x43)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x44)  +   ((c + ((n3 * n3) * (1 - c))) *      x45);
	
	double x046 = ((c + ((n1 * n1) * (1 - c))) *      x46)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x47)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x48); //15
	double x047 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x46)  +  ((c + ((n2 * n2) * (1 - c))) *      x47)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x48);
	double x048 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x46)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x47)  +   ((c + ((n3 * n3) * (1 - c))) *      x48);
	
	double x049 = ((c + ((n1 * n1) * (1 - c))) *      x49)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x50)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x51); //16
	double x050 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x49)  +  ((c + ((n2 * n2) * (1 - c))) *      x50)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x51);
	double x051 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x49)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x50)  +   ((c + ((n3 * n3) * (1 - c))) *      x51);
	
	double x052 = ((c + ((n1 * n1) * (1 - c))) *      x52)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x53)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x54); //17
	double x053 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x52)  +  ((c + ((n2 * n2) * (1 - c))) *      x53)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x54);
	double x054 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x52)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x53)  +   ((c + ((n3 * n3) * (1 - c))) *      x54);
	
	double x055 = ((c + ((n1 * n1) * (1 - c))) *      x55)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x56)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x57); //18
	double x056 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x55)  +  ((c + ((n2 * n2) * (1 - c))) *      x56)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x57);
	double x057 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x55)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x56)  +   ((c + ((n3 * n3) * (1 - c))) *      x57);
	
	double x058 = ((c + ((n1 * n1) * (1 - c))) *      x58)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x59)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x60); //17
	double x059 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x58)  +  ((c + ((n2 * n2) * (1 - c))) *      x59)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x60);
	double x060 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x58)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x59)  +   ((c + ((n3 * n3) * (1 - c))) *      x60);
	





    
           v1 =  x43 - x52;
		   v2 =  x44 - x53;       
           v3 =  x45 - x54; 
		 
		   w1 =  x46 - x52;
		   w2 =  x47 - x53;       
           w3 =  x48 - x54;                    
                 
     
 	 double b1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  
 	 double b2 = ( ( w1 * v3 ) - ( v1 * w3 ));  
 	 double b3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
          double D = sqrt( (b1 * b1) + (b2 * b2) + (b3 * b3));
   
 	 double l = sqrt( (b1*b1) + (b2*b2) + (b3*b3));
 	double d = 0.666666 * gold;
 	
 	b1= d * (b1 / l);
 	b2= d * (b2 / l);
 	b3= d * (b3 / l);

	  
		t.Draw3(
                  x01,  x02,  x03, 
                  x04,  x05,  x06,
                  x07,  x08,  x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n, b1*L, b2*L, b3*L
                 );    
             
             }  
			  
			  
			  
			  
			  
			  
		for( double i = 1.0; i <=1.0 ; ++i)
  {
  //	double partition = 2.0  ;
  	//i = i * partition;
  angle = 3.14159265358979323846264338 * i;
   c = cos(angle);
   s = sin(angle);
	//i=i/partition;
	
	double n1 = 1.0;//-0.10995;
	double n2 = 0.0;//0.940809;
	double n3 = 0.0;//-0.53262;
	
	
	  
	
	
	double x01 = ((c + ((n1 * n1) * (1 - c))) *      x1)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x2)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x3); //0
	double x02 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x1)  +  ((c + ((n2 * n2) * (1 - c))) *      x2)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x3);
	double x03 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x1)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x2)  +   ((c + ((n3 * n3) * (1 - c))) *      x3);
	
	double x04 = ((c + ((n1 * n1) * (1 - c))) *      x4)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x5)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x6); //1
	double x05 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x4)  +  ((c + ((n2 * n2) * (1 - c))) *      x5)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x6);
	double x06 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x4)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x5)  +   ((c + ((n3 * n3) * (1 - c))) *      x6);
	
	double x07 = ((c + ((n1 * n1) * (1 - c))) *      x7)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x8)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x9); //2
	double x08 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x7)  +  ((c + ((n2 * n2) * (1 - c))) *      x8)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x9);
	double x09 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x7)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x8)  +   ((c + ((n3 * n3) * (1 - c))) *      x9);
	
	double x010 = ((c + ((n1 * n1) * (1 - c))) *      x10)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x11)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x12); //3
	double x011 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x10)  +  ((c + ((n2 * n2) * (1 - c))) *      x11)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x12);
	double x012 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x10)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x11)  +   ((c + ((n3 * n3) * (1 - c))) *      x12);
	
	double x013 = ((c + ((n1 * n1) * (1 - c))) *      x13)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x14)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x15); //4
	double x014 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x13)  +  ((c + ((n2 * n2) * (1 - c))) *      x14)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x15);
	double x015 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x13)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x14)  +   ((c + ((n3 * n3) * (1 - c))) *      x15);
	
	double x016 = ((c + ((n1 * n1) * (1 - c))) *      x16)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x17)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x18); //5
	double x017 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x16)  +  ((c + ((n2 * n2) * (1 - c))) *      x17)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x18);
	double x018 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x16)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x17)  +   ((c + ((n3 * n3) * (1 - c))) *      x18);
	
	double x019 = ((c + ((n1 * n1) * (1 - c))) *      x19)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x20)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x21); //6
	double x020 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x19)  +  ((c + ((n2 * n2) * (1 - c))) *      x20)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x21);
	double x021 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x19)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x20)  +   ((c + ((n3 * n3) * (1 - c))) *      x21);
	
	double x022 = ((c + ((n1 * n1) * (1 - c))) *      x22)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x23)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x24); //7
	double x023 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x22)  +  ((c + ((n2 * n2) * (1 - c))) *      x23)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x24);
	double x024 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x22)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x23)  +   ((c + ((n3 * n3) * (1 - c))) *      x24);
	
	double x025 = ((c + ((n1 * n1) * (1 - c))) *      x25)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x26)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x27); //8
	double x026 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x25)  +  ((c + ((n2 * n2) * (1 - c))) *      x26)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x27);
	double x027 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x25)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x26)  +   ((c + ((n3 * n3) * (1 - c))) *      x27);
	
	double x028 = ((c + ((n1 * n1) * (1 - c))) *      x28)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x29)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x30); //9
	double x029 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x28)  +  ((c + ((n2 * n2) * (1 - c))) *      x29)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x30);
	double x030 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x28)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x29)  +   ((c + ((n3 * n3) * (1 - c))) *      x30);
	
	double x031 = ((c + ((n1 * n1) * (1 - c))) *      x31)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x32)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x33); //10
	double x032 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x31)  +  ((c + ((n2 * n2) * (1 - c))) *      x32)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x33);
	double x033 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x31)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x32)  +   ((c + ((n3 * n3) * (1 - c))) *      x33);
	
	double x034 = ((c + ((n1 * n1) * (1 - c))) *      x34)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x35)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x36); //11
	double x035 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x34)  +  ((c + ((n2 * n2) * (1 - c))) *      x35)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x36);
	double x036 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x34)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x35)  +   ((c + ((n3 * n3) * (1 - c))) *      x36);
	
	double x037 = ((c + ((n1 * n1) * (1 - c))) *      x37)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x38)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x39); //12
	double x038 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x37)  +  ((c + ((n2 * n2) * (1 - c))) *      x38)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x39);
	double x039 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x37)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x38)  +   ((c + ((n3 * n3) * (1 - c))) *      x39);
	
	double x040 = ((c + ((n1 * n1) * (1 - c))) *      x40)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x41)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x42); //13
	double x041 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x40)  +  ((c + ((n2 * n2) * (1 - c))) *      x41)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x42);
	double x042 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x40)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x41)  +   ((c + ((n3 * n3) * (1 - c))) *      x42);
	
	double x043 = ((c + ((n1 * n1) * (1 - c))) *      x43)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x44)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x45); //14
	double x044 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x43)  +  ((c + ((n2 * n2) * (1 - c))) *      x44)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x45);
	double x045 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x43)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x44)  +   ((c + ((n3 * n3) * (1 - c))) *      x45);
	
	double x046 = ((c + ((n1 * n1) * (1 - c))) *      x46)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x47)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x48); //15
	double x047 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x46)  +  ((c + ((n2 * n2) * (1 - c))) *      x47)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x48);
	double x048 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x46)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x47)  +   ((c + ((n3 * n3) * (1 - c))) *      x48);
	
	double x049 = ((c + ((n1 * n1) * (1 - c))) *      x49)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x50)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x51); //16
	double x050 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x49)  +  ((c + ((n2 * n2) * (1 - c))) *      x50)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x51);
	double x051 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x49)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x50)  +   ((c + ((n3 * n3) * (1 - c))) *      x51);
	
	double x052 = ((c + ((n1 * n1) * (1 - c))) *      x52)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x53)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x54); //17
	double x053 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x52)  +  ((c + ((n2 * n2) * (1 - c))) *      x53)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x54);
	double x054 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x52)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x53)  +   ((c + ((n3 * n3) * (1 - c))) *      x54);
	
	double x055 = ((c + ((n1 * n1) * (1 - c))) *      x55)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x56)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x57); //18
	double x056 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x55)  +  ((c + ((n2 * n2) * (1 - c))) *      x56)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x57);
	double x057 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x55)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x56)  +   ((c + ((n3 * n3) * (1 - c))) *      x57);
	
	double x058 = ((c + ((n1 * n1) * (1 - c))) *      x58)  +  (((n1 * n2 * (1 - c)) - (n3 * s)) * x59)  +  (( (n1 * n3 * (1 - c)) + (n2 * s)) * x60); //17
	double x059 = (((n1 * n2 * (1 - c)) + (n3 * s)) * x58)  +  ((c + ((n2 * n2) * (1 - c))) *      x59)  +  (( (n2 * n3 * (1 - c)) - (n1 * s)) * x60);
	double x060 = (((n1 * n3 * (1 - c)) - (n2 * s)) * x58)  +  (((n2 * n3 * (1 - c)) + (n1 * s)) * x59)  +   ((c + ((n3 * n3) * (1 - c))) *      x60);
	





    
        	v1 =  x34 - x49;
		   v2 =  x35 - x50;       
           v3 =  x36 - x51; 
		 
		   w1 =  x37 - x49;
		   w2 =  x38 - x50;       
           w3 =  x39 - x51;                     
                 
     
 	 double b1 = ( ( (v2 * w3 ) - ( w2 * v3 )));  
 	 double b2 = ( ( w1 * v3 ) - ( v1 * w3 ));  
 	 double b3 = ( ( v1 * w2 ) - ( w1 * v2 ));  
          double D = sqrt( (b1 * b1) + (b2 * b2) + (b3 * b3));
   
 	 double l = sqrt( (b1*b1) + (b2*b2) + (b3*b3));
 	double d = 0.666666 * gold;
 	
 	b1= d * (b1 / l);
 	b2= d * (b2 / l);
 	b3= d * (b3 / l);

	  
		t.Draw3(
                  x01,  x02,  x03, 
                  x04,  x05,  x06,
                  x07,  x08,  x09,
				  x010, x011, x012,
				  x013, x014, x015, 
                  x016, x017, x018,
                  x019, x020,  x021,
				  x022, x023,  x024,
				  x025, x026,  x027, 
                  x028, x029,  x030,
                  x031, x032,  x033,
				  x034, x035,  x036,
				  x037, x038,  x039,
				  x040, x041,  x042,
				  x043, x044,  x045,
				  x046, x047,  x048,
				  x049, x050,  x051,
				  x052, x053,  x054,
				  x055, x056,  x057,
				  x058, x059,  x060,
				 n, b1*L, b2*L, b3*L
                 );     
             
             }    
			  


     return EXIT_SUCCESS;
}


