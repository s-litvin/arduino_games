
#include <Arduino.h>

// circle 4x4
const uint8_t PROGMEM circles4x4[] = { 
  0b01100110, 
  0b11111001,
  0b11111001,
  0b01100110, 
};

//// square
const uint8_t PROGMEM foods4x4[] = { 
  0b00100011, 
  0b01011100,
  0b11010101,
  0b10100010, 
};


const unsigned char PROGMEM snake84x48[] = { 
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x03, 0x18, 
0x08, 0x08, 0x08, 0x08, 0x0f, 0x98, 
0x00, 0x00, 0x00, 0x00, 0x0d, 0x88, 
0x00, 0x00, 0x00, 0x00, 0x09, 0x88, 
0x00, 0x00, 0x00, 0x00, 0x08, 0xc8, 
0x80, 0x80, 0x80, 0x80, 0x8c, 0xf8, 
0x00, 0x00, 0x00, 0x00, 0x0c, 0x70, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 
0x08, 0x08, 0x08, 0x08, 0x0f, 0xf8, 
0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 
0x00, 0x03, 0xc0, 0x00, 0x08, 0x00, 
0x80, 0x83, 0xe0, 0x80, 0x8f, 0xf8, 
0x00, 0x03, 0xf0, 0x00, 0x07, 0xf8, 
0x00, 0x07, 0x70, 0x00, 0x00, 0xf8, 
0x00, 0x07, 0x70, 0x00, 0x00, 0x70, 
0x08, 0x0e, 0x78, 0x08, 0x0c, 0xf8, 
0x00, 0x1e, 0x70, 0x00, 0x0d, 0x98, 
0x00, 0x1e, 0x70, 0x00, 0x09, 0x88, 
0x00, 0x3f, 0x70, 0x00, 0x09, 0x08, 
0x80, 0xbf, 0xf0, 0x80, 0x8d, 0x98, 
0x00, 0x3b, 0x70, 0x00, 0x0f, 0xf8, 
0x00, 0x3c, 0x70, 0x00, 0x03, 0xf8, 
0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 
0x08, 0x0f, 0xff, 0xe8, 0xff, 0xf8, 
0x00, 0x01, 0xff, 0xf0, 0xff, 0xf8, 
0x00, 0x00, 0xf8, 0xfc, 0x01, 0x80, 
0x00, 0x00, 0x7e, 0x1c, 0x03, 0xc0, 
0x80, 0x80, 0x9f, 0xce, 0x86, 0xf0, 
0x00, 0x00, 0x07, 0xc6, 0x0c, 0x38, 
0x00, 0x00, 0x00, 0xe7, 0x08, 0x18, 
0x00, 0x20, 0x00, 0xe7, 0x00, 0xc8, 
0x0b, 0xff, 0xff, 0xef, 0x0f, 0xf8, 
0x0f, 0xff, 0xff, 0xc7, 0x0f, 0xf8, 
0x1f, 0x9d, 0xdf, 0x87, 0x0c, 0x98, 
0x3f, 0x9d, 0xdd, 0x8e, 0x08, 0x88, 
0xf9, 0x8d, 0x99, 0x9e, 0x88, 0x88, 
0x7c, 0x00, 0x00, 0x3c, 0x0f, 0x88, 
0x7e, 0x00, 0x0f, 0xf8, 0x07, 0x98, 
0xe4, 0x7f, 0xff, 0xf0, 0x00, 0x80, 
0xe8, 0xff, 0xff, 0x88, 0x08, 0x08, 
0xf8, 0xff, 0x00, 0x00, 0x00, 0x00, 
0xf8, 0xff, 0xff, 0xe0, 0x00, 0x00, 
0xe0, 0x7f, 0xff, 0xf8, 0x00, 0x00, 
0xe0, 0x80, 0x80, 0xfc, 0x80, 0x80, 
0x7e, 0x00, 0x00, 0x1e, 0x00, 0x00, 
0x7c, 0x00, 0x00, 0x07, 0x00, 0x00, 
0x38, 0xcd, 0x99, 0x87, 0x00, 0x00, 
0x3d, 0xdd, 0xd9, 0x8b, 0x88, 0x08, 
0x1f, 0xdd, 0xdb, 0x83, 0x80, 0x00, 
0x07, 0xff, 0xff, 0x81, 0x80, 0x00, 
0x03, 0xff, 0xff, 0xf9, 0x80, 0x00, 
0x80, 0x80, 0x9f, 0xf9, 0x80, 0x80, 
0x00, 0x00, 0x7f, 0xd3, 0x80, 0x00, 
0x00, 0x00, 0xff, 0x03, 0x80, 0x00, 
0x00, 0x01, 0xf7, 0x83, 0x80, 0x00, 
0x08, 0x0b, 0xfb, 0x8f, 0x08, 0x08, 
0x00, 0x07, 0x38, 0x0f, 0x00, 0x00, 
0x00, 0x07, 0xd0, 0x1e, 0x00, 0x00, 
0x00, 0x0f, 0xcf, 0xfc, 0x00, 0x00, 
0x80, 0x8e, 0xdf, 0xf0, 0x80, 0x80, 
0x00, 0x0e, 0x1f, 0xc0, 0x00, 0x00, 
0x00, 0x0f, 0xd8, 0x00, 0x00, 0x00, 
0x00, 0x0f, 0xdc, 0x00, 0x00, 0x00, 
0x08, 0x0e, 0x5f, 0xf8, 0x08, 0x08, 
0x00, 0x07, 0xef, 0xfc, 0x00, 0x00, 
0x00, 0x03, 0xd9, 0xbf, 0x00, 0x00, 
0x00, 0x03, 0xd9, 0x8f, 0x80, 0x00, 
0x80, 0x81, 0xff, 0xf3, 0xc0, 0x80, 
0x00, 0x00, 0xff, 0xfd, 0xe0, 0x00, 
0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 
0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 
0x08, 0x08, 0x08, 0x0b, 0xf8, 0x08, 
0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 
0x80, 0x80, 0x80, 0x80, 0xb8, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x18, 0x00
};