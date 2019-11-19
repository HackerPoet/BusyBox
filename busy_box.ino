// Define all the pins
#define BIG_BUTTON   2
#define SPEAKER      3  //PWM
#define MODE_SELECT  4
#define COUNTER_LED  5  //PWM
#define BLUE_LED     6  //PWM
#define BLUE_BUTTON  7
#define GREEN_BUTTON 8
#define RED_LED      9  //PWM
#define GREEN_LED    10 //PWM
#define RED_BUTTON   11 //PWM
#define LEFT_TOGGLE  12
#define RIGHT_TOGGLE 13
#define YELLOW_THREE A0
#define YELLOW_TWO   A1
#define YELLOW_ONE   A2
#define RIGHT_GREEN  A3
#define LEFT_GREEN   A4
#define BOTH_RED     A5

// Constants
#define INTERVAL_MS  16

// Game Modes
#define GAME_MODE_DEFAULT  0
#define GAME_MODE_ADVANCED 1
#define NUM_GAME_MODES     2

// Notes
#define _C1  0xc0
#define _CS1 0xc1
#define _D1  0xc2
#define _DS1 0xc3
#define _E1  0xc4
#define _F1  0xc5
#define _FS1 0xc6
#define _G1  0xc7
#define _GS1 0xc8
#define _A1  0xc9
#define _AS1 0xca
#define _B1  0xcb
#define _C2  0x80
#define _CS2 0x81
#define _D2  0x82
#define _DS2 0x83
#define _E2  0x84
#define _F2  0x85
#define _FS2 0x86
#define _G2  0x87
#define _GS2 0x88
#define _A2  0x89
#define _AS2 0x8a
#define _B2  0x8b
#define _C3  0x40
#define _CS3 0x41
#define _D3  0x42
#define _DS3 0x43
#define _E3  0x44
#define _F3  0x45
#define _FS3 0x46
#define _G3  0x47
#define _GS3 0x48
#define _A3  0x49
#define _AS3 0x4a
#define _B3  0x4b
#define _C4  0x00
#define _CS4 0x01
#define _D4  0x02
#define _DS4 0x03
#define _E4  0x04
#define _F4  0x05
#define _FS4 0x06
#define _G4  0x07
#define _GS4 0x08
#define _A4  0x09
#define _AS4 0x0a
#define _B4  0x0b
#define _OFF 0x0c
#define _END 0xff
#define _T1  0x00
#define _T2  0x10
#define _T3  0x20
#define _T4  0x30
const short note_freqs[13] = {2093, 2217, 2349, 2489, 2637, 2794, 2960, 3136, 3322, 3520, 3729, 3951, 0};

// Simon
#define SIMON_IDLE   0
#define SIMON_START  1
#define SIMON_PLAY   2
#define SIMON_INPUT  3
#define SIMON_END    4
#define SIMON_SIZE   10
#define SIMON_SPEED  (70 - simon_size*2)
const short simon_freqs[3] = {2093/2, 2637/2, 3136/2};
const byte simon_pins[3] = {YELLOW_ONE, YELLOW_TWO, YELLOW_THREE};

// Songs
const byte tune_entertainer[] = {_D2, _DS2, _E2, _C3 | _T2, _E2, _C3 | _T2, _E2, _C3 | _T4, _OFF, _C3, _D3, _E3, _C3, _D3, _E3 | _T2, _B2, _D3 | _T2, _C3 | _T4, _END};
const byte tune_wheelsonthebus[] = {_C2, _F2 | _T2, _F2, _F2, _F2 | _T2, _A2 | _T2, _C3 | _T2, _A2 | _T2, _F2 | _T4, _G2 | _T2, _G2, _G2, _C2 | _T2, _C2 | _T2, _F2 | _T4, _END};
const byte tune_earshangdown[] = {_E3, _D3, _C3 | _T2, _C3 | _T2, _C3 | _T2, _E2, _F2, _G2, _A2, _G2, _F2, _G2 | _T2, _C3, _D3, _E3 | _T4, _D3 | _T4, _C3 | _T4, _END};
const byte tune_inchbyinch[] = {_F2 | _T2, _C3, _C3 | _T4, _AS2 | _T2, _D3, _C3 | _T4, _AS2 | _T2, _A2 | _T2, _G2 | _T2, _A2 | _T2, _G2, _F2 | _T2, _F2, _G2, _A2, _G2 | _T2, _D2 | _T2, _E2 | _T2, _G2 | _T2, _F2 | _T4, _END};
const byte tune_happybirthday[] = {_C2, _C2, _D2 | _T2, _C2 | _T2, _F2 | _T2, _E2 | _T4, _C2, _C2, _D2 | _T2, _C2 | _T2, _G2 | _T2, _F2 | _T4, _C2, _C2, _C3 | _T2, _A2 | _T2, _F2 | _T2, _E2 | _T2, _D2 | _T4, _AS2, _AS2, _A2 | _T2, _F2 | _T2, _G2 | _T2, _F2 | _T4, _END};
const byte tune_lavieenrose[] = {_F2 | _T4, _E2, _D2 | _T2, _C2, _A1 | _T2, _F2, _E2 | _T4, _D2, _C2 | _T2, _A1, _F1 | _T2, _E2, _D2 | _T4, _C2, _D2 | _T3, _E2 | _T3, _F2 | _T4, _END};
const byte tune_furelise[] = {_E3, _DS3, _E3, _DS3, _E3, _B2, _D3, _C3, _A2 | _T4, _C2, _E2, _A2, _B2 | _T4, _E2, _GS2, _B2, _C3 | _T4, _E2, _E3, _DS3, _E3, _DS3, _E3, _B2, _D3, _C3, _A2 | _T4, _C2, _E2, _A2, _B2 | _T4, _E2, _C3, _B2, _A2 | _T4, _END};
const byte tune_dogsong[] = {_G2 | _T2, _E2 | _T4, _C2 | _T2, _D2, _C2 | _T2, _G1, _A1, _C2 | _T4, _A1 | _T3, _C2 | _T2, _B1 | _T2, _C2, _D2 | _T4, _G2 | _T2, _E2 | _T4, _C2 | _T2, _D2, _C2 | _T2, _G1, _A1, _C2, _F2, _E2, _D2 | _T2, _D2, _C2, _A1 | _T2, _A1 | _T2, _C2 | _T2, _C2 | _T4, _END};
const byte tune_papermoon[] = {_G2 | _T2, _E2, _G2, _G2 | _T2, _G2, _F2 | _T2, _E2, _D2 | _T4, _F2 | _T2, _D2, _F2, _F2 | _T2, _F2, _E2 | _T2, _D2, _C2 | _T4, _G2 | _T2, _FS2, _G2 | _T2, _GS2 | _T2, _A2 | _T2, _F2 | _T2, _D2 | _T2, _C2 | _T2, _B1 | _T2, _A2, _G2 | _T2, _B1 | _T2, _C2 | _T4, _END};
const byte tune_mexicanhat[] = {_C3, _B2, _C3, _A2, _GS2, _A2, _F2, _E2, _F2, _C2 | _T4, _A1, _AS1, _C2, _D2, _E2, _F2, _G2, _A2, _AS2, _G2 | _T4, _AS2, _A2, _AS2, _G2, _FS2, _G2, _E2, _DS2, _E2, _C2 | _T4, _C3, _C3, _C3, _D3, _C3, _AS2, _A2, _G2, _F2 | _T4, _END};
const byte tune_twinkletwinkle[] = {_C2 | _T2, _C2 | _T2, _G2 | _T2, _G2 | _T2, _A2 | _T2, _A2 | _T2, _G2 | _T4, _F2 | _T2, _F2 | _T2, _E2 | _T2, _E2 | _T2, _D2 | _T2, _D2 | _T2, _C2 | _T4, _END};
const byte tune_tonightyou[] = {_E2 | _T2, _A2 | _T2, _E2 | _T2, _CS2 | _T2, _E2, _FS2, _G2, _A2, _B2, _CS3, _B2 | _T2, _A2 | _T2, _FS2, _A2, _B2, _CS3, _B2 | _T2, _A2 | _T2, _F2, _A2, _B2, _CS3, _B2 | _T2, _A2, _B2, _CS3 | _T4, _CS3, _CS3, _B2 | _T2, _E3 | _T4, _CS3 | _T2, _A2 | _T4, _END};
const byte tune_deathmarch[] = {_F1 | _T3, _F1 | _T3, _F1 | _T3, _GS1 | _T2, _G1, _G1 | _T2, _F1, _F1 | _T2, _E1, _F1 | _T4, _END};
const byte tune_flagfanfare[] = {_C2, _E2, _G2, _C3, _E3, _G3, _G3 | _T2, _E3 | _T3, _C2, _DS2, _GS2, _C3, _DS3, _GS3, _GS3 | _T2, _DS3 | _T3, _D2, _F2, _AS2, _D3, _F3, _AS3, _AS3 | _T2, _AS3, _AS3, _AS3, _C4 | _T4, _END};
const byte tune_simon_start[] = {_C2 | _T2, _E2 | _T2, _G2 | _T2, _C3 | _T4, _END};
const byte* all_songs[] = {tune_entertainer, tune_wheelsonthebus, tune_earshangdown, tune_inchbyinch, tune_happybirthday, tune_lavieenrose, tune_furelise, tune_dogsong, tune_papermoon, tune_mexicanhat, tune_twinkletwinkle, tune_tonightyou};
const int num_songs = sizeof(all_songs) / sizeof(const byte*);

// General variables
unsigned long cur_time;
byte game_mode = GAME_MODE_DEFAULT;
bool mode_button_down = false;

// RGB variables
short rgb_red_brightness = 0;
short rgb_green_brightness = 0;
short rgb_blue_brightness = 0;

// Song variables
byte cur_tune = 0;
byte note_counter = 0;
byte note_position = 0;
const byte* note_tune = NULL;

// Big button
bool big_button_down = false;

// Yellow Buttons
bool yellow_is_output = false;
bool yellow_one_down = false;
bool yellow_two_down = false;
bool yellow_three_down = false;
byte yellow_tone = 0;
byte yellow_time = 0;

// Speaker
byte speaker_duration = 0;
int8_t speaker_sweep = 0;
short speaker_freq = 0;
bool speaker_active = false;

// Simon game
byte simon_memory[SIMON_SIZE];
byte simon_size = 0;
byte simon_timer = 0;
byte simon_position = 0;
byte simon_passfail = 0;
byte simon_state = SIMON_IDLE;

// Toggle switches
byte toggle_left_down = 0;
byte toggle_right_down = 0;
byte toggle_state = 0;

void setup() {
  pinMode(BIG_BUTTON, INPUT);
  pinMode(SPEAKER, OUTPUT);
  pinMode(MODE_SELECT, INPUT);
  pinMode(COUNTER_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(RED_BUTTON, INPUT);
  pinMode(GREEN_BUTTON, INPUT);
  pinMode(BLUE_BUTTON, INPUT);
  pinMode(LEFT_TOGGLE, INPUT);
  pinMode(RIGHT_TOGGLE, INPUT);
  pinMode(LEFT_GREEN, OUTPUT);
  pinMode(RIGHT_GREEN, OUTPUT);
  pinMode(BOTH_RED, OUTPUT);
  pinMode(YELLOW_ONE, INPUT);
  pinMode(YELLOW_TWO, INPUT);
  pinMode(YELLOW_THREE, INPUT);
  get_button_state(LEFT_TOGGLE, toggle_left_down);
  get_button_state(RIGHT_TOGGLE, toggle_right_down);
  cur_time = millis();
}

bool get_button_state(int pin, bool& toggle) {
  if (digitalRead(pin)) {
    if (!toggle) {
      toggle = true;
      return true;
    }
  } else {
    toggle = false;
  }
  return false;
}

byte get_button_state(int pin, byte& mode) {
  if (digitalRead(pin)) {
    if (mode != 1) {
      mode = 1;
      return 1;
    }
  } else {
    if (mode != 2) {
      mode = 2;
      return 2;
    }
  }
  return 0;
}

byte get_yellow_press() {
  if (digitalRead(YELLOW_ONE)) {
    return 0;
  } else if (digitalRead(YELLOW_TWO)) {
    return 1;
  } else if (digitalRead(YELLOW_THREE)) {
    return 2;
  }
  return 0xff;
}

void start_tune(const byte* tune) {
  note_tune = tune;
  note_counter = 0;
  note_position = 0;
}

void set_yellow_output(bool is_output) {
  if (is_output && !yellow_is_output) {
    pinMode(YELLOW_ONE, OUTPUT);
    pinMode(YELLOW_TWO, OUTPUT);
    pinMode(YELLOW_THREE, OUTPUT);
    yellow_is_output = is_output;
  } else if (!is_output && yellow_is_output) {
    pinMode(YELLOW_ONE, INPUT);
    pinMode(YELLOW_TWO, INPUT);
    pinMode(YELLOW_THREE, INPUT);
    yellow_is_output = is_output;
  }
}

void play_sound(byte duration, short freq, int8_t sweep) {
  speaker_duration = duration;
  speaker_freq = freq;
  speaker_sweep = sweep;
}

void play_rand_freq(byte duration) {
  play_sound(duration, random(400, 1200), random(-10, 10));
}

void update_notes() {
  byte cur_note = note_tune[note_position];
  if (cur_note == _END) {
    note_tune = NULL;
    noTone(SPEAKER);
    reset_all_lights();
    return;
  }
  if (note_counter == 0) {
    short freq = note_freqs[cur_note & 0x0f] >> (cur_note >> 6);
    if (freq > 0) {
      tone(SPEAKER, freq);
      update_random_lights();
    } else {
      noTone(SPEAKER);
    }
    note_counter += 1;
  } else if (note_counter == (cur_note & 0x30) + 0x10) {
    noTone(SPEAKER);
    note_counter = 0;
    note_position += 1;
  } else {
    note_counter += 1;
  }
}

void update_rgb() {
  if (!digitalRead(RED_BUTTON)) {
    rgb_red_brightness += min(400 - rgb_red_brightness, 4);
    play_sound(1, 400 + rgb_red_brightness*4, 0);
    speaker_active = false;
  }
  if (digitalRead(GREEN_BUTTON)) {
    rgb_green_brightness += min(400 - rgb_green_brightness, 4);
    play_sound(1, 500 + rgb_green_brightness*4, 0);
    speaker_active = false;
  }
  if (!digitalRead(BLUE_BUTTON)) {
    rgb_blue_brightness += min(400 - rgb_blue_brightness, 4);
    play_sound(1, 600 + rgb_blue_brightness*4, 0);
    speaker_active = false;
  }
  analogWrite(RED_LED, min(rgb_red_brightness, 255));
  analogWrite(GREEN_LED, min(rgb_green_brightness, 255));
  analogWrite(BLUE_LED, min(rgb_blue_brightness, 255));
  rgb_red_brightness -= min(rgb_red_brightness, 1);
  rgb_green_brightness -= min(rgb_green_brightness, 1);
  rgb_blue_brightness -= min(rgb_blue_brightness, 1);
}

void update_random_lights() {
  set_yellow_output(true);
  digitalWrite(COUNTER_LED, random(2) ? LOW : HIGH);
  digitalWrite(RED_LED, random(2) ? LOW : HIGH);
  digitalWrite(GREEN_LED, random(2) ? LOW : HIGH);
  digitalWrite(BLUE_LED, random(2) ? LOW : HIGH);
  digitalWrite(YELLOW_ONE, random(2) ? LOW : HIGH);
  digitalWrite(YELLOW_TWO, random(2) ? LOW : HIGH);
  digitalWrite(YELLOW_THREE, random(2) ? LOW : HIGH);
  digitalWrite(LEFT_GREEN, random(2) ? LOW : HIGH);
  digitalWrite(RIGHT_GREEN, random(2) ? LOW : HIGH);
  digitalWrite(BOTH_RED, random(2) ? LOW : HIGH);
}

void reset_all_lights() {
  set_yellow_output(false);
  digitalWrite(COUNTER_LED, LOW);
  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(BLUE_LED, LOW);
  digitalWrite(LEFT_GREEN, LOW);
  digitalWrite(RIGHT_GREEN, LOW);
  digitalWrite(BOTH_RED, LOW);
}

void update_big_button() {
  if (get_button_state(BIG_BUTTON, big_button_down)) {
    reset_simon();
    start_tune(all_songs[cur_tune]);
    cur_tune = (cur_tune + 1) % num_songs;
  }
}

void update_yellow() {
  if (get_button_state(YELLOW_ONE, yellow_one_down)) {
    play_rand_freq(20);
  }
  if (get_button_state(YELLOW_TWO, yellow_two_down)) {
    play_rand_freq(20);
  }
  if (get_button_state(YELLOW_THREE, yellow_three_down)) {
    play_rand_freq(20);
  }
}

void reset_simon() {
  set_yellow_output(false);
  simon_state = SIMON_IDLE;
  simon_position = 0;
  simon_size = 0;
}

void update_simon() {
  switch (simon_state) {
    case SIMON_IDLE:
      if (digitalRead(YELLOW_ONE) || digitalRead(YELLOW_TWO) || digitalRead(YELLOW_THREE)) {
        start_tune(tune_simon_start);
        simon_state = SIMON_START;
      }
      break;
    case SIMON_START:
      if (note_tune == NULL) {
        delay(40);
        set_yellow_output(true);
        simon_memory[simon_size] = random(3);
        simon_position = 0;
        simon_timer = 0;
        simon_size += 1;
        if (simon_size == SIMON_SIZE) {
          simon_state = SIMON_END;
          start_tune(tune_flagfanfare);
        } else {
          simon_state = SIMON_PLAY;
        }
      }
      break;
    case SIMON_PLAY:
      if (simon_timer == 0) {
        if (simon_position == simon_size) {
          set_yellow_output(false);
          simon_position = 0;
          simon_timer = 0;
          simon_passfail = 0;
          simon_state = SIMON_INPUT;
        } else {
          const byte n = simon_memory[simon_position];
          digitalWrite(YELLOW_ONE, LOW);
          digitalWrite(YELLOW_TWO, LOW);
          digitalWrite(YELLOW_THREE, LOW);
          delay(20);
          digitalWrite(simon_pins[n], HIGH);
          simon_timer = SIMON_SPEED;
          play_sound(simon_timer, simon_freqs[n], 0);
          simon_position += 1;
        }
      } else {
        simon_timer -= 1;
      }
      break;
    case SIMON_INPUT:
      {
        const bool b1 = get_button_state(YELLOW_ONE, yellow_one_down);
        const bool b2 = get_button_state(YELLOW_TWO, yellow_two_down);
        const bool b3 = get_button_state(YELLOW_THREE, yellow_three_down);
        if (simon_passfail == 1) {
          if (simon_timer == 0) {
            simon_passfail = 0;
            simon_position += 1;
          } else {
            simon_timer -= 1;
          }
        } else if (simon_position == simon_size) {
          if (!speaker_active) {
            simon_state = SIMON_START;
          }
        } else if (simon_passfail == 2) {
          if (simon_timer == 0) {
            simon_state = SIMON_END;
            start_tune(tune_deathmarch);
          } else {
            simon_timer -= 1;
          }
        } else if (b1) {
          speaker_active = false;
          play_sound(SIMON_SPEED, simon_freqs[0], 0);
          simon_passfail = (simon_memory[simon_position] == 0 ? 1 : 2);
          simon_timer = 10;
        } else if (b2) {
          speaker_active = false;
          play_sound(SIMON_SPEED, simon_freqs[1], 0);
          simon_passfail = (simon_memory[simon_position] == 1 ? 1 : 2);
          simon_timer = 10;
        } else if (b3) {
          speaker_active = false;
          play_sound(SIMON_SPEED, simon_freqs[2], 0);
          simon_passfail = (simon_memory[simon_position] == 2 ? 1 : 2);
          simon_timer = 10;
        }
      }
      break;
    case SIMON_END:
      if (note_tune == NULL) {
        reset_simon();
      }
      break;
  }
}

void update_speaker() {
  if (speaker_duration > 0) {
    if (!speaker_active) {
      tone(SPEAKER, speaker_freq);
      speaker_active = true;
    } else {
      speaker_duration -= 1;
      if (speaker_duration == 0) {
        noTone(SPEAKER);
        speaker_active = false;
      } else if (speaker_sweep != 0) {
        speaker_freq += speaker_sweep;
        tone(SPEAKER, speaker_freq);
      }
    }
  }
}

void update_mode() {
  if (get_button_state(MODE_SELECT, mode_button_down)) {
    reset_simon();
    play_sound(20, 800, 4);
    game_mode = (game_mode + 1) % NUM_GAME_MODES;
  }
}

void update_toggle() {
  const byte left_event = get_button_state(LEFT_TOGGLE, toggle_left_down);
  const byte right_event = get_button_state(RIGHT_TOGGLE, toggle_right_down);
  if (left_event == 1) {
    play_sound(30, 800, -8);
    if (toggle_state == 0 && toggle_right_down == 2) {
      digitalWrite(BOTH_RED, HIGH);
      toggle_state = 1;
    }
    digitalWrite(LEFT_GREEN, LOW);
  } else if (left_event == 2) {
    play_sound(30, 800, 8);
    if (toggle_state == 1 && toggle_right_down == 1) {
      digitalWrite(BOTH_RED, LOW);
      toggle_state = 0;
    }
    digitalWrite(LEFT_GREEN, HIGH);
  }
  if (right_event == 1) {
    play_sound(30, 1200, -8);
    if (toggle_state == 0 && toggle_left_down == 2) {
      digitalWrite(BOTH_RED, HIGH);
      toggle_state = 1;
    }
    digitalWrite(RIGHT_GREEN, LOW);
  } else if (right_event == 2) {
    play_sound(30, 1200, 8);
    if (toggle_state == 1 && toggle_left_down == 1) {
      digitalWrite(BOTH_RED, LOW);
      toggle_state = 0;
    }
    digitalWrite(RIGHT_GREEN, HIGH);
  }
}

void update_time() {
  unsigned long new_time = millis();
  unsigned long delta_time = new_time - cur_time;
  if (delta_time < INTERVAL_MS) {
    delay(INTERVAL_MS - delta_time);
  }
  cur_time = new_time;
}

void loop() {
  update_big_button();
  if (note_tune) {
    update_notes();
  } else {
    if (game_mode == GAME_MODE_DEFAULT) {
      update_yellow();
    } else if (game_mode == GAME_MODE_ADVANCED) {
      update_simon();
    }
    update_rgb();
    update_toggle();
    update_speaker();
  }
  update_mode();
  update_time();
}

