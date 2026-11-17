/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$get_BootOnly
Dino_BusSand_App_UI_UiSkin_o* Dino_BusSand_App_UI_UiSkin__get_BootOnly (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$get_BootOnly
   Dino_BusSand_App_UI_UiSkin_o* Dino_BusSand_App_UI_UiSkin__get_BootOnly (const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_UI_UiSkin__get_BootOnly_22a207c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  puVar2 = PTR_DAT_04cb59d8;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c265 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb59e0);
    FUN_02132f7c(PTR_DAT_04cb59d8);
    FUN_02132f7c(PTR_DAT_04cb59f8);
    FUN_02132f7c(PTR_DAT_04cb5a00);
    bRam0000000004f9c265 = 1;
  }
  uVar6 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  uVar6 = 0;
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
    if (*(long *)(lVar4 + 0x18) != 0) {
      uVar3 = UnityEngine_AsyncOperation__get_isDone_43b7d34(*(long *)(lVar4 + 0x18),0);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    if (*(char *)(lVar4 + 0x10) == '\0') {
      *(undefined1 *)(lVar4 + 0x10) = 1;
      fVar7 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      uVar6 = UnityEngine_Resources__Load_object__2891e2c
                        (*(undefined8 *)PTR_DAT_04cb5a00,*(undefined8 *)PTR_DAT_04cb59e0);
      puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *puVar5 = uVar6;
      thunk_FUN_02134474(puVar5,uVar6);
      fVar8 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      if (*(int *)(*(long *)PTR_DAT_04cab240 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_BootTrace__Took_214e544
                ((fVar8 - fVar7) * 1000.0,*(undefined8 *)PTR_DAT_04cb59f8,0);
      uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04cab530 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_LanguageFonts__Reapply_2152e00(0);
      }
    }
    uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  }
  return uVar6;
}

