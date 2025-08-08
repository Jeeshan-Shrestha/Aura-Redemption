#pragma once
#include <raylib.h>
#include <string>
#include <iostream>

using namespace std;

class Player
{

private:
    string name;
    int health;
    int damage;
    int attackCooldown;
    Vector2 spawnPosition;
    Texture2D playerSprite;

public:
    Player(string name, int health, int damage, int attackCooldown, Vector2 spawnPosition, Texture2D playerSprite);
    void Draw();
    int attack();
    void damageTaken(int damageReceived);
    void skillCast();
};
