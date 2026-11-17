/* IL2CPP: Dino.BusSand.App.UI.UiTweakApplier$$Rebind
void Dino_BusSand_App_UI_UiTweakApplier__Rebind (Dino_BusSand_App_UI_UiTweakApplier_o* __this, Dino_BusSand_App_UI_UiTweaks_o* tw, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiTweakApplier$$Rebind
   void Dino_BusSand_App_UI_UiTweakApplier__Rebind (Dino_BusSand_App_UI_UiTweakApplier_o* __this,
   Dino_BusSand_App_UI_UiTweaks_o* tw, const MethodInfo* method); */

void Dino_BusSand_App_UI_UiTweakApplier__Rebind_22a3eb8(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9c27d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5b80);
    FUN_02132f7c(PTR_DAT_04cb5b88);
    FUN_02132f7c(PTR_DAT_04cb5b90);
    FUN_02132f7c(PTR_DAT_04cb5b98);
    FUN_02132f7c(PTR_DAT_04cb5ba0);
    FUN_02132f7c(PTR_DAT_04cb5ba8);
    FUN_02132f7c(PTR_DAT_04cb5bb0);
    FUN_02132f7c(PTR_DAT_04cb5bb8);
    FUN_02132f7c(PTR_DAT_04cb5b20);
    FUN_02132f7c(PTR_DAT_04cb5b50);
    FUN_02132f7c(PTR_DAT_04cb5bc0);
    FUN_02132f7c(PTR_DAT_04cb5b58);
    FUN_02132f7c(PTR_DAT_04cb5b28);
    FUN_02132f7c(PTR_DAT_04cb5b60);
    FUN_02132f7c(PTR_DAT_04cb5bc8);
    FUN_02132f7c(PTR_DAT_04cb5b30);
    FUN_02132f7c(PTR_DAT_04cb5bd0);
    FUN_02132f7c(PTR_DAT_04cb5bd8);
    FUN_02132f7c(PTR_DAT_04cb5b68);
    FUN_02132f7c(PTR_DAT_04cb5b38);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb5be0);
    bRam0000000004f9c27d = 1;
  }
  puVar4 = PTR_DAT_04cb5bb0;
  puVar3 = PTR_DAT_04cb5b98;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  lStack_a8 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_b0 = 0;
  if (cRam0000000004f9c303 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb5b08);
    cRam0000000004f9c303 = '\x01';
  }
  uVar10 = *(undefined8 *)puVar4;
  *(undefined4 *)(param_1 + 0x30) =
       *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04cb5b08 + 0xb8) + 0xc);
  lVar11 = thunk_FUN_0216e89c(uVar10);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(lVar11,*(undefined8 *)puVar3)
  ;
  puVar18 = (undefined8 *)PTR_DAT_04cb5be0;
  puVar8 = PTR_DAT_04cb5bc0;
  puVar17 = (undefined8 *)PTR_DAT_04cb5bb8;
  puVar6 = PTR_DAT_04cb5ba8;
  puVar19 = (undefined8 *)PTR_DAT_04cb5ba0;
  puVar5 = PTR_DAT_04cb5b58;
  puVar4 = PTR_DAT_04cb5b50;
  puVar3 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_1 + 0x28) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_d8,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb5b68);
    lStack_70 = lStack_c8;
    puStack_78 = puStack_d0;
    uStack_80 = uStack_d8;
    uStack_d8 = 0;
    puStack_d0 = &uStack_80;
    while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_80,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(lStack_70 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar11,*(undefined8 *)(*(long *)(lStack_70 + 0x10) + 0x18),lStack_70,
                 *(undefined8 *)puVar6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_80,*(undefined8 *)puVar4);
    lVar13 = *(long *)(param_1 + 0x28);
    if (lVar13 != 0) {
      iVar1 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = UnityEngine_Object__op_Inequality_43c8dec(param_2,0,0);
      if ((uVar12 & 1) != 0) {
        if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) goto LAB_023a43c8;
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_d8,*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_04cb5b38);
        puVar9 = PTR_DAT_04cb5bd0;
        puVar7 = PTR_DAT_04cb5b90;
        puVar6 = PTR_DAT_04cb5b88;
        puVar5 = PTR_DAT_04cb5b80;
        puVar4 = PTR_DAT_04cb5b28;
        puStack_98 = puStack_d0;
        uStack_a0 = uStack_d8;
        lStack_90 = lStack_c8;
        puStack_d0 = &uStack_a0;
        uStack_d8 = 0;
LAB_023a41dc:
        uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&uStack_a0,*(undefined8 *)puVar4);
        lVar13 = lStack_90;
        if ((uVar12 & 1) != 0) {
          if (((lStack_90 != 0) &&
              (uVar12 = System_String__op_Inequality_46d110c
                                  (*(undefined8 *)(lStack_90 + 0x10),*(undefined8 *)(param_1 + 0x20)
                                   ,0), (uVar12 & 1) == 0)) && (*(long *)(lVar13 + 0x18) != 0)) {
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                               (lVar11,*(long *)(lVar13 + 0x18),&lStack_a8,*(undefined8 *)puVar7);
            if ((uVar12 & 1) == 0) {
              lVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
              Dino_BusSand_App_UI_UiTweakApplier_Binding___ctor_22a4bac();
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              *(long *)(lVar14 + 0x10) = lVar13;
              thunk_FUN_02134474((long *)(lVar14 + 0x10),lVar13);
              lStack_a8 = lVar14;
            }
            else {
              System_Collections_Generic_Dictionary_object__object___Remove_34b58c0
                        (lVar11,*(undefined8 *)(lVar13 + 0x18),*(undefined8 *)puVar6);
              if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              *(long *)(lStack_a8 + 0x10) = lVar13;
              thunk_FUN_02134474((long *)(lStack_a8 + 0x10),lVar13);
            }
            lVar13 = *(long *)(param_1 + 0x28);
            if (lVar13 != 0) {
              lVar14 = *(long *)(lVar13 + 0x10);
              lVar16 = *(long *)puVar9;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar14 != 0) {
                uVar2 = *(uint *)(lVar13 + 0x18);
                if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                  plVar15 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar15 = lStack_a8;
                  thunk_FUN_02134474(plVar15,lStack_a8);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar13,lStack_a8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_023a41dc;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          goto LAB_023a41dc;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_a0,*(undefined8 *)PTR_DAT_04cb5b20);
        puVar17 = (undefined8 *)PTR_DAT_04cb5bb8;
        puVar18 = (undefined8 *)PTR_DAT_04cb5be0;
        puVar19 = (undefined8 *)PTR_DAT_04cb5ba0;
      }
      if ((lVar11 != 0) &&
         (lVar11 = System_Collections_Generic_Dictionary_object__object___get_Values_34b41c8
                             (lVar11,*puVar19), lVar11 != 0)) {
        System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator_30b7f48
                  (&uStack_c0,lVar11,*puVar18);
        uStack_d8 = 0;
        puStack_d0 = &uStack_c0;
        while( true ) {
          uVar12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext_364630c
                             (&uStack_c0,*(undefined8 *)puVar8);
          lVar11 = lStack_b0;
          if ((uVar12 & 1) == 0) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose_3646308
                      (&uStack_c0,*puVar17);
            return;
          }
          if (lStack_b0 == 0) break;
          uVar10 = *(undefined8 *)(lStack_b0 + 0x18);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
          if ((uVar12 & 1) != 0) {
            Dino_BusSand_App_UI_UiTweakApplier__Write_22a4598(lVar11,0);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_023a43c8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

