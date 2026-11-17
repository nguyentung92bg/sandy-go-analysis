/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$LivePlayers
System_Collections_Generic_List_BattleRoyalePerson__o* Dino_BusSand_App_Meta_BattleRoyaleCore__LivePlayers (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, int32_t count, bool haveMe, int32_t headCountMin, int32_t myHead, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$LivePlayers
   System_Collections_Generic_List_BattleRoyalePerson__o*
   Dino_BusSand_App_Meta_BattleRoyaleCore__LivePlayers (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, int32_t count, bool haveMe, int32_t headCountMin, int32_t myHead, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__LivePlayers_22245b8
               (long param_1,int param_2,ulong param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  
  puVar3 = PTR_DAT_04cae328;
  puVar2 = PTR_DAT_04cae320;
  if ((bRam0000000004f9bdc8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadef0);
    FUN_02132f7c(PTR_DAT_04cadef8);
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cae218);
    FUN_02132f7c(PTR_DAT_04cae220);
    FUN_02132f7c(PTR_DAT_04cae208);
    FUN_02132f7c(PTR_DAT_04cae200);
    FUN_02132f7c(PTR_DAT_04cb2b68);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cae238);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04cb2b70);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cae328);
    FUN_02132f7c(PTR_DAT_04cadf80);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cadf88);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cae320);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bdc8 = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar9,*(undefined8 *)puVar3);
  if ((param_3 & 1) != 0) {
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cadef8);
    *(undefined4 *)(lVar10 + 0x14) = 0xffffffff;
    System_Object___ctor_4870e5c(lVar10,0);
    puVar2 = PTR_DAT_04cadef0;
    lVar11 = *(long *)PTR_DAT_04cadef0;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar2;
    }
    *(undefined4 *)(lVar10 + 0x10) = **(undefined4 **)(lVar11 + 0xb8);
    *(undefined4 *)(lVar10 + 0x14) = param_5;
    if (lVar9 == 0) goto LAB_02324b28;
    lVar11 = *(long *)(lVar9 + 0x10);
    lVar16 = *(long *)PTR_DAT_04cae238;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_02324b28;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
      *plVar12 = lVar10;
      thunk_FUN_02134474(plVar12,lVar10);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar9,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    param_2 = param_2 - (uint)(0 < param_2);
  }
  lVar10 = Dino_BusSand_App_Meta_BattleRoyaleCore__LivePlayers_2224248(param_1,param_2);
  puVar2 = PTR_DAT_04cae208;
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) == 0) {
      return lVar9;
    }
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae200);
    System_Collections_Generic_HashSet_int____ctor_37daeb0(lVar11,*(undefined8 *)puVar2);
    puVar3 = PTR_DAT_04cae218;
    puVar2 = PTR_DAT_04caa200;
    if (lVar11 != 0) {
      System_Collections_Generic_HashSet_int___Add_37dc0f0
                (lVar11,param_5,*(undefined8 *)PTR_DAT_04cae218);
      uVar7 = *(undefined4 *)(lVar10 + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar6 = System_Math__Min_4831118(8,uVar7,0);
      puVar2 = PTR_DAT_04cadf88;
      if (iVar6 < 1) {
        iVar19 = 0;
      }
      else {
        iVar19 = 0;
        iVar18 = 0;
        do {
          lVar16 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar10,iVar18,*(undefined8 *)puVar2);
          if (lVar16 == 0) goto LAB_02324b28;
          if (0 < *(int *)(lVar16 + 0x14)) {
            lVar16 = System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar10,iVar18,*(undefined8 *)puVar2);
            if (lVar16 == 0) goto LAB_02324b28;
            System_Collections_Generic_HashSet_int___Add_37dc0f0
                      (lVar11,*(undefined4 *)(lVar16 + 0x14),*(undefined8 *)puVar3);
            iVar19 = iVar19 + 1;
          }
          iVar18 = iVar18 + 1;
        } while (iVar6 != iVar18);
      }
      if (iVar19 < param_4) {
        lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
        System_Collections_Generic_List_int____ctor_3a2b7dc(lVar16,*(undefined8 *)PTR_DAT_04cad6e8);
        lVar13 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_HeadIds_22202e0(param_1);
        if (lVar13 == 0) goto LAB_02324b28;
        System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                  (&uStack_98,lVar13,*(undefined8 *)PTR_DAT_04cad8a0);
        puVar4 = PTR_DAT_04cae220;
        puVar3 = PTR_DAT_04cad890;
        puVar2 = PTR_DAT_04caa160;
        puStack_78 = puStack_90;
        uStack_80 = uStack_98;
        puStack_90 = &uStack_80;
        uStack_70 = uStack_88;
        uStack_98 = 0;
LAB_0232497c:
        uVar14 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                           (&uStack_80,*(undefined8 *)puVar3);
        uVar5 = uStack_70;
        if ((uVar14 & 1) != 0) {
          uVar7 = (undefined4)uStack_70;
          uVar14 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                             (lVar11,uStack_70 & 0xffffffff,*(undefined8 *)puVar4);
          if ((uVar14 & 1) == 0) {
            if (lVar16 != 0) {
              lVar13 = *(long *)(lVar16 + 0x10);
              lVar17 = *(long *)puVar2;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar13 != 0) {
                uVar1 = *(uint *)(lVar16 + 0x18);
                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = uVar7;
                }
                else {
                  System_Collections_Generic_List_int___AddWithResize_3a2c06c
                            (lVar16,uVar5 & 0xffffffff,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_0232497c;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          goto LAB_0232497c;
        }
        System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cad8c8);
        puVar4 = PTR_DAT_04cb2b70;
        puVar3 = PTR_DAT_04cae230;
        puVar2 = PTR_DAT_04cadf88;
        if (0 < *(int *)(lVar10 + 0x18)) {
          if (lVar16 == 0) goto LAB_02324b28;
          iVar6 = 0;
          while (0 < *(int *)(lVar16 + 0x18)) {
            lVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar10,iVar6,*(undefined8 *)puVar2);
            if (lVar11 == 0) goto LAB_02324b28;
            if (*(int *)(lVar11 + 0x14) < 1) {
              plVar12 = *(long **)(param_1 + 0x18);
              if (plVar12 == (long *)0x0) goto LAB_02324b28;
              uVar7 = (**(code **)(*plVar12 + 0x198))
                                (plVar12,0,*(undefined4 *)(lVar16 + 0x18),
                                 *(undefined8 *)(*plVar12 + 0x1a0));
              lVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (lVar10,iVar6,*(undefined8 *)puVar2);
              uVar8 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                (lVar16,uVar7,*(undefined8 *)puVar3);
              if (lVar11 == 0) goto LAB_02324b28;
              uVar15 = *(undefined8 *)puVar4;
              *(undefined4 *)(lVar11 + 0x14) = uVar8;
              System_Collections_Generic_List_int___RemoveAt_3a2d7c4(lVar16,uVar7,uVar15);
              iVar19 = iVar19 + 1;
            }
            iVar6 = iVar6 + 1;
            if ((*(int *)(lVar10 + 0x18) <= iVar6) || (param_4 <= iVar19)) break;
          }
        }
      }
      if (lVar9 != 0) {
        System_Collections_Generic_List_object___AddRange_3a81e04
                  (lVar9,lVar10,*(undefined8 *)PTR_DAT_04cb2b68);
        return lVar9;
      }
    }
  }
LAB_02324b28:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

