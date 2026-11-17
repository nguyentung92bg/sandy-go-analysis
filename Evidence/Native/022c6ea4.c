/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel$$<OnChest>b__20_0
void Dino_BusSand_App_UI_TowerEventPanel___OnChest_b__20_0 (Dino_BusSand_App_UI_TowerEventPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel$$<OnChest>b__20_0
   void Dino_BusSand_App_UI_TowerEventPanel___OnChest_b__20_0
   (Dino_BusSand_App_UI_TowerEventPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_TowerEventPanel___OnChest_b__20_0_21c6ea4(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  puVar5 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9baff & 1) == 0) {
                    /* try { // try from 022c6ecc to 023c6ed3 has its CatchHandler @ 022c6fbc */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9baff = 1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022c6eec to 023c6f17 has its CatchHandler @ 022c6f54 */
  uVar15 = UnityEngine_Object__op_Inequality_43c8dec(uVar17,0,0);
  if ((uVar15 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_KitTopBar__Release_2283cb8(*(long *)(param_1 + 0x40),0x1fffffffffffffff,0);
  }
  if ((bRam0000000004f9baf8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafec0);
    FUN_02132f7c(PTR_DAT_04cafec8);
    FUN_02132f7c(PTR_DAT_04caf910);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cafed0);
    FUN_02132f7c(PTR_DAT_04cafed8);
    FUN_02132f7c(PTR_DAT_04cafeb8);
    FUN_02132f7c(PTR_DAT_04cafee0);
    bRam0000000004f9baf8 = 1;
  }
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (uVar15 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasData_2229490
                         (*(long *)(param_1 + 0x38),0), (uVar15 & 1) == 0)) {
    return;
  }
  plVar16 = *(long **)(param_1 + 0x60);
  plVar11 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar12 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                         (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04caf910),
     puVar5 = PTR_DAT_04ca9ac8, lVar12 != 0)) {
    uStack_74 = *(undefined4 *)(lVar12 + 0x10);
    lVar12 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_74);
    if (plVar11 != (long *)0x0) {
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0)) {
LAB_022c6424:
        uVar17 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar17,0);
      }
      if ((int)plVar11[3] == 0) {
LAB_022c6420:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar11[4] = lVar12;
      thunk_FUN_02134474(plVar11 + 4,lVar12);
      if (*(long *)(param_1 + 0x38) != 0) {
        uStack_78 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_FinalPoint_2229364
                              (*(long *)(param_1 + 0x38),0);
        lVar12 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),&uStack_78);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
        goto LAB_022c6424;
        if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_022c6420;
        plVar11[5] = lVar12;
        thunk_FUN_02134474(plVar11 + 5,lVar12);
        puVar5 = PTR_DAT_04cad330;
        if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar17 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                           (*(undefined8 *)PTR_DAT_04cafed8,*(undefined8 *)PTR_DAT_04cafed0,plVar11,
                            0);
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x518))(plVar16,uVar17,*(undefined8 *)(*plVar16 + 0x520));
          puVar8 = PTR_DAT_04cafee0;
          puVar7 = PTR_DAT_04cafec8;
          puVar6 = PTR_DAT_04cafeb8;
          uVar4 = _UNK_00e208e8;
          uVar3 = _UNK_00e20174;
          uVar2 = _UNK_00e200f8;
          lVar12 = *(long *)(param_1 + 0x68);
          if (lVar12 != 0) {
            uVar15 = 0;
            do {
              uVar14 = uVar15 + 1;
              if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar14) {
                return;
              }
              lVar12 = *(long *)(param_1 + 0x70);
              if (lVar12 == 0) break;
              if ((long)*(int *)(lVar12 + 0x18) < (long)uVar14) {
                return;
              }
              plVar11 = (long *)System_Collections_Generic_List_object___get_Item_3a81924
                                          (lVar12,uVar15 & 0xffffffff,*(undefined8 *)puVar7);
              lVar12 = *(long *)(param_1 + 0x68);
              if (lVar12 == 0) break;
              if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_022c6420;
              if (*(long *)(param_1 + 0x38) == 0) break;
              uVar18 = *(undefined4 *)(lVar12 + uVar15 * 4 + 0x24);
              uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsClaimed_2229a78
                                (*(long *)(param_1 + 0x38),uVar18,0);
              if (*(long *)(param_1 + 0x38) == 0) break;
              uVar10 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaim_2229afc
                                 (*(long *)(param_1 + 0x38),uVar18,0);
              puVar1 = (undefined8 *)puVar8;
              if ((uVar9 & 1) == 0) {
                puVar1 = (undefined8 *)puVar6;
              }
              uVar17 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*puVar1,0);
              if (plVar11 == (long *)0x0) break;
              UnityEngine_UI_Image__set_sprite_44a7258(plVar11,uVar17,0);
              uVar18 = uVar4;
              if ((uVar9 & 1) == 0) {
                uVar18 = 0x3f800000;
              }
              (**(code **)(*plVar11 + 0x2a8))
                        (0x3f800000,0x3f800000,0x3f800000,uVar18,plVar11,
                         *(undefined8 *)(*plVar11 + 0x2b0));
              uVar17 = UnityEngine_Component__get_transform_43bcd18(plVar11,0);
              lVar12 = *(long *)puVar5;
              if (((uVar9 | uVar10 ^ 0xffffffff) & 1) == 0) {
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar12);
                }
                uVar14 = Dino_BusSand_App_UI_UiKit__IsBreathing_2288f68(uVar17,0);
                if ((uVar14 & 1) == 0) {
                  uVar17 = UnityEngine_Component__get_transform_43bcd18(plVar11,0);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar5);
                  }
                  Dino_BusSand_App_UI_UiKit__Breathe_2289058(uVar3,uVar2,uVar17,0);
                }
              }
              else {
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar12);
                }
                uVar14 = Dino_BusSand_App_UI_UiKit__IsBreathing_2288f68(uVar17,0);
                if ((uVar14 & 1) != 0) {
                  uVar17 = UnityEngine_Component__get_transform_43bcd18(plVar11,0);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar5);
                  }
                  Dino_BusSand_App_UI_UiKit__StopBreathing_228972c(uVar17,0);
                }
              }
              lVar12 = *(long *)(param_1 + 0x68);
              uVar15 = uVar15 + 1;
            } while (lVar12 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

