#include<vector>

#include "./container.h"

class Sim {
private:
#ifdef GRAPHICS
	sf::RenderWindow win;
#endif
	Container container;
	Options options;
	void Setup();
public:
	static const int numParticles;
	Sim();
	~Sim();
	void Run();
};
