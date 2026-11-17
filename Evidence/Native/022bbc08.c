/* IL2CPP: Dino.BusSand.App.UI.CupView$$Rows
System_Collections_Generic_List_EventRow__o* Dino_BusSand_App_UI_CupView__Rows (Dino_BusSand_App_UI_CupView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CupView$$Rows
   System_Collections_Generic_List_EventRow__o* Dino_BusSand_App_UI_CupView__Rows
   (Dino_BusSand_App_UI_CupView_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_CupView__Rows_21bbc08(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  
  puVar3 = PTR_DAT_04caf670;
  puVar2 = PTR_DAT_04caf668;
                    /* catch() { ... } // from try @ 022bbc04 with catch @ 022bbc0c
                       try { // try from 022bbc0c to 023bbc3f has its CatchHandler @ 022bbac8 */
                    /* catch() { ... } // from try @ 022bbbc4 with catch @ 022bbc10 */
                    /* catch() { ... } // from try @ 022bbb28 with catch @ 022bbc2c */
  if ((bRam0000000004f9bac4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf860);
    FUN_02132f7c(PTR_DAT_04caf810);
    FUN_02132f7c(PTR_DAT_04caf678);
    FUN_02132f7c(PTR_DAT_04caf680);
    FUN_02132f7c(PTR_DAT_04caf690);
    FUN_02132f7c(PTR_DAT_04caf868);
    FUN_02132f7c(PTR_DAT_04caf670);
    FUN_02132f7c(PTR_DAT_04caf540);
    FUN_02132f7c(PTR_DAT_04caf870);
    FUN_02132f7c(PTR_DAT_04caf878);
    FUN_02132f7c(PTR_DAT_04caf668);
    FUN_02132f7c(PTR_DAT_04caf880);
    FUN_02132f7c(PTR_DAT_04caf888);
    FUN_02132f7c(PTR_DAT_04caf890);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf898);
    FUN_02132f7c(PTR_DAT_04caf8a0);
    bRam0000000004f9bac4 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar5,*(undefined8 *)puVar3);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar6 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Joined_22303f4(*(long *)(param_1 + 0x10),0);
    if ((uVar6 & 1) == 0) {
      return lVar5;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar7 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Board_2230604(*(long *)(param_1 + 0x10),0)
      ;
      puVar2 = PTR_DAT_04caf890;
      lVar10 = *(long *)PTR_DAT_04caf890;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar10);
        lVar10 = *(long *)puVar2;
      }
      puVar11 = *(undefined8 **)(lVar10 + 0xb8);
      lVar12 = puVar11[1];
      if (lVar12 == 0) {
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar10);
          puVar11 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar14 = *puVar11;
        lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caf880);
        System_Predicate_object____ctor_2c4e748(lVar12,uVar14,*(undefined8 *)PTR_DAT_04caf888,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar8 = lVar12;
        thunk_FUN_02134474(plVar8,lVar12);
      }
      if (lVar7 != 0) {
        iVar4 = System_Collections_Generic_List_object___FindIndex_3a82448
                          (lVar7,lVar12,*(undefined8 *)PTR_DAT_04caf868);
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar6 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_ResultDue_223044c
                            (*(long *)(param_1 + 0x10),0);
          puVar3 = PTR_DAT_04caf878;
          puVar2 = PTR_DAT_04caf690;
          iVar9 = 5;
          if ((uVar6 & 1) == 0) {
            iVar9 = 6;
          }
          iVar9 = iVar9 - (uint)(iVar9 <= iVar4);
          if (0 < *(int *)(lVar7 + 0x18)) {
            if (lVar5 == 0) goto LAB_022bc164;
            iVar13 = 0;
            do {
              if (iVar9 <= *(int *)(lVar5 + 0x18)) break;
              uVar14 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (lVar7,iVar13,*(undefined8 *)puVar3);
              iVar13 = iVar13 + 1;
              uVar14 = Dino_BusSand_App_UI_CupView__Entry_21bc168(uVar14,iVar13);
              lVar10 = *(long *)(lVar5 + 0x10);
              lVar12 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_022bc164;
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
                thunk_FUN_02134474();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar5,uVar14,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
            } while (iVar13 < *(int *)(lVar7 + 0x18));
          }
          if (iVar9 <= iVar4) {
            uVar14 = System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar7,iVar4,*(undefined8 *)PTR_DAT_04caf878);
            uVar14 = Dino_BusSand_App_UI_CupView__Entry_21bc168(uVar14,iVar4 + 1);
            if (lVar5 == 0) goto LAB_022bc164;
            lVar7 = *(long *)(lVar5 + 0x10);
            lVar10 = *(long *)PTR_DAT_04caf690;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_022bc164;
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar5,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
          }
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar6 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_ResultDue_223044c
                              (*(long *)(param_1 + 0x10),0);
            if ((uVar6 & 1) == 0) {
              return lVar5;
            }
            lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caf678);
            Dino_BusSand_App_UI_EventRow___ctor_21b5adc();
            lVar12 = *(long *)PTR_DAT_04ca9d18;
            lVar10 = *(long *)(lVar12 + 0x38);
            if (lVar10 == 0) {
              FUN_0216b4cc(lVar12);
              lVar10 = *(long *)(lVar12 + 0x38);
            }
            lVar10 = *(long *)(lVar10 + 0x10);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_0216b470();
            }
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_0216b470();
            }
            uVar14 = **(undefined8 **)(lVar10 + 0xb8);
            if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
            }
            uVar14 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                               (*(undefined8 *)PTR_DAT_04caf898,*(undefined8 *)PTR_DAT_04caf8a0,
                                uVar14,0);
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0x10) = uVar14;
              thunk_FUN_02134474();
              if (*(long *)(param_1 + 0x10) != 0) {
                uVar14 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Rank_2230c54
                                   (*(long *)(param_1 + 0x10),0);
                uVar14 = Dino_BusSand_App_Meta_WeeklyCupModel__RewardForRank_223150c(uVar14,0);
                if (*(int *)(*(long *)PTR_DAT_04caf810 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04caf810);
                }
                uVar14 = Dino_BusSand_App_Meta_Ev07Rewards__Pairs_222ebe4(uVar14,0);
                *(undefined8 *)(lVar7 + 0x20) = uVar14;
                thunk_FUN_02134474();
                puVar2 = PTR_DAT_04caf680;
                *(undefined4 *)(lVar7 + 0x28) = 1;
                uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                System_Func_object____ctor_379de3c(uVar14,param_1,*(undefined8 *)PTR_DAT_04caf860,0)
                ;
                *(undefined8 *)(lVar7 + 0x30) = uVar14;
                thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30),uVar14);
                if (lVar5 != 0) {
                  lVar10 = *(long *)(lVar5 + 0x10);
                  lVar12 = *(long *)PTR_DAT_04caf690;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar10 != 0) {
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar8 = lVar7;
                      thunk_FUN_02134474(plVar8,lVar7);
                      return lVar5;
                    }
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar5,lVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    return lVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_022bc164:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

