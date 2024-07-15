#include <iostream>

int main() {
    float StopDistance = 0.f;

    // Simulate some logic where we calculate stop distance
    float speed = 30.0f; // in meters per second
    float reactionTime = 2.5f; // in seconds
    float deceleration = 9.8f; // in meters per second squared (approx. gravity)

    // Calculate stopping distance using a simple physics formula
    StopDistance = speed * reactionTime + (speed * speed) / (2 * deceleration);

    std::cout << "The stopping distance is: " << StopDistance << " meters" << std::endl;

    return 0;
}
