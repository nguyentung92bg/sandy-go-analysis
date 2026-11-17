/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$Board
System_Collections_Generic_List_CupEntry__o* Dino_BusSand_App_Meta_WeeklyCupModel__Board (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$Board
   System_Collections_Generic_List_CupEntry__o* Dino_BusSand_App_Meta_WeeklyCupModel__Board
   (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this, int64_t nowMs, const MethodInfo* method); */

long Dino_BusSand_App_Meta_WeeklyCupModel__Board_223062c(long param_1,undefined8 param_2)

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
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  int iVar20;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  puVar4 = PTR_DAT_04cb30d0;
  puVar3 = PTR_DAT_04cb30c8;
  puVar2 = PTR_DAT_04cb30c0;
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
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar9,0);
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar10,*(undefined8 *)puVar4);
  puVar3 = PTR_DAT_04cad6e8;
  puVar2 = PTR_DAT_04caa1c8;
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    if (*(char *)(lVar16 + 0x18) == '\0') {
      return lVar10;
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = System_Math__Min_4831124(param_2,lVar16 + 0x240c8400,0);
    lVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar16,*(undefined8 *)puVar3);
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar12,*(undefined8 *)puVar3);
    puVar2 = PTR_DAT_04caa160;
    if ((*(long *)(param_1 + 0x10) != 0) && (lVar12 != 0)) {
      lVar17 = *(long *)(lVar12 + 0x10);
      uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x1c);
      lVar18 = *(long *)PTR_DAT_04caa160;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar17 != 0) {
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar17 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar12,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70)
                    );
        }
        if (lVar9 != 0) {
          plVar19 = (long *)(lVar9 + 0x10);
          *plVar19 = lVar12;
          thunk_FUN_02134474(plVar19,lVar12);
          if (lVar16 != 0) {
            lVar12 = *(long *)(lVar16 + 0x10);
            lVar17 = *(long *)puVar2;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar1 = *(uint *)(lVar16 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize_3a2c06c
                          (lVar16,0,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              puVar6 = PTR_DAT_04cb30f8;
              puVar4 = PTR_DAT_04cb30e0;
              puVar3 = PTR_DAT_04cad890;
              lVar12 = *(long *)(param_1 + 0x10);
              if (lVar12 != 0) {
                iVar20 = 0;
                do {
                  if (*(long *)(lVar12 + 0x28) == 0) break;
                  if (*(int *)(*(long *)(lVar12 + 0x28) + 0x18) <= iVar20) {
                    uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1c80);
                    System_Comparison_int____ctor_3325d5c
                              (uVar11,lVar9,*(undefined8 *)PTR_DAT_04cb3100,0);
                    System_Collections_Generic_List_int___Sort_3a2da68
                              (lVar16,uVar11,*(undefined8 *)PTR_DAT_04cb30e8);
                    System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                              (&uStack_98,lVar16,*(undefined8 *)PTR_DAT_04cad8a0);
                    puVar5 = PTR_DAT_04cb30d8;
                    puVar2 = PTR_DAT_04cae230;
                    uStack_70 = uStack_88;
                    uStack_78 = puStack_90;
                    uStack_80 = uStack_98;
                    uStack_98 = 0;
                    puStack_90 = &uStack_80;
                    goto LAB_02330a98;
                  }
                  lVar17 = *(long *)(lVar16 + 0x10);
                  lVar18 = *(long *)puVar2;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar17 == 0) break;
                  uVar1 = *(uint *)(lVar16 + 0x18);
                  if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                    *(int *)(lVar17 + (long)(int)uVar1 * 4 + 0x20) = iVar20 + 1;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar16,iVar20 + 1,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                    lVar12 = *(long *)(param_1 + 0x10);
                    if (lVar12 == 0) break;
                  }
                  if (*(long *)(lVar12 + 0x28) == 0) break;
                  lVar17 = *plVar19;
                  uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                                     (*(long *)(lVar12 + 0x28),iVar20,*(undefined8 *)puVar6);
                  uVar8 = Dino_BusSand_App_Meta_WeeklyCupModel__BotScore_22313ec
                                    (param_1,uVar13,uVar11);
                  if (lVar17 == 0) break;
                  lVar12 = *(long *)(lVar17 + 0x10);
                  lVar18 = *(long *)puVar2;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar12 == 0) break;
                  uVar1 = *(uint *)(lVar17 + 0x18);
                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar17,uVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar12 = *(long *)(param_1 + 0x10);
                  iVar20 = iVar20 + 1;
                } while (lVar12 != 0);
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
  uVar14 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                     (&uStack_80,*(undefined8 *)puVar3);
  uVar7 = uStack_70;
  if ((uVar14 & 1) == 0) {
    System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
              (&uStack_80,*(undefined8 *)PTR_DAT_04cad8c8);
    return lVar10;
  }
  iVar20 = (int)uStack_70;
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Object___ctor_4870e5c(lVar9,0);
  if (iVar20 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar16 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar16 = System_Collections_Generic_List_object___get_Item_3a81924
                       (lVar16,iVar20 + -1,*(undefined8 *)puVar6);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = *(undefined4 *)(lVar16 + 0x10);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined4 *)(lVar9 + 0x10) = uVar8;
  if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar8 = System_Collections_Generic_List_int___get_Item_3a2bd74
                    (*plVar19,uVar7 & 0xffffffff,*(undefined8 *)puVar2);
  *(undefined4 *)(lVar9 + 0x14) = uVar8;
  *(bool *)(lVar9 + 0x18) = iVar20 == 0;
  if (lVar10 == 0) {
LAB_02330bbc:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar16 = *(long *)(lVar10 + 0x10);
  lVar12 = *(long *)puVar4;
  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
  if (lVar16 == 0) goto LAB_02330bbc;
  uVar1 = *(uint *)(lVar10 + 0x18);
  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
    plVar15 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
    *plVar15 = lVar9;
    thunk_FUN_02134474(plVar15,lVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_3a81bf4
              (lVar10,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
  }
  goto LAB_02330a98;
}

