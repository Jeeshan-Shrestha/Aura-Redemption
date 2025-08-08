#include "Player.h"
#include <iostream>
#include <raylib.h>

using namespace std;

Player::Player(
    string name,
    int health,
    int damage,
    int attackCooldown,
    Vector2 position,
    Texture2D playerSprite)

    : name(name),
      health(health),
      damage(damage),
      attackCooldown(attackCooldown),
      position(position),
      playerSprite(playerSprite)
{
}

void Player::playerMovement()
{
    if (IsKeyDown(KEY_A))
    {
        if (isFacingRight)
        {
            isFacingRight = false;
            playerSprite.width -= 2 * playerSprite.width;
        }
        position.x -= 10;
    }

    if (IsKeyDown(KEY_D))
    {
        position.x += 10;
    }
}

void Player::draw()
{
    DrawTextureEx(playerSprite, position, 0, 0.5f, RAYWHITE);
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
