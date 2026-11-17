/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$get_LoadingUp
bool Dino_BusSand_App_UI_HomeStage__get_LoadingUp (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$get_LoadingUp
   bool Dino_BusSand_App_UI_HomeStage__get_LoadingUp (const MethodInfo* method); */

uint Dino_BusSand_App_UI_HomeStage__get_LoadingUp_22ef734(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if ((bRam0000000004f9c45f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb7708);
    bRam0000000004f9c45f = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar2 = PTR_DAT_04cad1b0;
  uVar8 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar5 = **(long **)(*(long *)puVar2 + 0xb8);
  if (lVar5 != 0) {
    lVar6 = *(long *)PTR_DAT_04cb7708;
    puVar7 = *(undefined8 **)(lVar6 + 0x38);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      puVar7 = *(undefined8 **)(lVar6 + 0x38);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_0216b4cc(lVar6);
        puVar7 = *(undefined8 **)(lVar6 + 0x38);
      }
    }
    uVar8 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8(lVar5,*puVar7);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    puVar1 = PTR_DAT_04ca9ae8;
    if ((bRam0000000004fa8638 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
      bRam0000000004fa8638 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar8,0);
    return (uVar3 ^ 0xffffffff) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

