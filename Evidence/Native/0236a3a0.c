/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$Overlay
void Dino_BusSand_App_Meta_MonetizationSettings__Overlay (System_String_o* section, Il2CppObject* value, Il2CppObject* target, System_Collections_Generic_List_string__o* changed, System_Collections_Generic_List_string__o* problems, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$Overlay
   void Dino_BusSand_App_Meta_MonetizationSettings__Overlay (System_String_o* section, Il2CppObject*
   value, Il2CppObject* target, System_Collections_Generic_List_string__o* changed,
   System_Collections_Generic_List_string__o* problems, const MethodInfo* method); */

void Dino_BusSand_App_Meta_MonetizationSettings__Overlay_226a3a0
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f9c0b2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cacfd8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cb46c0);
    FUN_02132f7c(PTR_DAT_04cb46c8);
    FUN_02132f7c(PTR_DAT_04cb46d0);
    FUN_02132f7c(PTR_DAT_04cb46d8);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    FUN_02132f7c(PTR_DAT_04cb1f90);
    FUN_02132f7c(PTR_DAT_04cb1fa8);
    bRam0000000004f9c0b2 = 1;
  }
  puVar3 = PTR_DAT_04cab718;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  lVar6 = Dino_BusSand_App_MiniJson__Obj_21561ec(param_2,0);
  puVar5 = PTR_DAT_04cb1fa8;
  puVar4 = PTR_DAT_04cacfd8;
  puVar2 = PTR_DAT_04caa300;
  if (lVar6 == 0) {
    uVar10 = System_String__Concat_46c82e0(param_1,*(undefined8 *)PTR_DAT_04cb1f90,0);
    if (param_5 != 0) {
      lVar6 = *(long *)(param_5 + 0x10);
      lVar13 = *(long *)puVar3;
      *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(param_5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(param_5 + 0x18) = uVar1 + 1;
          puVar12 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *puVar12 = uVar10;
        }
        else {
          uVar1 = *(uint *)(param_5 + 0x18);
          System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                    (param_5,uVar1 + 1,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                    0x70) + 0x20) + 0xc0) + 0x78));
          lVar6 = *(long *)(param_5 + 0x10);
          *(uint *)(param_5 + 0x18) = uVar1 + 1;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          puVar12 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *puVar12 = uVar10;
        }
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)puVar12 >> 0xc & 0x3f),
                       ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
            (&uStack_c0,lVar6,*(undefined8 *)PTR_DAT_04caa2f0);
  uStack_70 = uStack_a0;
  uStack_88 = puStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_c0 = 0;
  puStack_b8 = &uStack_90;
LAB_0236a520:
  do {
    uVar7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                      (&uStack_90,*(undefined8 *)puVar2);
    uVar11 = uStack_78;
    uVar10 = uStack_80;
    if ((uVar7 & 1) == 0) {
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                (&uStack_90,*(undefined8 *)PTR_DAT_04caa2f8);
      return;
    }
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = System_Object__GetType_4876970(param_3,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar9 = (long *)Dino_BusSand_App_Meta_MonetizationSettings__FindField_226b12c(uVar8,uVar10);
    uVar10 = System_String__Concat_46d2b84(param_1,*(undefined8 *)puVar5,uVar10,0);
    uVar7 = System_Reflection_FieldInfo__op_Equality_47732d8(plVar9,0,0);
    if ((uVar7 & 1) != 0) {
      uVar10 = System_String__Concat_46c82e0(uVar10,*(undefined8 *)PTR_DAT_04cb46d8,0);
      if (param_5 != 0) {
        lVar6 = *(long *)(param_5 + 0x10);
        lVar13 = *(long *)puVar3;
        *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(param_5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(param_5 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (param_5,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_0236a520;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_App_Meta_MonetizationSettings__TryConvert_226b24c(plVar9,uVar11,&uStack_98)
    ;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = Dino_BusSand_App_Meta_MonetizationSettings__Bound_226b6cc(plVar9,&uStack_98);
      uVar11 = uStack_98;
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = Dino_BusSand_App_Meta_MonetizationSettings__Show_226b808(uVar11);
        uVar11 = System_String__Concat_46d30e8
                           (uVar10,*(undefined8 *)PTR_DAT_04cb46d0,uVar11,
                            *(undefined8 *)PTR_DAT_04cab2b8,0);
        if (param_5 == 0) {
LAB_0236a9ec:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar6 = *(long *)(param_5 + 0x10);
        lVar13 = *(long *)puVar3;
        *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_0236a9ec;
        uVar1 = *(uint *)(param_5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(param_5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (param_5,uVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar8 = (**(code **)(*plVar9 + 0x2e8))(plVar9,param_3,*(undefined8 *)(*plVar9 + 0x2f0));
      System_Reflection_FieldInfo__SetValue_4773340(plVar9,param_3,uStack_98,0);
      uVar11 = uStack_98;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = Dino_BusSand_App_Meta_MonetizationSettings__SameValue_226b96c(uVar8,uVar11);
      if ((uVar7 & 1) == 0) {
        lVar6 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined8 *)(lVar6 + 0x20) = uVar10;
        thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),uVar10);
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04cab270;
        thunk_FUN_02134474();
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = Dino_BusSand_App_Meta_MonetizationSettings__Show_226b808(uVar8);
        if (*(uint *)(lVar6 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined8 *)(lVar6 + 0x30) = uVar10;
        thunk_FUN_02134474();
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)PTR_DAT_04cb46c8;
        thunk_FUN_02134474();
        uVar10 = Dino_BusSand_App_Meta_MonetizationSettings__Show_226b808(uStack_98);
        if (*(uint *)(lVar6 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined8 *)(lVar6 + 0x40) = uVar10;
        thunk_FUN_02134474();
        uVar10 = System_String__Concat_46d31f0(lVar6,0);
        if (param_4 != 0) {
          lVar6 = *(long *)(param_4 + 0x10);
          lVar13 = *(long *)puVar3;
          *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(param_4 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(param_4 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (param_4,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_0236a520;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_0236a520;
    }
    uVar10 = System_String__Concat_46c82e0(uVar10,*(undefined8 *)PTR_DAT_04cb46c0,0);
    if (param_5 == 0) {
LAB_0236a9e4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = *(long *)(param_5 + 0x10);
    lVar13 = *(long *)puVar3;
    *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_0236a9e4;
    uVar1 = *(uint *)(param_5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(param_5 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
      thunk_FUN_02134474();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (param_5,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
}

