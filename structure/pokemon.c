#include <stdio.h>
#include <string.h>
struct Stats {
  int HP, Attack, Defense, SpAttack, SpDefense, Speed;
};

struct Pokemon {
  char type[20];
  char name[30];
  char skill[20];
  struct Stats stats;
} Poke[3];


int main() {
  strcpy(Poke[0].type, "Water");
  strcpy(Poke[0].name, "Mega Kyogre");
  strcpy(Poke[0].skill, "Drizzle");
  Poke[0].stats.HP = 100;
  Poke[0].stats.Attack = 150;
  Poke[0].stats.Defense = 90;
  Poke[0].stats.SpAttack = 180;
  Poke[0].stats.SpDefense = 160;
  Poke[0].stats.Speed = 90;
  strcpy(Poke[1].type, "Ground");
  strcpy(Poke[1].name, "Mega Groudon");
  strcpy(Poke[1].skill, "Drought");
  Poke[1].stats.HP = 100;
  Poke[1].stats.Attack = 180;
  Poke[1].stats.Defense = 160;
  Poke[1].stats.SpAttack = 150;
  Poke[1].stats.SpDefense = 90;
  Poke[1].stats.Speed = 90;
  Poke[2] = (struct Pokemon){
    .type = "Dragon",
    .name = "Mega Rayquaza",
    .skill = "Delta Stream",
    .stats.HP = 105,
    .stats.Attack = 180,
    .stats.Defense = 100,
    .stats.SpAttack = 180,
    .stats.SpDefense = 100,
    .stats.Speed = 115
  };
  //   struct Pokemon Poke2 = { "Dragon", "Rayquaza", "Delta Stream", 105, 180,
  //   100, 180, 100, 115 }; strcpy(Poke[2].type, "Dragon");
  //   strcpy(Poke[2].name, "Rayquaza");
  //   strcpy(Poke[2].skill, "Delta Stream");
  //   Poke[2].HP = 105;
  //   Poke[2].Attack = 180;
  //   Poke[2].Defense = 100;
  //   Poke[2].SpAttack = 180;
  //   Poke[2].SpDefense = 100;
  //   Poke[2].Speed = 115;
  for (int i = 0; i < 3; ++i) {
    printf("Nama Pokemon   : %s\n", Poke[i].name);
    printf("Type           : %s\n", Poke[i].type);
    printf("Skill          : %s\n", Poke[i].skill);
    printf("HP             : %d\n", Poke[i].stats.HP);
    printf("Attack         : %d\n", Poke[i].stats.Attack);
    printf("Defense        : %d\n", Poke[i].stats.Defense);
    printf("SpAttack       : %d\n", Poke[i].stats.SpAttack);
    printf("SpDefense      : %d\n", Poke[i].stats.SpDefense);
    printf("Speed          : %d\n", Poke[i].stats.Speed);
    if (i < 2)
      printf("\n");
  }
  return 0;
}