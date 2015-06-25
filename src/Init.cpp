#include "Init.h"

Init::Init()
{
  // Set window title
  set_window_title("Error");

  set_gfx_mode( GFX_AUTODETECT_WINDOWED, 740, 540, 0, 0);

  set_window_title("Jim's Alien Adventure");

  if( num_joysticks > 0)
    joystick_enabled = true;
}

void Init::update(){
  // Change to splash screen
  set_next_state(STATE_INTRO);
}

void Init::draw(){

}

Init::~Init()
{

}
