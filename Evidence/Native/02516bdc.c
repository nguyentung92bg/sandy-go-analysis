/* IL2CPP: Dino.BusSand.Core.Road$$TryPickNearestToBranch
bool Dino_BusSand_Core_Road__TryPickNearestToBranch (Dino_BusSand_Core_Road_o* __this, System_Collections_Generic_ICollection_int__o* excluded, int32_t* truckId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$TryPickNearestToBranch
   bool Dino_BusSand_Core_Road__TryPickNearestToBranch (Dino_BusSand_Core_Road_o* __this,
   System_Collections_Generic_ICollection_int__o* excluded, int32_t* truckId, const MethodInfo*
   method); */

uint Dino_BusSand_Core_Road__TryPickNearestToBranch_2416bdc
               (long param_1,long *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  if ((bRam0000000004f9cb73 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cbe6c8);
    FUN_02132f7c(PTR_DAT_04cbe5f0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb73 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  *param_3 = 0xffffffff;
  puVar7 = PTR_DAT_04cbe6c8;
  puVar6 = PTR_DAT_04cb1898;
  puVar5 = PTR_DAT_04cb1890;
  puVar4 = PTR_DAT_04caa200;
  lStack_80 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_a8,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cbe5f0);
  lStack_80 = lStack_98;
  uStack_88 = puStack_a0;
  uStack_90 = uStack_a8;
  uStack_a8 = 0;
  dVar14 = 1.7976931348623157e+308;
  puStack_a0 = &uStack_90;
LAB_02516cd0:
  do {
    uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_90,*(undefined8 *)puVar6);
    lVar8 = lStack_80;
    if ((uVar9 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_90,*(undefined8 *)puVar5);
      return ~*param_3 >> 0x1f;
    }
    if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  } while ((*(int *)(lStack_80 + 0x28) != 1) ||
          (*(int *)(lStack_80 + 0x20) <= *(int *)(lStack_80 + 0x24)));
  if (param_2 != (long *)0x0) goto code_r0x02516d04;
  goto LAB_02516d6c;
code_r0x02516d04:
  lVar12 = *param_2;
  uVar3 = *(undefined4 *)(lStack_80 + 0x10);
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar9 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar7) {
        puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 4) * 0x10 + 0x138);
        goto LAB_02516d58;
      }
      uVar9 = uVar9 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)puVar7,4);
LAB_02516d58:
  uVar9 = (*(code *)*puVar10)(param_2,uVar3,puVar10[1]);
  if ((uVar9 & 1) == 0) {
LAB_02516d6c:
    dVar15 = *(double *)(lVar8 + 0x40);
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x24);
    iVar11 = iVar2;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      iVar11 = *(int *)(param_1 + 0x24);
    }
    dVar15 = (double)iVar1 - dVar15;
    dVar15 = dVar15 - (double)(long)(dVar15 / (double)iVar2) * (double)iVar11;
    if (dVar15 < dVar14) {
      *param_3 = *(uint *)(lVar8 + 0x10);
      dVar14 = dVar15;
    }
  }
  goto LAB_02516cd0;
}

