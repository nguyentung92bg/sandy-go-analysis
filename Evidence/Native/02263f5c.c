/* IL2CPP: Dino.BusSand.App.UiAssets.<>c__DisplayClass14_0$$<BeginInit>b__0
void Dino_BusSand_App_UiAssets___c__DisplayClass14_0___BeginInit_b__0 (Dino_BusSand_App_UiAssets___c__DisplayClass14_0_o* __this, UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_o __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UiAssets.<>c__DisplayClass14_0$$<BeginInit>b__0
   void Dino_BusSand_App_UiAssets___c__DisplayClass14_0___BeginInit_b__0
   (Dino_BusSand_App_UiAssets___c__DisplayClass14_0_o* __this,
   UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_o __, const MethodInfo*
   method); */

void Dino_BusSand_App_UiAssets___c__DisplayClass14_0___BeginInit_b__0_2163f5c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_04cab490;
  if ((bRam0000000004f9b847 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cac3f0);
    bRam0000000004f9b847 = 1;
  }
  puVar3 = PTR_DAT_04cab240;
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_04cac3f0;
  *(undefined1 *)(*(long *)(lVar7 + 0xb8) + 0x48) = 1;
  fVar12 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  fVar13 = *(float *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cab240;
  uVar8 = *(undefined8 *)puVar2;
  fVar12 = (fVar12 - fVar13) * 1000.0;
  if ((bRam0000000004f9b7af & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    bRam0000000004f9b7af = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cab240;
  if ((bRam0000000004f9b7b2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cab260);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cab268);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cab278);
    FUN_02132f7c(PTR_DAT_04cab280);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9b7b2 = 1;
  }
  lVar7 = *(long *)puVar2;
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x24) != '\0') {
    return;
  }
  uVar11 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = **(long **)(lVar7 + 0xb8);
  uStack_48 = 0;
  uStack_50 = uVar8;
  thunk_FUN_02134474(&uStack_50,uVar8);
  uStack_48 = CONCAT44(fVar12,uVar11);
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)PTR_DAT_04cab260;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar9 + 0x20);
        *puVar4 = uStack_50;
        *(undefined8 *)(lVar9 + 0x28) = uStack_48;
        thunk_FUN_02134474(puVar4,0);
      }
      else {
        System_Collections_Generic_List_BootTrace_Entry___AddWithResize_3b180f0
                  (lVar7,uStack_50,uStack_48,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *puVar4 = uVar8;
      thunk_FUN_02134474(puVar4,uVar8);
      uVar5 = System_String__op_Equality_46d1108(uVar8,*(undefined8 *)PTR_DAT_04cab280,0);
      lVar7 = *(long *)puVar2;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar2;
        }
        lVar9 = *(long *)(lVar7 + 0xb8);
        if (*(int *)(lVar9 + 0x30) == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar2;
            lVar9 = *(long *)(lVar7 + 0xb8);
          }
          *(undefined4 *)(lVar9 + 0x30) = 1;
        }
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_BootTrace__get_Verbose_214dec8();
      if ((uVar5 & 1) == 0) {
        return;
      }
      lVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) != 0) {
          *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_04cab268;
          thunk_FUN_02134474();
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = Dino_BusSand_App_BootTrace__F_214eaf0(uVar11);
          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar7 + 0x28) = uVar6;
            thunk_FUN_02134474((undefined8 *)(lVar7 + 0x28),uVar6);
            puVar2 = PTR_DAT_04cab270;
            if (2 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_04cab270;
              thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30));
              if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar7 + 0x38) = uVar8;
                thunk_FUN_02134474((undefined8 *)(lVar7 + 0x38),uVar8);
                if (0.0 <= fVar12) {
                  if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar8 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
                  uVar8 = System_Single__ToString_4842760
                                    (&stack0xffffffffffffffdc,*(undefined8 *)PTR_DAT_04cab288,uVar8,
                                     0);
                  uVar8 = System_String__Concat_46d2b84
                                    (*(undefined8 *)puVar2,uVar8,*(undefined8 *)PTR_DAT_04cab278,0);
                }
                else {
                  uVar8 = *(undefined8 *)PTR_DAT_04ca9c30;
                }
                if (4 < *(uint *)(lVar7 + 0x18)) {
                  *(undefined8 *)(lVar7 + 0x40) = uVar8;
                  thunk_FUN_02134474();
                  uVar8 = System_String__Concat_46d31f0(lVar7,0);
                  if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
                  }
                  UnityEngine_Debug__Log_4360fc8(uVar8,0);
                  return;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

