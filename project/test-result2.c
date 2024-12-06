;; Function scale_samples (scale_samples.default, funcdef_no=7, decl_uid=3871, cgraph_uid=8, symbol_order=7)

===== Basic block count: 1 =====
Function Name: scale_samples
x_17 = 0;
Statement Count: 1
===== Basic block count: 2 =====
Function Name: scale_samples
_1 = (long unsigned int) x_15;
_2 = _1 * 2;
_3 = in_20(D) + _2;
# VUSE <.MEM_16>
_4 = *_3;
_5 = (int) _4;
_6 = volume_21(D) * 32767;
_7 = _6 / 100;
_8 = _7 << 1;
_9 = _5 * _8;
_10 = _9 >> 16;
_11 = (long unsigned int) x_15;
_12 = _11 * 2;
_13 = out_22(D) + _12;
_14 = (short int) _10;
# .MEM_23 = VDEF <.MEM_16>
*_13 = _14;
x_24 = x_15 + 1;
Statement Count: 17
===== Basic block count: 3 =====
Function Name: scale_samples
if (x_15 < cnt_19(D))
Statement Count: 18
===== Basic block count: 4 =====
Function Name: scale_samples
# VUSE <.MEM_16>
return;
Statement Count: 19
__attribute__((target ("default"), target_clones ("default", "popcnt")))
void scale_samples (int16_t * in, int16_t * out, int cnt, int volume)
{
  int x;
  long unsigned int _1;
  long unsigned int _2;
  int16_t * _3;
  short int _4;
  int _5;
  int _6;
  int _7;
  int _8;
  int _9;
  int _10;
  long unsigned int _11;
  long unsigned int _12;
  int16_t * _13;
  short int _14;

  <bb 2> :
  x_17 = 0;
  goto <bb 4>; [INV]

  <bb 3> :
  _1 = (long unsigned int) x_15;
  _2 = _1 * 2;
  _3 = in_20(D) + _2;
  _4 = *_3;
  _5 = (int) _4;
  _6 = volume_21(D) * 32767;
  _7 = _6 / 100;
  _8 = _7 << 1;
  _9 = _5 * _8;
  _10 = _9 >> 16;
  _11 = (long unsigned int) x_15;
  _12 = _11 * 2;
  _13 = out_22(D) + _12;
  _14 = (short int) _10;
  *_13 = _14;
  x_24 = x_15 + 1;

  <bb 4> :
  # x_15 = PHI <x_17(2), x_24(3)>
  if (x_15 < cnt_19(D))
    goto <bb 3>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 5> :
  return;

}

