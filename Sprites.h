#ifndef  SPRITES_H
#define SPRITES_H

#include "Structs.h"

namespace Sprites
{
  static const uint8_t num_0_data[] =
  {
    B00111110,
    B01100011,
    B01100111,
    B01101111,
    B01111011,
    B01110011,
    B01100011,
    B01100011,
    B00111110
  };

  static const uint8_t num_1_data[] =
  {
    B00001100,
    B00011100,
    B00111100,
    B00001100,
    B00001100,
    B00001100,
    B00001100,
    B00001100,
    B00111111
  };

  static const uint8_t num_2_data[] =
  {
    B00111110,
    B01100011,
    B00000011,
    B00000110,
    B00001100,
    B00011000,
    B00110000,
    B01100011,
    B01111111
  };

  static const uint8_t num_3_data[] =
  {
    B00111110,
    B01100011,
    B00000011,
    B00000011,
    B00011110,
    B00000011,
    B00000011,
    B01100011,
    B00111110
  };

  static const uint8_t num_4_data[] =
  {
    B00000110,
    B00001110,
    B00011110,
    B00110110,
    B01100110,
    B01111111,
    B00000110,
    B00000110,
    B00001111,
  };

  static const uint8_t num_5_data[] =
  {
    B01111111,
    B01100000,
    B01100000,
    B01100000,
    B01111110,
    B00000011,
    B00000011,
    B01100011,
    B00111110
  };

  static const uint8_t num_6_data[] =
  {
    B00011100,
    B00110000,
    B01100000,
    B01100000,
    B01111110,
    B01100011,
    B01100011,
    B01100011,
    B00111110
  };

  static const uint8_t num_7_data[] =
  {
    B01111111,
    B01100011,
    B00000011,
    B00000110,
    B00001100,
    B00011000,
    B00011000,
    B00011000,
    B00011000
  };

  static const uint8_t num_8_data[] =
  {
    B00111110,
    B01100011,
    B01100011,
    B01100011,
    B00111110,
    B01100011,
    B01100011,
    B01100011,
    B00111110
  };

  static const uint8_t num_9_data[] =
  {
    B00111110,
    B01100011,
    B01100011,
    B01100011,
    B00111111,
    B00000011,
    B00000011,
    B00000110,
    B00111100
  };

  static const Sprite num_0 = { 1, 9,  num_0_data};
  static const Sprite num_1 = { 1, 9,  num_1_data};
  static const Sprite num_2 = { 1, 9,  num_2_data};
  static const Sprite num_3 = { 1, 9,  num_3_data};
  static const Sprite num_4 = { 1, 9,  num_4_data};
  static const Sprite num_5 = { 1, 9,  num_5_data};
  static const Sprite num_6 = { 1, 9,  num_6_data};
  static const Sprite num_7 = { 1, 9,  num_7_data};
  static const Sprite num_8 = { 1, 9,  num_8_data};
  static const Sprite num_9 = { 1, 9,  num_9_data};

  static const uint8_t A_data[] =
  {
    B00001000,
    B00011100,
    B00110110,
    B01100011,
    B01100011,
    B01111111,
    B01100011,
    B01100011,
    B01100011
  };

  static const uint8_t B_data[] =
  {
    B01111110,
    B00110011,
    B00110011,
    B00110011,
    B00111110,
    B00110011,
    B00110011,
    B00110011,
    B01111110
  };

  static const uint8_t C_data[] =
  {
    B00011110,
    B00110011,
    B01100001,
    B01100000,
    B01100000,
    B01100000,
    B01100001,
    B00110011,
    B00011110
  };

  static const uint8_t D_data[] =
  {
    B01111100,
    B00110110,
    B00110011,
    B00110011,
    B00110011,
    B00110011,
    B00110011,
    B00110110,
    B01111100
  };

  static const uint8_t E_data[] =
  {
    B01111111,
    B00110011,
    B00110001,
    B00110100,
    B00111100,
    B00110100,
    B00110001,
    B00110011,
    B01111111
  };

  static const uint8_t F_data[] =
  {
    B01111111,
    B00110011,
    B00110001,
    B00110100,
    B00111100,
    B00110100,
    B00110000,
    B00110000,
    B01111000
  };

  static const uint8_t G_data[] =
  {
    B00011110,
    B00110011,
    B01100001,
    B01100000,
    B01100000,
    B01101111,
    B01100011,
    B00110011,
    B00011101
  };

  static const uint8_t H_data[] =
  {
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01111111,
    B01100011,
    B01100011,
    B01100011,
    B01100011
  };

  static const uint8_t I_data[] =
  {
    B00111100,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00111100,
  };

  static const uint8_t J_data[] =
  {
    B00001111,
    B00000110,
    B00000110,
    B00000110,
    B00000110,
    B00000110,
    B01100110,
    B01100110,
    B00111100
  };

  static const uint8_t K_data[] =
  {
    B01110011,
    B00110011,
    B00110110,
    B00110110,
    B00111100,
    B00110110,
    B00110110,
    B00110011,
    B01110011
  };

  static const uint8_t L_data[] =
  {
    B01111000,
    B00110000,
    B00110000,
    B00110000,
    B00110000,
    B00110000,
    B00110001,
    B00110011,
    B01111111
  };

  static const uint8_t M_data[] =
  {
    B01100011,
    B01110111,
    B01111111,
    B01101011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011
  };

  static const uint8_t N_data[] =
  {
    B01100011,
    B01110011,
    B01111011,
    B01111111,
    B01101111,
    B01100111,
    B01100011,
    B01100011,
    B01100011
  };

  static const uint8_t O_data[] =
  {
    B00011100,
    B00110110,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B00110110,
    B00011100
  };

  static const uint8_t P_data[] =
  {
    B01111110,
    B00110011,
    B00110011,
    B00110011,
    B00111110,
    B00110000,
    B00110000,
    B00110000,
    B01111000
  };

  static const uint8_t Q_data[] =
  {
    B00111110,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01101011,
    B01101111,
    B00111110,
    B00000110,
    B00000111
  };

  static const uint8_t R_data[] =
  {
    B01111110,
    B00110011,
    B00110011,
    B00110011,
    B00111110,
    B00110110,
    B00110011,
    B00110011,
    B01110011
  };

  static const uint8_t S_data[] =
  {
    B00111110,
    B01100011,
    B01100011,
    B00110000,
    B00011100,
    B00000110,
    B01100011,
    B01100011,
    B00111110
  };

  static const uint8_t T_data[] =
  {
    B11111111,
    B10011001,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00111100
  };

  static const uint8_t U_data[] =
  {
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B00111110
  };

  static const uint8_t V_data[] =
  {
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B00110110,
    B00011100,
    B00001000
  };

  static const uint8_t W_data[] =
  {
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01101011,
    B01111111,
    B01110111,
    B01100011
  };

  static const uint8_t X_data[] =
  {
    B01100011,
    B01100011,
    B01100011,
    B00110110,
    B00011100,
    B00110110,
    B01100011,
    B01100011,
    B01100011
  };

  static const uint8_t Y_data[] =
  {
    B01100011,
    B01100011,
    B01100011,
    B00110110,
    B00011100,
    B00011100,
    B00011100,
    B00011100,
    B00111110
  };

  static const uint8_t Z_data[] =
  {
    B01111111,
    B01100011,
    B01000110,
    B00001100,
    B00011000,
    B00110000,
    B01100001,
    B01100011,
    B01111111
  };

  static const Sprite A = { 1, 9,  A_data};
  static const Sprite B = { 1, 9,  B_data};
  static const Sprite C = { 1, 9,  C_data};
  static const Sprite D = { 1, 9,  D_data};
  static const Sprite E = { 1, 9,  E_data};
  static const Sprite F = { 1, 9,  F_data};
  static const Sprite G = { 1, 9,  G_data};
  static const Sprite H = { 1, 9,  H_data};
  static const Sprite I = { 1, 9,  I_data};
  static const Sprite J = { 1, 9,  J_data};
  static const Sprite K = { 1, 9,  K_data};
  static const Sprite L = { 1, 9,  L_data};
  static const Sprite M = { 1, 9,  M_data};
  static const Sprite N = { 1, 9,  N_data};
  static const Sprite O = { 1, 9,  O_data};
  static const Sprite P = { 1, 9,  P_data};
  static const Sprite Q = { 1,10,  Q_data};
  static const Sprite R = { 1, 9,  R_data};
  static const Sprite S = { 1, 9,  S_data};
  static const Sprite T = { 1, 9,  T_data};
  static const Sprite U = { 1, 9,  U_data};
  static const Sprite V = { 1, 9,  V_data};
  static const Sprite W = { 1, 9,  W_data};
  static const Sprite X = { 1, 9,  X_data};
  static const Sprite Y = { 1, 9,  Y_data};
  static const Sprite Z = { 1, 9,  Z_data};

  static const uint8_t a_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B00111100,
    B00000110,
    B00111110,
    B01100110,
    B01100110,
    B00111011
  };

  static const uint8_t b_data[] =
  {
    B01110000,
    B00110000,
    B00110000,
    B00111100,
    B00110110,
    B00110011,
    B00110011,
    B00110011,
    B01101110
  };

  static const uint8_t c_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B00111110,
    B01100011,
    B01100000,
    B01100000,
    B01100011,
    B00111110
  };

  static const uint8_t d_data[] =
  {
    B00001110,
    B00000110,
    B00000110,
    B00011110,
    B00110110,
    B01100110,
    B01100110,
    B01100110,
    B00111011
  };

  static const uint8_t e_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B00111110,
    B01100011,
    B01111111,
    B01100000,
    B01100011,
    B00111110
  };

  static const uint8_t f_data[] =
  {
    B00011100,
    B00110110,
    B00110010,
    B00110000,
    B01111100,
    B00110000,
    B00110000,
    B00110000,
    B01111000
  };

  static const uint8_t g_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B00111011,
    B01100110,
    B01100110,
    B01100110,
    B00111110,
    B00000110,
    B01100110,
    B00111100
  };

  static const uint8_t h_data[] =
  {
    B01110000,
    B00110000,
    B00110000,
    B00110110,
    B00111011,
    B00110011,
    B00110011,
    B00110011,
    B01110011
  };

  static const uint8_t i_data[] =
  {
    B00001100,
    B00001100,
    B00000000,
    B00011100,
    B00001100,
    B00001100,
    B00001100,
    B00001100,
    B00011110
  };

  static const uint8_t j_data[] =
  {
    B00000110,
    B00000110,
    B00000000,
    B00001110,
    B00000110,
    B00000110,
    B00000110,
    B00000110,
    B01100110,
    B01100110,
    B00111100
  };

  static const uint8_t k_data[] =
  {
    B01110000,
    B00110000,
    B00110000,
    B00110011,
    B00110110,
    B00111100,
    B00110110,
    B00110011,
    B01110011
  };

  static const uint8_t l_data[] =
  {
    B00011100,
    B00001100,
    B00001100,
    B00001100,
    B00001100,
    B00001100,
    B00001100,
    B00001100,
    B00011110
  };

  static const uint8_t m_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B00100010,
    B01111111,
    B01101011,
    B01101011,
    B01101011,
    B01101011
  };

  static const uint8_t n_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B01101110,
    B00110011,
    B00110011,
    B00110011,
    B00110011,
    B00110011
  };

  static const uint8_t o_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B00111110,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B00111110
  };

  static const uint8_t p_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B01101110,
    B00110011,
    B00110011,
    B00110011,
    B00111110,
    B00110000,
    B00110000,
    B01111000
  };

  static const uint8_t q_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B00111011,
    B01100110,
    B01100110,
    B01100110,
    B00111110,
    B00000110,
    B00000110,
    B00001111
  };

  static const uint8_t r_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B01101110,
    B00111011,
    B00110011,
    B00110000,
    B00110000,
    B01111000
  };

  static const uint8_t s_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B00111110,
    B01100011,
    B00111000,
    B00001110,
    B01100011,
    B00111110
  };

  static const uint8_t t_data[] =
  {
    B00001000,
    B00011000,
    B00011000,
    B01111110,
    B00011000,
    B00011000,
    B00011000,
    B00011011,
    B00001110
  };

  static const uint8_t u_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B00111011
  };

  static const uint8_t v_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B01100011,
    B01100011,
    B01100011,
    B00110110,
    B00011100,
    B00001000
  };

  static const uint8_t w_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B01100011,
    B01100011,
    B01100011,
    B01101011,
    B01111111,
    B00110110
  };

  static const uint8_t x_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B01100011,
    B00110110,
    B00011100,
    B00011100,
    B00110110,
    B01100011
  };

  static const uint8_t y_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B00111111,
    B00000011,
    B00000110,
    B00111100
  };

  static const uint8_t z_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B01111111,
    B01100110,
    B00001100,
    B00011000,
    B00110011,
    B01111111
  };

  static const Sprite a = { 1, 9, a_data};
  static const Sprite b = { 1, 9, b_data};
  static const Sprite c = { 1, 9, c_data};
  static const Sprite d = { 1, 9, d_data};
  static const Sprite e = { 1, 9, e_data};
  static const Sprite f = { 1, 9, f_data};
  static const Sprite g = { 1,11, g_data};
  static const Sprite h = { 1, 9, h_data};
  static const Sprite i = { 1, 9, i_data};
  static const Sprite j = { 1,11, j_data};
  static const Sprite k = { 1, 9, k_data};
  static const Sprite l = { 1, 9, l_data};
  static const Sprite m = { 1, 9, m_data};
  static const Sprite n = { 1, 9, n_data};
  static const Sprite o = { 1, 9, o_data};
  static const Sprite p = { 1,11, p_data};
  static const Sprite q = { 1,11, q_data};
  static const Sprite r = { 1, 9, r_data};
  static const Sprite s = { 1, 9, s_data};
  static const Sprite t = { 1, 9, t_data};
  static const Sprite u = { 1, 9, u_data};
  static const Sprite v = { 1, 9, v_data};
  static const Sprite w = { 1, 9, w_data};
  static const Sprite x = { 1, 9, x_data};
  static const Sprite y = { 1,11, y_data};
  static const Sprite z = { 1, 9, z_data};

  static const uint8_t AE_data[] =
  {
    B01100011,
    B01100011,
    B00000000,
    B00001000,
    B00011100,
    B00110110,
    B01100011,
    B01100011,
    B01111111,
    B01100011,
    B01100011,
    B01100011
  };

  static const uint8_t OE_data[] =
  {
    B01100011,
    B01100011,
    B00000000,
    B00011100,
    B00110110,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B00110110,
    B00011100
  };

  static const uint8_t UE_data[] =
  {
    B01100011,
    B01100011,
    B00000000,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B00111110
  };

  static const uint8_t ae_data[] =
  {
    B01100110,
    B01100110,
    B00000000,
    B00111100,
    B00000110,
    B00111110,
    B01100110,
    B01100110,
    B00111011
  };

  static const uint8_t oe_data[] =
  {
    B01100110,
    B01100110,
    B00000000,
    B00111110,
    B01100011,
    B01100011,
    B01100011,
    B01100011,
    B00111110
  };

  static const uint8_t ue_data[] =
  {
    B01100110,
    B01100110,
    B00000000,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B00111011
  };

  static const Sprite AE = { 1,12, AE_data};
  static const Sprite OE = { 1,12, OE_data};
  static const Sprite UE = { 1,12, UE_data};
  static const Sprite ae = { 1, 9, ae_data};
  static const Sprite oe = { 1, 9, oe_data};
  static const Sprite ue = { 1, 9, ue_data};

  static const uint8_t euro_data[] =
    {
    B00001110,
    B00011001,
    B00110000,
    B01111100,
    B00110000,
    B01111100,
    B00110000,
    B00011001,
    B00001110
    };

   static const uint8_t colon_data[] =
   {
    B00000000,
    B00000000,
    B00011000,
    B00011000,
    B00000000,
    B00000000,
    B00000000,
    B00011000,
    B00011000
  };

  static const uint8_t comma_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00011000,
    B00011000,
    B00011000,
    B00110000
  };

  static const uint8_t hypen_data[] =
  {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B01111111,
    B01111111,
    B00000000,
    B00000000,
    B00000000
  };

  static const uint8_t whitespace_data[] =
  {
    B00000000
  };

  static const uint8_t error_data[] =
  {
    B10000001,
    B01000010,
    B00100100,
    B00011000,
    B00011000,
    B00011000,
    B00100100,
    B01000010,
    B10000001
  };

  static const Sprite euro = { 1, 9, euro_data};
  static const Sprite colon = { 1, 9, colon_data};
  static const Sprite comma = { 1,10, comma_data};
  static const Sprite hypen = { 1, 9, hypen_data};
  static const Sprite whitespace = { 1, 1, whitespace_data};
  static const Sprite error = { 1, 9, error_data};

  static const uint8_t ftf_logo_data[] =
  {
    B00000110, B00000110,
    B00001110, B00001110,
    B00011100, B00011100,
    B00011001, B10011000,
    B00011001, B10011000,
    B00011001, B10011000,
    B01111111, B11111110,
    B01111111, B11111110,
    B00011001, B10011000,
    B00011001, B10011000,
    B00011001, B10011000,
    B00011001, B10011000,
    B00011001, B10011000,
    B00000001, B11000000,
    B00000000, B11000000
  };
  static const Sprite ftf_logo =
  {
    2,
    15,
    ftf_logo_data
  };

  static const uint8_t plug_1_data[] =
  {
    B00000000, B00000000,
    B00000000, B00000000,
    B00000111, B10000000,
    B00011111, B11100000,
    B00111111, B11110000,
    B11111111, B11111100,
    B00111111, B11110000,
    B00011111, B11100000,
    B00000111, B10000000,
    B00000000, B00000000,
    B00000000, B00000000,
  };

  static const uint8_t plug_2_data[] =
  {
    B00000010, B01000000,
    B00000001, B10000000,
    B00000110, B01100000,
    B00011110, B11111000,
    B00111110, B01111100,
    B11111110, B01111111,
    B00111110, B01111100,
    B00011110, B11111000,
    B00000110, B01100000,
    B00000001, B10000000,
    B00000010, B01000000,
  };

  static const Sprite plug_1 = { 2, 11, plug_1_data };
  static const Sprite plug_2 = { 2, 11, plug_2_data };

  static const uint8_t bottle_1_data[] =
    {
    B00000001, B10000000,
    B00000000, B00000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000011, B11000000,
    B00000011, B11000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000011, B11100000,
    B00000011, B11100000,
    B00000011, B11100000,
    B00000011, B11100000,
    B00000011, B11100000,
    B00000011, B11100000,
    B00000011, B11100000,
    B00000011, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000011, B11000000
  };

  static const uint8_t bottle_2_data[] =
    {
    B00000001, B10000000,
    B00000000, B00000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000011, B11000000,
    B00000011, B11000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000001, B11100000,
    B00000101, B11100000,
    B00000101, B11100000,
    B00000101, B11100000,
    B00000101, B11100000,
    B00000101, B11100000,
    B00000101, B11100000,
    B00000001, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000011, B11000000
  };

  static const uint8_t bottle_3_data[] =
    {
    B00000001, B10000000,
    B00000000, B00000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000011, B11000000,
    B00000011, B11000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000000, B11100000,
    B00000110, B11100000,
    B00000110, B11100000,
    B00000110, B11100000,
    B00000110, B11100000,
    B00000110, B11100000,
    B00000110, B11100000,
    B00000000, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000011, B11000000
  };

  static const uint8_t bottle_4_data[] =
    {
    B00000001, B10000000,
    B00000000, B00000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000011, B11000000,
    B00000011, B11000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000000, B01100000,
    B00000011, B01100000,
    B00000011, B01100000,
    B00000011, B01100000,
    B00000011, B01100000,
    B00000011, B01100000,
    B00000011, B01100000,
    B00000000, B01100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000011, B11000000
  };

  static const uint8_t bottle_5_data[] =
    {
    B00000001, B10000000,
    B00000000, B00000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000011, B11000000,
    B00000011, B11000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000100, B00100000,
    B00000101, B10100000,
    B00000101, B10100000,
    B00000101, B10100000,
    B00000101, B10100000,
    B00000101, B10100000,
    B00000101, B10100000,
    B00000100, B00100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000011, B11000000
  };

  static const uint8_t bottle_6_data[] =
    {
    B00000001, B10000000,
    B00000000, B00000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000011, B11000000,
    B00000011, B11000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000110, B00000000,
    B00000110, B11000000,
    B00000110, B11000000,
    B00000110, B11000000,
    B00000110, B11000000,
    B00000110, B11000000,
    B00000110, B11000000,
    B00000110, B00000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000011, B11000000
  };

  static const uint8_t bottle_7_data[] =
    {
    B00000001, B10000000,
    B00000000, B00000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000011, B11000000,
    B00000011, B11000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B00000000,
    B00000111, B01100000,
    B00000111, B01100000,
    B00000111, B01100000,
    B00000111, B01100000,
    B00000111, B01100000,
    B00000111, B01100000,
    B00000111, B00000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000011, B11000000
  };

  static const uint8_t bottle_8_data[] =
    {
    B00000001, B10000000,
    B00000000, B00000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000011, B11000000,
    B00000011, B11000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B10000000,
    B00000111, B10100000,
    B00000111, B10100000,
    B00000111, B10100000,
    B00000111, B10100000,
    B00000111, B10100000,
    B00000111, B10100000,
    B00000111, B10000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000011, B11000000
  };

  static const uint8_t bottle_9_data[] =
  {
    B00000001, B10000000,
    B00000000, B00000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000011, B11000000,
    B00000011, B11000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11000000,
    B00000111, B11000000,
    B00000111, B11000000,
    B00000111, B11000000,
    B00000111, B11000000,
    B00000111, B11000000,
    B00000111, B11000000,
    B00000111, B11000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000011, B11000000
  };

  static const uint8_t bottle_10_data[] =
    {
    B00000001, B10000000,
    B00000000, B00000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000001, B10000000,
    B00000011, B11000000,
    B00000011, B11000000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000111, B11100000,
    B00000011, B11000000
  };

  static const Sprite bottle_1 = { 2, 22, bottle_1_data };
  static const Sprite bottle_2 = { 2, 22, bottle_2_data };
  static const Sprite bottle_3 = { 2, 22, bottle_3_data };
  static const Sprite bottle_4 = { 2, 22, bottle_4_data };
  static const Sprite bottle_5 = { 2, 22, bottle_5_data };
  static const Sprite bottle_6 = { 2, 22, bottle_6_data };
  static const Sprite bottle_7 = { 2, 22, bottle_7_data };
  static const Sprite bottle_8 = { 2, 22, bottle_8_data };
  static const Sprite bottle_9 = { 2, 22, bottle_9_data };
  static const Sprite bottle_10 = { 2, 22, bottle_10_data };
}

#endif //  SPRITES_H
