/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$get_Board
System_Collections_Generic_List_CupEntry__o* Dino_BusSand_App_Meta_WeeklyCupFeature__get_Board (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$get_Board
   System_Collections_Generic_List_CupEntry__o* Dino_BusSand_App_Meta_WeeklyCupFeature__get_Board
   (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_WeeklyCupFeature__get_Board_2230604(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  lVar9 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Model_222fec0();
  uVar10 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  puVar4 = PTR_DAT_04cb30d0;
  puVar3 = PTR_DAT_04cb30c8;
  puVar2 = PTR_DAT_04cb30c0;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9be78 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c80);
    FUN_02132f7c(PTR_DAT_04cb30d8);
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cb30e0);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04cb30e8);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb30d0);
    FUN_02132f7c(PTR_DAT_04cb30f0);
    FUN_02132f7c(PTR_DAT_04cb30f8);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04cb30c8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb3100);
    FUN_02132f7c(PTR_DAT_04cb30c0);
    bRam0000000004f9be78 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar11,0);
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar12,*(undefined8 *)puVar4);
  puVar3 = PTR_DAT_04cad6e8;
  puVar2 = PTR_DAT_04caa1c8;
  lVar17 = *(long *)(lVar9 + 0x10);
  if (lVar17 != 0) {
    if (*(char *)(lVar17 + 0x18) == '\0') {
      return lVar12;
    }
    lVar17 = *(long *)(lVar17 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = System_Math__Min_4831124(uVar10,lVar17 + 0x240c8400,0);
    lVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar17,*(undefined8 *)puVar3);
    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar13,*(undefined8 *)puVar3);
    puVar2 = PTR_DAT_04caa160;
    if ((*(long *)(lVar9 + 0x10) != 0) && (lVar13 != 0)) {
      lVar18 = *(long *)(lVar13 + 0x10);
      uVar8 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x1c);
      lVar19 = *(long *)PTR_DAT_04caa160;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar18 != 0) {
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar18 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar13,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70)
                    );
        }
        if (lVar11 != 0) {
          plVar20 = (long *)(lVar11 + 0x10);
          *plVar20 = lVar13;
          thunk_FUN_02134474(plVar20,lVar13);
          if (lVar17 != 0) {
            lVar13 = *(long *)(lVar17 + 0x10);
            lVar18 = *(long *)puVar2;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar1 = *(uint *)(lVar17 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize_3a2c06c
                          (lVar17,0,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              puVar6 = PTR_DAT_04cb30f8;
              puVar4 = PTR_DAT_04cb30e0;
              puVar3 = PTR_DAT_04cad890;
              lVar13 = *(long *)(lVar9 + 0x10);
              if (lVar13 != 0) {
                iVar21 = 0;
                do {
                  if (*(long *)(lVar13 + 0x28) == 0) break;
                  if (*(int *)(*(long *)(lVar13 + 0x28) + 0x18) <= iVar21) {
                    uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1c80);
                    System_Comparison_int____ctor_3325d5c
                              (uVar10,lVar11,*(undefined8 *)PTR_DAT_04cb3100,0);
                    System_Collections_Generic_List_int___Sort_3a2da68
                              (lVar17,uVar10,*(undefined8 *)PTR_DAT_04cb30e8);
                    System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                              (&uStack_98,lVar17,*(undefined8 *)PTR_DAT_04cad8a0);
                    puVar5 = PTR_DAT_04cb30d8;
                    puVar2 = PTR_DAT_04cae230;
                    uStack_70 = uStack_88;
                    uStack_78 = puStack_90;
                    uStack_80 = uStack_98;
                    uStack_98 = 0;
                    puStack_90 = &uStack_80;
                    goto LAB_02330a98;
                  }
                  lVar18 = *(long *)(lVar17 + 0x10);
                  lVar19 = *(long *)puVar2;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar18 == 0) break;
                  uVar1 = *(uint *)(lVar17 + 0x18);
                  if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                    *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                    *(int *)(lVar18 + (long)(int)uVar1 * 4 + 0x20) = iVar21 + 1;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar17,iVar21 + 1,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                    lVar13 = *(long *)(lVar9 + 0x10);
                    if (lVar13 == 0) break;
                  }
                  if (*(long *)(lVar13 + 0x28) == 0) break;
                  lVar18 = *plVar20;
                  uVar14 = System_Collections_Generic_List_object___get_Item_3a81924
                                     (*(long *)(lVar13 + 0x28),iVar21,*(undefined8 *)puVar6);
                  uVar8 = Dino_BusSand_App_Meta_WeeklyCupModel__BotScore_22313ec
                                    (lVar9,uVar14,uVar10);
                  if (lVar18 == 0) break;
                  lVar13 = *(long *)(lVar18 + 0x10);
                  lVar19 = *(long *)puVar2;
                  *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                  if (lVar13 == 0) break;
                  uVar1 = *(uint *)(lVar18 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar18 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar18,uVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar13 = *(long *)(lVar9 + 0x10);
                  iVar21 = iVar21 + 1;
                } while (lVar13 != 0);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_02330a98:
  uVar15 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                     (&uStack_80,*(undefined8 *)puVar3);
  uVar7 = uStack_70;
  if ((uVar15 & 1) == 0) {
    System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
              (&uStack_80,*(undefined8 *)PTR_DAT_04cad8c8);
    return lVar12;
  }
  iVar21 = (int)uStack_70;
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Object___ctor_4870e5c(lVar11,0);
  if (iVar21 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar17 = *(long *)(*(long *)(lVar9 + 0x10) + 0x28);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar17 = System_Collections_Generic_List_object___get_Item_3a81924
                       (lVar17,iVar21 + -1,*(undefined8 *)puVar6);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = *(undefined4 *)(lVar17 + 0x10);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined4 *)(lVar11 + 0x10) = uVar8;
  if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar8 = System_Collections_Generic_List_int___get_Item_3a2bd74
                    (*plVar20,uVar7 & 0xffffffff,*(undefined8 *)puVar2);
  *(undefined4 *)(lVar11 + 0x14) = uVar8;
  *(bool *)(lVar11 + 0x18) = iVar21 == 0;
  if (lVar12 == 0) {
LAB_02330bbc:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar17 = *(long *)(lVar12 + 0x10);
  lVar13 = *(long *)puVar4;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (lVar17 == 0) goto LAB_02330bbc;
  uVar1 = *(uint *)(lVar12 + 0x18);
  if (uVar1 < *(uint *)(lVar17 + 0x18)) {
    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
    plVar16 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
    *plVar16 = lVar11;
    thunk_FUN_02134474(plVar16,lVar11);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_3a81bf4
              (lVar12,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
  }
  goto LAB_02330a98;
}

