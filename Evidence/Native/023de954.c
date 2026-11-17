/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$C
UnityEngine_Color32_o Dino_BusSand_App_UI_AtelierArt__C (UnityEngine_Color_o c, float a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$C
   UnityEngine_Color32_o Dino_BusSand_App_UI_AtelierArt__C (UnityEngine_Color_o c, float a, const
   MethodInfo* method); */

uint Dino_BusSand_App_UI_AtelierArt__C_22de954
               (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  double dVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dStack_8;
  
  param_4 = param_4 * param_5;
  fVar3 = 1.0;
  if (param_1 <= 1.0) {
    fVar3 = param_1;
  }
  fVar7 = 0.0;
  if (0.0 <= param_1) {
    fVar7 = fVar3 * 255.0;
  }
  dVar1 = (double)FUN_049b52f0((double)fVar7,&dStack_8);
  if (0.0 <= fVar7) {
    if (dVar1 == 0.5) {
      fVar3 = 1.0;
      goto LAB_023e4d08;
    }
    fVar7 = (float)(int)(fVar7 + 0.5);
  }
  else if (dVar1 == -0.5) {
    fVar3 = -1.0;
LAB_023e4d08:
    fVar7 = (float)dStack_8;
    if (((long)dStack_8 & 1U) != 0) {
      fVar7 = (float)dStack_8 + fVar3;
    }
  }
  else {
    fVar7 = (float)(int)(fVar7 + -0.5);
  }
  fVar3 = 1.0;
  if (param_2 <= 1.0) {
    fVar3 = param_2;
  }
  fVar6 = 0.0;
  if (0.0 <= param_2) {
    fVar6 = fVar3 * 255.0;
  }
  dVar1 = (double)FUN_049b52f0((double)fVar6,&dStack_8);
  if (0.0 <= fVar6) {
    if (dVar1 == 0.5) {
      fVar3 = 1.0;
      goto LAB_023e4da0;
    }
    fVar6 = (float)(int)(fVar6 + 0.5);
  }
  else if (dVar1 == -0.5) {
    fVar3 = -1.0;
LAB_023e4da0:
    fVar6 = (float)dStack_8;
    if (((long)dStack_8 & 1U) != 0) {
      fVar6 = (float)dStack_8 + fVar3;
    }
  }
  else {
    fVar6 = (float)(int)(fVar6 + -0.5);
  }
  fVar3 = 1.0;
  if (param_3 <= 1.0) {
    fVar3 = param_3;
  }
  fVar5 = 0.0;
  if (0.0 <= param_3) {
    fVar5 = fVar3 * 255.0;
  }
  dVar1 = (double)FUN_049b52f0((double)fVar5,&dStack_8);
  if (0.0 <= fVar5) {
    if (dVar1 == 0.5) {
      fVar3 = 1.0;
      goto LAB_023e4e3c;
    }
    fVar5 = (float)(int)(fVar5 + 0.5);
  }
  else if (dVar1 == -0.5) {
    fVar3 = -1.0;
LAB_023e4e3c:
    fVar5 = (float)dStack_8;
    if (((long)dStack_8 & 1U) != 0) {
      fVar5 = (float)dStack_8 + fVar3;
    }
  }
  else {
    fVar5 = (float)(int)(fVar5 + -0.5);
  }
  fVar3 = 1.0;
  if (param_4 <= 1.0) {
    fVar3 = param_4;
  }
  fVar4 = 0.0;
  if (0.0 <= param_4) {
    fVar4 = fVar3 * 255.0;
  }
  dVar1 = (double)FUN_049b52f0((double)fVar4,&dStack_8);
  if (0.0 <= fVar4) {
    if (dVar1 != 0.5) {
      fVar3 = (float)(int)(fVar4 + 0.5);
      goto LAB_023e4f0c;
    }
    fVar4 = 1.0;
  }
  else {
    if (dVar1 != -0.5) {
      fVar3 = (float)(int)(fVar4 + -0.5);
      goto LAB_023e4f0c;
    }
    fVar4 = -1.0;
  }
  fVar3 = (float)dStack_8;
  if (((long)dStack_8 & 1U) != 0) {
    fVar3 = (float)dStack_8 + fVar4;
  }
LAB_023e4f0c:
  uVar2 = NEON_ushl(CONCAT44((int)fVar6,(int)fVar5),_UNK_00e69a20,4);
  return (uint)(uVar2 & 0xff0000ff0000) | (int)fVar3 << 0x18 | (int)fVar7 & 0xffU |
         (uint)((uVar2 & 0xff0000ff0000) >> 0x20);
}

