// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

void dibujarTriangulos() {

	glBegin(GL_TRIANGLES);

	glColor3f(.23, .98, 0.34);
	//X=0 Y=1
	glVertex3f(0, 0, 0);
	//X=-1 Y=-1
	glColor3f(.29, .15, 0.50);
	glVertex3f(0, 1, 0);
	//X=1 Y=-1
	glColor3f(.32, .43, 1);
	glVertex3f(1, 1, 0);

	glColor3f(.32, .43, 1);
	glVertex3f(1, 1, 0);
	glColor3f(.29, .15, 0.50);
	glVertex3f(1, 0, 0);
	glColor3f(.23, .98, 0.34);
	glVertex3f(0, 0, 0);

	//Cuadrado 2

	glColor3f(.23, .98, 0.34);
	//X=0 Y=1
	glVertex3f(-0, -0, 0);
	//X=-1 Y=-1
	glColor3f(.29, .15, 0.50);
	glVertex3f(-0, -1, 0);
	//X=1 Y=-1
	glColor3f(.32, .43, 1);
	glVertex3f(-1, -1, 0);

	glColor3f(.32, .43, 1);
	glVertex3f(-1, -1, 0);
	glColor3f(.29, .15, 0.50);
	glVertex3f(-1, 0, 0);
	glColor3f(.23, .98, 0.34);
	glVertex3f(0, 0, 0);


	glEnd();
}

void dibujarPuntos() {
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex3f(0.5f, 0.1f, 0.0f);

	glColor3f(0, 0, 0);
	glVertex3f(0.55f, 0.1f, 0.0f);

	glEnd();
}

void dibujarLineas() {
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0.4, 0);
	glVertex3f(0.4, 0, 0);
	glVertex3f(0, 0, 0);

	glEnd();
}

void dibujarLineaContinua() {
	glBegin(GL_LINE_STRIP);
	glColor3f(1, 1, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0.2, 0);
	glVertex3f(0.3, 0.2, 0);
	glVertex3f(0.6, 0.7, 0.1);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();
}

void dibujarTrianguloContinuo() {
	glBegin(GL_TRIANGLE_STRIP);
	
	glColor3f(1, 1, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(-0.2, -0.2, 0);
	glVertex3f(0.2, -0.2, 0);
	
	glColor3f(0, 0, 0);
	glVertex3f(0.01, -0.39, 0);
	
	glEnd();

}

void dibujarPoligono() {
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-0.8, 0.3, 0);
	glVertex3f(-0.5, 0.5, 0);
	glVertex3f(-0.5, 0.5, 0);


	glVertex3f(0.5, 0.9, 0);


	glEnd();
}

void dibujarCasa() {
	glBegin(GL_LINES);
	//paredes
	glColor3f(1, 1, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0.4, 0);

	glVertex3f(0.4, 0, 0);
	glVertex3f(0, 0, 0);

	glVertex3f(0.4, 0.4, 0);
	glVertex3f(0, 0.4, 0);

	glVertex3f(0.4, 0.0, 0);
	glVertex3f(0.4, 0.4, 0);



	//techo
	glVertex3f(-0.1, 0.4, 0);
	glVertex3f(0.2, 0.7, 0);

	glVertex3f(-0.1, 0.4, 0);
	glVertex3f(0.5, 0.4, 0);

	glVertex3f(0.5, 0.4, 0);
	glVertex3f(0.2, 0.7, 0);


	//ventana1
	glColor3f(1, 1, 1);
	glVertex3f(0.03, 0.3, 0);
	glVertex3f(0.15, 0.3, 0);

	glVertex3f(0.15, 0.3, 0);
	glVertex3f(0.15, 0.2, 0);

	glVertex3f(0.15, 0.2, 0);
	glVertex3f(0.03, 0.2, 0);

	glVertex3f(0.03, 0.2, 0);
	glVertex3f(0.03, 0.3, 0);


	//ventana2
	glVertex3f(0.2, 0.3, 0);
	glVertex3f(0.2, 0.2, 0);

	glVertex3f(0.2, 0.2, 0);
	glVertex3f(0.3, 0.2, 0);

	glVertex3f(0.3, 0.2, 0);
	glVertex3f(0.3, 0.3, 0);

	glVertex3f(0.3, 0.3, 0);
	glVertex3f(0.2, 0.3, 0);

	//puerta
	glVertex3f(0.15, 0, 0);
	glVertex3f(0.15, 0.13, 0);

	glVertex3f(0.15, 0.13, 0);
	glVertex3f(0.20, 0.13, 0);

	glVertex3f(0.20, 0.13, 0);
	glVertex3f(0.20, 0.0, 0);

	//piso
	glVertex3f(-1, 0, 0);
	glVertex3f(1, 0.0, 0);

	//arboles
	glColor3f(1, 0.50, 0.22);
	glVertex3f(-0.3, 0, 0);
	glVertex3f(-0.3, 0.13, 0);

	glVertex3f(-0.2, 0, 0);
	glVertex3f(-0.2, 0.13, 0);

	glVertex3f(-0.2, 0.13, 0);
	glVertex3f(-0.3, 0.13, 0);

	glVertex3f(-0.3, 0.13, 0);
	glVertex3f(-0.4, 0.13, 0);

	glVertex3f(-0.4, 0.13, 0);
	glVertex3f(-0.4, 0.3, 0);

	glVertex3f(-0.4, 0.3, 0);
	glVertex3f(-0.1, 0.3, 0);

	glVertex3f(-0.1, 0.3, 0);
	glVertex3f(-0.1, 0.13, 0);

	glVertex3f(-0.1, 0.13, 0);
	glVertex3f(-0.3, 0.13, 0);

	//nube 1
	glColor3f(1, 1, 1);
	glVertex3f(0.1, 0.8, 0);
	glVertex3f(0.25, 0.8, 0);

	glVertex3f(0.25, 0.8, 0);
	glVertex3f(0.25, 0.9, 0);

	glVertex3f(0.25, 0.9, 0);
	glVertex3f(0.1, 0.9, 0);

	glVertex3f(0.1, 0.9, 0);
	glVertex3f(0.1, 0.8, 0);

	//nube 2
	glVertex3f(0.0, 0.9, 0);
	glVertex3f(0.0, 0.8, 0);

	glVertex3f(0.0, 0.8, 0);
	glVertex3f(-0.15, 0.8, 0);

	glVertex3f(-0.15, 0.8, 0);
	glVertex3f(-0.15, 0.9, 0);

	glVertex3f(-0.15, 0.9, 0);
	glVertex3f(0.0, 0.9, 0);

	glEnd();
}

void dibujar() {
	//dibujarTriangulos();
	//dibujarPuntos();
	//dibujarLineas();
	//dibujarLineaContinua();
	//dibujarTrianguloContinuo();
	//dibujarPoligono();
	dibujarCasa();
}

void actualizar() {

}

int main()
{
	GLFWwindow * window;

	//Si no se pudo iniciar glfw
	//entonces inicializamos en la ventana
	if (!glfwInit())
		exit(EXIT_FAILURE);

	//Si se pudo iniciar GLFW
	//entonces inicializamos la ventana
	window = glfwCreateWindow(1024, 768, "Ventana", NULL, NULL);

	//Si no podemos iniciar la ventana
	//Entonces terminamos la ejecucion

	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido el contexto activamos funciones modernas (gpu / cpu)
	glewExperimental = true;
	GLenum errorGlew = glewInit();
	if (errorGlew != GLEW_OK) {
		cout << glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;


	//Ciclo de dibujo (Draw Loop)
	while (!glfwWindowShouldClose(window)) {
		//Establecer region del dibujo
		glViewport(0, 0, 1024, 768);
		//Establecer el color del borrado
		glClearColor(0.9, 0.2, 0.2, 1);
		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar Buffers
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
    return 0;
}

