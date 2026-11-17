/* IL2CPP: Dino.BusSand.App.UI.HomeBus.<>c__DisplayClass98_0$$<Act>b__0
void Dino_BusSand_App_UI_HomeBus___c__DisplayClass98_0___Act_b__0 (Dino_BusSand_App_UI_HomeBus___c__DisplayClass98_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus.<>c__DisplayClass98_0$$<Act>b__0
   void Dino_BusSand_App_UI_HomeBus___c__DisplayClass98_0___Act_b__0
   (Dino_BusSand_App_UI_HomeBus___c__DisplayClass98_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus___c__DisplayClass98_0___Act_b__0_22e50a4
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c41f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6890);
    bRam0000000004f9c41f = 1;
  }
  if (*(long *)(param_4 + 0x20) != 0) {
    lVar3 = *(long *)(*(long *)(param_4 + 0x20) + 0x20);
    uVar4 = System_Nullable_Vector3___get_Value_2bd0e68
                      (param_4 + 0x10,*(undefined8 *)PTR_DAT_04cb6890);
    puVar2 = PTR_DAT_04cb18b8;
    fVar1 = _UNK_00e20178;
    if (lVar3 != 0) {
      if ((bRam0000000004f9c471 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb18b8);
        bRam0000000004f9c471 = 1;
      }
      uStack_50 = 0;
      uStack_48 = 0;
      System_Nullable_Vector3____ctor_2bd0e4c
                (uVar4,param_2,param_3,&uStack_50,*(undefined8 *)puVar2);
      *(undefined8 *)(lVar3 + 0x8c) = uStack_48;
      *(undefined8 *)(lVar3 + 0x84) = uStack_50;
      *(float *)(lVar3 + 0x94) = *(float *)(lVar3 + 0x58) + fVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

