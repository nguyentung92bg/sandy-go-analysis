/* IL2CPP: Dino.BusSand.Core.Road$$ClampBehindLeader
double Dino_BusSand_Core_Road__ClampBehindLeader (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* b, double current, double desired, Dino_BusSand_Core_RoadBus_o* ignore, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Road$$ClampBehindLeader
   double Dino_BusSand_Core_Road__ClampBehindLeader (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* b, double current, double desired, Dino_BusSand_Core_RoadBus_o*
   ignore, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_Core_Road__ClampBehindLeader_2415244
          (double param_1,double param_2,long param_3,long param_4,long param_5)

{
  double *pdVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  bool bVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  if ((bRam0000000004f9cb6e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe650);
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cbe5f0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb6e = 1;
  }
  puVar8 = PTR_DAT_04cbe650;
  puVar7 = PTR_DAT_04cb1898;
  puVar6 = PTR_DAT_04cb1890;
  puVar5 = PTR_DAT_04caa200;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  dStack_b8 = 0.0;
  if (*(long *)(param_3 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_d0,*(long *)(param_3 + 0x50),*(undefined8 *)PTR_DAT_04cbe5f0);
  dVar4 = _UNK_00e6a008;
  dVar3 = _UNK_00e697d0;
  uStack_a8 = puStack_c8;
  uStack_b0 = uStack_d0;
  lStack_a0 = lStack_c0;
  dVar14 = 1.7976931348623157e+308;
  uStack_d0 = 0;
  puStack_c8 = &uStack_b0;
LAB_02515360:
  do {
    do {
      uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_b0,*(undefined8 *)puVar7);
      lVar9 = lStack_a0;
      if ((uVar11 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_b0,*(undefined8 *)puVar6);
        if (dVar14 < param_2) {
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          param_2 = (double)System_Math__Max_4830f98(dVar14,param_1,0);
        }
        auVar16._8_8_ = 0;
        auVar16._0_8_ = param_2;
        return auVar16;
      }
    } while (lStack_a0 == param_5);
    if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar2 = *(int *)(lStack_a0 + 0x28);
    if (iVar2 != 3) goto LAB_025153a8;
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar10 = *(int *)(param_4 + 0x28) != 2;
  } while (lStack_a0 == param_4);
  goto LAB_025153bc;
LAB_025153a8:
  if (lStack_a0 == param_4) goto LAB_02515360;
  if (iVar2 != 1) {
    bVar10 = true;
LAB_025153bc:
    if ((iVar2 != 2) && (bVar10)) goto LAB_02515360;
  }
  if (*(long *)(param_3 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar11 = System_Collections_Generic_Dictionary_int__double___TryGetValue_34244bc
                     (*(long *)(param_3 + 0x60),*(undefined4 *)(lStack_a0 + 0x10),&dStack_b8,
                      *(undefined8 *)puVar8);
  iVar2 = *(int *)(param_3 + 0x24);
  pdVar1 = &dStack_b8;
  if ((uVar11 & 1) == 0) {
    pdVar1 = (double *)(lVar9 + 0x40);
  }
  dVar17 = *pdVar1;
  iVar12 = iVar2;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    iVar12 = *(int *)(param_3 + 0x24);
  }
  dVar15 = dVar17 - param_1;
  dVar15 = dVar15 - (double)(long)(dVar15 / (double)iVar2) * (double)iVar12;
  if (dVar15 <= dVar4) goto LAB_02515360;
  uVar11 = Dino_BusSand_Core_Road__IsInReturnStraight_2412920(dVar17,param_3);
  lVar13 = *(long *)(param_3 + 0x10);
  if ((uVar11 & 1) == 0) {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  else {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar13 + 0x4c) == '\0') {
      dVar17 = dVar15 + param_1 + dVar3;
      goto LAB_02515490;
    }
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  dVar17 = (((dVar15 + param_1) - (double)*(int *)(lVar9 + 0x1c) / 2.0) -
           (double)*(int *)(lVar13 + 0x24)) - (double)*(int *)(param_4 + 0x1c) / 2.0;
LAB_02515490:
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar14 = (double)System_Math__Min_48310e8(dVar14,dVar17,0);
  goto LAB_02515360;
}

