#include<vector>
#ifdef GRAPHICS
#include<SFML/Graphics.hpp>
#endif

#include "./physics.h"
#include "./const.h"
#include "./options.h"

class Container {
private:
	Physics physics;

	int size;

	float dt;
	float diff;
	float visc;
	
	float *px;
	float *py;
	float *temp;

	float *x;
	float *y;

	float *previousDensity;
	float *density;
	
	void InitArr(float arr[], int size);
	float MapToRange(float value, float minIn, float maxIn, float minOut, float maxOut);
public:
	Container();
	Container(float dt, float diff, float visc);
	~Container();

	void AddDensity(float x, float y, float amount);
	void AddVelocity(float x, float y, float px, float py);
	void Step();
	void FadeDensity(int size);
	#ifdef GRAPHICS
	void Render(sf::RenderWindow& win, Color color);
	sf::Color Hsv(int hue, float sat, float val, float d);
	#endif
};

