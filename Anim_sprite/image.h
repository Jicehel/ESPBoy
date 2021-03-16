// width is 80, height is 30
const uint8_t bottom_1[] PROGMEM = {
  0xaa, 0xaa, 0xaa, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 
  0xaa, 0xaa, 0x00, 0xdd, 0xdd, 0x00, 0xaa, 0xaa, 
  0xaa, 0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 0xaa, 
  0xaa, 0x0d, 0xd0, 0x0d, 0xd0, 0x0d, 0xd0, 0xaa, 
  0xaa, 0x0d, 0x09, 0xdd, 0xdd, 0x90, 0xd0, 0xaa, 
  0xa0, 0xd0, 0x90, 0xdd, 0xdd, 0x09, 0x0d, 0x0a, 
  0xa0, 0xdd, 0xd0, 0xdd, 0xdd, 0x0d, 0xdd, 0x0a, 
  0xa0, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0x0a, 
  0xa0, 0x10, 0xdd, 0x0d, 0xd0, 0xdd, 0x01, 0x0a, 
  0xa0, 0xd1, 0x00, 0xdd, 0xdd, 0x00, 0x1d, 0x0a, 
  0x0d, 0x01, 0x1d, 0x00, 0x00, 0xd1, 0x10, 0xd0, 
  0x0d, 0x0d, 0x11, 0x11, 0x11, 0x11, 0xd0, 0xd0, 
  0xa0, 0x00, 0xd1, 0x11, 0x11, 0x1d, 0x00, 0x0a, 
  0xa0, 0xdd, 0x00, 0xd1, 0x1d, 0x00, 0xdd, 0x0a, 
  0x0d, 0xdd, 0xdd, 0x00, 0x00, 0xdd, 0xdd, 0xd0, 
  0x00, 0x00, 0x00, 0xaa, 0xaa, 0x00, 0x00, 0x00, 
};

const uint8_t bottom_2[] PROGMEM = {
  0xaa, 0xaa, 0xaa, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 
  0xaa, 0xaa, 0x00, 0xdd, 0xdd, 0x00, 0xaa, 0xaa, 
  0xaa, 0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 0xaa, 
  0xaa, 0x0d, 0xd0, 0x0d, 0xd0, 0x0d, 0xd0, 0xaa, 
  0xaa, 0x0d, 0x09, 0xdd, 0xdd, 0x90, 0xd0, 0xaa, 
  0xa0, 0xd0, 0x90, 0xdd, 0xdd, 0x09, 0x0d, 0x0a, 
  0xa0, 0xdd, 0xd0, 0xdd, 0xdd, 0x0d, 0xdd, 0x0a, 
  0xa0, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0x0a, 
  0xa0, 0x10, 0xdd, 0x0d, 0xd0, 0xdd, 0x0d, 0x0a, 
  0xa0, 0xd1, 0x00, 0xdd, 0xdd, 0x00, 0x00, 0xd0, 
  0x0d, 0x01, 0x1d, 0x00, 0x00, 0xd0, 0xdd, 0x00, 
  0x00, 0x0d, 0x11, 0x11, 0x11, 0x10, 0xdd, 0x0a, 
  0xaa, 0x00, 0xd1, 0x11, 0x11, 0x1d, 0x00, 0x0a, 
  0xa0, 0xdd, 0x00, 0xd1, 0x1d, 0x00, 0x00, 0xaa, 
  0x0d, 0xdd, 0xdd, 0x00, 0x00, 0xa0, 0x00, 0x0a, 
  0x00, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
};

const uint8_t bottom_3[] PROGMEM = {
  0xaa, 0xaa, 0xaa, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 
  0xaa, 0xaa, 0x00, 0xdd, 0xdd, 0x00, 0xaa, 0xaa, 
  0xaa, 0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 0xaa, 
  0xaa, 0x0d, 0xd0, 0x0d, 0xd0, 0x0d, 0xd0, 0xaa, 
  0xaa, 0x0d, 0x09, 0xdd, 0xdd, 0x90, 0xd0, 0xaa, 
  0xa0, 0xd0, 0x90, 0xdd, 0xdd, 0x09, 0x0d, 0x0a, 
  0xa0, 0xdd, 0xd0, 0xdd, 0xdd, 0x0d, 0xdd, 0x0a, 
  0xa0, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0x0a, 
  0xa0, 0xd0, 0xdd, 0x0d, 0xd0, 0xdd, 0x01, 0x0a, 
  0x0d, 0x00, 0x00, 0xdd, 0xdd, 0x00, 0x1d, 0x0a, 
  0xa0, 0xdd, 0x0d, 0x00, 0x00, 0xd1, 0x10, 0xd0, 
  0xa0, 0xdd, 0x01, 0x11, 0x11, 0x11, 0xd0, 0x00, 
  0xa0, 0x00, 0xd1, 0x11, 0x11, 0x1d, 0x00, 0xaa, 
  0xaa, 0x00, 0x00, 0xd1, 0x1d, 0x00, 0xdd, 0x0a, 
  0xa0, 0x00, 0x0a, 0x00, 0x00, 0xdd, 0xdd, 0xd0, 
  0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0x00, 
};

const uint8_t up_1[] PROGMEM = {
  0xaa, 0xaa, 0xaa, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 
  0xaa, 0xaa, 0x00, 0xdd, 0xdd, 0x00, 0xaa, 0xaa, 
  0xaa, 0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 0xaa, 
  0xaa, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0xaa, 
  0xaa, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0xaa, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0x0d, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0xd0, 
  0xa0, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0x0a, 
  0xaa, 0x00, 0xd0, 0xdd, 0xd0, 0x0d, 0x00, 0xaa, 
  0xa0, 0xdd, 0x00, 0xdd, 0xdd, 0xd0, 0x0d, 0x0a, 
  0x0d, 0xdd, 0xdd, 0x00, 0xdd, 0xdd, 0x0d, 0xd0, 
  0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t up_2[] PROGMEM = {
  0xaa, 0xaa, 0xaa, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 
  0xaa, 0xaa, 0x00, 0xdd, 0xdd, 0x00, 0xaa, 0xaa, 
  0xaa, 0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 0xaa, 
  0xaa, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0xaa, 
  0xaa, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0xaa, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x00, 
  0x0d, 0xd0, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0x00, 
  0x0d, 0xd0, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0x0a, 
  0xa0, 0x00, 0xd0, 0xdd, 0xd0, 0x0d, 0x00, 0x0a, 
  0xaa, 0x00, 0x00, 0xdd, 0xdd, 0xd0, 0xdd, 0x0a, 
  0xa0, 0x00, 0x0a, 0x00, 0xdd, 0xdd, 0x0d, 0xd0, 
  0xaa, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t up_3[] PROGMEM = {
  0xaa, 0xaa, 0xaa, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 
  0xaa, 0xaa, 0x00, 0xdd, 0xdd, 0x00, 0xaa, 0xaa, 
  0xaa, 0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 0xaa, 
  0xaa, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0xaa, 
  0xaa, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0xaa, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0x00, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 0x0a, 
  0x00, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0x0d, 0xd0, 
  0xa0, 0x0d, 0xdd, 0xdd, 0xdd, 0xdd, 0x0d, 0xd0, 
  0xa0, 0x00, 0xd0, 0xdd, 0xd0, 0x0d, 0x00, 0x0a, 
  0xa0, 0xdd, 0x00, 0xdd, 0xdd, 0xd0, 0x00, 0xaa, 
  0x0d, 0xdd, 0xdd, 0x00, 0xdd, 0xdd, 0x00, 0x0a, 
  0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0xaa, 0xaa,  
};

const uint8_t left_1[] PROGMEM = {
  0xaa, 0xaa, 0xaa, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 
  0xaa, 0xaa, 0x00, 0xdd, 0xdd, 0x00, 0xaa, 0xaa, 
  0xaa, 0xa0, 0xd0, 0x0d, 0xdd, 0xdd, 0x0a, 0xaa, 
  0xaa, 0x0d, 0xdd, 0x90, 0xdd, 0xdd, 0xd0, 0xaa, 
  0xaa, 0x0d, 0xdd, 0x09, 0x0d, 0xdd, 0xd0, 0xaa, 
  0xa0, 0xdd, 0xdd, 0x0d, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xd0, 0xdd, 0xdd, 0x0d, 0xdd, 0xdd, 0x0a, 
  0xaa, 0x0d, 0xdd, 0x00, 0xd0, 0xdd, 0x0d, 0x0a, 
  0xaa, 0x00, 0x00, 0xd1, 0x0d, 0xd0, 0xdd, 0x0a, 
  0xaa, 0x01, 0x11, 0x11, 0x0d, 0xd0, 0xd0, 0xaa, 
  0xaa, 0x0d, 0x11, 0x11, 0xd0, 0x0d, 0xd0, 0xaa, 
  0xaa, 0xa0, 0xd0, 0x00, 0x01, 0x11, 0xdd, 0x0a, 
  0xaa, 0xaa, 0x0d, 0xdd, 0xd0, 0x01, 0x1d, 0xd0, 
  0xaa, 0xa0, 0xdd, 0xdd, 0xdd, 0x00, 0x11, 0xd0, 
  0xaa, 0xa0, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x0a, 
};


const uint8_t left_2[] PROGMEM = {
  0xaa, 0xaa, 0xaa, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 
  0xaa, 0xaa, 0x00, 0xdd, 0xdd, 0x00, 0xaa, 0xaa, 
  0xaa, 0xa0, 0xd0, 0x0d, 0xdd, 0xdd, 0x0a, 0xaa, 
  0xaa, 0x0d, 0xdd, 0x90, 0xdd, 0xdd, 0xd0, 0xaa, 
  0xaa, 0x0d, 0xdd, 0x09, 0x0d, 0xdd, 0xd0, 0xaa, 
  0xa0, 0xdd, 0xdd, 0x0d, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xd0, 0xdd, 0xdd, 0x0d, 0xdd, 0xdd, 0x0a, 
  0xaa, 0x0d, 0xdd, 0x00, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xaa, 0x00, 0x00, 0x01, 0xdd, 0xd0, 0xdd, 0x0a, 
  0xaa, 0x01, 0x11, 0x0d, 0xd0, 0x0d, 0xd0, 0xaa, 
  0xa0, 0x0d, 0x11, 0x10, 0x01, 0x1d, 0xd0, 0xaa, 
  0x0d, 0xd0, 0x0d, 0x11, 0x10, 0x00, 0x0d, 0x0a, 
  0x0d, 0xdd, 0xd0, 0x00, 0x0d, 0xdd, 0xd0, 0xd0, 
  0xa0, 0xdd, 0xd0, 0xa0, 0xdd, 0xdd, 0x01, 0xd0, 
  0xaa, 0x00, 0x0a, 0xa0, 0x00, 0x00, 0x00, 0x0a, 
};

const uint8_t right_1[] PROGMEM = {
  0xaa, 0xaa, 0xaa, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 
  0xaa, 0xaa, 0x00, 0xdd, 0xdd, 0x00, 0xaa, 0xaa, 
  0xaa, 0xa0, 0xdd, 0xdd, 0xd0, 0x0d, 0x0a, 0xaa, 
  0xaa, 0x0d, 0xdd, 0xdd, 0x09, 0xdd, 0xd0, 0xaa, 
  0xaa, 0x0d, 0xdd, 0xd0, 0x90, 0xdd, 0xd0, 0xaa, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xd0, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xd0, 0xdd, 0xdd, 0x0d, 0x0a, 
  0xa0, 0xd0, 0xdd, 0x0d, 0x00, 0xdd, 0xd0, 0xaa, 
  0xa0, 0xdd, 0x0d, 0xd0, 0x1d, 0x00, 0x00, 0xaa, 
  0xaa, 0x0d, 0x0d, 0xd0, 0x11, 0x11, 0x10, 0xaa, 
  0xaa, 0x0d, 0xd0, 0x0d, 0x11, 0x11, 0xd0, 0xaa, 
  0xa0, 0xdd, 0x11, 0x10, 0x00, 0x0d, 0x0a, 0xaa, 
  0x0d, 0xd1, 0x10, 0x0d, 0xdd, 0xd0, 0xaa, 0xaa, 
  0x0d, 0x11, 0x00, 0xdd, 0xdd, 0xdd, 0x0a, 0xaa, 
  0xa0, 0x00, 0xaa, 0x00, 0x00, 0x00, 0x0a, 0xaa, 
};

const uint8_t right_2[] PROGMEM = {
  0xaa, 0xaa, 0xaa, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 
  0xaa, 0xaa, 0x00, 0xdd, 0xdd, 0x00, 0xaa, 0xaa, 
  0xaa, 0xa0, 0xdd, 0xdd, 0xd0, 0x0d, 0x0a, 0xaa, 
  0xaa, 0x0d, 0xdd, 0xdd, 0x09, 0xdd, 0xd0, 0xaa, 
  0xaa, 0x0d, 0xdd, 0xd0, 0x90, 0xdd, 0xd0, 0xaa, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xd0, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xd0, 0xdd, 0xdd, 0x0d, 0x0a, 
  0xa0, 0xdd, 0xdd, 0xdd, 0x00, 0xdd, 0xd0, 0xaa, 
  0xa0, 0xdd, 0x0d, 0xdd, 0x10, 0x00, 0x00, 0xaa, 
  0xaa, 0x0d, 0xd0, 0x0d, 0xd0, 0x11, 0x10, 0xaa, 
  0xaa, 0x0d, 0xd1, 0x10, 0x01, 0x11, 0xd0, 0x0a, 
  0xa0, 0xd0, 0x00, 0x01, 0x11, 0xd0, 0x01, 0xd0, 
  0x0d, 0x0d, 0xdd, 0xd0, 0x00, 0x01, 0x1d, 0xd0, 
  0x0d, 0x10, 0xdd, 0xdd, 0x0a, 0x0d, 0xdd, 0x0a, 
  0xa0, 0x00, 0x00, 0x00, 0x0a, 0xa0, 0x00, 0xaa,  
};
