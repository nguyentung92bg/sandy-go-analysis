/* IL2CPP: Dino.BusSand.View.PackPalette$$ShadowForMain
UnityEngine_Color_o Dino_BusSand_View_PackPalette__ShadowForMain (UnityEngine_Color_o main, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackPalette$$ShadowForMain
   UnityEngine_Color_o Dino_BusSand_View_PackPalette__ShadowForMain (UnityEngine_Color_o main, const
   MethodInfo* method); */

undefined1  [16]
Dino_BusSand_View_PackPalette__ShadowForMain_2390424
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 uVar6;
  undefined8 extraout_var_00;
  undefined1 auVar5 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04cb70d8;
  if ((bRam0000000004f9c8c2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc038);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    bRam0000000004f9c8c2 = 1;
  }
  lVar3 = *(long *)puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
  uVar2 = FUN_023e4c88(param_1,param_2,param_3,param_4,0);
  if (lVar3 != 0) {
    uVar4 = System_Collections_Generic_Dictionary_Color32__Color___TryGetValue_33b2258
                      (lVar3,uVar2,&uStack_50,*(undefined8 *)PTR_DAT_04cbc038);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_View_PackPalette__ShadeOf_23902e4(param_1,param_2,param_3,param_4);
      uStack_50._0_4_ = extraout_s0;
      uVar2 = extraout_var;
      uVar6 = extraout_var_00;
    }
    else {
      uVar2 = 0;
      uVar6 = 0;
    }
    auVar5._4_4_ = uVar2;
    auVar5._0_4_ = (undefined4)uStack_50;
    auVar5._8_8_ = uVar6;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

