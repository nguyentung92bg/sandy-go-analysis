/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$<OnOpen>b__19_1
System_Nullable_Vector3__o Dino_BusSand_App_UI_HomePanel___OnOpen_b__19_1 (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$<OnOpen>b__19_1
   System_Nullable_Vector3__o Dino_BusSand_App_UI_HomePanel___OnOpen_b__19_1
   (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_HomePanel___OnOpen_b__19_1_22edbc8(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c452 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb74b0);
    FUN_02132f7c(PTR_DAT_04cb18b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c452 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  puVar2 = PTR_DAT_04cb74b0;
  if ((uVar3 & 1) == 0) {
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x70);
    if (*(int *)(*(long *)PTR_DAT_04cb74b0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Transform__TransformPoint_43d3c44
              (0,*(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc) * 0.5,0,lVar4,0);
    uStack_30 = 0;
    uStack_28 = 0;
    System_Nullable_Vector3____ctor_2bd0e4c(&uStack_30,*(undefined8 *)PTR_DAT_04cb18b8);
  }
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}

