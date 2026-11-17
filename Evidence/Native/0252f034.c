/* IL2CPP: Dino.BusSand.Core.Lane$$get_RequiredLength
double Dino_BusSand_Core_Lane__get_RequiredLength (Dino_BusSand_Core_Lane_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Lane$$get_RequiredLength
   double Dino_BusSand_Core_Lane__get_RequiredLength (Dino_BusSand_Core_Lane_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_Core_Lane__get_RequiredLength_242f034(long param_1)

{
  undefined4 uVar1;
  double dVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  if ((bRam0000000004f9cc05 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbd0b0);
    FUN_02132f7c(PTR_DAT_04cbd0b8);
    FUN_02132f7c(PTR_DAT_04cbd0d0);
    FUN_02132f7c(PTR_DAT_04cbd0e0);
    bRam0000000004f9cc05 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uVar5 = Dino_BusSand_Core_Lane__get_IsSpent_242ee9c(param_1);
  dVar7 = 0.0;
  if ((uVar5 & 1) == 0) {
    dVar7 = _UNK_00e69a38;
    if (-1 < *(int *)(param_1 + 0x30)) {
      uVar1 = *(undefined4 *)(param_1 + 0x34);
      if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
        thunk_FUN_0218fdac(0);
      }
      dVar7 = (double)Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0(uVar1,0);
      dVar7 = dVar7 + _UNK_00e69a38;
    }
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_ValueTuple_int__Int32Enum____GetEnumerator_39af6a0
              (&uStack_48,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cbd0e0);
    puVar4 = PTR_DAT_04cbd0b8;
    puVar3 = PTR_DAT_04cbc080;
    dVar2 = _UNK_00e6a8b8;
    while (uVar6 = System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____MoveNext_35bb5e8
                             (&uStack_48,*(undefined8 *)puVar4), uVar5 = uStack_38, (uVar6 & 1) != 0
          ) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      dVar8 = (double)Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0(uVar5 >> 0x20,0);
      dVar7 = dVar7 + dVar8 + dVar2;
    }
    System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____Dispose_35bb5e4
              (&uStack_48,*(undefined8 *)PTR_DAT_04cbd0b0);
    dVar7 = dVar7 + dVar2;
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar7;
  return auVar9;
}

