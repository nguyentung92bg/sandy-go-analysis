/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<TowerBus>d__41$$MoveNext
bool Dino_BusSand_Cheat_AutoQa__TowerBus_d__41__MoveNext (Dino_BusSand_Cheat_AutoQa__TowerBus_d__41_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<TowerBus>d__41$$MoveNext
   bool Dino_BusSand_Cheat_AutoQa__TowerBus_d__41__MoveNext
   (Dino_BusSand_Cheat_AutoQa__TowerBus_d__41_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoQa__TowerBus_d__41__MoveNext_23555b4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c718 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cac8c0);
    FUN_02132f7c(PTR_DAT_04cb5428);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cb5430);
    FUN_02132f7c(PTR_DAT_04cb9f38);
    FUN_02132f7c(PTR_DAT_04cba0b8);
    FUN_02132f7c(PTR_DAT_04cba0c0);
    FUN_02132f7c(PTR_DAT_04cba0c8);
    FUN_02132f7c(PTR_DAT_04cba0d0);
    FUN_02132f7c(PTR_DAT_04cba0d8);
    FUN_02132f7c(PTR_DAT_04cba0e0);
    FUN_02132f7c(PTR_DAT_04cb9778);
    FUN_02132f7c(PTR_DAT_04cba0e8);
    FUN_02132f7c(PTR_DAT_04cb9fc0);
    FUN_02132f7c(PTR_DAT_04cac850);
    FUN_02132f7c(PTR_DAT_04cba0f0);
    FUN_02132f7c(PTR_DAT_04cba0f8);
    FUN_02132f7c(PTR_DAT_04cb7638);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cba100);
    FUN_02132f7c(PTR_DAT_04cb9ac0);
    FUN_02132f7c(PTR_DAT_04cba108);
    FUN_02132f7c(PTR_DAT_04cb7508);
    FUN_02132f7c(PTR_DAT_04cba000);
    FUN_02132f7c(PTR_DAT_04cb2060);
    FUN_02132f7c(PTR_DAT_04cba110);
    FUN_02132f7c(PTR_DAT_04cad4d0);
    FUN_02132f7c(PTR_DAT_04cba118);
    FUN_02132f7c(PTR_DAT_04cba120);
    FUN_02132f7c(PTR_DAT_04cba128);
    FUN_02132f7c(PTR_DAT_04cba130);
    FUN_02132f7c(PTR_DAT_04cba138);
    FUN_02132f7c(PTR_DAT_04cba140);
    FUN_02132f7c(PTR_DAT_04cb7648);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cba148);
    FUN_02132f7c(PTR_DAT_04cba150);
    bRam0000000004f9c718 = 1;
  }
  puVar2 = PTR_DAT_04cb9568;
  uStack_48 = 0;
  if (*(uint *)(param_1 + 0x10) < 0xd) {
    lVar13 = *(long *)(param_1 + 0x20);
    switch(*(uint *)(param_1 + 0x10)) {
    case 0:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar5 = Dino_BusSand_App_Meta_WinStreak__get_UnlockLevel_2292964(0);
      if (lVar13 != 0) {
        uVar7 = Dino_BusSand_Cheat_AutoQa__Fresh_23421dc(lVar13,uVar5,0);
        *(undefined8 *)(param_1 + 0x18) = uVar7;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
LAB_024563d0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    case 1:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      iVar6 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(0);
      uVar5 = Dino_BusSand_App_Meta_WinStreak__get_UnlockLevel_2292964(0);
      uStack_48 = CONCAT44(uVar5,(int)uStack_48);
      uVar7 = System_Int32__ToString_482d750((long)&uStack_48 + 4,0);
      uVar7 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba138,uVar7,0);
      uStack_50 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(0);
      uStack_60 = *(undefined8 *)PTR_DAT_04cb9f38;
      uStack_58 = 0xffffffffffffffff;
      uVar11 = System_Enum__ToString_4863070(&uStack_60,0);
      if (lVar13 == 0) goto LAB_024563d0;
      Dino_BusSand_Cheat_AutoQa__Add_23430d8(lVar13,iVar6 == 2,uVar7,uVar11,0);
      if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar9 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4(0);
      if (lVar9 == 0) goto LAB_024563d0;
      Dino_BusSand_App_GameApp__GoHall_21678c4(lVar9,0,0);
      puVar2 = PTR_DAT_04cb9778;
      lVar9 = *(long *)PTR_DAT_04cb9778;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar2;
      }
      puVar12 = *(undefined8 **)(lVar9 + 0xb8);
      lVar10 = puVar12[0x23];
      if (lVar10 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar7 = *puVar12;
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar10,uVar7,*(undefined8 *)PTR_DAT_04cba0b8,0);
        lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
        *(long *)(lVar9 + 0x118) = lVar10;
        thunk_FUN_02134474(lVar9 + 0x118,lVar10);
      }
      uVar7 = Dino_BusSand_Cheat_AutoQa__Settle_23425e4(0x41200000,lVar13,lVar10,0,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
      uVar5 = 2;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar13 == 0) goto LAB_024563d0;
      Dino_BusSand_Cheat_AutoQa__Add_23430d8
                (lVar13,*(undefined1 *)(lVar13 + 0x28),*(undefined8 *)PTR_DAT_04cba130,
                 *(undefined8 *)PTR_DAT_04ca9c30,0);
      puVar2 = PTR_DAT_04cb9568;
      if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar9 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014(0);
      if (lVar9 == 0) goto LAB_024563d0;
      lVar9 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                        (lVar9,*(undefined8 *)PTR_DAT_04cac850);
      if (lVar9 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar9,*(undefined8 *)PTR_DAT_04cb7508,0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Cheat_AutoQa__Click_2342d10(uVar7,0);
      puVar2 = PTR_DAT_04cb9778;
      lVar9 = *(long *)PTR_DAT_04cb9778;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar2;
      }
      puVar12 = *(undefined8 **)(lVar9 + 0xb8);
      lVar10 = puVar12[0x24];
      if (lVar10 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar7 = *puVar12;
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar10,uVar7,*(undefined8 *)PTR_DAT_04cba0c0,0);
        lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
        *(long *)(lVar9 + 0x120) = lVar10;
        thunk_FUN_02134474(lVar9 + 0x120,lVar10);
      }
      uVar7 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x40800000,lVar13,lVar10,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
      uVar5 = 3;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar13 == 0) goto LAB_024563d0;
      if (*(char *)(lVar13 + 0x28) == '\0') {
        bVar4 = false;
      }
      else {
        iVar6 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(0);
        bVar4 = iVar6 == 2;
      }
      Dino_BusSand_Cheat_AutoQa__Add_23430d8
                (lVar13,bVar4,*(undefined8 *)PTR_DAT_04cba150,*(undefined8 *)PTR_DAT_04ca9c30,0);
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f800000,uVar7,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
      uVar5 = 4;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar9 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014(0);
      if (lVar9 == 0) goto LAB_024563d0;
      lVar9 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                        (lVar9,*(undefined8 *)PTR_DAT_04cba0f8);
      if (lVar9 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar9,*(undefined8 *)PTR_DAT_04cad4d0,0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Cheat_AutoQa__Click_2342d10(uVar7,0);
      puVar2 = PTR_DAT_04cb9778;
      lVar9 = *(long *)PTR_DAT_04cb9778;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar2;
      }
      puVar12 = *(undefined8 **)(lVar9 + 0xb8);
      lVar10 = puVar12[0x25];
      if (lVar10 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar7 = *puVar12;
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar10,uVar7,*(undefined8 *)PTR_DAT_04cba0c8,0);
        lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
        *(long *)(lVar9 + 0x128) = lVar10;
        thunk_FUN_02134474(lVar9 + 0x128,lVar10);
      }
      if (lVar13 == 0) goto LAB_024563d0;
      uVar7 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x40a00000,lVar13,lVar10,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
      uVar5 = 5;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar13 == 0) goto LAB_024563d0;
      Dino_BusSand_Cheat_AutoQa__Add_23430d8
                (lVar13,*(undefined1 *)(lVar13 + 0x28),*(undefined8 *)PTR_DAT_04cba148,
                 *(undefined8 *)PTR_DAT_04ca9c30,0);
      puVar2 = PTR_DAT_04cb9778;
      lVar9 = *(long *)PTR_DAT_04cb9778;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar2;
      }
      puVar12 = *(undefined8 **)(lVar9 + 0xb8);
      lVar10 = puVar12[0x26];
      if (lVar10 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar7 = *puVar12;
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar10,uVar7,*(undefined8 *)PTR_DAT_04cba0d0,0);
        lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
        *(long *)(lVar9 + 0x130) = lVar10;
        thunk_FUN_02134474(lVar9 + 0x130,lVar10);
      }
      uVar7 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x41700000,lVar13,lVar10,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
      uVar5 = 6;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar13 == 0) goto LAB_024563d0;
      Dino_BusSand_Cheat_AutoQa__Add_23430d8
                (lVar13,*(undefined1 *)(lVar13 + 0x28),*(undefined8 *)PTR_DAT_04cba118,
                 *(undefined8 *)PTR_DAT_04ca9c30,0);
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e200f8,uVar7,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
      uVar5 = 7;
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar9 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014(0);
      if (lVar9 == 0) goto LAB_024563d0;
      plVar8 = (long *)Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                                 (lVar9,*(undefined8 *)PTR_DAT_04cba0f0);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
      }
      puVar2 = PTR_DAT_04cb9778;
      lVar9 = *(long *)PTR_DAT_04cb9778;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar2;
      }
      puVar12 = *(undefined8 **)(lVar9 + 0xb8);
      lVar10 = puVar12[0x27];
      if (lVar10 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar7 = *puVar12;
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar10,uVar7,*(undefined8 *)PTR_DAT_04cba0d8,0);
        lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
        *(long *)(lVar9 + 0x138) = lVar10;
        thunk_FUN_02134474(lVar9 + 0x138,lVar10);
      }
      if (lVar13 == 0) goto LAB_024563d0;
      uVar7 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x40400000,lVar13,lVar10,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
      uVar5 = 8;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar13 == 0) goto LAB_024563d0;
      Dino_BusSand_Cheat_AutoQa__Add_23430d8
                (lVar13,*(undefined1 *)(lVar13 + 0x28),*(undefined8 *)PTR_DAT_04cb9ac0,
                 *(undefined8 *)PTR_DAT_04ca9c30,0);
      if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar13 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014(0);
      if (lVar13 == 0) goto LAB_024563d0;
      Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                (lVar13,*(undefined8 *)PTR_DAT_04cb9fc0);
      uVar7 = Dino_BusSand_Cheat_AutoQa__Frames_2342f28(10,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
      uVar5 = 9;
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar5 = Dino_BusSand_App_Meta_WinStreak__get_UnlockLevel_2292964(0);
      if (lVar13 == 0) goto LAB_024563d0;
      uVar7 = Dino_BusSand_Cheat_AutoQa__Fresh_23421dc(lVar13,uVar5,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
      uVar5 = 10;
      break;
    case 10:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      Dino_BusSand_App_Meta_WinStreak__Start_2293a18(0);
      iVar6 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(0);
      puVar2 = PTR_DAT_04ca9c30;
      if (lVar13 == 0) goto LAB_024563d0;
      Dino_BusSand_Cheat_AutoQa__Add_23430d8
                (lVar13,iVar6 == 3,*(undefined8 *)PTR_DAT_04cba108,*(undefined8 *)PTR_DAT_04ca9c30,0
                );
      lVar9 = Dino_BusSand_App_Meta_WinStreak__get_Checkpoints_2292b2c(0);
      puVar3 = PTR_DAT_04cb5430;
      if (lVar9 == 0) goto LAB_024563d0;
      if (*(int *)(lVar9 + 0x18) < 1) {
        bVar4 = false;
        uVar7 = *(undefined8 *)puVar2;
        puVar12 = (undefined8 *)PTR_DAT_04cba140;
      }
      else {
        lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar9,0,*(undefined8 *)PTR_DAT_04cb5430);
        if (lVar10 == 0) goto LAB_024563d0;
        iVar6 = *(int *)(lVar10 + 0x14);
        uStack_48 = CONCAT44(uStack_48._4_4_,iVar6);
        iVar1 = iVar6;
        if (0 < iVar6) {
          do {
            Dino_BusSand_App_Meta_WinStreak__OnWin_22940bc(0);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        lVar10 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
        if (lVar10 == 0) goto LAB_024563d0;
        iVar1 = *(int *)(lVar10 + 0x18);
        lVar10 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
        if (lVar10 == 0) goto LAB_024563d0;
        uVar7 = System_Int32__ToString_482d750(lVar10 + 0x18,0);
        puVar2 = PTR_DAT_04cba000;
        uVar7 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba000,uVar7,0);
        Dino_BusSand_Cheat_AutoQa__Add_23430d8
                  (lVar13,iVar1 == iVar6,*(undefined8 *)PTR_DAT_04cba100,uVar7,0);
        uVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar9,0,*(undefined8 *)puVar3);
        lVar9 = Dino_BusSand_App_Meta_WinStreak__Claim_22945c8(uVar7,0);
        if (lVar9 == 0) goto LAB_024563d0;
        iVar6 = *(int *)(lVar9 + 0x18);
        uVar7 = System_Int32__ToString_482d750(&uStack_48,0);
        uVar7 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba120,uVar7,0);
        uStack_48 = CONCAT44(*(undefined4 *)(lVar9 + 0x18),(int)uStack_48);
        uVar11 = System_Int32__ToString_482d750((long)&uStack_48 + 4,0);
        uVar11 = System_String__Concat_46c82e0(uVar11,*(undefined8 *)PTR_DAT_04cb2060,0);
        Dino_BusSand_Cheat_AutoQa__Add_23430d8(lVar13,0 < iVar6,uVar7,uVar11,0);
        Dino_BusSand_App_Meta_WinStreak__OnWin_22940bc(0);
        Dino_BusSand_App_Meta_WinStreak__OnLose_2293e0c(0);
        lVar9 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
        if (lVar9 == 0) goto LAB_024563d0;
        iVar6 = *(int *)(lVar9 + 0x18);
        iVar1 = (int)uStack_48;
        lVar9 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
        if (lVar9 == 0) goto LAB_024563d0;
        uVar7 = System_Int32__ToString_482d750(lVar9 + 0x18,0);
        uVar7 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar7,0);
        bVar4 = iVar6 == iVar1;
        puVar12 = (undefined8 *)PTR_DAT_04cba128;
      }
      Dino_BusSand_Cheat_AutoQa__Add_23430d8(lVar13,bVar4,*puVar12,uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar9 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014(0);
      if (lVar9 == 0) goto LAB_024563d0;
      Dino_BusSand_App_UI_UIManager__Open_object__2945314
                (lVar9,*(undefined8 *)PTR_DAT_04cb7648,2,0,*(undefined8 *)PTR_DAT_04cb7638);
      puVar2 = PTR_DAT_04cb9778;
      lVar9 = *(long *)PTR_DAT_04cb9778;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar2;
      }
      puVar12 = *(undefined8 **)(lVar9 + 0xb8);
      lVar10 = puVar12[0x28];
      if (lVar10 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar7 = *puVar12;
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar10,uVar7,*(undefined8 *)PTR_DAT_04cba0e0,0);
        lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
        *(long *)(lVar9 + 0x140) = lVar10;
        thunk_FUN_02134474(lVar9 + 0x140,lVar10);
      }
      uVar7 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x40400000,lVar13,lVar10,0);
      if (param_1 == 0) goto LAB_024563d0;
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
      uVar5 = 0xb;
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar13 == 0) goto LAB_024563d0;
      Dino_BusSand_Cheat_AutoQa__Add_23430d8
                (lVar13,*(undefined1 *)(lVar13 + 0x28),*(undefined8 *)PTR_DAT_04cba110,
                 *(undefined8 *)PTR_DAT_04ca9c30,0);
      if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = Dino_BusSand_Cheat_AutoQa__Frames_2342f28(0x1e,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
      uVar5 = 0xc;
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar13 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014(0);
      if (lVar13 == 0) goto LAB_024563d0;
      Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                (lVar13,*(undefined8 *)PTR_DAT_04cb9fc0);
      lVar13 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014(0);
      if (lVar13 == 0) goto LAB_024563d0;
      Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                (lVar13,*(undefined8 *)PTR_DAT_04cba0e8);
      goto LAB_02455938;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    uVar7 = 1;
  }
  else {
LAB_02455938:
    uVar7 = 0;
  }
  return uVar7;
}

