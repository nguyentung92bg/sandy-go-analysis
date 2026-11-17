/* IL2CPP: Dino.BusSand.Cheat.AutoQaPanel$$Update
void Dino_BusSand_Cheat_AutoQaPanel__Update (Dino_BusSand_Cheat_AutoQaPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02459378) */
/* IL2CPP: Dino.BusSand.Cheat.AutoQaPanel$$Update
   void Dino_BusSand_Cheat_AutoQaPanel__Update (Dino_BusSand_Cheat_AutoQaPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_AutoQaPanel__Update_2359548
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  char cVar12;
  long **pplVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined4 *puVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  int *piVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  long *plStack_110;
  long **pplStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  long **pplStack_f0;
  long *plStack_e8;
  long **pplStack_e0;
  long **pplStack_d8;
  long *plStack_d0;
  long **pplStack_c8;
  long **pplStack_c0;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_98;
  
  puVar7 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c71c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cb96f8);
    bRam0000000004f9c71c = 1;
  }
  lVar17 = *(long *)puVar7;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar17 = *(long *)puVar7;
  }
  lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar21 + 0x18) == *(int *)(param_4 + 0x48)) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9c714 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb9568);
      cRam0000000004f9c714 = '\x01';
    }
    lVar17 = *(long *)puVar7;
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar17 = *(long *)puVar7;
    }
    if (*(char *)(param_4 + 0x4c) == *(char *)(*(long *)(lVar17 + 0xb8) + 0x10)) {
      return;
    }
  }
  puVar7 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c71d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cb9578);
    FUN_02132f7c(PTR_DAT_04cb9580);
    FUN_02132f7c(PTR_DAT_04cb9588);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cb96d8);
    FUN_02132f7c(PTR_DAT_04cb9590);
    FUN_02132f7c(PTR_DAT_04cb9750);
    FUN_02132f7c(PTR_DAT_04cb96f8);
    FUN_02132f7c(PTR_DAT_04cb9758);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cad740);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cba2a8);
    FUN_02132f7c(PTR_DAT_04cba2b0);
    FUN_02132f7c(PTR_DAT_04cba2b8);
    FUN_02132f7c(PTR_DAT_04cba2c0);
    FUN_02132f7c(PTR_DAT_04cba2c8);
    FUN_02132f7c(PTR_DAT_04cafc30);
    FUN_02132f7c(PTR_DAT_04cba2d0);
    FUN_02132f7c(PTR_DAT_04cba2d8);
    FUN_02132f7c(PTR_DAT_04cba2e0);
    FUN_02132f7c(PTR_DAT_04cba2e8);
    FUN_02132f7c(PTR_DAT_04cba2f0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cba2f8);
    FUN_02132f7c(PTR_DAT_04cba300);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    FUN_02132f7c(PTR_DAT_04cba308);
    bRam0000000004f9c71d = 1;
  }
  lVar17 = *(long *)puVar7;
  uStack_98 = 0;
  plStack_b0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  plStack_d0 = (long *)0x0;
  pplStack_c8 = (long **)0x0;
  pplStack_c0 = (long **)0x0;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar17 = *(long *)puVar7;
  }
  cVar12 = cRam0000000004f9c714;
  lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
  if (lVar21 != 0) {
    piVar24 = (int *)(param_4 + 0x48);
    *piVar24 = *(int *)(lVar21 + 0x18);
    if (cVar12 == '\0') {
      FUN_02132f7c(puVar7);
      lVar17 = *(long *)puVar7;
      cRam0000000004f9c714 = '\x01';
    }
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar17 = *(long *)puVar7;
    }
    *(undefined1 *)(param_4 + 0x4c) = *(undefined1 *)(*(long *)(lVar17 + 0xb8) + 0x10);
    iVar14 = Dino_BusSand_Cheat_AutoQa__get_Passed_2340d70(0);
    iVar1 = *(int *)(param_4 + 0x48);
    plVar23 = *(long **)(param_4 + 0x40);
    uStack_98 = CONCAT44(iVar14,iVar1 - iVar14);
    if (cRam0000000004f9c714 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb9568);
      cRam0000000004f9c714 = '\x01';
    }
    lVar17 = *(long *)puVar7;
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar17 = *(long *)puVar7;
    }
    if (*(char *)(*(long *)(lVar17 + 0xb8) + 0x10) == '\0') {
      if (*piVar24 == 0) {
        uVar15 = *(undefined8 *)PTR_DAT_04cba308;
      }
      else {
        if (iVar1 == iVar14) {
          uVar15 = System_Int32__ToString_482d750((long)&uStack_98 + 4,0);
          uVar18 = *(undefined8 *)PTR_DAT_04cba2c0;
          uVar25 = *(undefined8 *)PTR_DAT_04cba2d8;
        }
        else {
          uVar18 = System_Int32__ToString_482d750(&uStack_98,0);
          uVar25 = System_Int32__ToString_482d750(piVar24,0);
          uVar15 = *(undefined8 *)PTR_DAT_04cba2b0;
        }
        uVar15 = System_String__Concat_46d2b84(uVar18,uVar15,uVar25,0);
      }
    }
    else {
      lVar17 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,7);
      if (lVar17 == 0) goto LAB_0245936c;
      if (*(int *)(lVar17 + 0x18) == 0) {
LAB_02459374:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)PTR_DAT_04cba2e8;
      thunk_FUN_02134474();
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9c7a4 == '\0') {
        FUN_02132f7c(PTR_DAT_04cb9568);
        cRam0000000004f9c7a4 = '\x01';
      }
      lVar21 = *(long *)puVar7;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar21 = *(long *)puVar7;
      }
      if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto LAB_02459374;
      *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x18);
      thunk_FUN_02134474((undefined8 *)(lVar17 + 0x28));
      if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_02459374;
      *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)PTR_DAT_04cba2b8;
      thunk_FUN_02134474((undefined8 *)(lVar17 + 0x30));
      uVar15 = System_Int32__ToString_482d750((long)&uStack_98 + 4,0);
      if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) goto LAB_02459374;
      *(undefined8 *)(lVar17 + 0x38) = uVar15;
      thunk_FUN_02134474((undefined8 *)(lVar17 + 0x38),uVar15);
      if (*(uint *)(lVar17 + 0x18) < 5) goto LAB_02459374;
      *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)PTR_DAT_04cba300;
      thunk_FUN_02134474((undefined8 *)(lVar17 + 0x40));
      uVar15 = System_Int32__ToString_482d750(&uStack_98,0);
      if (*(uint *)(lVar17 + 0x18) < 6) goto LAB_02459374;
      *(undefined8 *)(lVar17 + 0x48) = uVar15;
      thunk_FUN_02134474((undefined8 *)(lVar17 + 0x48),uVar15);
      if (*(uint *)(lVar17 + 0x18) < 7) goto LAB_02459374;
      *(undefined8 *)(lVar17 + 0x50) = *(undefined8 *)PTR_DAT_04cba2a8;
      thunk_FUN_02134474();
      uVar15 = System_String__Concat_46d31f0(lVar17,0);
    }
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x518))(plVar23,uVar15,*(undefined8 *)(*plVar23 + 0x520));
      puVar11 = PTR_DAT_04cb96d8;
      puVar10 = PTR_DAT_04cb9580;
      puVar9 = PTR_DAT_04cad740;
      puVar8 = PTR_DAT_04cad4a8;
      puVar6 = PTR_DAT_04ca9c08;
      puVar5 = PTR_DAT_04ca9b30;
      puVar4 = PTR_DAT_04ca9ae8;
      if (*(long *)(param_4 + 0x38) != 0) {
        plStack_a8 = (long *)UnityEngine_Transform__GetEnumerator_43d5014
                                       (*(long *)(param_4 + 0x38),0);
        pplStack_e0 = &plStack_a8;
        plStack_e8 = (long *)0x0;
        pplStack_d8 = &plStack_b0;
        do {
          plVar23 = plStack_a8;
          if (plStack_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar21 = *plStack_a8;
          lVar17 = *(long *)puVar6;
          uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar22 != 0) {
            piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar17) {
                puVar16 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_02458bbc;
              }
              uVar22 = uVar22 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar22 != 0);
          }
          puVar16 = (undefined8 *)FUN_0216b7a4(plStack_a8,lVar17,0);
LAB_02458bbc:
          uVar22 = (*(code *)*puVar16)(plVar23,puVar16[1]);
          plVar23 = plStack_a8;
          if ((uVar22 & 1) == 0) {
            plVar23 = (long *)thunk_FUN_0216e7a0(plStack_a8,*(undefined8 *)puVar5);
            puVar4 = PTR_DAT_04cb9590;
            plStack_b0 = plVar23;
            if (plVar23 == (long *)0x0) goto LAB_02458d10;
            lVar21 = *plVar23;
            lVar17 = *(long *)puVar5;
            uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar22 == 0) goto LAB_02458ce8;
            piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            goto LAB_02458cd0;
          }
          if (plStack_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar21 = *plStack_a8;
          lVar17 = *(long *)puVar6;
          uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar22 != 0) {
            piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar17) {
                puVar16 = (undefined8 *)(lVar21 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_02458c24;
              }
              uVar22 = uVar22 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar22 != 0);
          }
          puVar16 = (undefined8 *)FUN_0216b7a4(plStack_a8,lVar17,1);
LAB_02458c24:
          plVar23 = (long *)(*(code *)*puVar16)(plVar23,puVar16[1]);
          if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          bVar2 = *(byte *)(*(long *)puVar9 + 0x130);
          if ((*(byte *)(*plVar23 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar9)) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4();
          }
          uVar15 = UnityEngine_Component__get_gameObject_43bcde8(plVar23,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          UnityEngine_Object__Destroy_43c8114(uVar15,0);
        } while( true );
      }
    }
  }
  goto LAB_0245936c;
code_r0x02458ef4:
  if (pplVar13 == (long **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(pplVar13 + 5) != '\0') {
LAB_02458f00:
    if (lVar17 != 0) {
      lVar21 = *(long *)(lVar17 + 0x10);
      lVar19 = *(long *)puVar11;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      if (lVar21 != 0) {
        uVar3 = *(uint *)(lVar17 + 0x18);
        if (uVar3 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar17 + 0x18) = uVar3 + 1;
          puVar16 = (undefined8 *)(lVar21 + (long)(int)uVar3 * 8 + 0x20);
          *puVar16 = pplVar13;
          thunk_FUN_02134474(puVar16,pplVar13);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar17,pplVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_02458e9c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  goto LAB_02458e9c;
  while( true ) {
    uVar22 = uVar22 - 1;
    piVar24 = piVar24 + 4;
    if (uVar22 == 0) break;
LAB_02458cd0:
    if (*(long *)(piVar24 + -2) == lVar17) {
      puVar16 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
      goto LAB_02458d04;
    }
  }
LAB_02458ce8:
  puVar16 = (undefined8 *)FUN_0216b7a4(plVar23,lVar17,0);
LAB_02458d04:
  (*(code *)*puVar16)(plVar23,puVar16[1]);
LAB_02458d10:
  lVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb9758);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar17,*(undefined8 *)PTR_DAT_04cb9750);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c714 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb9568);
    cRam0000000004f9c714 = '\x01';
  }
  lVar21 = *(long *)puVar7;
  if (*(int *)(lVar21 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar21 = *(long *)puVar7;
  }
  lVar19 = *(long *)(lVar21 + 0xb8);
  if (*(char *)(lVar19 + 0x10) == '\0') {
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar19 = *(long *)(*(long *)puVar7 + 0xb8);
    }
    if (*(long *)(lVar19 + 8) == 0) goto LAB_0245936c;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&plStack_e8,*(long *)(lVar19 + 8),*(undefined8 *)puVar4);
    pplStack_c0 = pplStack_d8;
    pplStack_c8 = pplStack_e0;
    plStack_d0 = plStack_e8;
    plStack_e8 = (long *)0x0;
    pplStack_e0 = &plStack_d0;
LAB_02458dc4:
    uVar22 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                       (&plStack_d0,*(undefined8 *)puVar10);
    if ((uVar22 & 1) != 0) {
      if (pplStack_c0 == (long **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(char *)(pplStack_c0 + 5) == '\0') {
        if (lVar17 != 0) {
          lVar21 = *(long *)(lVar17 + 0x10);
          lVar19 = *(long *)puVar11;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar21 != 0) {
            uVar3 = *(uint *)(lVar17 + 0x18);
            if (uVar3 < *(uint *)(lVar21 + 0x18)) {
              *(uint *)(lVar17 + 0x18) = uVar3 + 1;
              *(long ***)(lVar21 + (long)(int)uVar3 * 8 + 0x20) = pplStack_c0;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar17,pplStack_c0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_02458dc4;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_02458dc4;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&plStack_d0,*(undefined8 *)PTR_DAT_04cb9578);
  }
  lVar21 = *(long *)puVar7;
  if (*(int *)(lVar21 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar21 = *(long *)puVar7;
  }
  lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
  if (lVar21 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&plStack_e8,lVar21,*(undefined8 *)puVar4);
    pplStack_c0 = pplStack_d8;
    pplStack_c8 = pplStack_e0;
    plStack_d0 = plStack_e8;
    plStack_e8 = (long *)0x0;
    pplStack_e0 = &plStack_d0;
LAB_02458e9c:
    uVar22 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                       (&plStack_d0,*(undefined8 *)puVar10);
    pplVar13 = pplStack_c0;
    if ((uVar22 & 1) != 0) {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9c714 == '\0') {
        FUN_02132f7c(puVar7);
        cRam0000000004f9c714 = '\x01';
      }
      lVar21 = *(long *)puVar7;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar21 = *(long *)puVar7;
      }
      if (*(char *)(*(long *)(lVar21 + 0xb8) + 0x10) == '\0') goto code_r0x02458ef4;
      goto LAB_02458f00;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&plStack_d0,*(undefined8 *)PTR_DAT_04cb9578);
    if ((*(long *)(param_4 + 0x38) != 0) &&
       (plVar23 = (long *)UnityEngine_Transform__get_parent_43d0d70(*(long *)(param_4 + 0x38),0),
       plVar23 != (long *)0x0)) {
      if (*plVar23 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4();
      }
      UnityEngine_RectTransform__get_rect_43cf450(plVar23,0);
      fVar27 = 780.0;
      if (200.0 <= param_3 + -24.0) {
        fVar27 = param_3 + -24.0;
      }
      if (lVar17 != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&plStack_e8,lVar17,*(undefined8 *)puVar4);
        puVar7 = PTR_DAT_04cacfc0;
        pplStack_f0 = &plStack_d0;
        uStack_f8 = 0;
        pplStack_c8 = pplStack_e0;
        plStack_d0 = plStack_e8;
        fVar31 = 0.0;
        pplStack_c0 = pplStack_d8;
        while (uVar22 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&plStack_d0,*(undefined8 *)puVar10), pplVar13 = pplStack_c0,
              (uVar22 & 1) != 0) {
          lVar17 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
          if (pplVar13 == (long **)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          puVar16 = (undefined8 *)PTR_DAT_04cba2f0;
          if (*(char *)(pplVar13 + 5) != '\0') {
            puVar16 = (undefined8 *)PTR_DAT_04cba2d0;
          }
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(int *)(lVar17 + 0x18) == 0) {
LAB_02459334:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          *(undefined8 *)(lVar17 + 0x20) = *puVar16;
          thunk_FUN_02134474();
          if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          *(long **)(lVar17 + 0x28) = pplVar13[2];
          thunk_FUN_02134474();
          if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)PTR_DAT_04cba2c8;
          thunk_FUN_02134474();
          if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          *(long **)(lVar17 + 0x38) = pplVar13[3];
          thunk_FUN_02134474();
          uVar22 = System_String__IsNullOrEmpty_46d2084(pplVar13[4],0);
          if ((uVar22 & 1) == 0) {
            uVar15 = System_String__Concat_46d2b84
                               (*(undefined8 *)PTR_DAT_04cba2e0,pplVar13[4],
                                *(undefined8 *)PTR_DAT_04cba2f8,0);
          }
          else {
            uVar15 = *(undefined8 *)PTR_DAT_04ca9c30;
          }
          if (*(uint *)(lVar17 + 0x18) < 5) goto LAB_02459334;
          *(undefined8 *)(lVar17 + 0x40) = uVar15;
          thunk_FUN_02134474();
          uVar15 = System_String__Concat_46d31f0(lVar17,0);
          plStack_e8 = (long *)0x0;
          pplStack_e0 = (long **)0x0;
          uVar25 = *(undefined8 *)(param_4 + 0x38);
          pplStack_d8 = (long **)((ulong)pplStack_d8 & 0xffffffff00000000);
          System_Nullable_Color____ctor_2bc9090
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&plStack_e8,
                     *(undefined8 *)PTR_DAT_04cac878);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(puVar7);
            cRam0000000004f9b948 = '\x01';
          }
          puVar20 = *(undefined4 **)(*(long *)puVar7 + 0xb8);
          uVar28 = *puVar20;
          uVar30 = puVar20[1];
          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          pplStack_108 = pplStack_e0;
          plStack_110 = plStack_e8;
          uStack_100 = pplStack_d8._0_4_;
          lVar17 = Dino_BusSand_App_UI_UiKit__Text_2282314
                             (0x42080000,fVar27,0x42c80000,uVar28,uVar30,uVar25,
                              *(undefined8 *)PTR_DAT_04cafc30,uVar15,*(undefined8 *)puVar8,
                              &plStack_110,0x201,0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar17,1,0);
          lVar21 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar17,0);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f800000,lVar21,0);
          UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f800000,0x3f800000,lVar21,0);
          UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0x3f800000,lVar21,0);
          fVar26 = 0.0;
          TMPro_TMP_Text__GetPreferredValues_42d1a10(fVar27,lVar17,uVar15,0);
          fVar29 = 56.0;
          if (56.0 <= fVar26 + 10.0) {
            fVar29 = fVar26 + 10.0;
          }
          UnityEngine_RectTransform__set_sizeDelta_43cfa70(0xc1c00000,fVar29,lVar21,0);
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,-fVar31,lVar21,0);
          fVar31 = fVar31 + fVar29 + 6.0;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&plStack_d0,*(undefined8 *)PTR_DAT_04cb9578);
        if (*(long *)(param_4 + 0x38) != 0) {
          UnityEngine_RectTransform__set_sizeDelta_43cfa70
                    (0,fVar31 + 20.0,*(long *)(param_4 + 0x38),0);
          return;
        }
      }
    }
  }
LAB_0245936c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

