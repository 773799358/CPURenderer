#include <iostream>
#include <glm/glm.hpp>

int main()
{
    glm::vec3 position = { 1, 2, 3 };
    std::cout << "Hello World!" << std::endl;
    std::cout << position.x << '\t' << position.y << '\t' << position.z << std::endl;
    return 0;
}