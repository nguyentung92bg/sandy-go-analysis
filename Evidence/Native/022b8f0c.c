/* IL2CPP: Dino.BusSand.App.UI.PassportView$$Rows
System_Collections_Generic_List_EventRow__o* Dino_BusSand_App_UI_PassportView__Rows (Dino_BusSand_App_UI_PassportView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportView$$Rows
   System_Collections_Generic_List_EventRow__o* Dino_BusSand_App_UI_PassportView__Rows
   (Dino_BusSand_App_UI_PassportView_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_PassportView__Rows_21b8f0c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uStack_74;
  undefined4 uStack_68;
  uint uStack_64;
  
  puVar3 = PTR_DAT_04caf670;
  puVar2 = PTR_DAT_04caf668;
  if ((bRam0000000004f9bab1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf678);
    FUN_02132f7c(PTR_DAT_04caf680);
    FUN_02132f7c(PTR_DAT_04caf688);
    FUN_02132f7c(PTR_DAT_04caf690);
    FUN_02132f7c(PTR_DAT_04caf670);
    FUN_02132f7c(PTR_DAT_04caf540);
    FUN_02132f7c(PTR_DAT_04caf668);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04caf698);
    FUN_02132f7c(PTR_DAT_04caf6a0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf6a8);
    FUN_02132f7c(PTR_DAT_04caf6b0);
    FUN_02132f7c(PTR_DAT_04caf6b8);
    FUN_02132f7c(PTR_DAT_04caf6c0);
    bRam0000000004f9bab1 = 1;
  }
                    /* try { // try from 022b9004 to 023b90fb has its CatchHandler @ 022b9004
                       catch(type#1 @ 00000000) { ... } // from try @ 022b9004 with catch @ 022b9004
                       catch(type#1 @ 00000000) { ... } // from try @ 022b9100 with catch @ 022b9004
                       catch(type#1 @ 00000000) { ... } // from try @ 022b9128 with catch @ 022b9004
                        */
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar7,*(undefined8 *)puVar3);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar5 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0
                      (*(long *)(param_1 + 0x10),0);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar6 = Dino_BusSand_App_Meta_PassportFeature__get_CurrentStageIndex_22468d0
                        (*(long *)(param_1 + 0x10),0);
      puVar3 = PTR_DAT_04ca9c20;
      puVar2 = PTR_DAT_04ca9ac8;
      uVar16 = uVar6 - 2;
      uVar17 = uVar5 - 6 & ((int)(uVar5 - 6) >> 0x1f ^ 0xffffffffU);
      uVar1 = uVar16;
      if ((int)uVar17 <= (int)uVar16) {
        uVar1 = uVar17;
      }
      uVar17 = 0;
      if (-1 < (int)uVar16) {
        uVar17 = uVar1;
      }
      if ((int)uVar17 < (int)uVar5) {
        if (lVar7 == 0) goto LAB_022b9410;
        do {
          if (5 < *(int *)(lVar7 + 0x18)) {
            return lVar7;
          }
          lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caf6a0);
          System_Object___ctor_4870e5c(lVar8,0);
          if (lVar8 == 0) goto LAB_022b9410;
          *(long *)(lVar8 + 0x18) = param_1;
          thunk_FUN_02134474((long *)(lVar8 + 0x18),param_1);
          lVar9 = *(long *)(param_1 + 0x10);
          *(uint *)(lVar8 + 0x10) = uVar17;
          if (lVar9 == 0) goto LAB_022b9410;
          Dino_BusSand_App_Meta_PassportFeature__FreeRewards_2245140(lVar9,uVar17,0);
          lVar9 = Dino_BusSand_App_UI_Rw__Of_21b8a40();
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_022b9410;
          uVar10 = Dino_BusSand_App_Meta_PassportFeature__get_IsPurchased_22463a8
                             (*(long *)(param_1 + 0x10),0);
          if ((uVar10 & 1) != 0) {
                    /* try { // try from 022b90fc to 023b90ff has its CatchHandler @ 022b9128 */
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_022b9410;
                    /* try { // try from 022b9100 to 023b9123 has its CatchHandler @ 022b9004 */
            Dino_BusSand_App_Meta_PassportFeature__PassRewards_2245198
                      (*(long *)(param_1 + 0x10),uVar17,0);
            uVar11 = Dino_BusSand_App_UI_Rw__Of_21b8a40();
            if (lVar9 == 0) goto LAB_022b9410;
                    /* try { // try from 022b9124 to 023b9127 has its CatchHandler @ 022b9128 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022b90fc with catch @ 022b9128
                       catch(type#1 @ 00000000) { ... } // from try @ 022b9124 with catch @ 022b9128
                       try { // try from 022b9128 to 023b9147 has its CatchHandler @ 022b9004 */
            System_Collections_Generic_List_KeyValuePair_int__long____AddRange_3965a54
                      (lVar9,uVar11,*(undefined8 *)PTR_DAT_04caf688);
          }
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_022b9410;
          uVar10 = Dino_BusSand_App_Meta_PassportFeature__IsFreeClaimed_2246fe4
                             (*(long *)(param_1 + 0x10),uVar17,0);
          if ((uVar10 & 1) == 0) {
            uStack_74 = 0;
          }
          else {
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_022b9410;
            uVar10 = Dino_BusSand_App_Meta_PassportFeature__get_IsPurchased_22463a8
                               (*(long *)(param_1 + 0x10),0);
            if ((uVar10 & 1) == 0) {
              uStack_74 = 1;
            }
            else {
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_022b9410;
              uStack_74 = Dino_BusSand_App_Meta_PassportFeature__IsPassClaimed_2247094
                                    (*(long *)(param_1 + 0x10),uVar17,0);
              uStack_74 = uStack_74 & 1;
            }
          }
          lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caf678);
          Dino_BusSand_App_UI_EventRow___ctor_21b5adc();
          plVar13 = (long *)FUN_02133068(*(undefined8 *)puVar3,1);
          uVar1 = uVar17 + 1;
          uStack_64 = uVar1;
          lVar14 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_64);
          if (plVar13 == (long *)0x0) goto LAB_022b9410;
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0)) {
LAB_022b9418:
            uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar11,0);
          }
          if ((int)plVar13[3] == 0) {
LAB_022b9414:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar13[4] = lVar14;
          thunk_FUN_02134474(plVar13 + 4,lVar14);
          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar11 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                             (*(undefined8 *)PTR_DAT_04caf6b8,*(undefined8 *)PTR_DAT_04caf6b0,
                              plVar13,0);
          if (lVar12 == 0) goto LAB_022b9410;
          *(undefined8 *)(lVar12 + 0x10) = uVar11;
          thunk_FUN_02134474();
          plVar13 = (long *)FUN_02133068(*(undefined8 *)puVar3,1);
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_022b9410;
          uStack_68 = Dino_BusSand_App_Meta_PassportFeature__StageNeedKeys_2244a40
                                (*(long *)(param_1 + 0x10),uVar17,0);
          lVar14 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_68);
          if (plVar13 == (long *)0x0) goto LAB_022b9410;
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
          goto LAB_022b9418;
          if ((int)plVar13[3] == 0) goto LAB_022b9414;
          plVar13[4] = lVar14;
          thunk_FUN_02134474(plVar13 + 4,lVar14);
          uVar11 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                             (*(undefined8 *)PTR_DAT_04caf6c0,*(undefined8 *)PTR_DAT_04caf6a8,
                              plVar13,0);
          *(undefined8 *)(lVar12 + 0x18) = uVar11;
          thunk_FUN_02134474();
          *(long *)(lVar12 + 0x20) = lVar9;
          thunk_FUN_02134474((long *)(lVar12 + 0x20),lVar9);
          uVar16 = (uint)((int)uVar17 < (int)uVar6);
          if (uStack_74 != 0) {
            uVar16 = 2;
          }
          *(uint *)(lVar12 + 0x28) = uVar16;
          puVar4 = PTR_DAT_04caf680;
          *(bool *)(lVar12 + 0x2c) = uVar6 == uVar17;
          uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
          System_Func_object____ctor_379de3c(uVar11,lVar8,*(undefined8 *)PTR_DAT_04caf698,0);
          *(undefined8 *)(lVar12 + 0x30) = uVar11;
          thunk_FUN_02134474((undefined8 *)(lVar12 + 0x30),uVar11);
          lVar8 = *(long *)(lVar7 + 0x10);
          lVar9 = *(long *)PTR_DAT_04caf690;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_022b9410;
          uVar17 = *(uint *)(lVar7 + 0x18);
          if (uVar17 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar17 + 1;
            plVar13 = (long *)(lVar8 + (long)(int)uVar17 * 8 + 0x20);
            *plVar13 = lVar12;
            thunk_FUN_02134474(plVar13,lVar12);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar7,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          uVar17 = uVar1;
        } while (uVar5 != uVar1);
      }
      return lVar7;
    }
  }
LAB_022b9410:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

