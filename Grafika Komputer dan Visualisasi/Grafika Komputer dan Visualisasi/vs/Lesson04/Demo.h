#pragma once
#define GL_BGR_EXT
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VBO3, VAO3, EBO3, texture3, VBO4, VAO4, EBO4, texture4;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;
	GLint skybox[6];
	const int SKY_FRONT = 0, SKY_RIGHT = 1, SKY_LEFT = 2, SKY_BACK = 3, SKY_UP = 4, SKY_DOWN = 5;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildColoredCube();
	void BuildColoredPlane();
	void BuildColoredLocomotif();
	void BuildColoredTrack();
	void DrawColoredCube();
	void DrawColoredPlane();
	void DrawColoredLocomotif();
	void DrawColoredTrack();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
	void Draw_Skybox(float x, float y, float z, float width, float height, float length);
	void initSky();
	GLuint LoadBMP(const char *fileName);
};

