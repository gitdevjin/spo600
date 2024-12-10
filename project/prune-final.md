```c
;; Function sum_sample (sum_sample, funcdef_no=6, decl_uid=3859, cgraph_uid=7, symbol_order=6)

Function Name === __builtin_cpu_supports
Function Name === __builtin_cpu_init
Function Name === scale_samples.resolver
# .MEM_2 = VDEF <.MEM_1(D)>
__builtin_cpu_init ();
_3 = __builtin_cpu_supports (&"popcnt"[0]);
if (_3 > 0)
_5 = (void *) scale_samples.popcnt;
# VUSE <.MEM_2>
return _5;
_4 = (void *) scale_samples;
# VUSE <.MEM_2>
return _4;
Statement Count: 7
Function Name === scale_samples
Function Name === scale_samples.popcnt
x_1 = 0;
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
if (x_2 < cnt_21(D))
# VUSE <.MEM_22>
return;
Statement Count: 19
Function Name === printf
Function Name === vol_createsample
Function Name === calloc
Function Name === main
ttl_1 = 0;
# .MEM_3 = VDEF <.MEM_2(D)>
in_4 = calloc (50000000, 2);
# .MEM_5 = VDEF <.MEM_3>
out_6 = calloc (50000000, 2);
# .MEM_7 = VDEF <.MEM_5>
vol_createsample (in_4, 50000000);
# .MEM_8 = VDEF <.MEM_7>
scale_samples (in_4, out_6, 50000000, 50);
# .MEM_9 = VDEF <.MEM_8>
ttl_10 = sum_sample (out_6, 50000000);
# .MEM_11 = VDEF <.MEM_9>
printf ("Result: %d\n", ttl_10);
_12 = 0;
<L0>:
# VUSE <.MEM_11>
return _12;
Statement Count: 10
Function Name === scale_samples
x_17 = 0;
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
if (x_15 < cnt_19(D))
# VUSE <.MEM_16>
return;
Statement Count: 19
Function Name === sum_sample
x_8 = 0;
_1 = (long unsigned int) x_7;
_2 = _1 * 2;
_3 = buff_12(D) + _2;
# VUSE <.MEM_11(D)>
_4 = *_3;
_5 = (int) _4;
t_13 = t_6 + _5;
x_14 = x_7 + 1;
if (x_7 <= 49999999)
_10 = t_6;
<L3>:
# VUSE <.MEM_11(D)>
return _10;
Statement Count: 12


#### End ctyler diagnostics, start regular dump of current gimple ####


Function 1: 7 statements
Function 2: 19 statements
Function 3: 10 statements
Function 4: 19 statements
Function 5: 12 statements
int sum_sample (int16_t * buff, size_t samples)
{
  int x;
  int t;
  int D.3885;
  long unsigned int _1;
  long unsigned int _2;
  int16_t * _3;
  short int _4;
  int _5;
  int _10;

  <bb 2> :
  x_8 = 0;
  goto <bb 4>; [INV]

  <bb 3> :
  _1 = (long unsigned int) x_7;
  _2 = _1 * 2;
  _3 = buff_12(D) + _2;
  _4 = *_3;
  _5 = (int) _4;
  t_13 = t_6 + _5;
  x_14 = x_7 + 1;

  <bb 4> :
  # t_6 = PHI <t_9(D)(2), t_13(3)>
  # x_7 = PHI <x_8(2), x_14(3)>
  if (x_7 <= 49999999)
    goto <bb 3>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 5> :
  _10 = t_6;

  <bb 6> :
<L3>:
  return _10;

}


;; Function scale_samples (scale_samples.default, funcdef_no=7, decl_uid=3871, cgraph_uid=8, symbol_order=7)

Function Name === __builtin_cpu_supports
Function Name === __builtin_cpu_init
Function Name === scale_samples.resolver
# .MEM_2 = VDEF <.MEM_1(D)>
__builtin_cpu_init ();
_3 = __builtin_cpu_supports (&"popcnt"[0]);
if (_3 > 0)
_5 = (void *) scale_samples.popcnt;
# VUSE <.MEM_2>
return _5;
_4 = (void *) scale_samples;
# VUSE <.MEM_2>
return _4;
Statement Count: 7
Function Name === scale_samples
Function Name === scale_samples.popcnt
x_1 = 0;
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
if (x_2 < cnt_21(D))
# VUSE <.MEM_22>
return;
Statement Count: 19
Function Name === printf
Function Name === vol_createsample
Function Name === calloc
Function Name === main
ttl_1 = 0;
# .MEM_3 = VDEF <.MEM_2(D)>
in_4 = calloc (50000000, 2);
# .MEM_5 = VDEF <.MEM_3>
out_6 = calloc (50000000, 2);
# .MEM_7 = VDEF <.MEM_5>
vol_createsample (in_4, 50000000);
# .MEM_8 = VDEF <.MEM_7>
scale_samples (in_4, out_6, 50000000, 50);
# .MEM_9 = VDEF <.MEM_8>
ttl_10 = sum_sample (out_6, 50000000);
# .MEM_11 = VDEF <.MEM_9>
printf ("Result: %d\n", ttl_10);
_12 = 0;
<L0>:
# VUSE <.MEM_11>
return _12;
Statement Count: 10
Function Name === scale_samples
x_17 = 0;
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
if (x_15 < cnt_19(D))
# VUSE <.MEM_16>
return;
Statement Count: 19
Function Name === sum_sample


#### End ctyler diagnostics, start regular dump of current gimple ####


Function 1: 7 statements
Function 2: 19 statements
Function 3: 10 statements
Function 4: 19 statements
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



;; Function main (main, funcdef_no=8, decl_uid=3878, cgraph_uid=9, symbol_order=8)

Function Name === __builtin_cpu_supports
Function Name === __builtin_cpu_init
Function Name === scale_samples.resolver
# .MEM_2 = VDEF <.MEM_1(D)>
__builtin_cpu_init ();
_3 = __builtin_cpu_supports (&"popcnt"[0]);
if (_3 > 0)
_5 = (void *) scale_samples.popcnt;
# VUSE <.MEM_2>
return _5;
_4 = (void *) scale_samples;
# VUSE <.MEM_2>
return _4;
Statement Count: 7
Function Name === scale_samples
Function Name === scale_samples.popcnt
x_1 = 0;
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
if (x_2 < cnt_21(D))
# VUSE <.MEM_22>
return;
Statement Count: 19
Function Name === printf
Function Name === vol_createsample
Function Name === calloc
Function Name === main
ttl_1 = 0;
# .MEM_3 = VDEF <.MEM_2(D)>
in_4 = calloc (50000000, 2);
# .MEM_5 = VDEF <.MEM_3>
out_6 = calloc (50000000, 2);
# .MEM_7 = VDEF <.MEM_5>
vol_createsample (in_4, 50000000);
# .MEM_8 = VDEF <.MEM_7>
scale_samples (in_4, out_6, 50000000, 50);
# .MEM_9 = VDEF <.MEM_8>
ttl_10 = sum_sample (out_6, 50000000);
# .MEM_11 = VDEF <.MEM_9>
printf ("Result: %d\n", ttl_10);
_12 = 0;
<L0>:
# VUSE <.MEM_11>
return _12;
Statement Count: 10
Function Name === scale_samples
Function Name === sum_sample


#### End ctyler diagnostics, start regular dump of current gimple ####


Function 1: 7 statements
Function 2: 19 statements
Function 3: 10 statements
int main ()
{
  int16_t * out;
  int16_t * in;
  int ttl;
  int x;
  int D.3887;
  int _12;

  <bb 2> :
  ttl_1 = 0;
  in_4 = calloc (50000000, 2);
  out_6 = calloc (50000000, 2);
  vol_createsample (in_4, 50000000);
  scale_samples (in_4, out_6, 50000000, 50);
  ttl_10 = sum_sample (out_6, 50000000);
  printf ("Result: %d\n", ttl_10);
  _12 = 0;

  <bb 3> :
<L0>:
  return _12;

}



;; Function scale_samples.popcnt (scale_samples.popcnt, funcdef_no=9, decl_uid=3892, cgraph_uid=13, symbol_order=12)

Function Name === __builtin_cpu_supports
Function Name === __builtin_cpu_init
Function Name === scale_samples.resolver
# .MEM_2 = VDEF <.MEM_1(D)>
__builtin_cpu_init ();
_3 = __builtin_cpu_supports (&"popcnt"[0]);
if (_3 > 0)
_5 = (void *) scale_samples.popcnt;
# VUSE <.MEM_2>
return _5;
_4 = (void *) scale_samples;
# VUSE <.MEM_2>
return _4;
Statement Count: 7
Function Name === scale_samples
Function Name === scale_samples.popcnt
x_1 = 0;
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
if (x_2 < cnt_21(D))
# VUSE <.MEM_22>
return;
Statement Count: 19
Function Name === printf
Function Name === vol_createsample
Function Name === calloc
Function Name === main
Function Name === scale_samples
Function Name === sum_sample


#### End ctyler diagnostics, start regular dump of current gimple ####


Function 1: 7 statements
Function 2: 19 statements
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



;; Function scale_samples.resolver (scale_samples.resolver, funcdef_no=11, decl_uid=3901, cgraph_uid=15, symbol_order=14)

Function Name === __builtin_cpu_supports
Function Name === __builtin_cpu_init
Function Name === scale_samples.resolver
# .MEM_2 = VDEF <.MEM_1(D)>
__builtin_cpu_init ();
_3 = __builtin_cpu_supports (&"popcnt"[0]);
if (_3 > 0)
_5 = (void *) scale_samples.popcnt;
# VUSE <.MEM_2>
return _5;
_4 = (void *) scale_samples;
# VUSE <.MEM_2>
return _4;
Statement Count: 7
Function Name === scale_samples
Function Name === scale_samples.popcnt
Function Name === printf
Function Name === vol_createsample
Function Name === calloc
Function Name === main
Function Name === scale_samples
Function Name === sum_sample


#### End ctyler diagnostics, start regular dump of current gimple ####


Function 1: 7 statements
void * scale_samples.resolver ()
{
  void * D.3905;
  int D.3904;
  void * D.3903;
  int _3;
  void * _4;
  void * _5;

  <bb 2> :
  __builtin_cpu_init ();
  _3 = __builtin_cpu_supports (&"popcnt"[0]);
  if (_3 > 0)
    goto <bb 3>; [100.00%]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  _5 = (void *) scale_samples.popcnt;
  return _5;

  <bb 4> :
  _4 = (void *) scale_samples;
  return _4;

}
```