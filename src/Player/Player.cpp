#include "Player.h"
#include <iostream>
#include <raylib.h>

using namespace std;

Player::Player(
    string name,
    int health,
    int damage,
    int attackCooldown,
    Vector2 spawnPosition,
    Texture2D playerSprite)

    : name(name),
      health(health),
      damage(damage),
      attackCooldown(attackCooldown),
      spawnPosition(spawnPosition),
      playerSprite(playerSprite)
{
}

void Player::Draw()
{
    DrawTextureEx(playerSprite, spawnPosition, 0, 0.5f, RAYWHITE);
}

int Player::attack()
{

    return damage;
}

void Player::damageTaken(int damageReceived)
{
    health -= damageReceived;
}

void Player::skillCast()
{
}
