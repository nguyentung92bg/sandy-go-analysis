/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$LivePlayers
System_Collections_Generic_List_BattleRoyalePerson__o* Dino_BusSand_App_Meta_BattleRoyaleCore__LivePlayers (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$LivePlayers
   System_Collections_Generic_List_BattleRoyalePerson__o*
   Dino_BusSand_App_Meta_BattleRoyaleCore__LivePlayers (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, int32_t count, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__LivePlayers_2224248(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  puVar3 = PTR_DAT_04cae328;
  puVar2 = PTR_DAT_04cae320;
  if ((bRam0000000004f9bdc7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadef8);
    FUN_02132f7c(PTR_DAT_04cb2b38);
    FUN_02132f7c(PTR_DAT_04cb2b40);
    FUN_02132f7c(PTR_DAT_04cb2b48);
    FUN_02132f7c(PTR_DAT_04cb2b50);
    FUN_02132f7c(PTR_DAT_04cae220);
    FUN_02132f7c(PTR_DAT_04cb2b00);
    FUN_02132f7c(PTR_DAT_04cae200);
    FUN_02132f7c(PTR_DAT_04cae238);
    FUN_02132f7c(PTR_DAT_04cb2b58);
    FUN_02132f7c(PTR_DAT_04cb2b60);
    FUN_02132f7c(PTR_DAT_04cae328);
    FUN_02132f7c(PTR_DAT_04cadf80);
    FUN_02132f7c(PTR_DAT_04cae320);
    bRam0000000004f9bdc7 = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar6,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_04cb2b00;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x80) != '\0') {
      uVar13 = *(undefined8 *)(lVar11 + 0x90);
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae200);
      System_Collections_Generic_HashSet_int____ctor_37dafa0(lVar11,uVar13,*(undefined8 *)puVar2);
      puVar5 = PTR_DAT_04cb2b48;
      puVar4 = PTR_DAT_04cae238;
      puVar3 = PTR_DAT_04cae220;
      puVar2 = PTR_DAT_04cadef8;
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x88), lVar7 == 0)) goto LAB_02324534;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_98,lVar7,*(undefined8 *)PTR_DAT_04cb2b58);
      lStack_70 = lStack_88;
      puStack_78 = puStack_90;
      uStack_80 = uStack_98;
      uStack_98 = 0;
      puStack_90 = &uStack_80;
LAB_023243f0:
      uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_80,*(undefined8 *)puVar5);
      lVar7 = lStack_70;
      if ((uVar8 & 1) != 0) {
        if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar8 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                          (lVar11,*(undefined4 *)(lStack_70 + 0x10),*(undefined8 *)puVar3);
        if ((uVar8 & 1) == 0) {
          lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
          *(undefined4 *)(lVar9 + 0x14) = 0xffffffff;
          System_Object___ctor_4870e5c(lVar9,0);
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar7 + 0x10);
          if (lVar6 != 0) {
            lVar7 = *(long *)(lVar6 + 0x10);
            lVar12 = *(long *)puVar4;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                plVar10 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                *plVar10 = lVar9;
                thunk_FUN_02134474(plVar10,lVar9);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar6,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_023243f0;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_023243f0;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_80,*(undefined8 *)PTR_DAT_04cb2b40);
      Dino_BusSand_App_Meta_BattleRoyaleRules__Shuffle_object__26ec150
                (lVar6,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_04cb2b38);
      if (-1 < param_2) {
        if (lVar6 == 0) goto LAB_02324534;
        if (param_2 < *(int *)(lVar6 + 0x18)) {
          lVar6 = System_Collections_Generic_List_object___GetRange_3a826c8
                            (lVar6,0,param_2,*(undefined8 *)PTR_DAT_04cb2b60);
        }
      }
    }
    return lVar6;
  }
LAB_02324534:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

