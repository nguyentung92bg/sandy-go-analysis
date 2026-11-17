/* IL2CPP: Dino.BusSand.App.GameApp$$ReviveWithOffer
void Dino_BusSand_App_GameApp__ReviveWithOffer (Dino_BusSand_App_GameApp_o* __this, int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.GameApp$$ReviveWithOffer
   void Dino_BusSand_App_GameApp__ReviveWithOffer (Dino_BusSand_App_GameApp_o* __this, int32_t
   storeItemId, const MethodInfo* method); */

void Dino_BusSand_App_GameApp__ReviveWithOffer_21686bc(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uStack_34;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b86e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b0);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cac7c0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac678);
    FUN_02132f7c(PTR_DAT_04cac7c8);
    FUN_02132f7c(PTR_DAT_04cac7d0);
    FUN_02132f7c(PTR_DAT_04cac7d8);
    FUN_02132f7c(PTR_DAT_04cac788);
    bRam0000000004f9b86e = 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x20);
                    /* try { // try from 02268764 to 02368767 has its CatchHandler @ 02268770 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02268764 with catch @ 02268770
                        */
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar9 & 1) == 0) {
LAB_022687b4:
    bVar2 = true;
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_022688dc;
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x20) != 3) goto LAB_022687b4;
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_022688dc;
    Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
              (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
    bVar2 = false;
  }
  if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = Dino_BusSand_App_UI_CommerceUi__StoreGet_22abc70(param_2,0);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar9 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac7c8);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_022688dc;
      lVar10 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                         (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac7d8,4,uVar12,
                          *(undefined8 *)PTR_DAT_04cac7d0);
    }
    else {
      lVar10 = 0;
    }
    if (bVar2) {
      return;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
    puVar3 = PTR_DAT_04cac440;
    if ((uVar9 & 1) == 0) {
      lVar10 = *(long *)PTR_DAT_04cac788;
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
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_Meta_Economy__ReviveBuses_2204aa8(0);
      puVar4 = PTR_DAT_04cac788;
      if (*(long *)(param_1 + 0x28) != 0) {
        Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                  (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
        uVar9 = System_String__op_Equality_46d1108(lVar10,*(undefined8 *)puVar4,0);
        if ((uVar9 & 1) != 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x58);
          if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_GameTracking__ContinueOffer_22193d0
                    (uVar1,*(undefined8 *)puVar4,0,0,0);
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar9 = Dino_BusSand_App_Gameplay_GameplayController__TryCompleteRevive_229f824
                            (*(long *)(param_1 + 0x20),uVar5,0);
          if ((uVar9 & 1) == 0) {
            return;
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Economy__OnReviveSuccess_2204db4(0);
          uVar12 = *(undefined8 *)PTR_DAT_04ca9c20;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
          *(undefined4 *)(param_1 + 0x5c) = 0;
          plVar6 = (long *)FUN_02133068(uVar12,4);
          puVar3 = PTR_DAT_04cac768;
          if (plVar6 != (long *)0x0) {
            if ((*(long *)PTR_DAT_04cac768 != 0) &&
               (lVar7 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac768,*(undefined8 *)(*plVar6 + 0x40)
                                          ), lVar7 == 0)) {
LAB_02268524:
              uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar12,0);
            }
            if ((int)plVar6[3] != 0) {
              plVar6[4] = *(long *)puVar3;
              thunk_FUN_02134474();
              uVar9 = System_String__op_Equality_46d1108(lVar10,*(undefined8 *)PTR_DAT_04cac790,0);
              uVar12 = *(undefined8 *)PTR_DAT_04cac778;
              if ((uVar9 & 1) == 0) {
                uVar9 = System_String__op_Equality_46d1108(lVar10,*(undefined8 *)puVar4,0);
                if ((uVar9 & 1) == 0) {
                  lVar10 = *(long *)PTR_DAT_04cac798;
                }
              }
              if ((lVar10 != 0) &&
                 (lVar7 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
              goto LAB_02268524;
              if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
                plVar6[5] = lVar10;
                thunk_FUN_02134474(plVar6 + 5,lVar10);
                puVar3 = PTR_DAT_04cac780;
                if ((*(long *)PTR_DAT_04cac780 != 0) &&
                   (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac780,
                                                *(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
                goto LAB_02268524;
                if (2 < *(uint *)(plVar6 + 3)) {
                  plVar6[6] = *(long *)puVar3;
                  thunk_FUN_02134474();
                  uStack_34 = uVar5;
                  lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
                  if ((lVar10 != 0) &&
                     (lVar7 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0
                     )) goto LAB_02268524;
                  if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
                    plVar6[7] = lVar10;
                    thunk_FUN_02134474(plVar6 + 7,lVar10);
                    if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar8 = Dino_BusSand_App_Analytics__L_216fff0(plVar6,0);
                    Dino_BusSand_App_Analytics__Log_216d0c8(uVar12,uVar8,0);
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
    uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7b0);
    System_Action_Vector3____ctor_35f2828(uVar12,param_1,*(undefined8 *)PTR_DAT_04cac7c0,0);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(lVar10 + 0x50);
      *puVar11 = uVar12;
      if (iRam00000000051c1b10 != 0) {
        FUN_02220bf0(1L << ((ulong)puVar11 >> 0xc & 0x3f),
                     ((ulong)puVar11 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
      }
      return;
    }
  }
LAB_022688dc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

