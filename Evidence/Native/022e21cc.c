/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar.<MoveSlider>d__23$$MoveNext
bool Dino_BusSand_App_UI_StreakRateHallBar__MoveSlider_d__23__MoveNext (Dino_BusSand_App_UI_StreakRateHallBar__MoveSlider_d__23_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar.<MoveSlider>d__23$$MoveNext
   bool Dino_BusSand_App_UI_StreakRateHallBar__MoveSlider_d__23__MoveNext
   (Dino_BusSand_App_UI_StreakRateHallBar__MoveSlider_d__23_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_StreakRateHallBar__MoveSlider_d__23__MoveNext_21e21cc
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_44;
  
  if ((bRam0000000004f9bbb8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04cae8a8);
    FUN_02132f7c(PTR_DAT_04cae8b0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cb0bf0);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cb0ca8);
    bRam0000000004f9bbb8 = 1;
  }
  puVar6 = PTR_DAT_04cb0ca8;
  puVar5 = PTR_DAT_04cae9a8;
  puVar4 = PTR_DAT_04cae8b0;
  puVar3 = PTR_DAT_04cab1e8;
  puVar2 = PTR_DAT_04caa1a8;
  puVar1 = PTR_DAT_04ca9ae8;
  iStack_44 = 0;
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (*(float *)(param_4 + 0x50) < 0.5) goto LAB_022e2428;
    goto LAB_022e2440;
  }
  if (*(int *)(param_4 + 0x10) == 0) {
    lVar7 = *(long *)PTR_DAT_04cae9a8;
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = Dino_BusSand_App_UI_StreakRateHallBar__SliderComp_21e0ca0();
    *(undefined8 *)(param_4 + 0x30) = uVar8;
    thunk_FUN_02134474((undefined8 *)(param_4 + 0x30),uVar8);
    iVar13 = 0;
    *(undefined4 *)(param_4 + 0x38) = 0;
    while ((*(long *)(param_4 + 0x20) != 0 && (iVar13 < *(int *)(*(long *)(param_4 + 0x20) + 0x18)))
          ) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = Dino_BusSand_App_UI_StreakRateHallBar__get_Alive_21df1a0();
      if ((uVar10 & 1) == 0) break;
      if (*(long *)(param_4 + 0x20) == 0) {
LAB_022e27cc:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      fVar14 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (*(long *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x38),
                                 *(undefined8 *)puVar2);
      fVar18 = INFINITY;
      iVar13 = -0x80000000;
      if (fVar14 != INFINITY) {
        iVar13 = (int)fVar14;
      }
      *(int *)(param_4 + 0x3c) = iVar13;
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_022e27cc;
      System_Collections_Generic_List_Vector3___get_Item_3af99e4
                (*(long *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x38),*(undefined8 *)puVar2);
      iVar13 = (int)fVar18;
      if (iVar13 < 2) {
        iVar13 = 1;
      }
      if (fVar18 == INFINITY) {
        iVar13 = 1;
      }
      *(int *)(param_4 + 0x40) = iVar13;
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_022e27cc;
      System_Collections_Generic_List_Vector3___get_Item_3af99e4
                (*(long *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x38),*(undefined8 *)puVar2);
      lVar7 = *(long *)puVar3;
      iVar13 = -0x80000000;
      if (param_3 != INFINITY) {
        iVar13 = (int)param_3;
      }
      *(int *)(param_4 + 0x44) = iVar13;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)puVar6,0);
      uVar8 = *(undefined8 *)(param_4 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
      uVar15 = 0;
      if ((uVar10 & 1) != 0) {
        plVar9 = *(long **)(param_4 + 0x30);
        if (plVar9 == (long *)0x0) goto LAB_022e27cc;
        uVar15 = (**(code **)(*plVar9 + 0x418))(plVar9,*(undefined8 *)(*plVar9 + 0x420));
      }
      *(undefined4 *)(param_4 + 0x50) = 0;
      param_3 = (float)*(int *)(param_4 + 0x40);
      *(undefined4 *)(param_4 + 0x48) = uVar15;
      *(float *)(param_4 + 0x4c) = (float)*(int *)(param_4 + 0x3c) / param_3;
LAB_022e2428:
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = Dino_BusSand_App_UI_StreakRateHallBar__get_Alive_21df1a0();
      if ((uVar10 & 1) != 0) {
        fVar18 = *(float *)(param_4 + 0x50);
        fVar14 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
        fVar18 = fVar18 + fVar14;
        lVar7 = *(long *)puVar1;
        uVar8 = *(undefined8 *)(param_4 + 0x30);
        fVar17 = fVar18 + fVar18;
        *(float *)(param_4 + 0x50) = fVar18;
        fVar14 = 1.0;
        if (fVar17 <= 1.0) {
          fVar14 = fVar17;
        }
        fVar18 = 0.0;
        if (0.0 <= fVar17) {
          fVar18 = fVar14;
        }
        fVar19 = *(float *)(param_4 + 0x48);
        fVar17 = *(float *)(param_4 + 0x4c);
        fVar14 = 0.0;
        if (0.0 <= fVar18) {
          fVar14 = fVar18;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar19 = fVar19 + (fVar17 - fVar19) * fVar14;
        uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
        if ((uVar10 & 1) != 0) {
          plVar9 = *(long **)(param_4 + 0x30);
          if (plVar9 == (long *)0x0) goto LAB_022e27cc;
          (**(code **)(*plVar9 + 0x428))(fVar19,plVar9,*(undefined8 *)(*plVar9 + 0x430));
        }
        lVar7 = *(long *)puVar5;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar5;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
        if (lVar7 == 0) goto LAB_022e27cc;
        uVar8 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)PTR_DAT_04cb0bf0,0);
        iVar13 = *(int *)(param_4 + 0x40);
                    /* try { // try from 022e2690 to 023e2693 has its CatchHandler @ 022e278c */
                    /* try { // try from 022e2694 to 023e26f7 has its CatchHandler @ 022e2478 */
        if (cRam0000000004f9b891 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa200);
          cRam0000000004f9b891 = '\x01';
        }
        fVar19 = fVar19 * (float)iVar13;
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        dVar20 = (double)fVar19;
        dVar16 = (double)FUN_049b52f0(dVar20,&dStack_78);
        if (0.0 <= fVar19) {
                    /* try { // try from 022e26f8 to 023e26fb has its CatchHandler @ 022e2778 */
          if (dVar16 != 0.5) {
                    /* try { // try from 022e272c to 023e2733 has its CatchHandler @ 022e278c */
            dStack_78 = (double)(long)(dVar20 + 0.5);
            goto LAB_022e2734;
          }
          dVar16 = 1.0;
        }
        else {
          if (dVar16 != -0.5) {
            dStack_78 = (double)(long)(dVar20 + -0.5);
            goto LAB_022e2734;
          }
          dVar16 = -1.0;
        }
        if (((long)dStack_78 & 1U) != 0) {
          dStack_78 = dStack_78 + dVar16;
        }
LAB_022e2734:
                    /* try { // try from 022e2748 to 023e274b has its CatchHandler @ 022e2790 */
                    /* try { // try from 022e274c to 023e2757 has its CatchHandler @ 022e2760 */
        iStack_44 = -0x80000000;
        if (dStack_78 != INFINITY) {
          iStack_44 = (int)dStack_78;
        }
                    /* try { // try from 022e2758 to 023e275b has its CatchHandler @ 022e275c */
        uVar11 = System_Int32__ToString_482d750(&iStack_44,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e2758 with catch @ 022e275c
                       try { // try from 022e275c to 023e27ab has its CatchHandler @ 022e2478 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e274c with catch @ 022e2760
                        */
        uVar12 = System_Int32__ToString_482d750((int *)(param_4 + 0x40),0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e259c with catch @ 022e2774
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e26f8 with catch @ 022e2778
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e24c4 with catch @ 022e277c
                        */
        uVar11 = System_String__Concat_46d2b84(uVar11,*(undefined8 *)PTR_DAT_04cabd10,uVar12,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e2540 with catch @ 022e278c
                       catch(type#1 @ 00000000) { ... } // from try @ 022e2690 with catch @ 022e278c
                       catch(type#1 @ 00000000) { ... } // from try @ 022e272c with catch @ 022e278c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e24fc with catch @ 022e2790
                       catch(type#1 @ 00000000) { ... } // from try @ 022e2748 with catch @ 022e2790
                        */
        Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar8,uVar11);
        *(undefined8 *)(param_4 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
        *(undefined4 *)(param_4 + 0x10) = 1;
        return 1;
      }
LAB_022e2440:
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = Dino_BusSand_App_UI_StreakRateHallBar__get_Alive_21df1a0();
      if ((uVar10 & 1) == 0) break;
      if (*(int *)(param_4 + 0x40) <= *(int *)(param_4 + 0x3c)) {
        uVar15 = *(undefined4 *)(param_4 + 0x44);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e2694 with catch @ 022e2478
                       catch(type#1 @ 00000000) { ... } // from try @ 022e275c with catch @ 022e2478
                       catch(type#1 @ 00000000) { ... } // from try @ 022e27b0 with catch @ 022e2478
                        */
        Dino_BusSand_App_UI_StreakRateHallBar__FakeAddReward_21e1b10(uVar15);
      }
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_022e27cc;
      if (*(int *)(param_4 + 0x38) < *(int *)(*(long *)(param_4 + 0x20) + 0x18) + -1) {
        uVar8 = *(undefined8 *)(param_4 + 0x30);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
        if ((uVar10 & 1) != 0) {
                    /* try { // try from 022e24c4 to 023e24cf has its CatchHandler @ 022e277c */
          plVar9 = *(long **)(param_4 + 0x30);
          if (plVar9 == (long *)0x0) goto LAB_022e27cc;
          (**(code **)(*plVar9 + 0x428))(0,plVar9,*(undefined8 *)(*plVar9 + 0x430));
        }
        if (*(long *)(param_4 + 0x20) == 0) goto LAB_022e27cc;
        System_Collections_Generic_List_Vector3___get_Item_3af99e4
                  (*(long *)(param_4 + 0x20),*(int *)(param_4 + 0x38) + 1,*(undefined8 *)puVar2);
                    /* try { // try from 022e24fc to 023e2513 has its CatchHandler @ 022e2790 */
        iVar13 = -0x80000000;
        if (param_3 != INFINITY) {
          iVar13 = (int)param_3;
        }
        lVar7 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(iVar13,0);
        if (lVar7 == 0) goto LAB_022e27cc;
        if (0 < *(int *)(lVar7 + 0x18)) {
          System_Collections_Generic_List_ActivityRewardEntry___get_Item_39e19e0
                    (&dStack_78,lVar7,0,*(undefined8 *)puVar4);
                    /* try { // try from 022e2540 to 023e256f has its CatchHandler @ 022e278c */
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uStack_88 = uStack_70;
          dStack_90 = dStack_78;
          uStack_80 = uStack_68;
          Dino_BusSand_App_UI_StreakRateHallBar__RefreshTarget_21e0b30(&dStack_90);
        }
      }
      iStack_44 = *(int *)(param_4 + 0x38);
      iVar13 = iStack_44 + 1;
      *(int *)(param_4 + 0x38) = iVar13;
    }
                    /* try { // try from 022e259c to 023e25af has its CatchHandler @ 022e2774 */
    lVar7 = *(long *)(param_4 + 0x28);
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
    }
  }
                    /* try { // try from 022e27ac to 023e27af has its CatchHandler @ 022e27b8 */
                    /* try { // try from 022e27b0 to 023e27bb has its CatchHandler @ 022e2478 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e27ac with catch @ 022e27b8
                        */
                    /* try { // try from 022e27c4 to 023e289f has its CatchHandler @ 022e27c4
                       catch() { ... } // from try @ 022e27c4 with catch @ 022e27c4
                       catch() { ... } // from try @ 022e3860 with catch @ 022e27c4
                       catch() { ... } // from try @ 022e3b6c with catch @ 022e27c4 */
  return 0;
}

