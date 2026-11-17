/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$get_I
Dino_BusSand_App_UI_UiSkin_o* Dino_BusSand_App_UI_UiSkin__get_I (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$get_I
   Dino_BusSand_App_UI_UiSkin_o* Dino_BusSand_App_UI_UiSkin__get_I (const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UiSkin__get_I_22a1e1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  puVar3 = PTR_DAT_04cb59d8;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c264 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb59e0);
    FUN_02132f7c(PTR_DAT_04cb59d8);
    FUN_02132f7c(PTR_DAT_04cb59e8);
    FUN_02132f7c(PTR_DAT_04cb59f0);
    bRam0000000004f9c264 = 1;
  }
  uVar10 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
  if ((uVar5 & 1) == 0) goto LAB_023a205c;
  fVar11 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
  if (puVar7[3] != 0) {
    plVar6 = (long *)UnityEngine_ResourceRequest__get_asset_43b6a48(puVar7[3],0);
    lVar8 = *(long *)puVar3;
    if (plVar6 == (long *)0x0) {
      **(undefined8 **)(lVar8 + 0xb8) = 0;
      uVar10 = *(undefined8 *)(*(long *)puVar3 + 0xb8);
LAB_023a1f68:
      plVar6 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar8 + 0x130)) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)
        {
          plVar9 = (long *)0x0;
        }
      }
      **(long **)(lVar8 + 0xb8) = (long)plVar9;
      lVar8 = *(long *)puVar3;
      uVar10 = *(undefined8 *)(lVar8 + 0xb8);
      if (*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar8 + 0x130)) goto LAB_023a1f68;
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_02134474(uVar10,plVar6);
    puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
  }
  uVar10 = *puVar7;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cab240;
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    uVar10 = UnityEngine_Resources__Load_object__2891e2c
                       (*(undefined8 *)PTR_DAT_04cb59f0,*(undefined8 *)PTR_DAT_04cb59e0);
    **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar10;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar10);
  }
  puVar4 = PTR_DAT_04cb59e8;
  puVar2 = PTR_DAT_04cab530;
  fVar12 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_BootTrace__Took_214e544((fVar12 - fVar11) * 1000.0,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_LanguageFonts__Reapply_2152e00(0);
LAB_023a205c:
  return **(undefined8 **)(*(long *)puVar3 + 0xb8);
}

