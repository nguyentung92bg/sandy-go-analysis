/* IL2CPP: Dino.BusSand.App.UI.TipsToast$$Dismiss
void Dino_BusSand_App_UI_TipsToast__Dismiss (float olderThan, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.TipsToast$$Dismiss
   void Dino_BusSand_App_UI_TipsToast__Dismiss (float olderThan, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_TipsToast__Dismiss_22bd840(float param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined8 uVar12;
  
  puVar2 = PTR_DAT_04cabb08;
  if ((bRam0000000004f9c315 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb08);
    bRam0000000004f9c315 = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    fVar11 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    uVar7 = *(ulong *)puVar2;
    if (*(int *)(uVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      uVar7 = *(ulong *)puVar2;
    }
    lVar6 = *(long *)(uVar7 + 0xb8);
    if (param_1 <= fVar11 - *(float *)(lVar6 + 0x18)) {
      if (*(int *)(uVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      }
      puVar2 = PTR_DAT_04cb6580;
      uVar1 = _UNK_00e201f4;
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((bRam0000000004f9c316 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac208);
        FUN_02132f7c(PTR_DAT_04caa458);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cabdb0);
        FUN_02132f7c(PTR_DAT_04cac1e8);
        FUN_02132f7c(PTR_DAT_04cb6588);
        FUN_02132f7c(PTR_DAT_04cb6590);
        FUN_02132f7c(PTR_DAT_04cb6580);
        FUN_02132f7c(PTR_DAT_04cad4c0);
        bRam0000000004f9c316 = 1;
      }
      lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(lVar4,0);
      puVar2 = PTR_DAT_04ca9ae8;
      if (lVar4 != 0) {
        plVar9 = (long *)(lVar4 + 0x10);
        *plVar9 = lVar6;
        thunk_FUN_02134474(plVar9,lVar6);
        lVar6 = *plVar9;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
        if ((uVar7 & 1) != 0) {
          return uVar7;
        }
        if (*plVar9 != 0) {
          plVar5 = (long *)UnityEngine_GameObject__get_transform_43c1048(*plVar9,0);
          if (plVar5 == (long *)0x0) {
            *(undefined8 *)(lVar4 + 0x28) = 0;
          }
          else {
            lVar6 = *(long *)PTR_DAT_04cabdb0;
            if ((*plVar5 != lVar6) || (*(long **)(lVar4 + 0x28) = plVar5, *plVar5 != lVar6)) {
                    /* WARNING: Subroutine does not return */
              FUN_021335a4(plVar5);
            }
          }
          thunk_FUN_02134474((undefined8 *)(lVar4 + 0x28),plVar5);
          puVar2 = PTR_DAT_04cad4c0;
          lVar6 = *plVar9;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar6,0);
          puVar10 = (undefined8 *)(lVar4 + 0x30);
          *puVar10 = uVar8;
          thunk_FUN_02134474(puVar10,uVar8);
          uVar8 = *(undefined8 *)(lVar4 + 0x28);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_UiMotion__Stop_22913ec(uVar8,0);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          uVar12 = **(undefined8 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
          uVar8 = *(undefined8 *)PTR_DAT_04cac208;
          *(undefined1 *)(lVar4 + 0x18) = 0;
          *(undefined8 *)(lVar4 + 0x1c) = uVar12;
          uVar8 = thunk_FUN_0216e89c(uVar8);
          System_Action_float____ctor_35f1448(uVar8,lVar4,*(undefined8 *)PTR_DAT_04cb6588,0);
          if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar6 = Dino_BusSand_App_Tween__Value_2160f64(uVar1,uVar8,0);
          if (((lVar6 != 0) &&
              (lVar6 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar6,1,0), lVar6 != 0)) &&
             (lVar6 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar6,*puVar10,0), lVar6 != 0)) {
            uVar7 = Dino_BusSand_App_Tween__SetDelay_2160ea8(0,lVar6,0);
            uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar8,lVar4,*(undefined8 *)PTR_DAT_04cb6590,0);
            if (uVar7 != 0) {
              *(undefined8 *)(uVar7 + 0x40) = uVar8;
              thunk_FUN_02134474((undefined8 *)(uVar7 + 0x40),uVar8,0);
              return uVar7;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return uVar7;
}

