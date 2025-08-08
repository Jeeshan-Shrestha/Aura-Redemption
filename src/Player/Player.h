#pragma once
#include <raylib.h>
#include <string>
#include <iostream>

using namespace std;

class Player
{

protected:
    string name;
    int health;
    int damage;
    int attackCooldown;

public:
    Texture2D playerSprite;
    Vector2 position;
    bool isFacingRight = true;
    Player(string name, int health, int damage, int attackCooldown, Vector2 position, Texture2D playerSprite);
    void draw();
    void playerMovement();
    int attack();
    void damageTaken(int damageReceived);
    void skillCast();
};
