/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$TrackResult
void Dino_BusSand_App_QaPilot_Runner__TrackResult (Dino_BusSand_App_QaPilot_Runner_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$TrackResult
   void Dino_BusSand_App_QaPilot_Runner__TrackResult (Dino_BusSand_App_QaPilot_Runner_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_QaPilot_Runner__TrackResult_2157f18(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  undefined4 uStack_34;
  
  puVar5 = PTR_DAT_04caba50;
  if ((bRam0000000004f9b7f4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04caba58);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caba68);
    FUN_02132f7c(PTR_DAT_04cab388);
    bRam0000000004f9b7f4 = 1;
  }
  uStack_34 = 0;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar4 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar5;
  }
  lVar10 = *(long *)puVar4;
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar10);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  lVar10 = 0;
  if ((uVar7 & 1) != 0) {
    if (lVar6 == 0) goto LAB_02258184;
    lVar10 = *(long *)(lVar6 + 0x20);
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
  if ((uVar7 & 1) == 0) {
    if (lVar10 == 0) goto LAB_02258184;
    iVar1 = *(int *)(lVar10 + 0x20);
    if ((iVar1 == *(int *)(param_1 + 0x58)) && (*(int *)(lVar10 + 0x28) == *(int *)(param_1 + 0x50))
       ) {
      return;
    }
    if (iVar1 - 3U < 3) {
      uStack_34 = *(undefined4 *)(lVar10 + 0x28);
      lVar6 = *(long *)(param_1 + 0x20);
      uVar8 = System_Int32__ToString_482d750(&uStack_34,0);
      uStack_50 = *(undefined8 *)PTR_DAT_04caba68;
      uStack_48 = 0xffffffffffffffff;
      iStack_40 = iVar1;
      uVar9 = System_Enum__ToString_4863070(&uStack_50,0);
      uVar8 = System_String__Concat_46d2b84(uVar8,*(undefined8 *)PTR_DAT_04cab388,uVar9,0);
      if (lVar6 == 0) {
LAB_02258184:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar11 = *(long *)(lVar6 + 0x10);
      lVar12 = *(long *)PTR_DAT_04cab718;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_02258184;
      uVar3 = *(uint *)(lVar6 + 0x18);
      if (uVar3 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar3 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20) = uVar8;
        thunk_FUN_02134474();
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar6,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == 0) goto LAB_02258184;
      if (0x14 < *(int *)(lVar6 + 0x18)) {
        System_Collections_Generic_List_object___RemoveAt_3a833a0
                  (lVar6,0,*(undefined8 *)PTR_DAT_04caba58);
      }
    }
    uVar2 = *(undefined4 *)(lVar10 + 0x28);
    *(int *)(param_1 + 0x58) = iVar1;
    *(undefined4 *)(param_1 + 0x50) = uVar2;
  }
  return;
}

