/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$TrackingSection
void Dino_BusSand_App_Meta_MonetizationSettings__TrackingSection (Il2CppObject* value, System_Collections_Generic_List_string__o* notes, System_Collections_Generic_List_string__o* problems, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$TrackingSection
   void Dino_BusSand_App_Meta_MonetizationSettings__TrackingSection (Il2CppObject* value,
   System_Collections_Generic_List_string__o* notes, System_Collections_Generic_List_string__o*
   problems, const MethodInfo* method); */

void Dino_BusSand_App_Meta_MonetizationSettings__TrackingSection_226aafc
               (undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f9c0b1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cacfd8);
    FUN_02132f7c(PTR_DAT_04caba88);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cb46c0);
    FUN_02132f7c(PTR_DAT_04cb46e0);
    FUN_02132f7c(PTR_DAT_04cb46d8);
    FUN_02132f7c(PTR_DAT_04cb46e8);
    FUN_02132f7c(PTR_DAT_04cb2888);
    FUN_02132f7c(PTR_DAT_04cb46f0);
    FUN_02132f7c(PTR_DAT_04cb46f8);
    bRam0000000004f9c0b1 = 1;
  }
  puVar4 = PTR_DAT_04cab718;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  plStack_78 = (long *)0x0;
  uStack_80 = 0;
  lVar10 = Dino_BusSand_App_MiniJson__Obj_21561ec(param_1,0);
  puVar7 = PTR_DAT_04cb46f8;
  puVar6 = PTR_DAT_04cb46c0;
  puVar5 = PTR_DAT_04cacfd8;
  puVar3 = PTR_DAT_04caa300;
  if (lVar10 == 0) {
    if (param_3 != 0) {
      lVar10 = *(long *)(param_3 + 0x10);
      uVar13 = *(undefined8 *)PTR_DAT_04cb46e8;
      lVar15 = *(long *)puVar4;
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(param_3 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(param_3 + 0x18) = uVar1 + 1;
          puVar14 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *puVar14 = uVar13;
        }
        else {
          uVar1 = *(uint *)(param_3 + 0x18);
          System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                    (param_3,uVar1 + 1,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) +
                                                    0x70) + 0x20) + 0xc0) + 0x78));
          lVar10 = *(long *)(param_3 + 0x10);
          *(uint *)(param_3 + 0x18) = uVar1 + 1;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          puVar14 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *puVar14 = uVar13;
        }
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)puVar14 >> 0xc & 0x3f),
                       ((ulong)puVar14 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
            (&uStack_b8,lVar10,*(undefined8 *)PTR_DAT_04caa2f0);
  puVar2 = PTR_DAT_04ca9ac8;
  uStack_88 = puStack_b0;
  uStack_90 = uStack_b8;
  plStack_78 = plStack_a0;
  uStack_80 = uStack_a8;
  uStack_70 = uStack_98;
  uStack_b8 = 0;
  puStack_b0 = &uStack_90;
LAB_0236ac80:
  while( true ) {
    uVar11 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                       (&uStack_90,*(undefined8 *)puVar3);
    plVar8 = plStack_78;
    uVar13 = uStack_80;
    if ((uVar11 & 1) == 0) {
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                (&uStack_90,*(undefined8 *)PTR_DAT_04caa2f8);
      return;
    }
    uVar12 = System_String__Concat_46c82e0(*(undefined8 *)puVar7,uStack_80,0);
    if ((plVar8 == (long *)0x0) ||
       ((*plVar8 != *(long *)(puVar2 + 0x80) && (*plVar8 != *(long *)(puVar2 + 0x28))))) break;
    iVar9 = Dino_BusSand_App_MiniJson__Int_21562dc(plVar8,1,0);
    uVar11 = System_String__op_Equality_46d1108(uVar13,*(undefined8 *)PTR_DAT_04cb46f0,0);
    if ((uVar11 & 1) == 0) {
      uVar11 = System_String__op_Equality_46d1108(uVar13,*(undefined8 *)PTR_DAT_04cb2888,0);
      if ((uVar11 & 1) == 0) {
        uVar13 = System_String__Concat_46c82e0(uVar12,*(undefined8 *)PTR_DAT_04cb46d8,0);
        if (param_3 == 0) {
LAB_0236b088:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar10 = *(long *)(param_3 + 0x10);
        lVar15 = *(long *)puVar4;
        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_0236b088;
        uVar1 = *(uint *)(param_3 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(param_3 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (param_3,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        lVar10 = *(long *)puVar5;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar10 = *(long *)puVar5;
        }
        if ((bool)*(char *)(*(long *)(lVar10 + 0xb8) + 0x49) != (iVar9 != 0)) {
          puVar14 = (undefined8 *)PTR_DAT_04cb46e0;
          if (iVar9 == 0) {
            puVar14 = (undefined8 *)PTR_DAT_04caba88;
          }
          uVar13 = System_String__Concat_46d2b84(uVar12,*(undefined8 *)PTR_DAT_04cab270,*puVar14,0);
          if (param_2 == 0) {
LAB_0236b08c:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar10 = *(long *)(param_2 + 0x10);
          lVar15 = *(long *)puVar4;
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_0236b08c;
          uVar1 = *(uint *)(param_2 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (param_2,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar10 = *(long *)puVar5;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar10 = *(long *)puVar5;
        }
        *(bool *)(*(long *)(lVar10 + 0xb8) + 0x49) = iVar9 != 0;
      }
    }
    else {
      lVar10 = *(long *)puVar5;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar5;
      }
      if ((bool)*(char *)(*(long *)(lVar10 + 0xb8) + 0x48) != (iVar9 != 0)) {
        puVar14 = (undefined8 *)PTR_DAT_04cb46e0;
        if (iVar9 == 0) {
          puVar14 = (undefined8 *)PTR_DAT_04caba88;
        }
        uVar13 = System_String__Concat_46d2b84(uVar12,*(undefined8 *)PTR_DAT_04cab270,*puVar14,0);
        if (param_2 == 0) {
LAB_0236b084:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar10 = *(long *)(param_2 + 0x10);
        lVar15 = *(long *)puVar4;
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_0236b084;
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (param_2,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar10 = *(long *)puVar5;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar5;
      }
      *(bool *)(*(long *)(lVar10 + 0xb8) + 0x48) = iVar9 != 0;
    }
  }
  uVar13 = System_String__Concat_46c82e0(uVar12,*(undefined8 *)puVar6,0);
  if (param_3 != 0) {
    lVar10 = *(long *)(param_3 + 0x10);
    lVar15 = *(long *)puVar4;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(param_3 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(param_3 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
        thunk_FUN_02134474();
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (param_3,uVar13,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                  );
      }
      goto LAB_0236ac80;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

