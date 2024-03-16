#include <iostream>

using namespace std;

class GraphicsRenderingEngine{

};

class InputHandler{

};

class PhysicsEngine{

};

class GameEngine{

    // Game Engine Class is using Composition to connect with all other classes
    GraphicsRenderingEngine graphis_rendering_engine;
    InputHandler input_handler;
    PhysicsEngine physics_engine;
};