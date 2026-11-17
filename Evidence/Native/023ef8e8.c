/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Pouring
void Dino_BusSand_App_UI_HomeStage__Pouring (Dino_BusSand_App_UI_HomeStage_o* __this, float left, UnityEngine_Color_o main, UnityEngine_Color_o shadow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Pouring
   void Dino_BusSand_App_UI_HomeStage__Pouring (Dino_BusSand_App_UI_HomeStage_o* __this, float left,
   UnityEngine_Color_o main, UnityEngine_Color_o shadow, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__Pouring_22ef8e8
               (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  if (param_1 <= _UNK_00e207ec) {
    return;
  }
  lVar3 = *(long *)(param_6 + 0x78);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  param_1 = param_1 * _UNK_00e1fe38;
  if ((bRam0000000004f9c40d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7200,0);
    bRam0000000004f9c40d = 1;
  }
  puVar1 = PTR_DAT_04cb7200;
  if (*(long *)(lVar3 + 0x18) != 0) {
    fVar5 = -1.0;
    if ((_UNK_00e207ec < param_1) && (fVar5 = param_1, *(float *)(lVar3 + 0xa8) <= 0.0)) {
      lVar4 = *(long *)(lVar3 + 0x20);
      lVar2 = *(long *)PTR_DAT_04cb7200;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar2 = *(long *)puVar1;
      }
      if (lVar4 == 0) goto LAB_023e1884;
      lVar2 = *(long *)(lVar2 + 0xb8);
      uStack_68 = *(undefined8 *)(lVar2 + 0x5c);
      uStack_70 = *(undefined8 *)(lVar2 + 0x54);
      uStack_60 = *(undefined4 *)(lVar2 + 100);
      Dino_BusSand_App_UI_HomeToonFace__Mood_22f1fc0(lVar4,&uStack_70,0);
      if (*(long *)(lVar3 + 0x18) == 0) goto LAB_023e1884;
      Dino_BusSand_App_UI_HomeToonRig__CapOff_22f61a4(*(long *)(lVar3 + 0x18),0);
    }
    *(float *)(lVar3 + 0xa8) = fVar5;
    *(undefined4 *)(lVar3 + 0xac) = param_2;
    *(undefined4 *)(lVar3 + 0xb0) = param_3;
    *(undefined4 *)(lVar3 + 0xb4) = param_4;
    *(undefined4 *)(lVar3 + 0xb8) = param_5;
    *(undefined4 *)(lVar3 + 0xbc) = uStack0000000000000000;
    *(undefined4 *)(lVar3 + 0xc0) = uStack0000000000000004;
    *(undefined4 *)(lVar3 + 0xc4) = uStack0000000000000008;
    *(undefined4 *)(lVar3 + 200) = uStack000000000000000c;
    if (*(long *)(lVar3 + 0x18) == 0) {
LAB_023e1884:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_HomeToonRig__SetHeap_22f5ea0
              (param_1,param_2,param_3,param_4,param_5,*(long *)(lVar3 + 0x18),0);
  }
  return;
}

