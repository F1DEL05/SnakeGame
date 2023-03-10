#include"Square.hpp"
Square::Square(glm::vec3 position, float length,Square::DIRECTION dir) {
	this->position = position;
	
	this->length = length;
	this->direction = dir;
}

glm::vec3 Square::getPosition() {
	return position;
}
Square::DIRECTION Square::getDirection() {
	return direction;
}
void Square::setDirection(Square::DIRECTION direction) {
	this->direction = direction;
}
void Square::setPosition(glm::vec3 position) {
	this->position = position;
}

void Square::move(float speed) {
	switch (direction) {
	case Square::DIRECTION_RIGHT:
		position += glm::vec3(speed,0,0);
		break;
	case Square::DIRECTION_LEFT:
		position += glm::vec3(-speed, 0, 0);
		break;
	case Square::DIRECTION_UP:
		position += glm::vec3(0, speed, 0);
		break;
	case Square::DIRECTION_DOWN:
		position += glm::vec3(0, -speed, 0);
		break;
	}
}
void Square::move() {
	switch (direction) {
	case Square::DIRECTION_RIGHT:
		position += glm::vec3(length,0,0);
		break;
	case Square::DIRECTION_LEFT:
		position += glm::vec3(-length, 0, 0);
		break;
	case Square::DIRECTION_UP:
		position += glm::vec3(0, length, 0);
		break;
	case Square::DIRECTION_DOWN:
		position += glm::vec3(0, -length, 0);
		break;
	}
}