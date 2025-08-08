#pragma once
#include <string>
#include <raylib.h>

using namespace std;

class Skill
{
private:
    int skillDamage;
    int skillCooldown;
    string skillDescription;

public:
    int getSkillDamage();
    int getSkillCooldown();
    string getSkillDescription();
};

class Player
{

private:
    int health;
    int damage;
    Skill skill;
    Texture2D playerSprite;

public:
    Player();
    void Draw();
    int damageDone();
    int damageTaken();
    int skillCast();
};
