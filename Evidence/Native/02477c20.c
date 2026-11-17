/* IL2CPP: Dino.BusSand.AudioHub.<Preload>d__67$$MoveNext
bool Dino_BusSand_AudioHub__Preload_d__67__MoveNext (Dino_BusSand_AudioHub__Preload_d__67_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02477f94) */
/* WARNING: Removing unreachable block (ram,0x02477f98) */
/* WARNING: Removing unreachable block (ram,0x024781a8) */
/* WARNING: Removing unreachable block (ram,0x024780f0) */
/* WARNING: Removing unreachable block (ram,0x024781b0) */
/* IL2CPP: Dino.BusSand.AudioHub.<Preload>d__67$$MoveNext
   bool Dino_BusSand_AudioHub__Preload_d__67__MoveNext (Dino_BusSand_AudioHub__Preload_d__67_o*
   __this, const MethodInfo* method); */

undefined4 Dino_BusSand_AudioHub__Preload_d__67__MoveNext_2377c20(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  
  if ((bRam0000000004f9c7fd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04cbb138);
    FUN_02132f7c(PTR_DAT_04cbb278);
    FUN_02132f7c(PTR_DAT_04cbb160);
    FUN_02132f7c(PTR_DAT_04cbb280);
    FUN_02132f7c(PTR_DAT_04cbb288);
    FUN_02132f7c(PTR_DAT_04cbb170);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cbb290);
    FUN_02132f7c(PTR_DAT_04cbb1a8);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04cb4190);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb350);
    FUN_02132f7c(PTR_DAT_04cbb358);
    FUN_02132f7c(PTR_DAT_04cbb360);
    FUN_02132f7c(PTR_DAT_04cbb230);
    bRam0000000004f9c7fd = 1;
  }
  puVar15 = (undefined8 *)PTR_DAT_04cb4190;
  puVar3 = PTR_DAT_04cab748;
  puVar2 = PTR_DAT_04cab1f0;
  plVar18 = (long *)PTR_DAT_04ca9ae8;
  puStack_88 = (undefined8 *)0x0;
  uStack_90 = 0;
  iVar8 = *(int *)(param_1 + 0x10);
  lStack_80 = 0;
  lVar16 = *(long *)(param_1 + 0x20);
  uStack_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  lStack_a0 = 0;
  if (iVar8 < 2) {
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9c882 == '\0') {
        FUN_02132f7c(PTR_DAT_04cab1f0);
        cRam0000000004f9c882 = '\x01';
      }
      lVar16 = *(long *)puVar2;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar16 = *(long *)puVar2;
      }
      *(undefined1 *)(*(long *)(lVar16 + 0xb8) + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (iVar8 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar9,*(undefined8 *)PTR_DAT_04cab740);
    plVar17 = (long *)(param_1 + 0x28);
    *plVar17 = lVar9;
    thunk_FUN_02134474(plVar17,lVar9);
    if (((lVar16 == 0) || (*(long *)(lVar16 + 0x20) == 0)) ||
       (lVar9 = *(long *)(*(long *)(lVar16 + 0x20) + 0x20), lVar9 == 0)) goto LAB_02478218;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_c8,lVar9,*(undefined8 *)PTR_DAT_04cbb1a8);
    puVar7 = PTR_DAT_04cbb360;
    puVar6 = PTR_DAT_04cbb358;
    puVar5 = PTR_DAT_04cbb350;
    puVar4 = PTR_DAT_04cbb280;
    puVar3 = PTR_DAT_04cbb160;
    puVar2 = PTR_DAT_04cab718;
    puStack_88 = puStack_c0;
    uStack_90 = uStack_c8;
    lStack_80 = lStack_b8;
    while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_90,*(undefined8 *)puVar3), lVar9 = lStack_80,
          (uVar10 & 1) != 0) {
      if (((lStack_80 != 0) &&
          (uVar10 = System_String__op_Equality_46d1108
                              (*(undefined8 *)(lStack_80 + 0x20),*(undefined8 *)PTR_DAT_04cbb230,0),
          (uVar10 & 1) == 0)) && (*(long *)(lVar9 + 0x80) != 0)) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_c8,*(long *)(lVar9 + 0x80),*(undefined8 *)PTR_DAT_04cbb290);
        lStack_a0 = lStack_b8;
        puStack_a8 = puStack_c0;
        uStack_b0 = uStack_c8;
        uStack_c8 = 0;
        puStack_c0 = &uStack_b0;
LAB_02477e98:
        uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&uStack_b0,*(undefined8 *)puVar4);
        lVar9 = lStack_a0;
        if ((uVar10 & 1) != 0) {
          if ((lStack_a0 != 0) &&
             (uVar10 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lStack_a0 + 0x10),0),
             (uVar10 & 1) == 0)) {
            if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar10 = System_String__StartsWith_46d117c
                               (*(long *)(lVar9 + 0x10),*(undefined8 *)puVar6,0);
            if ((uVar10 & 1) == 0) {
LAB_02477ef0:
              if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar10 = System_String__StartsWith_46d117c
                                 (*(long *)(lVar9 + 0x10),*(undefined8 *)puVar7,0);
              if ((uVar10 & 1) == 0) goto LAB_02477e98;
            }
            else {
              if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar10 = System_String__StartsWith_46d117c
                                 (*(long *)(lVar9 + 0x10),*(undefined8 *)puVar5,0);
              if ((uVar10 & 1) != 0) goto LAB_02477ef0;
            }
            lVar11 = *plVar17;
            if (lVar11 != 0) {
              lVar14 = *(long *)(lVar11 + 0x10);
              uVar12 = *(undefined8 *)(lVar9 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar14 != 0) {
                uVar1 = *(uint *)(lVar11 + 0x18);
                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                  puVar15 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar15 = uVar12;
                  thunk_FUN_02134474(puVar15);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar11,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_02477e98;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          goto LAB_02477e98;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_b0,*(undefined8 *)PTR_DAT_04cbb278);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_90,*(undefined8 *)PTR_DAT_04cbb138);
    puVar15 = (undefined8 *)PTR_DAT_04cb4190;
    puVar2 = PTR_DAT_04cab1f0;
    plVar18 = (long *)PTR_DAT_04ca9ae8;
    lVar9 = *(long *)PTR_DAT_04cab1f0;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar2;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x20);
    if (lVar9 == 0) {
      if (param_1 == 0) goto LAB_02478218;
      uVar12 = 0;
    }
    else {
      uVar12 = (**(code **)(lVar9 + 0x18))
                         (*(undefined8 *)(lVar9 + 0x40),*plVar17,*(undefined8 *)(lVar9 + 0x28));
    }
    *(undefined8 *)(param_1 + 0x30) = uVar12;
    thunk_FUN_02134474();
  }
  else {
    if (iVar8 != 2) {
      if (iVar8 != 3) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      fVar19 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      goto LAB_0247821c;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  lVar9 = *(long *)(param_1 + 0x30);
  if ((lVar9 != 0) &&
     (uVar10 = (**(code **)(lVar9 + 0x18))
                         (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28)),
     (uVar10 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    uVar13 = 2;
LAB_024782d8:
    *(undefined4 *)(param_1 + 0x10) = uVar13;
    return 1;
  }
  fVar19 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  while (puVar2 = PTR_DAT_04cab1f0, lVar9 = *(long *)(param_1 + 0x28), lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) <= iVar8) {
      if (*(int *)(*(long *)PTR_DAT_04cab1f0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9c882 == '\0') {
        FUN_02132f7c(PTR_DAT_04cab1f0);
        cRam0000000004f9c882 = '\x01';
      }
      lVar16 = *(long *)puVar2;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar16 = *(long *)puVar2;
      }
      *(undefined1 *)(*(long *)(lVar16 + 0xb8) + 0x28) = 1;
      return 0;
    }
    uVar12 = System_Collections_Generic_List_object___get_Item_3a81924(lVar9,iVar8,*puVar15);
    if (lVar16 == 0) break;
    lVar9 = Dino_BusSand_AudioHub__Clip_23742fc(lVar16,uVar12);
    if (*(int *)(*plVar18 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*plVar18);
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar10 & 1) != 0) {
      if (lVar9 == 0) break;
      iVar8 = UnityEngine_AudioClip__get_loadState_4347490(lVar9,0);
      if (iVar8 == 0) {
        UnityEngine_AudioClip__LoadAudioData_434710c(lVar9,0);
      }
    }
    fVar20 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    if (6.0 <= (fVar20 - fVar19) * 1000.0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      uVar13 = 3;
      goto LAB_024782d8;
    }
LAB_0247821c:
    iVar8 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar8;
  }
LAB_02478218:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

