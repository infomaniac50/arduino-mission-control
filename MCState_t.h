#ifndef __MCSTATE_H
#define __MCSTATE_H

enum MCState_t {
  STATE_OFF,
  STATE_COUNTDOWN_DISABLED,
  STATE_COUNTDOWN_ENABLED,
  STATE_COUNTDOWN_COUNTING,
  STATE_COUNTDOWN_AT_ZERO,
  STATE_LAUNCHING,

  STATE_MUSIC_OFF,
  STATE_MUSIC_ON,
};

#endif