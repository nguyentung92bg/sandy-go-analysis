/* IL2CPP: Dino.BusSand.App.Easing$$Evaluate
float Dino_BusSand_App_Easing__Evaluate (int32_t ease, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Possible PIC construction at 0x02260acc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02260ad0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Easing$$Evaluate
   float Dino_BusSand_App_Easing__Evaluate (int32_t ease, float t, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Easing__Evaluate_21609e0(float param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  fVar1 = 1.0;
  if (param_1 <= 1.0) {
    fVar1 = param_1;
  }
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = fVar1;
  }
  switch(param_2) {
  case 1:
    uVar3 = (ulong)(uint)(fVar2 * fVar2);
    break;
  case 2:
    uVar3 = (ulong)(uint)(1.0 - (1.0 - fVar2) * (1.0 - fVar2));
    break;
  case 3:
    fVar1 = fVar2 + fVar2;
    if (fVar2 < 0.5) goto code_r0x02260bac;
    fVar2 = (2.0 - fVar1) * (2.0 - fVar1);
code_r0x02260c80:
    fVar2 = fVar2 * -0.5;
    fVar1 = 1.0;
    goto code_r0x02260c8c;
  case 4:
    fVar1 = fVar2 * fVar2;
    goto code_r0x02260bac;
  case 5:
    fVar1 = (float)func_0x049b5300(1.0 - fVar2,0x40400000);
    uVar3 = (ulong)(uint)(1.0 - fVar1);
    break;
  case 6:
    if (0.5 <= fVar2) {
      fVar2 = (float)func_0x049b5300(2.0 - (fVar2 + fVar2),0x40400000);
      goto code_r0x02260c80;
    }
    fVar1 = fVar2 * 4.0;
code_r0x02260ba8:
    fVar1 = fVar2 * fVar1;
code_r0x02260bac:
    uVar3 = (ulong)(uint)(fVar2 * fVar1);
    break;
  case 7:
    fVar1 = (float)cosf(fVar2 * _UNK_00e2082c * 0.5);
    uVar3 = (ulong)(uint)(1.0 - fVar1);
    break;
  case 8:
    fVar1 = fVar2 * _UNK_00e2082c * 0.5;
SUB_049b5320:
    auVar4 = (*(code *)PTR_sinf_04d166d8)(fVar1);
    return auVar4;
  case 9:
    fVar1 = (float)cosf(fVar2 * _UNK_00e2082c);
    uVar3 = (ulong)(uint)((fVar1 + -1.0) * -0.5);
    break;
  case 10:
    fVar2 = fVar2 + -1.0;
    fVar1 = (float)func_0x049b5300(fVar2,0x40400000);
    uVar3 = (ulong)(uint)(fVar2 * fVar2 * _UNK_00e20090 + fVar1 * _UNK_00e20a0c + 1.0);
    break;
  case 0xb:
    fVar1 = _UNK_00e20090 * fVar2 * fVar2;
    uVar3 = CONCAT44(fVar1 - fVar1,fVar2 * _UNK_00e20a0c * fVar2 * fVar2 - fVar1);
    break;
  case 0xc:
    fVar1 = fVar2 + fVar2;
    if (0.5 <= fVar2) {
      fVar1 = fVar1 + -2.0;
      fVar1 = fVar1 * fVar1 * (fVar1 * _UNK_00e1ffb4 + _UNK_00e20160) + 2.0;
    }
    else {
      fVar1 = fVar1 * fVar1 * (fVar2 * _UNK_00e1fe28 + _UNK_00e202bc);
    }
    uVar3 = (ulong)(uint)(fVar1 * 0.5);
    break;
  case 0xd:
    uVar3 = 0;
    if ((0.0 < fVar2) && (uVar3 = 0x3f800000, fVar2 < 1.0)) {
      exp2f(fVar2 * -10.0);
      fVar1 = (fVar2 * 10.0 + -0.75) * _UNK_00e1ffb0;
      goto SUB_049b5320;
    }
    break;
  case 0xe:
    if (fVar2 < _UNK_00e20020) {
      fVar1 = 7.5625;
      goto code_r0x02260ba8;
    }
    if (_UNK_00e1ffb8 <= fVar2) {
      if (_UNK_00e1fe2c <= fVar2) {
        fVar2 = (fVar2 + _UNK_00e208c8) * (fVar2 + _UNK_00e208c8) * 7.5625;
        fVar1 = 0.984375;
      }
      else {
        fVar2 = (fVar2 + _UNK_00e201e8) * (fVar2 + _UNK_00e201e8) * 7.5625;
        fVar1 = 0.9375;
      }
    }
    else {
      fVar2 = (fVar2 + _UNK_00e20758) * (fVar2 + _UNK_00e20758) * 7.5625;
      fVar1 = 0.75;
    }
code_r0x02260c8c:
    uVar3 = (ulong)(uint)(fVar2 + fVar1);
    break;
  default:
    uVar3 = (ulong)(uint)fVar2;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar3;
  return auVar4;
}

