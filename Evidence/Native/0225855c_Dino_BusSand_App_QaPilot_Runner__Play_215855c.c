/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Play
void Dino_BusSand_App_QaPilot_Runner__Play (Dino_BusSand_App_QaPilot_Runner_o* __this, float now, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Play
   void Dino_BusSand_App_QaPilot_Runner__Play (Dino_BusSand_App_QaPilot_Runner_o* __this, float now,
   const MethodInfo* method); */

void Dino_BusSand_App_QaPilot_Runner__Play_215855c(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_04caba88;
  if ((bRam0000000004f9b7f3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caba98);
    FUN_02132f7c(PTR_DAT_04caba88);
    FUN_02132f7c(PTR_DAT_04cabaa0);
    bRam0000000004f9b7f3 = 1;
  }
  uVar4 = System_String__op_Equality_46d1108
                    (*(undefined8 *)(param_2 + 0x30),*(undefined8 *)puVar1,0);
  puVar1 = PTR_DAT_04caba50;
  if (((uVar4 & 1) == 0) && (*(float *)(param_2 + 0x48) <= param_1)) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_04ca9ae8;
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02258680 with catch @ 02258670
                       catch(type#1 @ 00000000) { ... } // from try @ 022586c8 with catch @ 02258670
                        */
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    lVar6 = 0;
                    /* try { // try from 0225867c to 0235867f has its CatchHandler @ 022586f8 */
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 02258680 to 023586b7 has its CatchHandler @ 02258670 */
      if (lVar5 == 0) goto LAB_022588ac;
      lVar6 = *(long *)(lVar5 + 0x20);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
    if ((uVar4 & 1) == 0) {
      if (lVar5 == 0) {
LAB_022588ac:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(char *)(lVar5 + 0x38) != '\0') {
                    /* try { // try from 022586b8 to 023586c7 has its CatchHandler @ 022586fc */
        if (lVar6 == 0) goto LAB_022588ac;
        uVar7 = *(undefined8 *)(lVar6 + 0x38);
                    /* try { // try from 022586c8 to 023586ff has its CatchHandler @ 02258670 */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
        if (((uVar4 & 1) == 0) &&
           (lVar5 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar6,0),
           puVar2 = PTR_DAT_04caba98, lVar5 != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225867c with catch @ 022586f8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022586b8 with catch @ 022586fc
                        */
                    /* try { // try from 02258700 to 0235873f has its CatchHandler @ 02258700
                       catch(type#1 @ 00000000) { ... } // from try @ 02258700 with catch @ 02258700
                       catch(type#1 @ 00000000) { ... } // from try @ 02258750 with catch @ 02258700
                       catch(type#1 @ 00000000) { ... } // from try @ 0225878c with catch @ 02258700
                        */
          if (*(int *)(*(long *)PTR_DAT_04caba98 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar5 = Dino_BusSand_App_QaPilot_Runner__Guide_215bce8();
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
          if ((uVar4 & 1) == 0) {
                    /* try { // try from 0225877c to 0235878b has its CatchHandler @ 022587e4 */
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar7 = Dino_BusSand_App_QaPilot_Runner__TopPopup_215bf38();
                    /* try { // try from 0225878c to 023587eb has its CatchHandler @ 02258700 */
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
            if ((uVar4 & 1) != 0) {
              return;
            }
            if (*(int *)(lVar6 + 0x20) != 2) {
              return;
            }
            uVar4 = Dino_BusSand_App_Gameplay_GameplayController__get_InputBlocked_229bf48(lVar6,0);
            if ((uVar4 & 1) != 0) {
              return;
            }
            lVar5 = *(long *)(lVar6 + 0x38);
            if (lVar5 == 0) goto LAB_022588ac;
            if (*(char *)(lVar5 + 0x40) != '\0') {
              return;
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225877c with catch @ 022587e4
                        */
            uVar4 = Dino_BusSand_View_GameView__get_IntroPlaying_239a200(lVar5,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02258740 with catch @ 022587e8
                        */
            if ((uVar4 & 1) != 0) {
              return;
            }
            uVar4 = System_String__op_Equality_46d1108
                              (*(undefined8 *)(param_2 + 0x30),*(undefined8 *)PTR_DAT_04cabaa0,0);
            uVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar6,0);
            if ((uVar4 & 1) == 0) {
              iVar3 = Dino_BusSand_Core_SimBot__BestTap_241b8c0
                                (*(undefined4 *)(param_2 + 0x3c),uVar7,0);
            }
            else {
              iVar3 = Dino_BusSand_App_QaPilot__WorstTap_21574a8();
            }
            if (iVar3 < 0) {
              fVar8 = 0.25;
              if (*(float *)(param_2 + 0x38) <= 0.25) {
                fVar8 = *(float *)(param_2 + 0x38);
              }
              param_1 = fVar8 + param_1;
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Meta_JourneyTracking__NextTapIsAuto_221bf34(0);
              if (*(long *)(lVar6 + 0x38) == 0) goto LAB_022588ac;
              Dino_BusSand_View_GameView__TapVehicle_23a151c(*(long *)(lVar6 + 0x38),iVar3,0);
              param_1 = *(float *)(param_2 + 0x38) + param_1;
              *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
            }
          }
          else {
            if (lVar5 == 0) goto LAB_022588ac;
                    /* try { // try from 02258740 to 0235874f has its CatchHandler @ 022587e8 */
            uVar4 = Dino_BusSand_App_UI_GuidePanel__get_WaitingForTap_22c7d28(lVar5,0);
            if ((uVar4 & 1) == 0) {
              return;
            }
                    /* try { // try from 02258750 to 0235877b has its CatchHandler @ 02258700 */
            Dino_BusSand_App_UI_GuidePanel__Tap_22ccfe8
                      (*(undefined4 *)(lVar5 + 0x44),*(undefined4 *)(lVar5 + 0x48),lVar5,0);
            param_1 = param_1 + _UNK_00e200f8;
          }
          *(float *)(param_2 + 0x48) = param_1;
        }
      }
    }
  }
  return;
}

