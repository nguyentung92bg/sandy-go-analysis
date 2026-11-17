/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<InitReward>d__17$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingRewardPanel__InitReward_d__17__MoveNext (Dino_BusSand_App_UI_YachtRacingRewardPanel__InitReward_d__17_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<InitReward>d__17$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingRewardPanel__InitReward_d__17__MoveNext
   (Dino_BusSand_App_UI_YachtRacingRewardPanel__InitReward_d__17_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_YachtRacingRewardPanel__InitReward_d__17__MoveNext_21f1238(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong *puVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar5 = param_1;
  if ((bRam0000000004f9bc20 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1468);
    FUN_02132f7c(PTR_DAT_04cad530);
    FUN_02132f7c(PTR_DAT_04cb1470);
    FUN_02132f7c(PTR_DAT_04cb1478);
    FUN_02132f7c(PTR_DAT_04cae8a8);
    FUN_02132f7c(PTR_DAT_04cae8b0);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cb1480);
    FUN_02132f7c(PTR_DAT_04cb1488);
    FUN_02132f7c(PTR_DAT_04cb1490);
    FUN_02132f7c(PTR_DAT_04cb1498);
    plVar5 = (long *)FUN_02132f7c(PTR_DAT_04cb14a0);
    bRam0000000004f9bc20 = 1;
  }
  lVar17 = param_1[4];
  uStack_68 = 0;
  if ((int)param_1[2] == 1) {
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    if (lVar17 == 0) goto LAB_022f1848;
    Dino_BusSand_App_UI_YachtRacingRewardPanel__PlayRewardAnim_21eff48(lVar17);
  }
  else {
    plVar5 = (long *)0x0;
    if ((int)param_1[2] == 0) {
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
      if ((lVar17 != 0) && (lVar12 = *(long *)(lVar17 + 0x50), lVar12 != 0)) {
        iVar16 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (0 < iVar16) {
          plVar5 = (long *)System_Array__Clear_4851dc8(*(undefined8 *)(lVar12 + 0x10),0,iVar16,0);
        }
        lVar12 = *(long *)(lVar17 + 0x58);
        if (lVar12 != 0) {
          iVar16 = *(int *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (0 < iVar16) {
            plVar5 = (long *)System_Array__Clear_4851dc8(*(undefined8 *)(lVar12 + 0x10),0,iVar16,0);
          }
          lVar12 = *(long *)(lVar17 + 0x60);
          if (lVar12 != 0) {
            lVar6 = *(long *)(lVar17 + 0x40);
            *(undefined4 *)(lVar12 + 0x18) = 0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            plVar5 = (long *)0x0;
            if (lVar6 != 0) {
              plVar5 = (long *)Dino_BusSand_App_Meta_YachtRacingCore__StageRewardId_225525c
                                         (lVar6,*(undefined4 *)(lVar17 + 0x48),0);
              if (0 < (int)plVar5) {
                lVar12 = *(long *)(lVar17 + 0x60);
                plVar5 = (long *)Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(plVar5,0);
                if (lVar12 == 0) goto LAB_022f1848;
                plVar5 = (long *)System_Collections_Generic_List_ActivityRewardEntry___AddRange_39e1fac
                                           (lVar12,plVar5,*(undefined8 *)PTR_DAT_04cb1468);
              }
              if (*(long *)(lVar17 + 0x60) != 0) {
                if (*(int *)(*(long *)(lVar17 + 0x60) + 0x18) == 0) {
                  *(undefined1 *)(lVar17 + 0x68) = 1;
                  return 0;
                }
                plVar7 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                           (lVar17,*(undefined8 *)PTR_DAT_04cb1498,0);
                if (plVar7 == (long *)0x0) {
                  plVar7 = (long *)0x0;
                }
                else if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
                  plVar7 = (long *)0x0;
                }
                lVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                   (lVar17,*(undefined8 *)PTR_DAT_04cb1488,0);
                plVar8 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                           (lVar17,*(undefined8 *)PTR_DAT_04cb14a0,0);
                puVar4 = PTR_DAT_04cad530;
                puVar3 = PTR_DAT_04caa208;
                puVar2 = PTR_DAT_04ca9ae8;
                lVar6 = *(long *)(lVar17 + 0x60);
                uStack_68 = uStack_68 & 0xffffffff;
                plVar5 = plVar8;
                if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 022f1554 with catch @ 022f14c0 */
                  iVar16 = 0;
                  do {
                    if (*(int *)(lVar6 + 0x18) <= iVar16) {
                      lVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
                      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20170,lVar17,0);
                      param_1[3] = lVar17;
                      thunk_FUN_02134474(param_1 + 3,lVar17);
                      *(undefined4 *)(param_1 + 2) = 1;
                      return 1;
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    /* try { // try from 022f14f0 to 023f14fb has its CatchHandler @ 022f15c4 */
                    plVar5 = (long *)UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
                    plVar18 = (long *)0x0;
                    if (((ulong)plVar5 & 1) != 0) {
                      if (*(long *)(lVar17 + 0x60) == 0) break;
                    /* try { // try from 022f1518 to 023f1523 has its CatchHandler @ 022f15b0 */
                      uStack_68._0_4_ = *(undefined4 *)(*(long *)(lVar17 + 0x60) + 0x18);
                      uVar9 = System_Int32__ToString_482d750(&uStack_68,0);
                    /* try { // try from 022f1524 to 023f153b has its CatchHandler @ 022f158c */
                      uStack_68 = CONCAT44(uStack_68._4_4_,uStack_68._4_4_ + 1);
                      uVar10 = System_Int32__ToString_482d750(&uStack_68,0);
                    /* try { // try from 022f1550 to 023f1553 has its CatchHandler @ 022f1554 */
                    /* catch() { ... } // from try @ 022f1550 with catch @ 022f1554
                       try { // try from 022f1554 to 023f15d7 has its CatchHandler @ 022f14c0 */
                      plVar5 = (long *)System_String__Concat_46d2b84
                                                 (*(undefined8 *)PTR_DAT_04cb1490,uVar9,uVar10,0);
                      if (lVar12 == 0) break;
                      plVar18 = (long *)UnityEngine_Transform__Find_43d4bec(lVar12,plVar5,0);
                      if (plVar18 == (long *)0x0) {
                        plVar18 = (long *)0x0;
                      }
                      else if (*plVar18 != *(long *)PTR_DAT_04cabdb0) {
                        plVar18 = (long *)0x0;
                      }
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    /* catch() { ... } // from try @ 022f1518 with catch @ 022f15b0 */
                    plVar5 = (long *)UnityEngine_Object__op_Inequality_43c8dec(plVar7,0,0);
                    plVar19 = (long *)0x0;
                    if (((ulong)plVar5 & 1) != 0) {
                      if (plVar7 == (long *)0x0) break;
                    /* catch() { ... } // from try @ 022f14f0 with catch @ 022f15c4 */
                      uVar9 = UnityEngine_Component__get_gameObject_43bcde8(plVar7,0);
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)puVar2);
                      }
                      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar8,0,0);
                      plVar5 = plVar8;
                      if ((uVar11 & 1) == 0) {
                        plVar5 = (long *)UnityEngine_Transform__get_parent_43d0d70(plVar7,0);
                      }
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      lVar6 = UnityEngine_Object__Instantiate_object__2805310
                                        (uVar9,plVar5,0,*(undefined8 *)PTR_DAT_04cad390);
                    /* catch() { ... } // from try @ 022f16d4 with catch @ 022f163c */
                      uVar9 = System_Int32__ToString_482d750((long)&uStack_68 + 4,0);
                      plVar5 = (long *)System_String__Concat_46c82e0
                                                 (*(undefined8 *)PTR_DAT_04cb1480,uVar9,0);
                      if (lVar6 == 0) break;
                      UnityEngine_Object__set_name_43c72ec(lVar6,plVar5,0);
                    /* try { // try from 022f167c to 023f1687 has its CatchHandler @ 022f16fc */
                      plVar19 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
                      if ((plVar19 != (long *)0x0) && (*plVar19 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
                        FUN_021335a4(plVar19);
                      }
                    /* try { // try from 022f16a4 to 023f16bb has its CatchHandler @ 022f16f8 */
                      plVar5 = plVar19;
                      if (cRam0000000004f9b65d == '\0') {
                        plVar5 = (long *)FUN_02132f7c(puVar3);
                        cRam0000000004f9b65d = '\x01';
                      }
                      if (plVar19 == (long *)0x0) break;
                    /* try { // try from 022f16d0 to 023f16d3 has its CatchHandler @ 022f16d4 */
                    /* catch() { ... } // from try @ 022f16d0 with catch @ 022f16d4
                       try { // try from 022f16d4 to 023f170f has its CatchHandler @ 022f163c */
                      puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                      UnityEngine_Transform__set_localPosition_43cfda8
                                (*puVar13,puVar13[1],puVar13[2],plVar19,0);
                      if (cRam0000000004f9b65e == '\0') {
                        FUN_02132f7c(puVar3);
                    /* catch() { ... } // from try @ 022f16a4 with catch @ 022f16f8 */
                    /* catch() { ... } // from try @ 022f167c with catch @ 022f16fc */
                        cRam0000000004f9b65e = '\x01';
                      }
                      lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
                      UnityEngine_Transform__set_localScale_43d1be0
                                (*(undefined4 *)(lVar14 + 0xc),*(undefined4 *)(lVar14 + 0x10),
                                 *(undefined4 *)(lVar14 + 0x14),plVar19,0);
                      plVar5 = (long *)0x0;
                      if (*(long *)(lVar17 + 0x60) == 0) break;
                    /* try { // try from 022f1738 to 023f173b has its CatchHandler @ 022f1750 */
                      System_Collections_Generic_List_ActivityRewardEntry___get_Item_39e19e0
                                (&uStack_80,*(long *)(lVar17 + 0x60),uStack_68._4_4_,
                                 *(undefined8 *)PTR_DAT_04cae8b0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f1738 with catch @ 022f1750
                        */
                      uStack_98 = uStack_78;
                      uStack_a0 = uStack_80;
                      uStack_90 = uStack_70;
                      Dino_BusSand_App_UI_YachtRacingRewardPanel__SetReward_21efc70
                                (plVar19,&uStack_a0);
                      UnityEngine_GameObject__SetActive_43c1408(lVar6,0,0);
                    }
                    plVar5 = *(long **)(lVar17 + 0x50);
                    if (plVar5 == (long *)0x0) break;
                    lVar6 = plVar5[2];
                    lVar14 = *(long *)puVar4;
                    /* try { // try from 022f1780 to 023f18eb has its CatchHandler @ 022f1780
                       catch() { ... } // from try @ 022f1780 with catch @ 022f1780
                       catch() { ... } // from try @ 022f18f4 with catch @ 022f1780
                       catch() { ... } // from try @ 022f1920 with catch @ 022f1780 */
                    *(int *)((long)plVar5 + 0x1c) = *(int *)((long)plVar5 + 0x1c) + 1;
                    if (lVar6 == 0) break;
                    uVar1 = *(uint *)(plVar5 + 3);
                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                      *(uint *)(plVar5 + 3) = uVar1 + 1;
                      puVar15 = (ulong *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar15 = (ulong)plVar19;
                      thunk_FUN_02134474(puVar15,plVar19);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (plVar5,plVar19,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    plVar5 = *(long **)(lVar17 + 0x58);
                    if (plVar5 == (long *)0x0) break;
                    lVar6 = plVar5[2];
                    lVar14 = *(long *)puVar4;
                    *(int *)((long)plVar5 + 0x1c) = *(int *)((long)plVar5 + 0x1c) + 1;
                    if (lVar6 == 0) break;
                    uVar1 = *(uint *)(plVar5 + 3);
                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                      *(uint *)(plVar5 + 3) = uVar1 + 1;
                      plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar5 = (long)plVar18;
                      plVar5 = (long *)thunk_FUN_02134474(plVar5,plVar18);
                    }
                    else {
                      plVar5 = (long *)System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                 (plVar5,plVar18,
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) +
                                                   0x70));
                    }
                    lVar6 = *(long *)(lVar17 + 0x60);
                    iVar16 = uStack_68._4_4_ + 1;
                    uStack_68 = CONCAT44(iVar16,(undefined4)uStack_68);
                  } while (lVar6 != 0);
                }
              }
            }
          }
        }
      }
LAB_022f1848:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(plVar5);
    }
  }
  return 0;
}

