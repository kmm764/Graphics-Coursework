#pragma once


#include "../Framework/Engine/Scene.h"

class MyScene :
	public Scene
{
public:
	MyScene(int argc, char** argv, const char *title, const int& windowWidth, const int& windowHeight);
	~MyScene() {};

private:
	void Initialise();
	void Projection();
    void GlobalLight(float x,float y,float z); //for Light0
};
