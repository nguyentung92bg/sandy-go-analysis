/* IL2CPP: Dino.BusSand.View.ChainRig$$.ctor
void Dino_BusSand_View_ChainRig___ctor (Dino_BusSand_View_ChainRig_o* __this, UnityEngine_Transform_o* root, Dino_BusSand_Core_StageEngine_o* e, Dino_BusSand_View_StageLayout_o* L, System_Func_int__VehicleView__o* vehicle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.ChainRig$$.ctor
   void Dino_BusSand_View_ChainRig___ctor (Dino_BusSand_View_ChainRig_o* __this,
   UnityEngine_Transform_o* root, Dino_BusSand_Core_StageEngine_o* e,
   Dino_BusSand_View_StageLayout_o* L, System_Func_int__VehicleView__o* vehicle, const MethodInfo*
   method); */

void Dino_BusSand_View_ChainRig___ctor_2390cd0
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  puVar5 = PTR_DAT_04cbc078;
  puVar4 = PTR_DAT_04cbc070;
  if ((bRam0000000004f9c8ca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbc088);
    FUN_02132f7c(PTR_DAT_04cbc090);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cbc098);
    FUN_02132f7c(PTR_DAT_04cbc0a0);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cae218);
    FUN_02132f7c(PTR_DAT_04cae208);
    FUN_02132f7c(PTR_DAT_04cae200);
    FUN_02132f7c(PTR_DAT_04cbc0a8);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cbc0b0);
    FUN_02132f7c(PTR_DAT_04cbc0b8);
    FUN_02132f7c(PTR_DAT_04cbc0c0);
    FUN_02132f7c(PTR_DAT_04cbc078);
    FUN_02132f7c(PTR_DAT_04cb1880);
    FUN_02132f7c(PTR_DAT_04cbc0c8);
    FUN_02132f7c(PTR_DAT_04cbc070);
    FUN_02132f7c(PTR_DAT_04cbc0d0);
    FUN_02132f7c(PTR_DAT_04cbc0d8);
    bRam0000000004f9c8ca = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar10,*(undefined8 *)puVar5);
  plVar19 = (long *)(param_1 + 0x30);
  *plVar19 = lVar10;
  thunk_FUN_02134474(plVar19,lVar10);
  System_Object___ctor_4870e5c(param_1,0);
  *(undefined8 *)(param_1 + 0x28) = param_2;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),param_2);
  *(long *)(param_1 + 0x10) = param_3;
  thunk_FUN_02134474((long *)(param_1 + 0x10),param_3);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),param_4);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),param_5);
  if (((param_3 != 0) && (*(long *)(param_3 + 0x20) != 0)) &&
     (lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0x10), lVar10 != 0)) {
    *(double *)(param_1 + 0x38) = (double)*(int *)(lVar10 + 0x24);
    puVar4 = PTR_DAT_04cae208;
    if (*(long *)(param_3 + 0x10) != 0) {
      lVar10 = *(long *)(*(long *)(param_3 + 0x10) + 0x20);
      iVar17 = 10;
      if ((lVar10 != 0) && (iVar17 = *(int *)(lVar10 + 0x14), iVar17 < 1)) {
        iVar17 = 10;
      }
      uVar11 = *(undefined8 *)PTR_DAT_04cae200;
      *(int *)(param_1 + 0x40) = iVar17;
      lVar10 = thunk_FUN_0216e89c(uVar11);
      System_Collections_Generic_HashSet_int____ctor_37daeb0(lVar10,*(undefined8 *)puVar4);
      puVar8 = PTR_DAT_04cbc0c8;
      puVar7 = PTR_DAT_04cbc0b0;
      puVar6 = PTR_DAT_04cbc0a8;
      puVar5 = PTR_DAT_04cab9f8;
      puVar4 = PTR_DAT_04cab9e8;
      if (*(long *)(param_3 + 0x28) != 0) {
        uStack_88 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(param_3 + 0x28),0);
        Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                  (&uStack_b8,&uStack_88,*(undefined8 *)puVar5);
        lStack_70 = lStack_a8;
        puStack_78 = puStack_b0;
        uStack_80 = uStack_b8;
        uStack_b8 = 0;
        puStack_b0 = &uStack_80;
        while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_80,*(undefined8 *)puVar4), lVar9 = lStack_70,
              (uVar12 & 1) != 0) {
          lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbc0d8);
          System_Object___ctor_4870e5c(lVar13,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (0 < *(int *)(lVar9 + 0x40)) {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar12 = System_Collections_Generic_HashSet_int___Add_37dc0f0
                               (lVar10,*(int *)(lVar9 + 0x40),*(undefined8 *)PTR_DAT_04cae218);
            if ((uVar12 & 1) != 0) {
              if (*(long *)(param_3 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar14 = Dino_BusSand_Core_TruckGrid__ChainOf_241c9f8
                                 (*(long *)(param_3 + 0x28),lVar9,0);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar2 = *(undefined4 *)(lVar9 + 0x28);
              if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_Core_BusGeometry__Heading_242bec8(uVar2,lVar13 + 0x10,lVar13 + 0x18,0);
              uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbc088);
              System_Comparison_object____ctor_3326afc
                        (uVar11,lVar13,*(undefined8 *)PTR_DAT_04cbc0d0,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              System_Collections_Generic_List_object___Sort_3a83690
                        (lVar14,uVar11,*(undefined8 *)PTR_DAT_04cbc0c0);
              if (1 < *(int *)(lVar14 + 0x18)) {
                iVar17 = 0;
                do {
                  lVar20 = *plVar19;
                  lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
                  Dino_BusSand_View_ChainRig_Hitch___ctor_2391314();
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  uVar11 = *(undefined8 *)puVar8;
                  *(undefined4 *)(lVar13 + 0x10) = *(undefined4 *)(lVar9 + 0x40);
                  lVar15 = System_Collections_Generic_List_object___get_Item_3a81924
                                     (lVar14,iVar17,uVar11);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  uVar11 = *(undefined8 *)puVar8;
                  *(undefined4 *)(lVar13 + 0x14) = *(undefined4 *)(lVar15 + 0x10);
                  lVar15 = System_Collections_Generic_List_object___get_Item_3a81924
                                     (lVar14,iVar17 + 1,uVar11);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  *(undefined4 *)(lVar13 + 0x18) = *(undefined4 *)(lVar15 + 0x10);
                  if (lVar20 == 0) {
LAB_024911f0:
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  lVar15 = *(long *)(lVar20 + 0x10);
                  lVar18 = *(long *)puVar7;
                  *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                  if (lVar15 == 0) goto LAB_024911f0;
                  uVar3 = *(uint *)(lVar20 + 0x18);
                  if (uVar3 < *(uint *)(lVar15 + 0x18)) {
                    *(uint *)(lVar20 + 0x18) = uVar3 + 1;
                    plVar16 = (long *)(lVar15 + (long)(int)uVar3 * 8 + 0x20);
                    *plVar16 = lVar13;
                    thunk_FUN_02134474(plVar16,lVar13);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar20,lVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                  }
                  iVar1 = iVar17 + 2;
                  iVar17 = iVar17 + 1;
                } while (iVar1 < *(int *)(lVar14 + 0x18));
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cab9e0);
        if (*plVar19 != 0) {
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_a0,*plVar19,*(undefined8 *)PTR_DAT_04cbc0b8);
          puVar4 = PTR_DAT_04cbc098;
          uStack_b8 = 0;
          puStack_b0 = &uStack_a0;
          while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                    (&uStack_a0,*(undefined8 *)puVar4), (uVar12 & 1) != 0) {
            Dino_BusSand_View_ChainRig__BuildHitch_2391428(param_1,uStack_90);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_a0,*(undefined8 *)PTR_DAT_04cbc090);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

