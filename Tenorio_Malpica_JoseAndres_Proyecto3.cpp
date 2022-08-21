#include <GL/glut.h>
void init(void){
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0, 1, 10 ,0 ,0 ,0 ,0,1 ,5);
	
	glMatrixMode(GL_PROJECTION);
	
	gluPerspective(45, 1, 1, 30);
}
	void materialTronco(void){
		GLfloat amb1[]={0.23125,0.23125,0.23125,1.0};
		GLfloat amb2[]={0.773911,0.773911,0.773911,1.0};
		GLfloat amb3[]={0.2775,0.2775,0.2775,1.0};
		
		glMaterialfv(GL_FRONT, GL_AMBIENT, amb1);
		glMaterialfv(GL_FRONT, GL_SPECULAR, amb2);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, amb3);
		glMaterialf(GL_FRONT, GL_SHININESS, 89.6);
		glEnable(GL_COLOR_MATERIAL);
	}
	void iluminaHojas(void)
	{
		GLfloat Posicionytipo[ ]={6,6,6,0};
		GLfloat Colorambiente[ ]={230.0/255.0,230.0/255.0,230.0/255.0,0};
		GLfloat Colordifuso[ ]={0.0,0.9,0.0};
		GLfloat direccion[ ]={0,0,1};
		glLightfv(GL_LIGHT0,GL_POSITION,Posicionytipo);
		glLightfv(GL_LIGHT0,GL_AMBIENT,Colorambiente);
		glLightfv(GL_LIGHT0,GL_DIFFUSE,Colordifuso);
		glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION,1.0);
		glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0);
		glLightf(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, 0);
		//DIRECCIONES
		glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, direccion);
		glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 10);
		glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 20);
		
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);  
		glEnable(GL_LIGHT1);  
		glEnable(GL_DEPTH_TEST);
	}
	
	void iluminaLampara(void)
	{
		GLfloat Posicionytipo[ ]={6,6,6,3};
		GLfloat Colorambiente[ ]={71.0/255.0,71.0/255.0,71.0/255.0,0};
		GLfloat Colordifuso[ ]={0.1,0.1,0.1};
		GLfloat direccion[ ]={0,0,1};
		glLightfv(GL_LIGHT0,GL_POSITION,Posicionytipo);
		glLightfv(GL_LIGHT0,GL_AMBIENT,Colorambiente);
		glLightfv(GL_LIGHT0,GL_DIFFUSE,Colordifuso);
		glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION,1.0);
		glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0);
		glLightf(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, 0);
		//DIRECCIONES
		glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, direccion);
		glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 10);
		glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 20);
		
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);  
		glEnable(GL_LIGHT1);  
		glEnable(GL_DEPTH_TEST);
	}
	
	void iluminaLamparita(void)
	{
		GLfloat Posicionytipo[ ]={-1,-6,1,0	};
		GLfloat Colorambiente[ ]={162.0/255.0, 157.0/255.0,0.0/255.0};
		GLfloat Colordifuso[ ]={0.1,0.1,0.0};
		GLfloat direccion[ ]={0,0,1};
		glLightfv(GL_LIGHT0,GL_POSITION,Posicionytipo);
		glLightfv(GL_LIGHT0,GL_AMBIENT,Colorambiente);
		glLightfv(GL_LIGHT0,GL_DIFFUSE,Colordifuso);
		glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION,1.0);
		glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0);
		glLightf(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, 0);
		//DIRECCIONES
		glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, direccion);
		glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 10);
		glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 20);
		
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);  
		glEnable(GL_LIGHT1);  
		glEnable(GL_DEPTH_TEST);
	}
	
	void iluminaLamparitaE(void)
	{
		GLfloat Posicionytipo[ ]={-1,-6,1,0};
		GLfloat Colorambiente[ ]={247.0/255.0,227.0/255.0,51.0/255.0,-2};
		GLfloat Colordifuso[ ]={1,1,1};
		GLfloat direccion[ ]={0,0,1};
		glLightfv(GL_LIGHT0,GL_POSITION,Posicionytipo);
		glLightfv(GL_LIGHT0,GL_AMBIENT,Colorambiente);
		glLightfv(GL_LIGHT0,GL_DIFFUSE,Colordifuso);
		glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION,1.0);
		glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0);
		glLightf(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, 0);
		//DIRECCIONES
		glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, direccion);
		glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 10);
		glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 20);
		
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);  
		glEnable(GL_LIGHT1);  
		glEnable(GL_DEPTH_TEST);
	}
	
	void iluminaFuente(void)
	{
		GLfloat Posicionytipo[ ]={6,6,6,0};
		GLfloat Colorambiente[ ]={11.0/255.0,134.0/255.0,118.0/255.0,0};
		GLfloat Colordifuso[ ]={180.0/255.0,134.0/255.0,118.0/255.0};
		GLfloat direccion[ ]={0,0,1};
		glLightfv(GL_LIGHT0,GL_POSITION,Posicionytipo);
		glLightfv(GL_LIGHT0,GL_AMBIENT,Colorambiente);
		glLightfv(GL_LIGHT0,GL_DIFFUSE,Colordifuso);
		glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION,1.0);
		glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0);
		glLightf(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, 0);
		//DIRECCIONES
		glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, direccion);
		glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 10);
		glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 20);
		
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);  
		glEnable(GL_LIGHT1);  
		glEnable(GL_DEPTH_TEST);
	}
	void desactiva_luz(void)
	{
		glDisable(GL_LIGHTING);
		glDisable(GL_LIGHT0);
		glDisable(GL_LIGHT1);
		glDisable(GL_DEPTH_TEST);
		//glDisable(GL_COLOR_MATERIAL);
	}
	
	void Flor1(void){
		
		glColor3f(59.0/255.0, 53.0/255.0,2.0/255.0);
		glPushMatrix();
		glScaled(0.2,1,0.2);
		//glRotated(90, 1,0,0);
		glutSolidCube(1);
		glPopMatrix();
		
		glColor3f(255.0/255.0, 229.0/255.0,0.0/255.0);
		glPushMatrix();
		glTranslated(0,0.6,0);
		glScaled(0.2,0.2,0.2);
		//glRotated(45, 1,0,1);
		glutSolidSphere(1,100,25);
		glPopMatrix();
		
		glColor3f(252.0/255.0, 238.0/255.0,116.0/255.0);
		glPushMatrix();
		glTranslated(0,0.6,0);
		glScaled(0.5,0.5,0.5);
		//glRotated(45, 1,0,1);
		glutWireSphere(1,15,2);
		glPopMatrix();
	}
		
	void Flor2(void){
		glColor3f(59.0/255.0, 53.0/255.0,2.0/255.0);
		glPushMatrix();
		glScaled(0.2,1,0.2);
		//glRotated(90, 1,0,0);
		glutSolidCube(1);
		glPopMatrix();
		
		glColor3f(255.0/255.0, 229.0/255.0,0.0/255.0);
		glPushMatrix();
		glTranslated(0,0.6,0);
		glScaled(0.5,0.5,0.5);
		glRotated(90, 1,0,0);
		glutSolidCone(1,1,25,100);
		
		glPopMatrix();
		
		glColor3f(252.0/255.0, 116.0/255.0,116.0/255.0);
		glPushMatrix();
		glTranslated(0,0.7,0);
		glScaled(0.7,0.4,0.7);
		glRotated(90, 1,0,0);
		glutSolidCone(1,1,25,100);
		glPopMatrix();
	}
		
	void Flor3 (void){
		glColor3f(59.0/255.0, 53.0/255.0,2.0/255.0);
		glPushMatrix();
		glScaled(0.2,1,0.2);
		//glRotated(90, 1,0,0);
		glutSolidCube(1);
		glPopMatrix();
		
		glColor3f(138.0/255.0, 102.0/255.0,206.0/255.0);
		
		glPushMatrix();
		glTranslated(0,0.6,0.2);
		glScaled(0.5,0.1,0.5);
		
		glutSolidSphere(1,25,100);
		glPopMatrix();
		glColor3f(138.0/255.0, 102.0/255.0,206.0/255.0);
		glPushMatrix();
		glTranslated(0,0.6,-0.2);
		glScaled(0.5,0.1,0.5);

		glutSolidSphere(1,25,100);
		glPopMatrix();
		
	
		
		glColor3f(206.0/255.0, 102.0/255.0,173.0/255.0);
		
		glPushMatrix();
		glTranslated(0.2,0.6,0);
		glScaled(0.5,0.1,0.5);
		
		glutSolidSphere(1,25,100);
		glPopMatrix();
		glPushMatrix();
		glTranslated(-0.2,0.6,0);
		glScaled(0.5,0.1,0.5);
		glutSolidSphere(1,25,100);
		glPopMatrix();
		
		glColor3f(255.0/255.0, 255.0/255.0,0.0/255.0);
		glPushMatrix();
		glTranslated(0,0.6,0);
		glScaled(0.2,0.2,0.2);
		glutSolidSphere(1,25,100);
		glPopMatrix();
	}
		
		//examen
		int K=0;
	void Tetera(void){
			
			
			glPushMatrix();
			glTranslated(0,3.5,0);
			glScaled(1.1,1,1.1);
			glRotated(K,0,1,0);
			glutSolidTeapot(0.9);
			glPopMatrix();
		
	}
	void Fuente (void){
		
		iluminaFuente();
		glColor3f(124.0/255.0, 124.0/255.0,124.0/255.0);
		glPushMatrix();
		glScaled(1,0.5,1);
		glRotated(90, 1,0,0);
		glutSolidTorus(1, 2,100,25);
		glPopMatrix();
		
		glPushMatrix();
		glTranslated(0,1.5,0);
		glScaled(0.8,0.2,0.8);
		glRotated(90, 1,0,0);
		glutSolidTorus(1, 2,100,25);
		glPopMatrix();
		
		desactiva_luz();
		
		glPushMatrix();
		glTranslated(0,-0.4,0);
		glScaled(2,0.1,2);
		glutSolidSphere(1, 100,25);
		glPopMatrix();
		
		iluminaFuente();
		glPushMatrix();
		glTranslated(0,1.5,0);
		glScaled(1,3,1);
		glutSolidCube(1);
		glPopMatrix();
		
		Tetera();
		
		
		desactiva_luz();
		
		glColor3f(0.0/255.0, 255.0/255.0,205.0/255.0);
		glPushMatrix();
		glTranslated(0,1.5,0);
		glScaled(1.5,0.3,1.5);
		glutSolidSphere(1,100,25);
		glPopMatrix();
		
		glPushMatrix();
		glScaled(2.5,0.5,2.5);
		glutSolidSphere(1,100,25);
		glPopMatrix();
	}
	
	void Lampara(void){
		glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
		
		iluminaLampara();
		glPushMatrix();
		glTranslated(0,7,0);
		glScaled(0.5,0.5,0.5);
		//glRotated(90, 1,0,0);
		glutSolidTeapot(1);
		glPopMatrix();
		
		
		glPushMatrix();
		glTranslated(0,-1.2,0);
		glScaled(1,0.2,1);
		//glRotated(90, 1,0,0);
		glutSolidSphere(1,100,25);
		glPopMatrix();
		
		
		glPushMatrix();
		//glTranslated(0,3.5,0);
		glScaled(1,2.5,1);
		//glRotated(90, 1,0,0);
		glutSolidCube(1);
		glPopMatrix();
		
		glPushMatrix();
		glTranslated(0,2.5,0);
		glScaled(0.7,2.5,0.7);
		//glRotated(90, 1,0,0);
		glutSolidCube(1);
		glPopMatrix();
	
		glPushMatrix();
		glTranslated(0,3.5,0);
		glScaled(0.3,6,0.3);
		//glRotated(90, 1,0,0);
		glutSolidCube(1);
		glPopMatrix();
		
		glPushMatrix();
		glTranslated(0,6.5,0);
		glScaled(6,0.3,0.3);
		//glRotated(90, 1,0,0);
		glutSolidCube(1);
		glPopMatrix();
		
		glPushMatrix();
		glTranslated(0,6.5,0);
		glScaled(0.3,0.3,6);
		//glRotated(90, 1,0,0);
		glutSolidCube(1);
		glPopMatrix();
		desactiva_luz();
		
		iluminaLamparita();
		glColor3f(162.0/255.0, 157.0/255.0,0.0/255.0);
		
		glPushMatrix();
		glTranslated(2.8,5.9,0);
		glScaled(0.5,0.5,0.5);
		//glRotated(90, 1,0,0);
		glutSolidSphere(1,100,25);
		glPopMatrix();
		
		glPushMatrix();
		glTranslated(-2.8,5.9,0);
		glScaled(0.5,0.5,0.5);
		//glRotated(90, 1,0,0);
		glutSolidSphere(1,100,25);
		glPopMatrix();
		
		glPushMatrix();
		glTranslated(0,5.9,2.8);
		glScaled(0.5,0.5,0.5);
		//glRotated(90, 1,0,0);
		glutSolidSphere(1,100,25);
		glPopMatrix();
		
		glPushMatrix();
		glTranslated(0,5.9,-2.8);
		glScaled(0.5,0.5,0.5);
		//glRotated(90, 1,0,0);
		glutSolidSphere(1,100,25);
		glPopMatrix();
		
		desactiva_luz();
		
	}
		void Lampara2(void){
			glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
			
			iluminaLampara();
			glPushMatrix();
			glTranslated(0,7,0);
			glScaled(0.5,0.5,0.5);
			//glRotated(90, 1,0,0);
			glutSolidTeapot(1);
			glPopMatrix();
			
			
			glPushMatrix();
			glTranslated(0,-1.2,0);
			glScaled(1,0.2,1);
			//glRotated(90, 1,0,0);
			glutSolidSphere(1,100,25);
			glPopMatrix();
			
			
			glPushMatrix();
			//glTranslated(0,3.5,0);
			glScaled(1,2.5,1);
			//glRotated(90, 1,0,0);
			glutSolidCube(1);
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(0,2.5,0);
			glScaled(0.7,2.5,0.7);
			//glRotated(90, 1,0,0);
			glutSolidCube(1);
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(0,3.5,0);
			glScaled(0.3,6,0.3);
			//glRotated(90, 1,0,0);
			glutSolidCube(1);
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(0,6.5,0);
			glScaled(6,0.3,0.3);
			//glRotated(90, 1,0,0);
			glutSolidCube(1);
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(0,6.5,0);
			glScaled(0.3,0.3,6);
			//glRotated(90, 1,0,0);
			glutSolidCube(1);
			glPopMatrix();
			desactiva_luz();
			
			iluminaLamparitaE();
			glColor3f(255.0/255.0, 240.0/255.0,0.0/255.0);
			
			glPushMatrix();
			glTranslated(2.8,5.9,0);
			glScaled(0.5,0.5,0.5);
			//glRotated(90, 1,0,0);
			glutSolidSphere(1,100,25);
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(-2.8,5.9,0);
			glScaled(0.5,0.5,0.5);
			//glRotated(90, 1,0,0);
			glutSolidSphere(1,100,25);
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(0,5.9,2.8);
			glScaled(0.5,0.5,0.5);
			//glRotated(90, 1,0,0);
			glutSolidSphere(1,100,25);
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(0,5.9,-2.8);
			glScaled(0.5,0.5,0.5);
			//glRotated(90, 1,0,0);
			glutSolidSphere(1,100,25);
			glPopMatrix();
			
			desactiva_luz();
			
		}
		void mariposa1(void){
			
			glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
			//cuerpo
			glPushMatrix();
			glScaled(0.2,1,0.2);
			//glRotated(90, 1,0,0);
			glutSolidSphere(1, 100,100);
			glPopMatrix();
			
			//alas derecha arriba
			glPushMatrix();
			glRotated(-30, 0,0,1);
			glTranslated(0.4,1,0);
			glScaled(0.6,1,0.1);
			
			glutSolidSphere(1, 100,100);
			glPopMatrix();
			
			
			//color
			glColor3f(74.0/255.0, 186.0/255.0,241.0/255.0);
			glPushMatrix();
			glRotated(-60, 0,0,1);
			glTranslated(0.4,1,0);
			glScaled(0.6,1,0.1);
			
			glutSolidSphere(1, 100,100);
			glPopMatrix();
			
			//alas Izquierda arriba
			glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
			glPushMatrix();
			glRotated(30, 0,0,1);
			glTranslated(-0.4,1,0);
			glScaled(0.6,1,0.1);
			
			glutSolidSphere(1, 100,100);
			glPopMatrix();
			
			
			//color
			glColor3f(74.0/255.0, 186.0/255.0,241.0/255.0);
			glPushMatrix();
			glRotated(60, 0,0,1);
			glTranslated(-0.4,1,0);
			glScaled(0.6,1,0.1);
			
			glutSolidSphere(1, 100,100);
			glPopMatrix();
			
			
			//alas Izquierda abajo
			glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
			glPushMatrix();
			glRotated(120, 0,0,1);
			glTranslated(-0.1,1,0);
			glScaled(0.6,1,0.1);
			
			glutSolidSphere(1, 100,100);
			glPopMatrix();
			
			//alas DErecha abajo
			glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
			glPushMatrix();
			glRotated(-120, 0,0,1);
			glTranslated(0.1,1,0);
			glScaled(0.6,1,0.1);
			
			glutSolidSphere(1, 100,100);
			glPopMatrix();
			
			
		}
			
			void mariposa12(void){
				
				glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
				//cuerpo
				glPushMatrix();
				glScaled(0.2,1,0.2);
				//glRotated(90, 1,0,0);
				glutSolidSphere(1, 100,100);
				glPopMatrix();
				
				glPushMatrix();
				glRotated(-60, 0,1,0);
				//alas derecha arriba
				glPushMatrix();
				glRotated(-30, 0,0,1);
				glTranslated(0.4,1,0);
				glScaled(0.6,1,0.1);
				
				glutSolidSphere(1, 100,100);
				glPopMatrix();
				
				
				//color
				glColor3f(74.0/255.0, 186.0/255.0,241.0/255.0);
				glPushMatrix();
				glRotated(-60, 0,0,1);
				glTranslated(0.4,1,0);
				glScaled(0.6,1,0.1);
				
				glutSolidSphere(1, 100,100);
				glPopMatrix();
				
				//alas DErecha abajo
				glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
				glPushMatrix();
				glRotated(-120, 0,0,1);
				glTranslated(0.1,1,0);
				glScaled(0.6,1,0.1);
				
				glutSolidSphere(1, 100,100);
				glPopMatrix();
				glPopMatrix();
				
				glPushMatrix();
				glRotated(60, 0,1,0);
				//alas Izquierda arriba
				glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
				glPushMatrix();
				glRotated(30, 0,0,1);
				glTranslated(-0.4,1,0);
				glScaled(0.6,1,0.1);
				
				glutSolidSphere(1, 100,100);
				glPopMatrix();
				
				
				//color
				glColor3f(74.0/255.0, 186.0/255.0,241.0/255.0);
				glPushMatrix();
				glRotated(60, 0,0,1);
				glTranslated(-0.4,1,0);
				glScaled(0.6,1,0.1);
				
				glutSolidSphere(1, 100,100);
				glPopMatrix();
				
				
				//alas Izquierda abajo
				glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
				glPushMatrix();
				glRotated(120, 0,0,1);
				glTranslated(-0.1,1,0);
				glScaled(0.6,1,0.1);
				
				glutSolidSphere(1, 100,100);
				glPopMatrix();
				glPopMatrix();

				
				
			}
				
	
				void mariposa2(void){
					
					glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
					//cuerpo
					glPushMatrix();
					glScaled(0.2,1,0.2);
					//glRotated(90, 1,0,0);
					glutSolidSphere(1, 100,100);
					glPopMatrix();
					
					//alas derecha arriba
					glPushMatrix();
					glRotated(-30, 0,0,1);
					glTranslated(0.4,1,0);
					glScaled(0.6,1,0.1);
					
					glutSolidSphere(1, 100,100);
					glPopMatrix();
					
					
					//color
					glColor3f(255.0/255.0, 255.0/255.0,0.0/255.0);
					glPushMatrix();
					glRotated(-60, 0,0,1);
					glTranslated(0.4,1,0);
					glScaled(0.6,1,0.1);
					
					glutSolidSphere(1, 100,100);
					glPopMatrix();
					
					//alas Izquierda arriba
					glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
					glPushMatrix();
					glRotated(30, 0,0,1);
					glTranslated(-0.4,1,0);
					glScaled(0.6,1,0.1);
					
					glutSolidSphere(1, 100,100);
					glPopMatrix();
					
					
					//color
					glColor3f(255.0/255.0, 255.0/255.0,0.0/255.0);
					glPushMatrix();
					glRotated(60, 0,0,1);
					glTranslated(-0.4,1,0);
					glScaled(0.6,1,0.1);
					
					glutSolidSphere(1, 100,100);
					glPopMatrix();
					
					
					//alas Izquierda abajo
					glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
					glPushMatrix();
					glRotated(120, 0,0,1);
					glTranslated(-0.1,1,0);
					glScaled(0.6,1,0.1);
					
					glutSolidSphere(1, 100,100);
					glPopMatrix();
					
					//alas DErecha abajo
					glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
					glPushMatrix();
					glRotated(-120, 0,0,1);
					glTranslated(0.1,1,0);
					glScaled(0.6,1,0.1);
					
					glutSolidSphere(1, 100,100);
					glPopMatrix();
					
					
				}
					
					void mariposa21(void){
						
						glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
						//cuerpo
						glPushMatrix();
						glScaled(0.2,1,0.2);
						//glRotated(90, 1,0,0);
						glutSolidSphere(1, 100,100);
						glPopMatrix();
						
						glPushMatrix();
						glRotated(-60, 0,1,0);
						//alas derecha arriba
						glPushMatrix();
						glRotated(-30, 0,0,1);
						glTranslated(0.4,1,0);
						glScaled(0.6,1,0.1);
						
						glutSolidSphere(1, 100,100);
						glPopMatrix();
						
						
						//color
						glColor3f(255.0/255.0, 255.0/255.0,0.0/255.0);
						glPushMatrix();
						glRotated(-60, 0,0,1);
						glTranslated(0.4,1,0);
						glScaled(0.6,1,0.1);
						
						glutSolidSphere(1, 100,100);
						glPopMatrix();
						
						//alas DErecha abajo
						glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
						glPushMatrix();
						glRotated(-120, 0,0,1);
						glTranslated(0.1,1,0);
						glScaled(0.6,1,0.1);
						
						glutSolidSphere(1, 100,100);
						glPopMatrix();
						glPopMatrix();
						
						glPushMatrix();
						glRotated(60, 0,1,0);
						//alas Izquierda arriba
						glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
						glPushMatrix();
						glRotated(30, 0,0,1);
						glTranslated(-0.4,1,0);
						glScaled(0.6,1,0.1);
						
						glutSolidSphere(1, 100,100);
						glPopMatrix();
						
						
						//color
						glColor3f(255.0/255.0, 255.0/255.0,0.0/255.0);
						glPushMatrix();
						glRotated(60, 0,0,1);
						glTranslated(-0.4,1,0);
						glScaled(0.6,1,0.1);
						
						glutSolidSphere(1, 100,100);
						glPopMatrix();
						
						
						//alas Izquierda abajo
						glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
						glPushMatrix();
						glRotated(120, 0,0,1);
						glTranslated(-0.1,1,0);
						glScaled(0.6,1,0.1);
						
						glutSolidSphere(1, 100,100);
						glPopMatrix();
						glPopMatrix();
						
						
						
					}
						
						void mariposa3(void){
							
							glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
							//cuerpo
							glPushMatrix();
							glScaled(0.2,1,0.2);
							//glRotated(90, 1,0,0);
							glutSolidSphere(1, 100,100);
							glPopMatrix();
							
							//alas derecha arriba
							glPushMatrix();
							glRotated(-30, 0,0,1);
							glTranslated(0.4,1,0);
							glScaled(0.6,1,0.1);
							
							glutSolidSphere(1, 100,100);
							glPopMatrix();
							
							
							//color
							glColor3f(255.0/255.0, 0.0/255.0,244.0/255.0);
							glPushMatrix();
							glRotated(-60, 0,0,1);
							glTranslated(0.4,1,0);
							glScaled(0.6,1,0.1);
							
							glutSolidSphere(1, 100,100);
							glPopMatrix();
							
							//alas Izquierda arriba
							glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
							glPushMatrix();
							glRotated(30, 0,0,1);
							glTranslated(-0.4,1,0);
							glScaled(0.6,1,0.1);
							
							glutSolidSphere(1, 100,100);
							glPopMatrix();
							
							
							//color
							glColor3f(255.0/255.0, 0.0/255.0,244.0/255.0);
							glPushMatrix();
							glRotated(60, 0,0,1);
							glTranslated(-0.4,1,0);
							glScaled(0.6,1,0.1);
							
							glutSolidSphere(1, 100,100);
							glPopMatrix();
							
							
							//alas Izquierda abajo
							glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
							glPushMatrix();
							glRotated(120, 0,0,1);
							glTranslated(-0.1,1,0);
							glScaled(0.6,1,0.1);
							
							glutSolidSphere(1, 100,100);
							glPopMatrix();
							
							//alas DErecha abajo
							glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
							glPushMatrix();
							glRotated(-120, 0,0,1);
							glTranslated(0.1,1,0);
							glScaled(0.6,1,0.1);
							
							glutSolidSphere(1, 100,100);
							glPopMatrix();
							
							
						}
							
							void mariposa31(void){
								
								glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
								//cuerpo
								glPushMatrix();
								glScaled(0.2,1,0.2);
								//glRotated(90, 1,0,0);
								glutSolidSphere(1, 100,100);
								glPopMatrix();
								
								glPushMatrix();
								glRotated(-60, 0,1,0);
								//alas derecha arriba
								glPushMatrix();
								glRotated(-30, 0,0,1);
								glTranslated(0.4,1,0);
								glScaled(0.6,1,0.1);
								
								glutSolidSphere(1, 100,100);
								glPopMatrix();
								
								
								//color
								glColor3f(255.0/255.0, 0.0/255.0,244.0/255.0);
								glPushMatrix();
								glRotated(-60, 0,0,1);
								glTranslated(0.4,1,0);
								glScaled(0.6,1,0.1);
								
								glutSolidSphere(1, 100,100);
								glPopMatrix();
								
								//alas DErecha abajo
								glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
								glPushMatrix();
								glRotated(-120, 0,0,1);
								glTranslated(0.1,1,0);
								glScaled(0.6,1,0.1);
								
								glutSolidSphere(1, 100,100);
								glPopMatrix();
								glPopMatrix();
								
								glPushMatrix();
								glRotated(60, 0,1,0);
								//alas Izquierda arriba
								glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
								glPushMatrix();
								glRotated(30, 0,0,1);
								glTranslated(-0.4,1,0);
								glScaled(0.6,1,0.1);
								
								glutSolidSphere(1, 100,100);
								glPopMatrix();
								
								
								//color
								glColor3f(255.0/255.0, 0.0/255.0,244.0/255.0);
								glPushMatrix();
								glRotated(60, 0,0,1);
								glTranslated(-0.4,1,0);
								glScaled(0.6,1,0.1);
								
								glutSolidSphere(1, 100,100);
								glPopMatrix();
								
								
								//alas Izquierda abajo
								glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
								glPushMatrix();
								glRotated(120, 0,0,1);
								glTranslated(-0.1,1,0);
								glScaled(0.6,1,0.1);
								
								glutSolidSphere(1, 100,100);
								glPopMatrix();
								glPopMatrix();
								
								
								
							}
								
								
void Tapa(void){
	iluminaLampara();
	glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
	glPushMatrix();
	glScaled(1,0.3,1);
	glTranslated(0,1.7,0);
	//glRotated(35, 0,1,0);
	glutSolidSphere(0.8,25,100);
	glPopMatrix();
	desactiva_luz();
}
void Frasco(void){
	
	glColor3f(0.0/255.0, 0.0/255.0,0.0/255.0);
	glLineWidth(2);
	glPushMatrix();
	glScaled(1,1.2,1);
	glRotated(35, 0,1,0);
	glutWireCube(1);
	glPopMatrix();
	glPushMatrix();
	glScaled(1,1.2,1);
	glRotated(0, 0,1,0);
	glutWireCube(1);
	glPopMatrix();
}
void arbolIzq(void){
	
		
		
		
		
		glColor3f(134.0/255.0, 75.0/255.0,12.0/255.0);
		//Tronco
		//materialTronco();
		glPushMatrix();
		glScaled(1,6,1);
		glRotated(35, 0,1,0);
		glutSolidCube(1);
		glPopMatrix();
		iluminaHojas();
		glPushMatrix();
		glTranslated(0,2.5,0);
		//hojas
		glColor3f(77.0/255.0, 255.0/255.0,0.0/255.0);
		glPushMatrix();
		glScaled(1.5,1.5,1.5);
		glTranslated(0,1,0);
		//glRotated(35, 0,1,0);
		glutSolidSphere(1, 100,100);
		glPopMatrix();
		
		glPushMatrix();
		glScaled(1.2,1.2,1.2);
		glTranslated(0,2.5,0);
		//glRotated(35, 0,1,0);
		glutSolidSphere(1, 100,100);
		glPopMatrix();
		
		glPushMatrix();
		glScaled(1.2,1.2,1.2);
		glTranslated(1,1,0);
		//glRotated(35, 0,1,0);
		glutSolidSphere(1, 100,100);
		glPopMatrix();
		
		glPushMatrix();
		glScaled(1.2,1.2,1.2);
		glTranslated(-1,1,0);
		//glRotated(35, 0,1,0);
		glutSolidSphere(1, 100,100);
		glPopMatrix();
		
		glPushMatrix();
		glScaled(1.2,1.2,1.2);
		glTranslated(0,1,1);
		//glRotated(35, 0,1,0);
		glutSolidSphere(1, 100,100);
		glPopMatrix();
		glPushMatrix();
		glScaled(1.2,1.2,1.2);
		glTranslated(0,1,-1);
		//glRotated(35, 0,1,0);
		glutSolidSphere(1, 100,100);
		glPopMatrix();
		glPopMatrix();
		desactiva_luz();
		
	}
	

		void Fondo1(void){
			glColor3f(0.0/255.0, 139.0/255.0,255.0/255.0);
			
			
			glPushMatrix();
			glTranslated(0,0,-10);
			glScaled(20,20,0.1);
			//glRotated(90, 1,0,0);
			glutSolidCube(1);
			glPopMatrix();
			
			glColor3f(063.0/255.0, 193.0/255.0,63.0/255.0);
			glPushMatrix();
			glTranslated(0,-2,-20);
			glScaled(50,0.1,50);
			//glRotated(45, 0,0,1);
			glutSolidCube(1);
			glPopMatrix();
			
			glColor3f(80.0/255.0, 80.0/255.0,80.0/255.0);
			glPushMatrix();
			glTranslated(0,-1.9,-20);
			glScaled(2,0.1,50);
			//glRotated(45, 0,0,1);
			glutSolidCube(1);
			glPopMatrix();
			
			glColor3f(80.0/255.0, 80.0/255.0,80.0/255.0);
			glPushMatrix();
			glTranslated(0,-1.9,-7);
			glScaled(2.5,0.1,2.5);
			//glRotated(45, 0,0,1);
			glutSolidSphere(1,100,100);
			glPopMatrix();
			
			//props
			
			glPushMatrix();
			//glRotated(5,1,0,0);
			glTranslated(-2.0,-1.2,-6);
			glScaled(0.5,0.5,0.5);
			glRotated(45,0,1,0);
			Lampara();
			glPopMatrix();
			
			glPushMatrix();
			//glRotated(5,1,0,0);
			glTranslated(2.7,-1.2,-6);
			glScaled(0.5,0.5,0.5);
			glRotated(45,0,1,0);
			Lampara();
			glPopMatrix();
			
			
			glPushMatrix();
			glTranslated(-3.5,-1,0);
			glScaled(0.7,0.7,0.7);
			arbolIzq();
			glPopMatrix();
			
			glPushMatrix();
			//glRotated(5,1,0,0);
			glTranslated(0,-1.5,-5);
			glScaled(0.5,0.5,0.5);
			Fuente();
			glPopMatrix();
			
			glPushMatrix();
			//glRotated(5,1,0,0);
			glTranslated(-1,-1.5,0);
			glScaled(0.3,0.3,0.3);
			Flor3();
			glPopMatrix();
			glPushMatrix();
			//glRotated(5,1,0,0);
			glTranslated(-1,-1.5,1);
			glScaled(0.3,0.3,0.3);
			Flor1();
			glPopMatrix();
			
			glPushMatrix();
			//glRotated(5,1,0,0);
			glTranslated(-1,-1.5,2);
			glScaled(0.3,0.3,0.3);
			Flor1();
			glPopMatrix();
			
			glPushMatrix();
			//glRotated(5,1,0,0);
			glTranslated(-1,-1.5,3);
			glScaled(0.3,0.3,0.3);
			Flor1();
			glPopMatrix();
			
			glPushMatrix();
			//glRotated(5,1,0,0);
			glTranslated(-1,-1.5,4);
			glScaled(0.3,0.3,0.3);
			Flor3();
			glPopMatrix();
		
		}
			
			void Fondo2(void){
				glColor3f(0.0/255.0, 139.0/255.0,255.0/255.0);
				
				
				glPushMatrix();
				glTranslated(0,0,-10);
				glScaled(20,20,0.1);
				//glRotated(90, 1,0,0);
				glutSolidCube(1);
				glPopMatrix();
				
				glColor3f(063.0/255.0, 193.0/255.0,63.0/255.0);
				glPushMatrix();
				glTranslated(0,-2,-20);
				glScaled(50,0.1,50);
				//glRotated(45, 0,0,1);
				glutSolidCube(1);
				glPopMatrix();
				
				glColor3f(80.0/255.0, 80.0/255.0,80.0/255.0);
				glPushMatrix();
				glTranslated(0,-1.9,-20);
				glScaled(2,0.1,50);
				//glRotated(45, 0,0,1);
				glutSolidCube(1);
				glPopMatrix();
				
				glColor3f(80.0/255.0, 80.0/255.0,80.0/255.0);
				glPushMatrix();
				glTranslated(0,-1.9,-7);
				glScaled(2.5,0.1,2.5);
				//glRotated(45, 0,0,1);
				glutSolidSphere(1,100,100);
				glPopMatrix();
				
				//props
				
				glPushMatrix();
				//glRotated(5,1,0,0);
				glTranslated(-2.0,-1.2,-6);
				glScaled(0.5,0.5,0.5);
				glRotated(45,0,1,0);
				Lampara2();
				glPopMatrix();
				
				glPushMatrix();
				//glRotated(5,1,0,0);
				glTranslated(2.7,-1.2,-6);
				glScaled(0.5,0.5,0.5);
				glRotated(45,0,1,0);
				Lampara2();
				glPopMatrix();
				
				
				glPushMatrix();
				glTranslated(-3.5,-1,0);
				glScaled(0.7,0.7,0.7);
				arbolIzq();
				glPopMatrix();
				
				glPushMatrix();
				//glRotated(5,1,0,0);
				glTranslated(0,-1.5,-5);
				glScaled(0.5,0.5,0.5);
				Fuente();
				glPopMatrix();
				
				glPushMatrix();
				//glRotated(5,1,0,0);
				glTranslated(-1,-1.5,0);
				glScaled(0.3,0.3,0.3);
				Flor3();
				glPopMatrix();
				glPushMatrix();
				//glRotated(5,1,0,0);
				glTranslated(-1,-1.5,1);
				glScaled(0.3,0.3,0.3);
				Flor1();
				glPopMatrix();
				
				glPushMatrix();
				//glRotated(5,1,0,0);
				glTranslated(-1,-1.5,2);
				glScaled(0.3,0.3,0.3);
				Flor1();
				glPopMatrix();
				
				glPushMatrix();
				//glRotated(5,1,0,0);
				glTranslated(-1,-1.5,3);
				glScaled(0.3,0.3,0.3);
				Flor1();
				glPopMatrix();
				
				glPushMatrix();
				//glRotated(5,1,0,0);
				glTranslated(-1,-1.5,4);
				glScaled(0.3,0.3,0.3);
				Flor3();
				glPopMatrix();
				
				
			}
	void Pinta(void){
		glMatrixMode(GL_MODELVIEW);	
		glutInitDisplayMode(GL_DEPTH);
		int i=0;
		float x1=1;
		float x=-11,y=-1.7,z=-5;
		do{
		glClear(GL_DEPTH_BUFFER_BIT);
		glEnable(GL_DEPTH_TEST);
		glClear(GL_COLOR_BUFFER_BIT);	
		if(i<10){
		
		
		if (i%2==0){
		
		Fondo1();
		
		glPushMatrix();
		glTranslated(3,-2,-3);
		glPushMatrix();
		glTranslated(0,-0.2,0);
		glScaled(0.3,0.3,0.3);
		mariposa2();
		glPopMatrix();
		Frasco();
		Tapa();
		glPopMatrix();
		
		glPushMatrix();
		glScaled(x1,x1,x1);
		glTranslated(x,y,z);
		
		glRotated(90,0,0,1);
		glRotated(75,0,1,0);
		glRotated(-10,1,0,0);
		
		
		
		mariposa1();
		glPopMatrix();
		}else{
		Fondo2();
		
		glPushMatrix();
		glTranslated(3,-2,-3);
		glPushMatrix();
		glTranslated(0,-0.2,0);
		glScaled(0.3,0.3,0.3);
		mariposa21();
		glPopMatrix();
		Frasco();
		Tapa();
		glPopMatrix();
		
		glPushMatrix();
		
		glScaled(x1,x1,x1);
		glTranslated(x,y,z);
		
		glRotated(90,0,0,1);
		glRotated(75,0,1,0);
		glRotated(-10,1,0,0);
	
		
		mariposa12();
		glPopMatrix();
		}
		glDisable(GL_DEPTH_TEST);
		Sleep(300);
		glFlush();
		x1=x1-0.09;
			
		x=x+1;
		z=z-1;
		i++;}else{
			
			if (i%2==0){
				
				Fondo1();
				
				glPushMatrix();
				glTranslated(3,-2,-3);
				glPushMatrix();
				glTranslated(0,-0.2,0);
				glScaled(0.3,-0.3,0.3);
				mariposa2();
				glPopMatrix();
				Frasco();
				Tapa();
				glPopMatrix();
				
				glPushMatrix();
				glScaled(x1,x1,x1);
				glTranslated(x,y,z);
				
				glRotated(90,0,0,1);
				glRotated(75,0,1,0);
				glRotated(-10,1,0,0);
				
				
				
				mariposa1();
				glPopMatrix();
			}else{
				Fondo1();
				
				glPushMatrix();
				glTranslated(3,-2,-3);
				glPushMatrix();
				glTranslated(0,-0.2,0);
				glScaled(0.3,0.3,0.3);
				mariposa21();
				glPopMatrix();
				Frasco();
				Tapa();
				glPopMatrix();
				
				glPushMatrix();
				
				glScaled(x1,x1,x1);
				glTranslated(x,y,z);
				
				glRotated(90,0,0,1);
				glRotated(75,0,1,0);
				glRotated(-10,1,0,0);
				
				
				mariposa12();
				glPopMatrix();
			}
			glDisable(GL_DEPTH_TEST);
			Sleep(300);
			glFlush();
			x1=x1+0.05;
			
			x=x+0.6;
			z=z+0.3;
			i++;
			
			
		}
		K=K+10;
		}while (i<35);
		
		
		
		i=0;x=-12;y=-1;z=4;x1=1;float x11=-0.5; float tapay=0;
		do{
			glClear(GL_DEPTH_BUFFER_BIT);
			glEnable(GL_DEPTH_TEST);
			glClear(GL_COLOR_BUFFER_BIT);
			if(i<14){
			if (i%2==0){
				
				Fondo1();
				
				glPushMatrix();
				glTranslated(3,-2,-3);
				glPushMatrix();
				glTranslated(0,-0.2,0);
				glScaled(0.3,0.3,0.3);
				mariposa2();
				glPopMatrix();
				Frasco();
				glPushMatrix();
				glTranslated(0,tapay,0);
				Tapa();
				
				glPopMatrix();
				glPopMatrix();
				
				glPushMatrix();
				glScaled(x11,x1,x11);
				glTranslated(x,y,z);
				
				glPushMatrix();
				glRotated(90,0,0,1);
				glRotated(75,0,1,0);
				glRotated(-10,1,0,0);
				
				
				
				mariposa1();
				glPopMatrix();
				glPopMatrix();
			}else{
				Fondo1();
				
				glPushMatrix();
				glTranslated(3,-2,-3);
				glPushMatrix();
				glTranslated(0,-0.2,0);
				glScaled(0.3,0.3,0.3);
				mariposa21();
				glPopMatrix();
				Frasco();
				glPushMatrix();
				glTranslated(0,tapay,0);
				Tapa();
				glPopMatrix();
				glPopMatrix();
				
				glPushMatrix();
				
				glScaled(x11,x1,x11);
				glTranslated(x,y,z);
				glPushMatrix();
				glRotated(90,0,0,1);
				glRotated(75,0,1,0);
				glRotated(-10,1,0,0);
				
				
				mariposa12();
				glPopMatrix();
				glPopMatrix();
			}
			glDisable(GL_DEPTH_TEST);
			Sleep(300);
			glFlush();
			//x1=x1+1;x11=x11+1;
			
			x=x+0.5;
			//z=z+0.3;
			i++;
			
			}else{
				if (i%2==0){
					
					Fondo1();
					
					glPushMatrix();
					glTranslated(3,-2,-3);
					glPushMatrix();
					glTranslated(0,-0.2,0);
					glScaled(0.3,0.3,0.3);
					mariposa2();
					glPopMatrix();
					Frasco();
					glPushMatrix();
					glTranslated(0,tapay,0);
					Tapa();
					glPopMatrix();
					glPopMatrix();
					
					glPushMatrix();
					glScaled(x11,x1,x11);
					glTranslated(x,y,z);
					
					glPushMatrix();
					glRotated(90,0,0,1);
					glRotated(75,0,1,0);
					glRotated(-10,1,0,0);
					
					
					
					mariposa1();
					glPopMatrix();
					glPopMatrix();
				}else{
					Fondo1();
					
					glPushMatrix();
					glTranslated(3,-2,-3);
					glPushMatrix();
					glTranslated(0,-0.2,0);
					glScaled(0.3,0.3,0.3);
					mariposa21();
					glPopMatrix();
					Frasco();
					glPushMatrix();
					glTranslated(0,tapay,0);
					Tapa();
					glPopMatrix();
					glPopMatrix();
					
					glPushMatrix();
					
					glScaled(x11,x1,x11);
					glTranslated(x,y,z);
					glPushMatrix();
					glRotated(90,0,0,1);
					glRotated(75,0,1,0);
					glRotated(-10,1,0,0);
					
					
					mariposa12();
					glPopMatrix();
					glPopMatrix();
				}
				glDisable(GL_DEPTH_TEST);
				Sleep(300);
				glFlush();
				//x1=x1+1;x11=x11+1;
				y=y+0.5;
				tapay=tapay+0.55;
				//x=x+0.5;
				//z=z+0.3;
				i++;
				
			}
			K=K+10;
		}while(i<35);
		i=0;x=-12;y=-1;z=4;x1=1; x11=-1; float mariposay=-4.2;
		do{
			glClear(GL_DEPTH_BUFFER_BIT);
			glEnable(GL_DEPTH_TEST);
			glClear(GL_COLOR_BUFFER_BIT);
			if(i<25){
			if (i%2==0){
				
				Fondo1();
				
				glPushMatrix();
				glTranslated(3,-2,-3);
				glPushMatrix();
				glTranslated(0,-0.2,0);
				glScaled(0.3,0.3,0.3);
				mariposa2();
				glPopMatrix();
				Frasco();
				glPushMatrix();
			
				
				glPopMatrix();
				glPopMatrix();
				
				glPushMatrix();
				glScaled(x11,x1,x11);
				glTranslated(x,y,z);
				
				glPushMatrix();
				glRotated(90,0,0,1);
				glRotated(75,0,1,0);
				glRotated(-10,1,0,0);
				glPushMatrix();
				glTranslated(3,6,0);
				mariposa3();
				glPopMatrix();
				glPushMatrix();
				glTranslated(0,6,4);
				mariposa2();
				glPopMatrix();
				mariposa1();
				glPopMatrix();
				glPopMatrix();
			}else{
				Fondo1();
				
				glPushMatrix();
				glTranslated(3,-2,-3);
				glPushMatrix();
				glTranslated(0,-0.2,0);
				glScaled(0.3,0.3,0.3);
				mariposa21();
				glPopMatrix();
				Frasco();
				glPushMatrix();
				
				
				glPopMatrix();
				glPopMatrix();
				
				glPushMatrix();
				
				glScaled(x11,x1,x11);
				glTranslated(x,y,z);
				glPushMatrix();
				glRotated(90,0,0,1);
				glRotated(75,0,1,0);
				glRotated(-10,1,0,0);
				
				glPushMatrix();
				glTranslated(3,6,0);
				mariposa31();
				glPopMatrix();
				glPushMatrix();
				glTranslated(0,6,4);
				mariposa21();
				glPopMatrix();
				mariposa12();
				
				glPopMatrix();
				glPopMatrix();
			}
			
			}else{
				
				if (i%2==0){
					
					Fondo1();
					
					glPushMatrix();
					glTranslated(3,-2,-3);
					glPushMatrix();
					glTranslated(0,mariposay,0);
					glScaled(0.3,0.3,0.3);
					mariposa2();
					glPopMatrix();
					Frasco();
					glPushMatrix();
					
					
					glPopMatrix();
					glPopMatrix();
					
					glPushMatrix();
					glScaled(x11,x1,x11);
					glTranslated(x,y,z);
					
					glPushMatrix();
					glRotated(90,0,0,1);
					glRotated(75,0,1,0);
					glRotated(-10,1,0,0);
					glPushMatrix();
					glTranslated(3,6,0);
				
					glPopMatrix();
					glPushMatrix();
					glTranslated(0,6,4);
					
					glPopMatrix();
					
					glPopMatrix();
					glPopMatrix();
				}else{
					Fondo1();
					
					glPushMatrix();
					glTranslated(3,-2,-3);
					glPushMatrix();
					glTranslated(0,mariposay,0);
					glScaled(0.3,0.3,0.3);
					mariposa21();
					glPopMatrix();
					Frasco();
					glPushMatrix();
					
					
					glPopMatrix();
					glPopMatrix();
					
					glPushMatrix();
					
					glScaled(x11,x1,x11);
					glTranslated(x,y,z);
					glPushMatrix();
					glRotated(90,0,0,1);
					glRotated(75,0,1,0);
					glRotated(-10,1,0,0);
					
					glPushMatrix();
					glTranslated(3,6,0);
					
					glPopMatrix();
					glPushMatrix();
					glTranslated(0,6,4);
					
					glPopMatrix();
					
					
					glPopMatrix();
					glPopMatrix();
				}	
				
			}
			glDisable(GL_DEPTH_TEST);
			Sleep(300);
			glFlush();
			i++;
			x=x+2;
			mariposay=mariposay+0.2;
			K=K+10;
		}while(i<65);
		
		i=0;float crecimiento=0.1;
		do{
			glClear(GL_DEPTH_BUFFER_BIT);
			glEnable(GL_DEPTH_TEST);
			glClear(GL_COLOR_BUFFER_BIT);	
			
				Fondo2();
				
				glPushMatrix();
				glTranslated(3,-2,-3);
				glPushMatrix();
				glTranslated(0,-0.2,0);
				glScaled(0.3,0.3,0.3);
				//mariposa2();
				glPopMatrix();
				Frasco();
				glPushMatrix();
				
				glPopMatrix();
				glPopMatrix();
				
				glPushMatrix();
				glTranslated(3,-4,-2);
				glScaled(crecimiento,crecimiento,crecimiento);
				Flor2();
				glPopMatrix();
				
				glPushMatrix();
				glTranslated(1.7,-3,-2);
				glScaled(crecimiento,crecimiento,crecimiento);
				Flor2();
				glPopMatrix();
				
				glPushMatrix();
				glTranslated(2.5,-2.5,-2);
				glScaled(crecimiento,crecimiento,crecimiento);
				Flor2();
				glPopMatrix();
				
				glPushMatrix();
				glTranslated(3,-3,-2);
				glScaled(crecimiento,crecimiento,crecimiento);
				Flor2();
				glPopMatrix();
				
				glPushMatrix();
				glTranslated(4,-3.5,-2);
				glScaled(crecimiento,crecimiento,crecimiento);
				Flor2();
				glPopMatrix();
				
				crecimiento=crecimiento+0.05;
				
			
			
			glDisable(GL_DEPTH_TEST);
			Sleep(300);
			glFlush();
			i++;
			K=K+10;
		} while(i<10);
	}
		

		
		int main(int argc, char **argv)
		{glutInit(&argc, argv);
		glutInitWindowSize(600, 600);
		glutCreateWindow("Tenorio Malpica Jose Andres");
		init();
		glutDisplayFunc(Pinta);    
		glutMainLoop();
		return 0;
		}
