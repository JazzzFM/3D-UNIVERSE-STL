#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "stl.hpp"
#include "Vector3D.hpp"
#include "Matrix3D.hpp"


using namespace std;

Vector3D Origin =  Vector3D( 0.0, 0.0, 0.0 );
Vector3D I = Vector3D( 1.0, 0.0,0.0	 );
Vector3D J = Vector3D( 0.0,  1.0, 0.0 );			 
Vector3D K = Vector3D(0.0, 0.0, 1.0 );
double PI = 3.14159265358979;
   


class Torus : public STL {
     public:
	Torus(const char nombre[]);
	
				  
	void Edge(const Vector3D& a, const Vector3D& b,
	          double d1, double d2, double d3);
	void Axis(const Vector3D& a, const Vector3D& b, const Vector3D& c);			  
		  
};


Torus::Torus(const char nombre[]) : STL(nombre)
{
}

void Torus::Axis(const Vector3D& a, const Vector3D& b, const Vector3D& c){
	facet(a, b, c);
}



void Torus::Edge(const Vector3D& a1, const Vector3D& b1,
                double d1, double d2, double d3){
	 
     Vector3D u[2] = {
              a1,
			  b1     	 
	 }; 
	 
	 Vector3D vectorD =  operator - (u[0], u[1]);
     
       
     Vector3D h[4] = {
	    Vector3D(vectorD.x(), vectorD.y(), 0.0),//proyXYp
	    Vector3D(vectorD.x(), vectorD.y(), vectorD.z()),//palanca
		Vector3D(0.0, 0.0, vectorD.z()),
		Vector3D(
		         vectorD.x()*0.5 + u[1].x(),
		         vectorD.y()*0.5 + u[1].y(),
				 vectorD.z()*0.5 + u[1].z()
				)       
	                 };
	                 
	 double longitud = abs(vectorD )*0.5;                
	 double width = 0.05;                
	                 
	 Vector3D s[8] = {
	 	Vector3D( width, width, longitud),
	 	Vector3D(-width, width, longitud),
	 	Vector3D(-width,-width, longitud),
	 	Vector3D( width,-width, longitud),
	 	
	 	Vector3D( width, width,-longitud),
	 	Vector3D(-width, width,-longitud),
	 	Vector3D(-width,-width,-longitud),
	 	Vector3D( width,-width,-longitud)
	 	
	 };  
	 
	int a[5] = {0, 4, 2, 0, 1};
	 
	 
     /////coordenadas esfericas de p
     //ángulo phi
     double P_pro_p_k = operator * ( h[0], I);
     double abs_I = abs(I);
     double abs_pro_p = abs(h[0]);
     double phi = acos( (P_pro_p_k) / ( abs_pro_p * abs_I) );
     phi = phi * (360/(2*PI));
     
     double P_p_k;
    //ángulo teta
    if(h[1].z() > 0.0) {
     P_p_k = operator * ( h[1], K); 
    }else{
    	P_p_k = operator * ( h[1],-K);
	}
	
	 double abs_K = abs(K);
     double abs_p = abs(h[1]);
     double teta = acos( (P_p_k) / ( abs_p * abs_K) );
     teta = teta * (360/(2*PI));
	
     Matrix3D Rz_phi1 = Matrix3D('x', 0.0 )*
	                    Matrix3D('y', 0.0 ) *
				        Matrix3D('z', phi);
				        
     Matrix3D Ry_teta1 = Matrix3D('x', 0.0 ) *
	                    Matrix3D('y', teta ) *
				        Matrix3D('z',  0.0);
				       
	 Matrix3D R_alpha = Matrix3D('x', PI * 0.5 )*
	                    Matrix3D('y', 0.0 ) *
				        Matrix3D('z', 0.0 );	
						        
     Matrix3D Ry_teta2 = Matrix3D('x', 0.0  )*
	                     Matrix3D('y',-teta ) *
				         Matrix3D('z', 0.0);  
						    
	 Matrix3D Rz_phi2 = Matrix3D('x', 0.0 )*
	                    Matrix3D('y', 0.0 ) *
				        Matrix3D('z', -phi);
						
						if(teta == 0.0){
		  	for(int k = 0; k <= 7; k++)
          s[k] = s[k] + h[3]; 
		  }else{
		  		if(vectorD.y() > 0.0){
    	for(int k = 0; k <= 7; k++) {
              s[k] = Rz_phi1  *
					 Ry_teta2 * 
			              s[k];
          }
	}else{
		for(int k = 0; k <= 7; k++) {
              s[k] = Rz_phi2  *
					 Ry_teta2 * 
			              s[k];
          }
	}
          for(int k = 0; k <= 7; k++)
          s[k] = s[k] + h[3]; 
		  }	
   
	      
	      for(int k = 0; k <= 7; k++)
		  s[k] = s[k] + Vector3D(d1, d2, d3);
		  
		   
          
						
						        
    
          
         /* for(int k = 0; k <= 7; k++)
          s[k] = s[k] - h[2];*/
          
    
        
        
                     
     for(int i = 0; i<= 1; i++){
	 if(i==1){
	          facet(s[a[i]+2], s[a[i]+1], s[a[i]]);
	          facet(s[a[i]], s[a[i]+3], s[a[i]+2]);
	 }else{
	 	      facet(s[a[i]], s[a[i]+1], s[a[i]+2]);
	          facet(s[a[i]+2], s[a[i]+3], s[a[i]]); 
	  }
	 }

for(int i = 2; i<= 4; i++){
	 facet(s[a[i]], s[a[i]+4], s[a[i]+5]);
	 facet(s[a[i]+5], s[a[i]+1], s[a[i]]);
}
     facet(s[3], s[7], s[4]);
	 facet(s[4], s[0], s[3]);    
	
}
		     
                 

int main(int argc, char* argv[])
{

    
    int n = 20;
    double r = 1.0;
    double angle = 3.14159265358979 * 0.25;
    double gold = (1+sqrt(5))/2.0;
    double a1 = 0.5 * gold; 
    double a2 = gold; 
    double d1 = 2.0 * a2;
    double d2 = 2.0 * a2;
    double d3 = 2.0 * a2;
	     
     Torus t("2truncatedcubichoneycomb.stl");
     
     Vector3D Oct[12] = {
     	              Vector3D( a1, 0.0, 0.0), //0
                      Vector3D(0.0, -a1, 0.0), //1
					  Vector3D(-a1, 0.0, 0.0), //2
					  Vector3D(0.0,  a1, 0.0), //3
					  Vector3D(0.0, 0.0,  a1), //4
					  Vector3D(0.0, 0.0, -a1), //5
					  
					  Vector3D( a2, 0.0, 0.0), //6
					  Vector3D(0.0, -a2, 0.0), //7
					  Vector3D(-a2, 0.0, 0.0), //8
					  Vector3D(0.0,  a2, 0.0), //9
					  Vector3D(0.0, 0.0,  a2), //10
					  Vector3D(0.0, 0.0, -a2)  //11
};
	 
	 for(double k1 = 1.0; k1 <= 4.0; k1++){
	 	d1 = d1 * k1;
	 for(double k2 = 1.0; k2 <= 4.0; k2++){
	 	d2 = d2 * k2;
	 	for(double k3 = 1.0; k3 <= 4.0; k3++)
	 {
	 	d3 = d3 * k3;
	 
	 
	 for(int k = 0; k <= 3; k++ )  
	 {  
	    if(k < 3){
	    	t.Edge( Oct[k+1], Oct[k], d1, d2, d3);
		}else{
			t.Edge( Oct[0], Oct[3], d1, d2, d3);
		}
	 }
	 
	  for(int k = 0; k <= 3; k++ ){
	  	t.Edge( Oct[4], Oct[k], d1, d2, d3);
	  }
	  
	  for(int k = 0; k <= 3; k++ ){
	  	t.Edge( Oct[k], Oct[5], d1, d2, d3);
	  }
    for(int k = 0; k <= 5; k++)
      t.Edge(Oct[k+6], Oct[k], d1, d2, d3);
      
      d3 = d3/k3;
	 }
	    
      d2 = d2/k2;
	 }
	 d1 = d1/k1;
	 }
	 			  
     return EXIT_SUCCESS;
}
