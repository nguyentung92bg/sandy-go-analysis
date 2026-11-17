/* IL2CPP: Dino.BusSand.App.UI.UiTweakApplier$$Apply
void Dino_BusSand_App_UI_UiTweakApplier__Apply (Dino_BusSand_App_UI_UiTweakApplier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiTweakApplier$$Apply
   void Dino_BusSand_App_UI_UiTweakApplier__Apply (Dino_BusSand_App_UI_UiTweakApplier_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_UiTweakApplier__Apply_22a3780(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  if ((bRam0000000004f9c27b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5b50);
    FUN_02132f7c(PTR_DAT_04cb5b58);
    FUN_02132f7c(PTR_DAT_04cb5b60);
    FUN_02132f7c(PTR_DAT_04cb5b68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c27b = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  uVar8 = Dino_BusSand_App_UI_UiTweaks__get_I_22a31b0();
  iVar1 = *(int *)(param_1 + 0x30);
  if (cRam0000000004f9c303 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb5b08);
    cRam0000000004f9c303 = '\x01';
  }
  if (iVar1 != *(int *)(*(long *)(*(long *)PTR_DAT_04cb5b08 + 0xb8) + 0xc)) {
    Dino_BusSand_App_UI_UiTweakApplier__Rebind_22a3eb8(param_1,uVar8);
  }
  fVar13 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  puVar5 = PTR_DAT_04cb5b58;
  puVar4 = PTR_DAT_04cb5b50;
  puVar2 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_a8,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb5b68);
  puVar3 = PTR_DAT_04cacfc0;
  lStack_80 = lStack_98;
  uStack_88 = puStack_a0;
  uStack_90 = uStack_a8;
  uStack_a8 = 0;
  puStack_a0 = &uStack_90;
LAB_023a38c4:
  uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                    (&uStack_90,*(undefined8 *)puVar5);
  lVar7 = lStack_80;
  if ((uVar9 & 1) == 0) {
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_90,*(undefined8 *)puVar4);
    return;
  }
  if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  puVar12 = (undefined8 *)(lStack_80 + 0x18);
  uVar8 = *puVar12;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
  if ((uVar9 & 1) != 0) goto code_r0x023a3908;
  goto LAB_023a39b4;
code_r0x023a3908:
  if (*(float *)(lVar7 + 0x58) <= fVar13) {
    *(float *)(lVar7 + 0x58) = fVar13 + 0.25;
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = Dino_BusSand_App_UI_UiTweakApplier__Resolve_22a450c
                      (param_1,*(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x18));
    *puVar12 = uVar8;
    thunk_FUN_02134474(puVar12);
    cVar6 = cRam0000000004f9b948;
    *(undefined1 *)(lVar7 + 0x20) = 0;
    if (cVar6 == '\0') {
      FUN_02132f7c(puVar3);
      cRam0000000004f9b948 = '\x01';
    }
    cVar6 = cRam0000000004f9b949;
    lVar11 = *(long *)puVar3;
    uVar8 = **(undefined8 **)(lVar11 + 0xb8);
    *(undefined8 *)(lVar7 + 0x3c) = uVar8;
    *(undefined8 *)(lVar7 + 0x34) = uVar8;
    if (cVar6 == '\0') {
      FUN_02132f7c(puVar3);
      lVar11 = *(long *)puVar3;
      cRam0000000004f9b949 = '\x01';
    }
    lVar10 = *(long *)puVar2;
    uVar8 = *(undefined8 *)(lVar7 + 0x18);
    *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8);
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
    if ((uVar9 & 1) == 0) {
LAB_023a39b4:
      lVar11 = *(long *)(lVar7 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar10 = 0;
      if (*(char *)(lVar11 + 0x48) != '\0') {
        lVar10 = lVar11;
      }
      Dino_BusSand_App_UI_UiTweakApplier__Write_22a4598(lVar7,lVar10);
    }
  }
  goto LAB_023a38c4;
}

