;; Function scale_samples.popcnt (scale_samples.popcnt, funcdef_no=9, decl_uid=3892, cgraph_uid=13, symbol_order=12)

===== Basic block count: 1 =====
Function Name: scale_samples.popcnt
x_1 = 0;
Statement Count: 1
===== Basic block count: 2 =====
Function Name: scale_samples.popcnt
_3 = (long unsigned int) x_2;
_4 = _3 * 2;
_6 = in_5(D) + _4;
# VUSE <.MEM_22>
_7 = *_6;
_8 = (int) _7;
_10 = volume_9(D) * 32767;
_11 = _10 / 100;
_12 = _11 << 1;
_13 = _8 * _12;
_14 = _13 >> 16;
_15 = (long unsigned int) x_2;
_16 = _15 * 2;
_18 = out_17(D) + _16;
_19 = (short int) _14;
# .MEM_24 = VDEF <.MEM_22>
*_18 = _19;
x_20 = x_2 + 1;
Statement Count: 17
===== Basic block count: 3 =====
Function Name: scale_samples.popcnt
if (x_2 < cnt_21(D))
Statement Count: 18
===== Basic block count: 4 =====
Function Name: scale_samples.popcnt
# VUSE <.MEM_22>
return;
Statement Count: 19
__attribute__((target ("popcnt"), target_clones ("default", "popcnt")))
void scale_samples.popcnt (int16_t * in, int16_t * out, int cnt, int volume)
{
  int x;
  long unsigned int _3;
  long unsigned int _4;
  int16_t * _6;
  short int _7;
  int _8;
  int _10;
  int _11;
  int _12;
  int _13;
  int _14;
  long unsigned int _15;
  long unsigned int _16;
  int16_t * _18;
  short int _19;

  <bb 2> :
  x_1 = 0;
  goto <bb 4>; [INV]

  <bb 3> :
  _3 = (long unsigned int) x_2;
  _4 = _3 * 2;
  _6 = in_5(D) + _4;
  _7 = *_6;
  _8 = (int) _7;
  _10 = volume_9(D) * 32767;
  _11 = _10 / 100;
  _12 = _11 << 1;
  _13 = _8 * _12;
  _14 = _13 >> 16;
  _15 = (long unsigned int) x_2;
  _16 = _15 * 2;
  _18 = out_17(D) + _16;
  _19 = (short int) _14;
  *_18 = _19;
  x_20 = x_2 + 1;

  <bb 4> :
  # x_2 = PHI <x_1(2), x_20(3)>
  if (x_2 < cnt_21(D))
    goto <bb 3>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 5> :
  return;

}