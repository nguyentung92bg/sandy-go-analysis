/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$OnClose
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnClose (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$OnClose
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnClose
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnClose_2192e54(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  int iVar17;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9ac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae0a0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae0d0);
    FUN_02132f7c(PTR_DAT_04cae188);
    bRam0000000004f9b9ac = 1;
  }
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x68);
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae0d0);
    UnityEngine_Events_UnityAction_Vector2____ctor_303b9ac
              (lVar9,param_1,*(undefined8 *)PTR_DAT_04cae0a0,0);
    if (lVar15 != 0) {
      if (lVar9 != 0) {
        uVar16 = *(undefined8 *)(lVar9 + 0x20);
        uVar14 = System_Delegate__get_Method_4875c68(lVar9,0,*(undefined8 *)PTR_DAT_04cae188);
        puVar4 = PTR_DAT_04cf7d80;
        puVar3 = PTR_DAT_04cf7d78;
        if (lVar15 != 0) {
          lVar9 = *(long *)(lVar15 + 0x10);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((bRam0000000004fa8d9d & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7d88);
            FUN_02132f7c(PTR_DAT_04cf7d70);
            FUN_02132f7c(PTR_DAT_04cf7d90);
            FUN_02132f7c(PTR_DAT_04cf7d80);
            FUN_02132f7c(PTR_DAT_04cf7d98);
            FUN_02132f7c(PTR_DAT_04cc62c0);
            FUN_02132f7c(PTR_DAT_04cc62c8);
            FUN_02132f7c(PTR_DAT_04cf7d78);
            FUN_02132f7c(PTR_DAT_04cf7da0);
            bRam0000000004fa8d9d = 1;
          }
          plVar10 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Collections_Generic_List_object____ctor_3a8138c(plVar10,*(undefined8 *)puVar4);
          puVar7 = PTR_DAT_04cf7da0;
          puVar6 = PTR_DAT_04cf7d90;
          puVar5 = PTR_DAT_04cf7d88;
          puVar4 = PTR_DAT_04cf7d70;
          puVar3 = PTR_DAT_04cc62c8;
          lVar15 = *(long *)(lVar9 + 0x18);
          if (lVar15 != 0) {
            iVar17 = 0;
            while (iVar17 < *(int *)(lVar15 + 0x18)) {
              plVar11 = (long *)System_Collections_Generic_List_object___get_Item_3a81924
                                          (lVar15,iVar17,*(undefined8 *)puVar3);
              if (plVar11 == (long *)0x0) goto LAB_044d7c98;
              uVar8 = (**(code **)(*plVar11 + 0x188))
                                (plVar11,uVar16,uVar14,*(undefined8 *)(*plVar11 + 400));
              if ((uVar8 & 1) != 0) {
                if ((*(long *)(lVar9 + 0x18) == 0) ||
                   (uVar12 = System_Collections_Generic_List_object___get_Item_3a81924
                                       (*(long *)(lVar9 + 0x18),iVar17,*(undefined8 *)puVar3),
                   plVar10 == (long *)0x0)) goto LAB_044d7c98;
                lVar15 = plVar10[2];
                lVar13 = *(long *)puVar4;
                *(int *)((long)plVar10 + 0x1c) = *(int *)((long)plVar10 + 0x1c) + 1;
                if (lVar15 == 0) goto LAB_044d7c98;
                uVar2 = *(uint *)(plVar10 + 3);
                if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(plVar10 + 3) = uVar2 + 1;
                  *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
                  thunk_FUN_02134474();
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (plVar10,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar15 = *(long *)(lVar9 + 0x18);
              iVar17 = iVar17 + 1;
              if (lVar15 == 0) goto LAB_044d7c98;
            }
            uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
            if (plVar10 != (long *)0x0) {
              System_Predicate_object____ctor_2c4e748
                        (uVar14,plVar10,*(undefined8 *)(*plVar10 + 0x210),0);
              System_Collections_Generic_List_object___RemoveAll_3a83234
                        (lVar15,uVar14,*(undefined8 *)puVar6);
              if ((*(long *)(lVar9 + 0x10) != 0) && (*(long *)(lVar9 + 0x18) != 0)) {
                iVar17 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18);
                iVar1 = *(int *)(*(long *)(lVar9 + 0x18) + 0x18);
                lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cf7d78);
                System_Collections_Generic_List_object____ctor_3a81404
                          (lVar15,iVar1 + iVar17,*(undefined8 *)PTR_DAT_04cf7d98);
                if (lVar15 != 0) {
                  System_Collections_Generic_List_object___AddRange_3a81e04
                            (lVar15,*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)puVar5);
                  System_Collections_Generic_List_object___AddRange_3a81e04
                            (lVar15,*(undefined8 *)(lVar9 + 0x18),*(undefined8 *)puVar5);
                  *(long *)(lVar9 + 0x20) = lVar15;
                  thunk_FUN_02134474((long *)(lVar9 + 0x20),lVar15);
                  *(undefined1 *)(lVar9 + 0x28) = 0;
                  return;
                }
              }
            }
          }
LAB_044d7c98:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

