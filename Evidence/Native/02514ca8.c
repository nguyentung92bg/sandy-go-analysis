/* IL2CPP: Dino.BusSand.Core.Road$$IsSlotClear
bool Dino_BusSand_Core_Road__IsSlotClear (Dino_BusSand_Core_Road_o* __this, double pos, Dino_BusSand_Core_RoadBus_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Road$$IsSlotClear
   bool Dino_BusSand_Core_Road__IsSlotClear (Dino_BusSand_Core_Road_o* __this, double pos,
   Dino_BusSand_Core_RoadBus_o* e, const MethodInfo* method); */

uint Dino_BusSand_Core_Road__IsSlotClear_2414ca8(double param_1,long param_2,long param_3)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9cb6c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cbe5f0);
    bRam0000000004f9cb6c = 1;
  }
  puVar3 = PTR_DAT_04cb1898;
  puVar2 = PTR_DAT_04cb1890;
  dVar1 = _UNK_00e6a008;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  if (((param_3 == 0) || (*(long *)(param_2 + 0x10) == 0)) || (*(long *)(param_2 + 0x50) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  dVar7 = (double)*(int *)(param_3 + 0x1c) / 2.0;
  dVar9 = (double)*(int *)(*(long *)(param_2 + 0x10) + 0x24);
  dVar10 = ((param_1 - dVar7) - dVar9) + _UNK_00e6a008;
  dVar7 = dVar7 + param_1 + dVar9 + _UNK_00e6a480;
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_98,*(long *)(param_2 + 0x50),*(undefined8 *)PTR_DAT_04cbe5f0);
  lStack_70 = lStack_88;
  uStack_78 = puStack_90;
  uStack_80 = uStack_98;
  uStack_98 = 0;
  puStack_90 = &uStack_80;
LAB_02514da8:
  do {
    do {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_80,*(undefined8 *)puVar3);
      lVar4 = lStack_70;
      if ((uVar5 & 1) == 0) goto LAB_02514e58;
    } while (lStack_70 == param_3);
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  } while (1 < *(int *)(lStack_70 + 0x28) - 1U);
  dVar9 = *(double *)(lStack_70 + 0x40);
  uVar6 = Dino_BusSand_Core_Road__IsInReturnStraight_2412920(dVar9,param_2);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((dVar9 + (double)*(int *)(lVar4 + 0x1c) / 2.0 <=
         (double)(*(int *)(param_2 + 0x24) - *(int *)(*(long *)(param_2 + 0x10) + 0x20)) + dVar1) &&
       (*(char *)(lVar4 + 100) == '\0')) goto LAB_02514da8;
  }
  dVar9 = (double)Dino_BusSand_Core_Road__NearestCenter_24167bc(dVar9,param_1,param_2);
  dVar8 = (double)*(int *)(lVar4 + 0x1c) / 2.0;
  if ((dVar10 < dVar9 + dVar8) && (dVar9 - dVar8 < dVar7)) {
LAB_02514e58:
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_80,*(undefined8 *)puVar2);
    return (uVar5 ^ 1) & 1;
  }
  goto LAB_02514da8;
}

