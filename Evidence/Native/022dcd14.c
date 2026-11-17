/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<>c$$<Install>b__2_0
void Dino_BusSand_App_UI_PassportUi___c___Install_b__2_0 (Dino_BusSand_App_UI_PassportUi___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<>c$$<Install>b__2_0
   void Dino_BusSand_App_UI_PassportUi___c___Install_b__2_0 (Dino_BusSand_App_UI_PassportUi___c_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportUi___c___Install_b__2_0_21dcd14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04cac440;
  if ((bRam0000000004f9bb90 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    bRam0000000004f9bb90 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022dcd58 to 023dcd67 has its CatchHandler @ 022dcea0 */
  uVar3 = Dino_BusSand_App_Meta_Economy__ReviveBuses_2204aa8(0);
  puVar2 = PTR_DAT_04caba50;
  if ((bRam0000000004f9bb84 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0350);
    FUN_02132f7c(PTR_DAT_04cb0a18);
    bRam0000000004f9bb84 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
  if ((uVar5 & 1) == 0) {
    if (lVar4 == 0) {
LAB_022db758:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar4 + 0x38) != '\0') {
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(lVar4 + 0x20) == 0) goto LAB_022db758;
        if (*(int *)(*(long *)(lVar4 + 0x20) + 0x20) == 3) {
          plVar6 = (long *)(*(long *)(*(long *)PTR_DAT_04cb0350 + 0xb8) + 8);
          lVar8 = *plVar6;
          *plVar6 = 0;
          thunk_FUN_02134474(plVar6,0);
          if (cRam0000000004f9b94d == '\0') {
            FUN_02132f7c(PTR_DAT_04cad1b0);
            cRam0000000004f9b94d = '\x01';
          }
          puVar2 = PTR_DAT_04cad1b0;
          uVar7 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
          if ((uVar5 & 1) != 0) {
            if (cRam0000000004f9b94d == '\0') {
              FUN_02132f7c(PTR_DAT_04cad1b0);
              cRam0000000004f9b94d = '\x01';
            }
            if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_022db758;
            Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                      (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_04cb0a18);
          }
          if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022db720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar8 + 0x18))
                      (*(undefined8 *)(lVar8 + 0x40),uVar3,*(undefined8 *)(lVar8 + 0x28));
            return;
          }
          if ((bRam0000000004f9b871 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cac5c0,uVar3,0);
            FUN_02132f7c(PTR_DAT_04cab1e8);
            FUN_02132f7c(PTR_DAT_04cac440);
            FUN_02132f7c(PTR_DAT_04ca9c20);
            FUN_02132f7c(PTR_DAT_04cac678);
            FUN_02132f7c(PTR_DAT_04cac768);
            FUN_02132f7c(PTR_DAT_04cac770);
            FUN_02132f7c(PTR_DAT_04cac778);
            FUN_02132f7c(PTR_DAT_04cac780);
            FUN_02132f7c(PTR_DAT_04cac798);
            bRam0000000004f9b871 = 1;
          }
          if (*(long *)(lVar4 + 0x28) != 0) {
            Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                      (*(long *)(lVar4 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
            if (*(long *)(lVar4 + 0x20) != 0) {
              uVar5 = Dino_BusSand_App_Gameplay_GameplayController__TryCompleteRevive_229f824
                                (*(long *)(lVar4 + 0x20),uVar3,0);
              if ((uVar5 & 1) == 0) {
                return;
              }
              if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Meta_Economy__OnReviveSuccess_2204db4(0);
              uVar7 = *(undefined8 *)PTR_DAT_04ca9c20;
              *(int *)(lVar4 + 0x58) = *(int *)(lVar4 + 0x58) + 1;
              *(undefined4 *)(lVar4 + 0x5c) = 0;
              plVar6 = (long *)FUN_02133068(uVar7,4);
              puVar2 = PTR_DAT_04cac768;
              if (plVar6 != (long *)0x0) {
                if ((*(long *)PTR_DAT_04cac768 != 0) &&
                   (lVar4 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac768,
                                               *(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
LAB_02268df8:
                  uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                  FUN_021330e8(uVar7,0);
                }
                if ((int)plVar6[3] != 0) {
                  plVar6[4] = *(long *)puVar2;
                  thunk_FUN_02134474();
                  puVar2 = PTR_DAT_04cac798;
                  if ((*(long *)PTR_DAT_04cac798 != 0) &&
                     (lVar4 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac798,
                                                 *(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
                  goto LAB_02268df8;
                  if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
                    plVar6[5] = *(long *)puVar2;
                    thunk_FUN_02134474();
                    puVar2 = PTR_DAT_04cac780;
                    if ((*(long *)PTR_DAT_04cac780 != 0) &&
                       (lVar4 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac780,
                                                   *(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
                    goto LAB_02268df8;
                    if (2 < *(uint *)(plVar6 + 3)) {
                      plVar6[6] = *(long *)puVar2;
                      thunk_FUN_02134474();
                      lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),
                                           &stack0xffffffffffffffdc);
                      if ((lVar4 != 0) &&
                         (lVar8 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar8 == 0)) goto LAB_02268df8;
                      if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
                        plVar6[7] = lVar4;
                        thunk_FUN_02134474(plVar6 + 7,lVar4);
                        if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        uVar7 = Dino_BusSand_App_Analytics__L_216fff0(plVar6,0);
                        Dino_BusSand_App_Analytics__Log_216d0c8
                                  (*(undefined8 *)PTR_DAT_04cac778,uVar7,0);
                        if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        Dino_BusSand_App_Audio__PlayMusic_214db34
                                  (_UNK_00e20094,*(undefined8 *)PTR_DAT_04cac770);
                        return;
                      }
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
  return;
}

