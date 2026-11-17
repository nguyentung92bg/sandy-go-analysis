/* IL2CPP: Dino.BusSand.App.UiAssets.<>c__DisplayClass18_1<object>$$<Preload>b__1
void Dino_BusSand_App_UiAssets___c__DisplayClass18_1_object____Preload_b__1 (Dino_BusSand_App_UiAssets___c__DisplayClass18_1_T__o* __this, UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_T__o op, const MethodInfo_2A28154* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x035b5298) */
/* WARNING: Removing unreachable block (ram,0x035b52a4) */
/* IL2CPP: Dino.BusSand.App.UiAssets.<>c__DisplayClass18_1<object>$$<Preload>b__1
   void Dino_BusSand_App_UiAssets___c__DisplayClass18_1_object____Preload_b__1
   (Dino_BusSand_App_UiAssets___c__DisplayClass18_1_T__o* __this,
   UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_T__o op, const
   MethodInfo_2A28154* method); */

ulong Dino_BusSand_App_UiAssets___c__DisplayClass18_1_object____Preload_b__1_2a28154
                (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  int *piVar20;
  
  puVar2 = PTR_DAT_04cab490;
  if ((bRam0000000004f9d87c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc52e0);
    FUN_02132f7c(PTR_DAT_04cc52c8);
    FUN_02132f7c(PTR_DAT_04cbb1d8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab490);
    bRam0000000004f9d87c = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x70);
  if (lVar4 == 0) {
LAB_02b28318:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_HashSet_object___Remove_37e5c2c
            (lVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_04cbb1d8);
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) goto LAB_02b28318;
  lVar11 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  uVar5 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___get_Status_304b488
                    (param_2,*(undefined8 *)(lVar11 + 0x18));
  if ((int)uVar5 != 1) {
    return uVar5;
  }
  uVar6 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___get_Result_304b41c
                    (param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28));
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
    return uVar5;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x38);
  if (lVar4 == 0) goto LAB_02b28318;
  uVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey_34b4598
                    (lVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_04cc52e0);
  if ((uVar5 & 1) != 0) {
    return uVar5;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  plVar13 = *(long **)(param_1 + 0x10);
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x38);
  uVar6 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___get_Result_304b41c
                    (param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28));
  if (lVar4 == 0) goto LAB_02b28318;
  lVar11 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04cc52c8 + 0x20) + 0xc0) + 0x118);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_48419e0(5);
  }
  *(int *)(lVar4 + 0x2c) = *(int *)(lVar4 + 0x2c) + 1;
  if (*(long *)(lVar4 + 0x10) == 0) {
    System_Collections_Generic_Dictionary_object__object___Initialize_34b4d50
              (lVar4,0,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x10));
  }
  plVar15 = *(long **)(lVar4 + 0x30);
  lVar18 = *(long *)(lVar4 + 0x18);
  if (plVar15 == (long *)0x0) {
    if (plVar13 == (long *)0x0) goto LAB_035b52b0;
    uVar3 = (**(code **)(*plVar13 + 0x158))(plVar13,*(undefined8 *)(*plVar13 + 0x160));
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0216b470(lVar8);
    }
    lVar9 = *plVar15;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_035b4f2c;
        }
        uVar5 = uVar5 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar15,lVar8,1);
LAB_035b4f2c:
    uVar3 = (*(code *)*puVar7)(plVar15,plVar13,puVar7[1]);
  }
  lVar8 = *(long *)(lVar4 + 0x10);
  if (lVar8 == 0) goto LAB_035b52b0;
  uVar19 = *(uint *)(lVar8 + 0x18);
  uVar3 = uVar3 & 0x7fffffff;
  iVar14 = 0;
  if (uVar19 != 0) {
    iVar14 = (int)uVar3 / (int)uVar19;
  }
  uVar16 = uVar3 - iVar14 * uVar19;
  if (uVar19 <= uVar16) {
LAB_035b52ac:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  piVar20 = (int *)(lVar8 + (ulong)uVar16 * 4 + 0x20);
  uVar19 = *piVar20 - 1;
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)FUN_02773e98(*(undefined8 *)
                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x18));
    if (lVar18 == 0) goto LAB_035b52b0;
    uVar17 = *(undefined8 *)(lVar18 + 0x18);
    uVar16 = (uint)uVar17;
    if (uVar19 < uVar16) {
      iVar14 = 0;
      lVar8 = lVar18 + 0x20;
      do {
        uVar16 = (uint)uVar17;
        if (*(uint *)(lVar8 + (long)(int)uVar19 * 0x18) == uVar3) {
          if (plVar15 == (long *)0x0) goto LAB_035b52b0;
          uVar5 = (**(code **)(*plVar15 + 0x1b8))
                            (plVar15,*(undefined8 *)(lVar8 + (long)(int)uVar19 * 0x18 + 8),plVar13,
                             *(undefined8 *)(*plVar15 + 0x1c0));
          if ((uVar5 & 1) != 0) {
            if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035b52ac;
            lVar8 = lVar8 + (long)(int)uVar19 * 0x18;
            goto LAB_035b5288;
          }
          uVar16 = *(uint *)(lVar18 + 0x18);
        }
        if (uVar16 <= uVar19) goto LAB_035b52ac;
        uVar19 = *(uint *)(lVar8 + (long)(int)uVar19 * 0x18 + 4);
        if ((int)uVar16 <= iVar14) {
          System_ThrowHelper__ThrowInvalidOperationException_ConcurrentOperationsNotSupported_4850c40
                    (0);
        }
        uVar17 = *(undefined8 *)(lVar18 + 0x18);
        iVar14 = iVar14 + 1;
        uVar16 = (uint)uVar17;
      } while (uVar19 < uVar16);
    }
  }
  else {
    if (lVar18 == 0) goto LAB_035b52b0;
    uVar17 = *(undefined8 *)(lVar18 + 0x18);
    uVar16 = (uint)uVar17;
    if (uVar19 < uVar16) {
      iVar14 = 0;
      lVar8 = lVar18 + 0x20;
      do {
        uVar16 = (uint)uVar17;
        if (*(uint *)(lVar8 + (long)(int)uVar19 * 0x18) == uVar3) {
          lVar9 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 8);
          uVar17 = *(undefined8 *)(lVar8 + (long)(int)uVar19 * 0x18 + 8);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_0216b470(lVar9);
          }
          lVar10 = *plVar15;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_035b501c;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_0216b7a4(plVar15,lVar9,0);
LAB_035b501c:
          uVar5 = (*(code *)*puVar7)(plVar15,uVar17,plVar13,puVar7[1]);
          if ((uVar5 & 1) != 0) {
            if (uVar19 < *(uint *)(lVar18 + 0x18)) {
              lVar8 = lVar8 + (long)(int)uVar19 * 0x18;
LAB_035b5288:
              *(undefined8 *)(lVar8 + 0x10) = uVar6;
              thunk_FUN_02134474();
              return 1;
            }
            goto LAB_035b52ac;
          }
          uVar16 = *(uint *)(lVar18 + 0x18);
        }
        if (uVar16 <= uVar19) goto LAB_035b52ac;
        uVar19 = *(uint *)(lVar8 + (long)(int)uVar19 * 0x18 + 4);
        if ((int)uVar16 <= iVar14) {
          System_ThrowHelper__ThrowInvalidOperationException_ConcurrentOperationsNotSupported_4850c40
                    (0);
        }
        uVar17 = *(undefined8 *)(lVar18 + 0x18);
        iVar14 = iVar14 + 1;
        uVar16 = (uint)uVar17;
      } while (uVar19 < uVar16);
    }
  }
  if (*(int *)(lVar4 + 0x28) < 1) {
    uVar19 = *(uint *)(lVar4 + 0x20);
    if (uVar19 == uVar16) {
      System_Collections_Generic_Dictionary_object__object___Resize_34b5670
                (lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x1b8));
      lVar11 = *(long *)(lVar4 + 0x10);
      *(uint *)(lVar4 + 0x20) = uVar16 + 1;
      if (lVar11 == 0) goto LAB_035b52b0;
      uVar16 = *(uint *)(lVar11 + 0x18);
      iVar14 = 0;
      if (uVar16 != 0) {
        iVar14 = (int)uVar3 / (int)uVar16;
      }
      uVar1 = uVar3 - iVar14 * uVar16;
      if (uVar16 <= uVar1) goto LAB_035b52ac;
      lVar18 = *(long *)(lVar4 + 0x18);
      piVar20 = (int *)(lVar11 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar18 = *(long *)(lVar4 + 0x18);
      *(uint *)(lVar4 + 0x20) = uVar19 + 1;
    }
    if (lVar18 == 0) {
LAB_035b52b0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035b52ac;
    lVar18 = lVar18 + (long)(int)uVar19 * 0x18;
  }
  else {
    uVar19 = *(uint *)(lVar4 + 0x24);
    *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + -1;
    if (uVar16 <= uVar19) goto LAB_035b52ac;
    lVar18 = lVar18 + (long)(int)uVar19 * 0x18;
    *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(lVar18 + 0x24);
  }
  *(uint *)(lVar18 + 0x20) = uVar3;
  iVar14 = *piVar20;
  *(undefined8 *)(lVar18 + 0x28) = plVar13;
  *(int *)(lVar18 + 0x24) = iVar14 + -1;
  thunk_FUN_02134474((undefined8 *)(lVar18 + 0x28),plVar13);
  *(undefined8 *)(lVar18 + 0x30) = uVar6;
  thunk_FUN_02134474((undefined8 *)(lVar18 + 0x30),uVar6);
  *piVar20 = uVar19 + 1;
  return 1;
}

