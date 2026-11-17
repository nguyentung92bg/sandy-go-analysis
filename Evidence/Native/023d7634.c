/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$LateUpdate
void Dino_BusSand_App_UI_HomeAtelier__LateUpdate (Dino_BusSand_App_UI_HomeAtelier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$LateUpdate
   void Dino_BusSand_App_UI_HomeAtelier__LateUpdate (Dino_BusSand_App_UI_HomeAtelier_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__LateUpdate_22d7634(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  double dVar12;
  
  puVar1 = PTR_DAT_04cad4c0;
  if ((bRam0000000004f9c3d4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c3d4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar9 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
  puVar1 = PTR_DAT_04cabaf8;
  if (fVar9 <= 0.0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x10) == 0) {
    return;
  }
  *(float *)(param_1 + 0xec) = fVar9 + *(float *)(param_1 + 0xec);
  if ((*(char *)(param_1 + 0xf8) == '\0') && (*(char *)(param_1 + 0xd4) == '\0')) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar2 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    if (iVar2 != *(int *)(param_1 + 0x58)) {
      Dino_BusSand_App_UI_HomeAtelier__Restart_22d77b8(param_1);
    }
  }
  Dino_BusSand_App_UI_HomeAtelier__Layout_22d4fac(param_1,*(char *)(param_1 + 0xe8) == '\0');
  if (*(char *)(param_1 + 0xe8) == '\0') {
    return;
  }
  if ((*(char *)(param_1 + 0xf8) == '\0') && (*(char *)(param_1 + 0xd4) == '\0')) {
    Dino_BusSand_App_UI_HomeAtelier__Browse_22d7970(fVar9,param_1);
  }
  Dino_BusSand_App_UI_HomeAtelier__Wind_22d7a2c(fVar9,param_1);
  Dino_BusSand_App_UI_HomeAtelier__Sync_22d669c(param_1);
  Dino_BusSand_App_UI_HomeAtelier__Pencil_22d7f58(fVar9,param_1);
  if ((bRam0000000004f9c3d5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6fe0);
    bRam0000000004f9c3d5 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = Dino_BusSand_App_UI_HomeAtelier__Find_22d75bc(param_1,*(undefined4 *)(param_1 + 0x58));
  if ((((*(char *)(param_1 + 0xf8) != '\0') || (*(char *)(param_1 + 0xd4) != '\0')) ||
      (_UNK_00e2043c <= *(float *)(param_1 + 0xb0))) || (lVar4 == 0)) {
    fVar10 = *(float *)(param_1 + 0x11c);
    uVar5 = 0;
LAB_023d8690:
    if (0.0 <= fVar10) goto LAB_023d8698;
  }
  else {
    uVar7 = *(undefined8 *)(lVar4 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    fVar10 = *(float *)(param_1 + 0x11c);
    if (((uVar5 & 1) == 0) || (0.0 <= fVar10)) goto LAB_023d8690;
    if (*(float *)(param_1 + 0xec) < *(float *)(param_1 + 0x118)) {
      uVar5 = 1;
      goto LAB_023d8690;
    }
    fVar10 = 0.0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    uVar5 = 1;
LAB_023d8698:
    fVar10 = fVar9 / _UNK_00e1fea8 + fVar10;
    *(float *)(param_1 + 0x11c) = fVar10;
    if (((uVar5 & 1) == 0) || (1.0 <= fVar10)) {
      plVar6 = *(long **)(param_1 + 0xf0);
      *(undefined4 *)(param_1 + 0x11c) = 0xbf800000;
      if (plVar6 == (long *)0x0) goto LAB_023d87e8;
      fVar9 = *(float *)(param_1 + 0xec);
      dVar12 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      *(float *)(param_1 + 0x118) = fVar9 + (float)dVar12 * 2.5 + 6.5;
    }
  }
  if (lVar4 != 0) {
    uVar7 = *(undefined8 *)(lVar4 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)(lVar4 + 0x48);
      if (lVar4 != 0) {
        uVar11 = *(undefined4 *)(param_1 + 0x11c);
        uVar3 = UnityEngine_Shader__PropertyToID_4372cb4
                          (*(undefined8 *)PTR_DAT_04cb6fe0,*(undefined8 *)PTR_DAT_04cb6fe0,0);
        if ((bRam0000000004fa6d88 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf6620);
          FUN_02132f7c(PTR_DAT_04cab588);
          bRam0000000004fa6d88 = 1;
        }
        if (lVar4 != 0) {
          lVar8 = *(long *)(lVar4 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
          }
          if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (pcRam0000000004fa6f68 == (code *)0x0) {
            pcRam0000000004fa6f68 = (code *)FUN_02132f40(&UNK_00e40218);
          }
                    /* WARNING: Could not recover jumptable at 0x0447fb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa6f68)(uVar11,lVar8,uVar3);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
LAB_023d87e8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

