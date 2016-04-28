#ifndef _PLANET_H_
#define _PLANET_H_

#include "Precompiled.h"
#include "Mesh.h"
#include "GameObject.h"

class Planet : public GameObject {

	Mesh mesh;

	GLfloat minRad;
	GLfloat maxRad;
	GLfloat slices;
	GLfloat stacks;

	void GeneratePlanet(GLuint seed, GLuint noiseSize );

	MeshRenderMode renderMode;
	glm::vec3 CalculateHeigthColor( GLfloat );
public:

	Planet() {}
	Planet( GLfloat minRad, GLfloat maxRad, GLfloat slices, GLfloat stacks, GLuint seed, GLuint noiseSize );
	Planet( const GLchar* filePath, GLfloat minRad, GLfloat maxRad );

	void LoadHeightMap( const GLchar* filePath, GLfloat minRad, GLfloat maxRad );

	void GenerateNewPlanet( GLfloat minRad, GLfloat maxRad, GLfloat slices, GLfloat stacks, GLuint seed, GLuint noiseSize );

	void Update( GLfloat dt );
	void Render( Shader shader );

};


#endif // !_PLANET_H_
