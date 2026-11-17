/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$DeadPlayers
System_Collections_Generic_List_BattleRoyalePerson__o* Dino_BusSand_App_Meta_BattleRoyaleCore__DeadPlayers (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$DeadPlayers
   System_Collections_Generic_List_BattleRoyalePerson__o*
   Dino_BusSand_App_Meta_BattleRoyaleCore__DeadPlayers (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, int32_t count, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__DeadPlayers_2224b94(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  
  puVar3 = PTR_DAT_04cae328;
  puVar2 = PTR_DAT_04cae320;
  if ((bRam0000000004f9bdc9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadef8);
    FUN_02132f7c(PTR_DAT_04cb2b78);
    FUN_02132f7c(PTR_DAT_04cb2b80);
    FUN_02132f7c(PTR_DAT_04cb2b88);
    FUN_02132f7c(PTR_DAT_04cb2b90);
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cb2b40);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cb2b48);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cb2b50);
    FUN_02132f7c(PTR_DAT_04cae238);
    FUN_02132f7c(PTR_DAT_04cb2b58);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04cae328);
    FUN_02132f7c(PTR_DAT_04cadf80);
    FUN_02132f7c(PTR_DAT_04cae320);
    bRam0000000004f9bdc9 = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  lStack_a8 = 0;
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar10,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_04cb2b80;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x10) + 0x80) == '\0') {
      return lVar10;
    }
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2b90);
    System_Collections_Generic_Dictionary_int__object____ctor_343658c(lVar11,*(undefined8 *)puVar2);
    puVar8 = PTR_DAT_04cb2b88;
    puVar7 = PTR_DAT_04cb2b78;
    puVar6 = PTR_DAT_04cb2b48;
    puVar5 = PTR_DAT_04cb2b40;
    puVar4 = PTR_DAT_04cae238;
    puVar3 = PTR_DAT_04cadef8;
    puVar2 = PTR_DAT_04cad890;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x88), lVar12 != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_c0,lVar12,*(undefined8 *)PTR_DAT_04cb2b58);
      uStack_70 = uStack_b0;
      puStack_78 = puStack_b8;
      uStack_80 = uStack_c0;
      uStack_c0 = 0;
      puStack_b8 = &uStack_80;
      while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_80,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
        if (uStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                  (lVar11,*(undefined4 *)(uStack_70 + 0x10),uStack_70,*(undefined8 *)puVar8);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_80,*(undefined8 *)puVar5);
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x90), lVar12 != 0)) {
        System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                  (&uStack_c0,lVar12,*(undefined8 *)PTR_DAT_04cad8a0);
        uStack_90 = uStack_b0;
        puStack_98 = puStack_b8;
        uStack_a0 = uStack_c0;
        uStack_c0 = 0;
        puStack_b8 = &uStack_a0;
        while (uVar13 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                                  (&uStack_a0,*(undefined8 *)puVar2), (uVar13 & 1) != 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (param_2 <= *(int *)(lVar10 + 0x18)) break;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar9 = (undefined4)uStack_90;
          uVar13 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                             (lVar11,uStack_90 & 0xffffffff,&lStack_a8,*(undefined8 *)puVar7);
          if ((uVar13 & 1) == 0) {
            lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
            *(undefined4 *)(lVar12 + 0x14) = 0xffffffff;
            System_Object___ctor_4870e5c(lVar12,0);
            *(undefined4 *)(lVar12 + 0x10) = uVar9;
            *(undefined4 *)(lVar12 + 0x14) = 0xffffffff;
          }
          else {
            lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
            *(undefined4 *)(lVar12 + 0x14) = 0xffffffff;
            System_Object___ctor_4870e5c(lVar12,0);
            if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lStack_a8 + 0x10);
          }
          lVar15 = *(long *)(lVar10 + 0x10);
          lVar16 = *(long *)puVar4;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar14 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *plVar14 = lVar12;
            thunk_FUN_02134474(plVar14,lVar12);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar10,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                  (&uStack_a0,*(undefined8 *)PTR_DAT_04cad8c8);
        return lVar10;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

