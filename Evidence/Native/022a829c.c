/* IL2CPP: Dino.BusSand.App.UI.SimpleClimbTowerPanel$$OnOpen
void Dino_BusSand_App_UI_SimpleClimbTowerPanel__OnOpen (Dino_BusSand_App_UI_SimpleClimbTowerPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SimpleClimbTowerPanel$$OnOpen
   void Dino_BusSand_App_UI_SimpleClimbTowerPanel__OnOpen
   (Dino_BusSand_App_UI_SimpleClimbTowerPanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_SimpleClimbTowerPanel__OnOpen_21a829c(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 auStack_80 [7];
  undefined4 uStack_64;
  
  if ((bRam0000000004f9ba4f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cae8a8);
    FUN_02132f7c(PTR_DAT_04cae8b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caebe0);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04caebe8);
    FUN_02132f7c(PTR_DAT_04caebf0);
    FUN_02132f7c(PTR_DAT_04cae9c8);
    FUN_02132f7c(PTR_DAT_04caebf8);
    FUN_02132f7c(PTR_DAT_04caec00);
    FUN_02132f7c(PTR_DAT_04caec08);
    FUN_02132f7c(PTR_DAT_04caec10);
    FUN_02132f7c(PTR_DAT_04cae9d8);
    FUN_02132f7c(PTR_DAT_04caec18);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04caec20);
    FUN_02132f7c(PTR_DAT_04cae9e8);
    bRam0000000004f9ba4f = 1;
  }
  puVar3 = PTR_DAT_04caa458;
  uStack_64 = 0;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar10 = *(long *)PTR_DAT_04caa458;
    plVar11 = param_2;
    if (*param_2 != lVar10) {
      plVar11 = (long *)0x0;
    }
    *(long **)(param_1 + 0x38) = plVar11;
    if (*param_2 != lVar10) {
      param_2 = (long *)0x0;
    }
  }
  thunk_FUN_02134474(param_1 + 0x38,param_2);
  lVar10 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_I_2228de4(0);
  plVar11 = (long *)(param_1 + 0x40);
  *plVar11 = lVar10;
  thunk_FUN_02134474(plVar11,lVar10);
  puVar4 = PTR_DAT_04caec10;
  puVar2 = PTR_DAT_04ca9d18;
  if (*plVar11 == 0) {
    return;
  }
  Dino_BusSand_App_Meta_ClimbTowerFeature__SetGuideDone_222a86c(*plVar11,0);
  uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar2;
  lVar10 = *(long *)(lVar13 + 0x38);
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar13);
    lVar10 = *(long *)(lVar13 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cab550;
  lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  puVar6 = PTR_DAT_04cae9d8;
  puVar5 = PTR_DAT_04cae9a8;
  lVar13 = *(long *)puVar4;
  uVar14 = **(undefined8 **)(lVar10 + 0xb8);
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
  }
  puVar7 = PTR_DAT_04caebf8;
  puVar1 = PTR_DAT_04ca9ae8;
  uVar14 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar6,uVar14,0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar5);
  }
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar8,uVar14,0);
  uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  puVar6 = PTR_DAT_04cae9c8;
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar9 & 1) != 0) {
    lVar13 = *(long *)puVar2;
    lVar10 = *(long *)(lVar13 + 0x38);
    if (lVar10 == 0) {
      FUN_0216b4cc(lVar13);
      lVar10 = *(long *)(lVar13 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0216b470();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0216b470();
    }
    uVar14 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                       (*(undefined8 *)PTR_DAT_04caec08,**(undefined8 **)(lVar10 + 0xb8),0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar5);
    }
    Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar8,uVar14,0);
  }
  uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar6,0);
  lVar13 = *(long *)puVar2;
  lVar10 = *(long *)(lVar13 + 0x38);
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar13);
    lVar10 = *(long *)(lVar13 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  puVar2 = PTR_DAT_04caec20;
  lVar13 = *(long *)puVar4;
  uVar14 = **(undefined8 **)(lVar10 + 0xb8);
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
  }
  uVar14 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar2,uVar14,0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar5);
  }
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar8,uVar14,0);
  if ((*plVar11 != 0) &&
     (lVar10 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_WinPoints_2229334(*plVar11,0),
     lVar10 != 0)) {
    if (*(int *)(lVar10 + 0x18) < 2) {
      uStack_64 = 0;
    }
    else {
      uStack_64 = *(undefined4 *)(lVar10 + 0x24);
    }
    uVar14 = *(undefined8 *)PTR_DAT_04caec18;
    uVar12 = *(undefined8 *)PTR_DAT_04caebf0;
    uVar8 = System_Int32__ToString_482d750(&uStack_64,0);
    uVar8 = System_String__Concat_46c82e0(uVar14,uVar8,0);
    Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,uVar12,uVar8,0);
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar8 = Dino_BusSand_App_Meta_ClimbTowerFeature__RewardIdAt_2229444
                        (*(long *)(param_1 + 0x40),1,0);
      if (0 < (int)uVar8) {
        lVar10 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(uVar8,0);
        lVar13 = Dino_BusSand_App_UI_UIPanel__Get_object__29460d0
                           (param_1,*(undefined8 *)PTR_DAT_04caec00,*(undefined8 *)PTR_DAT_04caebe8)
        ;
        if (lVar10 == 0) goto LAB_022a8910;
        if (*(int *)(lVar10 + 0x18) < 1) {
          uVar8 = 0;
        }
        else {
          System_Collections_Generic_List_ActivityRewardEntry___get_Item_39e19e0
                    (auStack_80,lVar10,0,*(undefined8 *)PTR_DAT_04cae8b0);
          uStack_8c = 0;
          uStack_94 = 0;
          uStack_84 = 0;
          uStack_98 = auStack_80[0];
          uVar8 = Dino_BusSand_App_Meta_StreakTowerUtil__RewardIcon_2252390(&uStack_98,1,0);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
          if ((uVar9 & 1) != 0) {
            if (lVar13 == 0) goto LAB_022a8910;
            UnityEngine_UI_Image__set_sprite_44a7258(lVar13,uVar8,0);
          }
        }
      }
      puVar6 = PTR_DAT_04caebe0;
      puVar5 = PTR_DAT_04cae9e8;
      puVar4 = PTR_DAT_04cad948;
      puVar2 = PTR_DAT_04cad460;
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)puVar6,0);
      Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                (param_1,*(undefined8 *)puVar2,uVar8,1,*(undefined8 *)puVar4,0);
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)puVar6,0);
      Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                (param_1,*(undefined8 *)puVar5,uVar8,1,*(undefined8 *)puVar4,0);
      uVar8 = Dino_BusSand_App_UI_SimpleClimbTowerPanel__CountDown_21a8914(param_1);
      Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar8,0);
      return;
    }
  }
LAB_022a8910:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

