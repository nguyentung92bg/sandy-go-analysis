/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$Grant
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_DailyGiftPanel__Grant (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, int32_t times, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$Grant
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_UI_DailyGiftPanel__Grant (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, int32_t
   times, const MethodInfo* method); */

long Dino_BusSand_App_UI_DailyGiftPanel__Grant_232c03c(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar12;
  long lVar13;
  int iStack_5c;
  int iStack_58;
  undefined4 auStack_54 [3];
  
  puVar3 = PTR_DAT_04cb21e8;
  if ((bRam0000000004f9c604 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb21e8);
    bRam0000000004f9c604 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cabaf8;
  uVar12 = 0;
  if ((bRam0000000004f9bd25 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0,0);
    FUN_02132f7c(PTR_DAT_04cb21e8);
    FUN_02132f7c(PTR_DAT_04caf688);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb21f0);
    FUN_02132f7c(PTR_DAT_04cb21d0);
    FUN_02132f7c(PTR_DAT_04cb21f8);
    FUN_02132f7c(PTR_DAT_04cb2200);
    FUN_02132f7c(PTR_DAT_04cb2208);
    FUN_02132f7c(PTR_DAT_04cb1e78);
    FUN_02132f7c(PTR_DAT_04cb2210);
    FUN_02132f7c(PTR_DAT_04cb2218);
    bRam0000000004f9bd25 = 1;
    uVar12 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar12 = extraout_x1_00;
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8,uVar12);
    cRam0000000004f9b894 = '\x01';
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar7 == 0) goto LAB_0230e8f4;
  lVar13 = *(long *)(lVar7 + 0x188);
  lVar8 = Dino_BusSand_App_Meta_Profile__Day_2271100(0);
  puVar4 = PTR_DAT_04cb21e8;
  if (lVar13 == lVar8) {
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
    System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
              (lVar7,*(undefined8 *)PTR_DAT_04caca50);
    return lVar7;
  }
  if (*(int *)(*(long *)PTR_DAT_04cb21e8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = Dino_BusSand_App_Meta_DailyGift__get_NextIndex_220df5c();
  uVar9 = Dino_BusSand_App_Meta_Monetization__DailyGiftDay_226802c(uVar12,0);
  Dino_BusSand_App_Meta_RewardList__Grant_220d370(uVar9,*(undefined8 *)PTR_DAT_04cb1e78,1);
  if (1 < param_2) {
    Dino_BusSand_App_Meta_RewardList__Grant_220d370
              (uVar9,*(undefined8 *)PTR_DAT_04cb2208,param_2 + -1);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = Dino_BusSand_App_Meta_Profile__Day_2271100(0);
  *(undefined8 *)(lVar7 + 0x188) = uVar10;
  iVar5 = Dino_BusSand_App_Meta_Monetization__get_DailyGiftDays_2267f84(0);
  iVar1 = (int)uVar12 + 1;
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = iVar1 / iVar5;
  }
  *(int *)(lVar7 + 0x184) = iVar1 - iVar6 * iVar5;
  lVar8 = Dino_BusSand_App_Meta_RewardList__Times_220d4f8(uVar9,param_2);
  uVar12 = *(undefined8 *)PTR_DAT_04caca60;
  *(int *)(lVar7 + 400) = *(int *)(lVar7 + 400) + 1;
  uVar12 = thunk_FUN_0216e89c(uVar12);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (uVar12,*(undefined8 *)PTR_DAT_04caca50);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bdfa == '\0') {
    FUN_02132f7c(PTR_DAT_04cb21e8);
    cRam0000000004f9bdfa = '\x01';
  }
  lVar13 = *(long *)puVar4;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar4;
  }
  **(undefined8 **)(lVar13 + 0xb8) = uVar12;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar12);
  iVar6 = Dino_BusSand_App_Meta_Monetization__get_DailyGiftChestDays_22681e0(0);
  puVar2 = PTR_DAT_04ca9ac8;
  if (0 < iVar6) {
    iVar5 = 0;
    if (iVar6 != 0) {
      iVar5 = *(int *)(lVar7 + 400) / iVar6;
    }
    if (*(int *)(lVar7 + 400) == iVar5 * iVar6) {
      uVar12 = Dino_BusSand_App_Meta_Monetization__get_DailyGiftChest_226823c(0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
      }
      if (cRam0000000004f9bdfa == '\0') {
        FUN_02132f7c(PTR_DAT_04cb21e8);
        cRam0000000004f9bdfa = '\x01';
      }
      lVar13 = *(long *)puVar4;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar13 = *(long *)puVar4;
      }
      **(undefined8 **)(lVar13 + 0xb8) = uVar12;
      thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar12);
      if (cRam0000000004f9bdfb == '\0') {
        FUN_02132f7c(PTR_DAT_04cb21e8);
        cRam0000000004f9bdfb = '\x01';
      }
      lVar13 = *(long *)puVar4;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar13 = *(long *)puVar4;
      }
      Dino_BusSand_App_Meta_RewardList__Grant_220d370
                (**(undefined8 **)(lVar13 + 0xb8),*(undefined8 *)PTR_DAT_04cb2200,1);
      if (cRam0000000004f9bdfb == '\0') {
        FUN_02132f7c(PTR_DAT_04cb21e8);
        cRam0000000004f9bdfb = '\x01';
      }
      lVar13 = *(long *)puVar4;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar13 = *(long *)puVar4;
      }
      if (lVar8 == 0) goto LAB_0230e8f4;
      System_Collections_Generic_List_KeyValuePair_int__long____AddRange_3965a54
                (lVar8,**(undefined8 **)(lVar13 + 0xb8),*(undefined8 *)PTR_DAT_04caf688);
      plVar11 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
      puVar4 = PTR_DAT_04cb21f0;
      if (plVar11 == (long *)0x0) goto LAB_0230e8f4;
      if ((*(long *)PTR_DAT_04cb21f0 != 0) &&
         (lVar13 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb21f0,*(undefined8 *)(*plVar11 + 0x40)),
         lVar13 == 0)) goto LAB_0230e8f8;
      if ((int)plVar11[3] == 0) goto LAB_0230e8f0;
      plVar11[4] = *(long *)puVar4;
      thunk_FUN_02134474();
      auStack_54[0] = *(undefined4 *)(lVar7 + 400);
      lVar7 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),auStack_54);
      if ((lVar7 != 0) &&
         (lVar13 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
      goto LAB_0230e8f8;
      if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_0230e8f0;
      plVar11[5] = lVar7;
      thunk_FUN_02134474(plVar11 + 5,lVar7);
      if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb2210,plVar11,0);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_Profile__Save_226c548(0);
  plVar11 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,4);
  puVar3 = PTR_DAT_04cb21f8;
  if (plVar11 == (long *)0x0) {
LAB_0230e8f4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb21f8 != 0) &&
     (lVar7 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb21f8,*(undefined8 *)(*plVar11 + 0x40)),
     lVar7 == 0)) {
LAB_0230e8f8:
    uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar12,0);
  }
  if ((int)plVar11[3] != 0) {
    plVar11[4] = *(long *)puVar3;
    thunk_FUN_02134474();
    iStack_58 = iVar1;
    lVar7 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_58);
    if ((lVar7 != 0) &&
       (lVar13 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
    goto LAB_0230e8f8;
    if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
      plVar11[5] = lVar7;
      thunk_FUN_02134474(plVar11 + 5,lVar7);
      puVar3 = PTR_DAT_04cb21d0;
      if ((*(long *)PTR_DAT_04cb21d0 != 0) &&
         (lVar7 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb21d0,*(undefined8 *)(*plVar11 + 0x40)),
         lVar7 == 0)) goto LAB_0230e8f8;
      if (2 < *(uint *)(plVar11 + 3)) {
        plVar11[6] = *(long *)puVar3;
        thunk_FUN_02134474();
        iStack_5c = param_2;
        lVar7 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_5c);
        if ((lVar7 != 0) &&
           (lVar13 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
        goto LAB_0230e8f8;
        if ((*(uint *)(plVar11 + 3) & 0xfffffffc) != 0) {
          plVar11[7] = lVar7;
          thunk_FUN_02134474(plVar11 + 7,lVar7);
          if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb2218,plVar11,0);
          return lVar8;
        }
      }
    }
  }
LAB_0230e8f0:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

