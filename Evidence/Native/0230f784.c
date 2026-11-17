/* IL2CPP: Dino.BusSand.App.Meta.Segments$$Compute
void Dino_BusSand_App_Meta_Segments__Compute (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Segments$$Compute
   void Dino_BusSand_App_Meta_Segments__Compute (const MethodInfo* method); */

void Dino_BusSand_App_Meta_Segments__Compute_220f784(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint auStack_34 [3];
  
  puVar1 = PTR_DAT_04cacfe0;
  if ((bRam0000000004f9bd34 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacfe0);
    bRam0000000004f9bd34 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = Dino_BusSand_App_Meta_Segments__get_IsNew_220eb60();
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar5 = Dino_BusSand_App_Meta_Profile__get_DaysAway_2271f98(0);
    uVar9 = 1;
    if (2 < iVar5) {
      uVar9 = 2;
    }
  }
  else {
    uVar9 = 0;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bdfc == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfe0);
    cRam0000000004f9bdfc = '\x01';
  }
  puVar2 = PTR_DAT_04cac498;
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar1;
  }
  lVar10 = *(long *)puVar2;
  iVar5 = *(int *)(lVar10 + 0xe4);
  **(undefined4 **)(lVar7 + 0xb8) = uVar9;
  if (iVar5 == 0) {
    thunk_FUN_0218fdac(lVar10);
  }
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd7f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b58);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacfe0);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb2248);
    FUN_02132f7c(PTR_DAT_04cb2250);
    FUN_02132f7c(PTR_DAT_04cb2258);
    bRam0000000004f9bd7f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cacfe0;
  puVar1 = PTR_DAT_04ca9b50;
  if (*(long *)(*(long *)(lVar7 + 0xb8) + 0x10) != 0) {
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b08);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (lVar7,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = Dino_BusSand_App_Meta_Segments__get_LifeName_220fa78();
    puVar4 = PTR_DAT_04cb2250;
    puVar3 = PTR_DAT_04cb2248;
    puVar2 = PTR_DAT_04cb2240;
    puVar1 = PTR_DAT_04ca9b58;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar7,*(undefined8 *)PTR_DAT_04cb2258,uVar8,*(undefined8 *)PTR_DAT_04ca9b58);
    uVar8 = Dino_BusSand_App_Meta_Segments__get_MoneyName_220fb94();
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar7,*(undefined8 *)puVar3,uVar8,*(undefined8 *)puVar1);
    auStack_34[0] = Dino_BusSand_App_Meta_Segments__get_Stuck_220f608();
    auStack_34[0] = auStack_34[0] & 1;
    uVar11 = *(undefined8 *)puVar4;
    uVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),auStack_34);
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar7,uVar11,uVar8,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_TrackingPlan__SetProperties_2275fa8(lVar7,0);
  }
  return;
}

