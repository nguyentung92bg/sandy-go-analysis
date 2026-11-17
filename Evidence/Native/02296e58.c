/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<GuideRoutine>d__70$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideRoutine_d__70__MoveNext (Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideRoutine_d__70_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<GuideRoutine>d__70$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideRoutine_d__70__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideRoutine_d__70_o* __this, const MethodInfo*
   method); */

undefined4
Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideRoutine_d__70__MoveNext_2196e58(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9b9d3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cad708);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cae2d0);
    FUN_02132f7c(PTR_DAT_04cae340);
    FUN_02132f7c(PTR_DAT_04cae2d8);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9b9d3 = 1;
  }
  puVar2 = PTR_DAT_04cab1e8;
                    /* try { // try from 02296f04 to 02396f0f has its CatchHandler @ 022970a4 */
  iVar1 = *(int *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x20);
  if (3 < iVar1) {
    if (5 < iVar1) {
      if (iVar1 != 6) {
        if (iVar1 != 7) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar8 == 0) goto LAB_022974d4;
        goto LAB_02297310;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cad948,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar9 = Dino_BusSand_App_UI_BattleRoyalePanel__MoveBottomTip_218ddd4
                          (*(long *)(param_1 + 0x28),0);
        *(undefined8 *)(param_1 + 0x18) = uVar9;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
        uVar6 = 7;
        goto LAB_022973d0;
      }
      goto LAB_022974d4;
    }
                    /* try { // try from 02296f48 to 02397047 has its CatchHandler @ 02296cd4 */
    if (iVar1 == 4) {
                    /* try { // try from 022970d4 to 023970e7 has its CatchHandler @ 022970d4
                       catch(type#1 @ 00000000) { ... } // from try @ 022970d4 with catch @ 022970d4
                       catch(type#1 @ 00000000) { ... } // from try @ 02297118 with catch @ 022970d4
                        */
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar8 == 0) goto LAB_022974d4;
      lVar4 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__get_Overlay_2192fd0();
                    /* try { // try from 022970e8 to 023970f3 has its CatchHandler @ 0229710c */
      plVar10 = (long *)(param_1 + 0x28);
      *plVar10 = lVar4;
      thunk_FUN_02134474(plVar10,lVar4);
                    /* try { // try from 022970f4 to 023970fb has its CatchHandler @ 02297108 */
      lVar4 = *plVar10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022970f4 with catch @ 02297108
                        */
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022970e8 with catch @ 0229710c
                        */
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02297110 to 02397117 has its CatchHandler @ 02297120 */
                    /* try { // try from 02297118 to 02397123 has its CatchHandler @ 022970d4 */
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02297110 with catch @ 02297120
                        */
      if ((uVar3 & 1) == 0) goto LAB_02297310;
                    /* try { // try from 02297124 to 02397147 has its CatchHandler @ 02297124
                       catch(type#1 @ 00000000) { ... } // from try @ 02297124 with catch @ 02297124
                       catch(type#1 @ 00000000) { ... } // from try @ 0229718c with catch @ 02297124
                        */
      if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02297148 to 02397157 has its CatchHandler @ 02297180 */
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae340,0);
      if (*plVar10 == 0) goto LAB_022974d4;
                    /* try { // try from 0229715c to 02397163 has its CatchHandler @ 0229717c */
      uVar9 = Dino_BusSand_App_UI_BattleRoyalePanel__MoveBottomTip_218ddd4(*plVar10,1);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
      uVar6 = 5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0229715c with catch @ 0229717c
                        */
      goto LAB_022974cc;
    }
    if (iVar1 != 5) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar8 == 0) goto LAB_022974d4;
    uVar9 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__WaitTap_21961fc(lVar8);
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
    uVar6 = 6;
    goto LAB_022973d0;
  }
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar8 == 0) goto LAB_022974d4;
      uVar9 = *(undefined8 *)(lVar8 + 0x48);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(lVar8 + 0x48) != 0) {
          UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(lVar8 + 0x48),0,0);
                    /* try { // try from 02297048 to 02397057 has its CatchHandler @ 0229708c */
          if (*(long *)(lVar8 + 0x48) != 0) {
                    /* try { // try from 02297058 to 023970d3 has its CatchHandler @ 02296cd4 */
            UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition_46906e0
                      (0x3f800000,*(long *)(lVar8 + 0x48),0);
            fVar11 = (float)Dino_BusSand_App_UI_BattleRoyaleScenePanel__MaxScroll_2195140(lVar8);
            puVar2 = PTR_DAT_04caca88;
            fVar12 = 0.0;
            if (0.0 < fVar11) {
              fVar11 = 50.0 / fVar11;
              fVar14 = 1.0;
              if (fVar11 <= 1.0) {
                fVar14 = fVar11;
              }
              fVar12 = 0.0;
                    /* catch() { ... } // from try @ 02297048 with catch @ 0229708c */
              if (0.0 <= fVar11) {
                fVar12 = fVar14;
              }
            }
            *(float *)(param_1 + 0x30) = fVar12;
            uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 02296f04 with catch @ 022970a4 */
            UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f000000,uVar9,0);
            *(undefined8 *)(param_1 + 0x18) = uVar9;
                    /* catch() { ... } // from try @ 02296f3c with catch @ 022970b8 */
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
        }
        goto LAB_022974d4;
      }
LAB_0229728c:
      lVar4 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__get_Overlay_2192fd0();
      plVar10 = (long *)(param_1 + 0x28);
      *plVar10 = lVar4;
      thunk_FUN_02134474(plVar10,lVar4);
      lVar4 = *plVar10;
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
      if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 02297454 with catch @ 022972d8
                       catch() { ... } // from try @ 022974fc with catch @ 022972d8 */
        if (*plVar10 == 0) goto LAB_022974d4;
        *(undefined1 *)(*plVar10 + 0x4c) = 0;
      }
      lVar4 = *(long *)(lVar8 + 0x40);
      if (lVar4 != 0) {
        if (*(char *)(lVar4 + 0x38) == '\0') {
LAB_02297310:
          Dino_BusSand_App_UI_BattleRoyaleScenePanel__FinishGuide_2196290(lVar8);
          return 0;
        }
        lVar7 = *(long *)(lVar8 + 0x80);
        *(undefined1 *)(lVar4 + 0x38) = 0;
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) < 1) {
            uVar9 = 0;
          }
          else {
                    /* try { // try from 02297308 to 02397313 has its CatchHandler @ 02297500 */
            uVar9 = *(undefined8 *)(lVar8 + 0x58);
          }
          plVar10 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
          if (*(long *)(lVar8 + 0x40) != 0) {
            uStack_34 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalPersonNum_2220ff4
                                  (*(long *)(lVar8 + 0x40),0);
            lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
            if (plVar10 != (long *)0x0) {
                    /* try { // try from 02297450 to 02397453 has its CatchHandler @ 02297500 */
                    /* try { // try from 02297454 to 02397493 has its CatchHandler @ 022972d8 */
              if ((lVar4 != 0) &&
                 (lVar7 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
                uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar9,0);
              }
              if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              plVar10[4] = lVar4;
              thunk_FUN_02134474(plVar10 + 4,lVar4);
              uVar5 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                                (*(undefined8 *)PTR_DAT_04cae2d0,plVar10,0);
                    /* try { // try from 02297494 to 023974ab has its CatchHandler @ 02297500 */
              uVar9 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideStep_2196100
                                (0xc2480000,0x44110000,0,lVar8,uVar9,uVar5,1);
              *(undefined8 *)(param_1 + 0x18) = uVar9;
              thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
              uVar6 = 3;
LAB_022974cc:
              *(undefined4 *)(param_1 + 0x10) = uVar6;
              return 1;
            }
          }
        }
      }
      goto LAB_022974d4;
    }
    if (iVar1 != 1) {
      return 0;
    }
    fVar12 = 0.0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* try { // try from 02296f3c to 02396f47 has its CatchHandler @ 022970b8 */
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar8 != 0) && (lVar4 = *(long *)(lVar8 + 0x70), lVar4 != 0)) {
        if (*(int *)(lVar4 + 0x18) < 1) {
          uVar9 = 0;
        }
        else {
          System_Collections_Generic_List_object___get_Item_3a81924
                    (lVar4,0,*(undefined8 *)PTR_DAT_04cad7c8);
          uVar9 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__GateOf_2193a88();
        }
        lVar7 = *(long *)PTR_DAT_04ca9d18;
        lVar4 = *(long *)(lVar7 + 0x38);
        if (lVar4 == 0) {
          FUN_0216b4cc(lVar7);
                    /* try { // try from 02297340 to 02397347 has its CatchHandler @ 02297508 */
          lVar4 = *(long *)(lVar7 + 0x38);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0216b470();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar4 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0216b470();
        }
        uVar5 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                          (*(undefined8 *)PTR_DAT_04cae2d8,**(undefined8 **)(lVar4 + 0xb8),0);
                    /* try { // try from 022973ac to 023973b3 has its CatchHandler @ 022974fc */
        uVar9 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideStep_2196100
                          (0,0xc37a0000,0,lVar8,uVar9,uVar5,0);
        *(undefined8 *)(param_1 + 0x18) = uVar9;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
        uVar6 = 4;
        goto LAB_022973d0;
      }
      goto LAB_022974d4;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02297148 with catch @ 02297180
                        */
                    /* try { // try from 02297184 to 0239718b has its CatchHandler @ 02297194 */
    fVar12 = *(float *)(param_1 + 0x34);
                    /* try { // try from 0229718c to 02397197 has its CatchHandler @ 02297124 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02297184 with catch @ 02297194
                        */
    if (2.5 <= fVar12) {
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x48) == 0)) goto LAB_022974d4;
      UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(lVar8 + 0x48),1,0);
      goto LAB_0229728c;
    }
  }
                    /* try { // try from 02297198 to 023971ab has its CatchHandler @ 02297198
                       catch() { ... } // from try @ 02297198 with catch @ 02297198
                       catch() { ... } // from try @ 022971bc with catch @ 02297198 */
  fVar11 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  *(float *)(param_1 + 0x34) = fVar12 + fVar11;
  if (lVar8 != 0) {
                    /* try { // try from 022971ac to 023971bb has its CatchHandler @ 022971d8 */
    lVar8 = *(long *)(lVar8 + 0x48);
    fVar14 = *(float *)(param_1 + 0x30);
                    /* try { // try from 022971bc to 023971eb has its CatchHandler @ 02297198 */
    fVar12 = (float)Dino_BusSand_App_UI_BattleRoyaleUi__InOutCubic_219d1c4
                              ((fVar12 + fVar11) / 2.5,0);
    if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 022971ac with catch @ 022971d8 */
      fVar11 = 1.0;
      if (fVar12 <= 1.0) {
        fVar11 = fVar12;
      }
      fVar13 = 0.0;
      if (0.0 <= fVar12) {
        fVar13 = fVar11;
      }
      UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition_46906e0
                ((fVar14 + -1.0) * fVar13 + 1.0,lVar8,0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      uVar6 = 2;
LAB_022973d0:
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      return 1;
    }
  }
LAB_022974d4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

