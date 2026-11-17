/* IL2CPP: Dino.BusSand.App.GameApp$$<ReviveWithOffer>b__108_0
void Dino_BusSand_App_GameApp___ReviveWithOffer_b__108_0 (Dino_BusSand_App_GameApp_o* __this, UnityEngine_Vector3_o __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.GameApp$$<ReviveWithOffer>b__108_0
   void Dino_BusSand_App_GameApp___ReviveWithOffer_b__108_0 (Dino_BusSand_App_GameApp_o* __this,
   UnityEngine_Vector3_o __, const MethodInfo* method); */

void Dino_BusSand_App_GameApp___ReviveWithOffer_b__108_0_216a2f8(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uStack_34;
  
  puVar3 = PTR_DAT_04cac788;
  if ((bRam0000000004f9b885 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac788);
    bRam0000000004f9b885 = 1;
  }
  puVar2 = PTR_DAT_04cac440;
  lVar10 = *(long *)puVar3;
  if ((bRam0000000004f9b86f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cac678);
    FUN_02132f7c(PTR_DAT_04cac768);
    FUN_02132f7c(PTR_DAT_04cac770);
    FUN_02132f7c(PTR_DAT_04cac778);
    FUN_02132f7c(PTR_DAT_04cac780);
    FUN_02132f7c(PTR_DAT_04cac788);
    FUN_02132f7c(PTR_DAT_04cac790);
    FUN_02132f7c(PTR_DAT_04cac798);
    bRam0000000004f9b86f = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Meta_Economy__ReviveBuses_2204aa8(0);
  puVar3 = PTR_DAT_04cac788;
  if (*(long *)(param_1 + 0x28) != 0) {
    Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
              (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
    uVar5 = System_String__op_Equality_46d1108(lVar10,*(undefined8 *)puVar3,0);
    if ((uVar5 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x58);
      if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_GameTracking__ContinueOffer_22193d0(uVar1,*(undefined8 *)puVar3,0,0,0);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar5 = Dino_BusSand_App_Gameplay_GameplayController__TryCompleteRevive_229f824
                        (*(long *)(param_1 + 0x20),uVar4,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Economy__OnReviveSuccess_2204db4(0);
      uVar6 = *(undefined8 *)PTR_DAT_04ca9c20;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      plVar7 = (long *)FUN_02133068(uVar6,4);
      puVar2 = PTR_DAT_04cac768;
      if (plVar7 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04cac768 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac768,*(undefined8 *)(*plVar7 + 0x40)),
           lVar8 == 0)) {
LAB_02268524:
          uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar6,0);
        }
        if ((int)plVar7[3] != 0) {
          plVar7[4] = *(long *)puVar2;
          thunk_FUN_02134474();
          uVar5 = System_String__op_Equality_46d1108(lVar10,*(undefined8 *)PTR_DAT_04cac790,0);
          uVar6 = *(undefined8 *)PTR_DAT_04cac778;
          if ((uVar5 & 1) == 0) {
            uVar5 = System_String__op_Equality_46d1108(lVar10,*(undefined8 *)puVar3,0);
            if ((uVar5 & 1) == 0) {
              lVar10 = *(long *)PTR_DAT_04cac798;
            }
          }
          if ((lVar10 != 0) &&
             (lVar8 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_02268524;
          if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
            plVar7[5] = lVar10;
            thunk_FUN_02134474(plVar7 + 5,lVar10);
            puVar3 = PTR_DAT_04cac780;
            if ((*(long *)PTR_DAT_04cac780 != 0) &&
               (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac780,
                                            *(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
            goto LAB_02268524;
            if (2 < *(uint *)(plVar7 + 3)) {
              plVar7[6] = *(long *)puVar3;
              thunk_FUN_02134474();
              uStack_34 = uVar4;
              lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
              if ((lVar10 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02268524;
              if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
                plVar7[7] = lVar10;
                thunk_FUN_02134474(plVar7 + 7,lVar10);
                if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar9 = Dino_BusSand_App_Analytics__L_216fff0(plVar7,0);
                Dino_BusSand_App_Analytics__Log_216d0c8(uVar6,uVar9,0);
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

