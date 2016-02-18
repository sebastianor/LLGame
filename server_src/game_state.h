#ifndef GAME__STATE__H
#define GAME__STATE__H
#include "../shared_src/game_protocol.h"

#define INITIAL_RESOURCES_COUNT 300

typedef struct game_state {
  short player_id;
  unsigned int resources;
  army_t *army;
} game_state_t;

void init_players();
void add_player(int player_id);
void destroy_players();
void start_game();
void attach_state();
void save_state();
int can_start();
void increment_resources(int player_id);
void broadcast_game_status();
size_t game_state_size();

#endif
