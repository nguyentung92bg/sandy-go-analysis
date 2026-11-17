/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<BusStreak>d__42$$MoveNext
bool Dino_BusSand_Cheat_AutoQa__BusStreak_d__42__MoveNext (Dino_BusSand_Cheat_AutoQa__BusStreak_d__42_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<BusStreak>d__42$$MoveNext
   bool Dino_BusSand_Cheat_AutoQa__BusStreak_d__42__MoveNext
   (Dino_BusSand_Cheat_AutoQa__BusStreak_d__42_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoQa__BusStreak_d__42__MoveNext_2349628(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  long lStack_50;
  long lStack_48;
  
  lVar7 = param_1;
  if ((bRam0000000004f9c707 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cac8c0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb9970);
    FUN_02132f7c(PTR_DAT_04cb9978);
    FUN_02132f7c(PTR_DAT_04cb9980);
    FUN_02132f7c(PTR_DAT_04cb9988);
    FUN_02132f7c(PTR_DAT_04cb9990);
    FUN_02132f7c(PTR_DAT_04cb9998);
    FUN_02132f7c(PTR_DAT_04cb99a0);
    FUN_02132f7c(PTR_DAT_04cb9778);
    FUN_02132f7c(PTR_DAT_04cb99a8);
    FUN_02132f7c(PTR_DAT_04cb99b0);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cb99b8);
    FUN_02132f7c(PTR_DAT_04cb99c0);
    FUN_02132f7c(PTR_DAT_04cb99c8);
    FUN_02132f7c(PTR_DAT_04cad978);
    FUN_02132f7c(PTR_DAT_04cb9710);
    FUN_02132f7c(PTR_DAT_04cb99d0);
    FUN_02132f7c(PTR_DAT_04cb99d8);
    FUN_02132f7c(PTR_DAT_04cb99e0);
    FUN_02132f7c(PTR_DAT_04cb99e8);
    FUN_02132f7c(PTR_DAT_04caf588);
    FUN_02132f7c(PTR_DAT_04cb99f0);
    FUN_02132f7c(PTR_DAT_04cb1e48);
    FUN_02132f7c(PTR_DAT_04cb99f8);
    FUN_02132f7c(PTR_DAT_04cb9a00);
    FUN_02132f7c(PTR_DAT_04cb9a08);
    FUN_02132f7c(PTR_DAT_04cb9a10);
    FUN_02132f7c(PTR_DAT_04cabd48);
    FUN_02132f7c(PTR_DAT_04cb9a18);
    FUN_02132f7c(PTR_DAT_04cb9a20);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cb9a28);
    FUN_02132f7c(PTR_DAT_04cb9a30);
    lVar7 = FUN_02132f7c(PTR_DAT_04cb9a38);
    bRam0000000004f9c707 = 1;
  }
  puVar4 = PTR_DAT_04cb9778;
  puVar3 = PTR_DAT_04cb9568;
  lStack_50 = 0;
  lStack_48 = 0;
  iStack_60 = 0;
  iStack_5c = 0;
  iStack_58 = 0;
  iStack_54 = 0;
  uStack_68 = 0;
  if (*(uint *)(param_1 + 0x10) < 0xd) {
    lVar13 = *(long *)(param_1 + 0x20);
    switch(*(uint *)(param_1 + 0x10)) {
    case 0:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar8 = Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(3,0);
      *(int *)(param_1 + 0x28) = (int)uVar8;
      if (lVar13 != 0) {
        uVar9 = Dino_BusSand_Cheat_AutoQa__Fresh_23421dc(uVar8,uVar8 & 0xffffffff);
        *(undefined8 *)(param_1 + 0x18) = uVar9;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
code_r0x0244a6c8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    case 1:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
      if (lVar7 == 0) goto code_r0x0244a6c8;
      Dino_BusSand_App_GameApp__GoHall_21678c4(lVar7,0,0);
      puVar3 = PTR_DAT_04cb9778;
      lVar7 = *(long *)PTR_DAT_04cb9778;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      puVar12 = *(undefined8 **)(lVar7 + 0xb8);
      lVar14 = puVar12[0x29];
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar9 = *puVar12;
        lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar14,uVar9,*(undefined8 *)PTR_DAT_04cb9970,0);
        lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
        *(long *)(lVar7 + 0x148) = lVar14;
        thunk_FUN_02134474(lVar7 + 0x148,lVar14);
      }
      if (lVar13 == 0) goto code_r0x0244a6c8;
      uVar9 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x41000000,lVar13,lVar14);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
      uVar15 = 2;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar13 == 0) goto code_r0x0244a6c8;
      uVar11 = *(undefined1 *)(lVar13 + 0x28);
      uVar9 = System_Int32__ToString_482d750(param_1 + 0x28,0);
      uVar9 = System_String__Concat_46d2b84
                        (*(undefined8 *)PTR_DAT_04cb99d0,uVar9,*(undefined8 *)PTR_DAT_04cb9a08,0);
      Dino_BusSand_Cheat_AutoQa__Add_23430d8(lVar13,uVar11,uVar9,*(undefined8 *)PTR_DAT_04ca9c30);
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f800000,uVar9,0);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
      uVar15 = 3;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
      if (lVar7 == 0) goto code_r0x0244a6c8;
      lVar7 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                        (lVar7,*(undefined8 *)PTR_DAT_04cb99a8);
      if (lVar7 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar7,*(undefined8 *)PTR_DAT_04cad460,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Cheat_AutoQa__Click_2342d10(uVar9);
      puVar3 = PTR_DAT_04cb9778;
      lVar7 = *(long *)PTR_DAT_04cb9778;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      puVar12 = *(undefined8 **)(lVar7 + 0xb8);
      lVar14 = puVar12[0x2a];
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar9 = *puVar12;
        lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar14,uVar9,*(undefined8 *)PTR_DAT_04cb9978,0);
        lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
        *(long *)(lVar7 + 0x150) = lVar14;
        thunk_FUN_02134474(lVar7 + 0x150,lVar14);
      }
      if (lVar13 == 0) goto code_r0x0244a6c8;
      uVar9 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x40400000,lVar13,lVar14);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
      uVar15 = 4;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar13 == 0) goto code_r0x0244a6c8;
      uVar9 = Dino_BusSand_Cheat_AutoQa__Fresh_23421dc(lVar7,0x1e);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
      uVar15 = 5;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      Dino_BusSand_App_Meta_SystemOpen__MarkGuided_224333c(3,0);
      lStack_48 = Dino_BusSand_App_Meta_StreakRateFeature__get_I_224b6e0(0);
      thunk_FUN_02134474(&lStack_48,lStack_48);
      if (lStack_48 == 0) {
        if (lVar13 == 0) goto code_r0x0244a6c8;
        uVar11 = 0;
        puVar12 = (undefined8 *)PTR_DAT_04cb9a18;
        goto code_r0x0244a0b4;
      }
      uVar6 = Dino_BusSand_App_Meta_StreakRateFeature__HaveNewActivity_224d280(lStack_48,0);
      uVar9 = System_Int32__ToString_482d750(param_1 + 0x28,0);
      uVar9 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb99c0,uVar9,0);
      puVar3 = PTR_DAT_04ca9c30;
      if ((lVar13 == 0) ||
         (Dino_BusSand_Cheat_AutoQa__Add_23430d8
                    (lVar13,uVar6 & 1,uVar9,*(undefined8 *)PTR_DAT_04ca9c30), lStack_48 == 0))
      goto code_r0x0244a6c8;
      lVar7 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(lStack_48,0);
      if (lVar7 == 0) {
        if (lStack_48 == 0) goto code_r0x0244a6c8;
        Dino_BusSand_App_Meta_StreakRateFeature__WinOnce_224dee4(lStack_48,0,0);
      }
      if (lStack_48 == 0) goto code_r0x0244a6c8;
      lStack_50 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(lStack_48,0);
      thunk_FUN_02134474(&lStack_50,lStack_50);
      uVar9 = Dino_BusSand_Cheat_AutoQa__Add_23430d8
                        (lVar13,lStack_50 != 0,*(undefined8 *)PTR_DAT_04cb99b8,*(undefined8 *)puVar3
                        );
      if (lStack_50 != 0) {
        if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iStack_54 = Dino_BusSand_Cheat_AutoQa___BusStreak_g__Points_42_7_23442e8(0,&lStack_50);
        iStack_58 = Dino_BusSand_Cheat_AutoQa___BusStreak_g__Points_42_7_23442e8(1,&lStack_50);
        iStack_5c = Dino_BusSand_Cheat_AutoQa___BusStreak_g__Points_42_7_23442e8(2,&lStack_50);
        puVar3 = PTR_DAT_04caa038;
        if ((iStack_54 < 1) || (iStack_58 != iStack_54 * 3)) {
          bVar5 = false;
        }
        else {
          bVar5 = iStack_5c == iStack_54 * 5;
        }
        lVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
        if (lVar7 == 0) goto code_r0x0244a6c8;
        if (*(int *)(lVar7 + 0x18) == 0) {
code_r0x0244a6cc:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_04cad978;
        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x20));
        uVar9 = System_Int32__ToString_482d750(&iStack_54,0);
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto code_r0x0244a6cc;
        *(undefined8 *)(lVar7 + 0x28) = uVar9;
        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x28),uVar9);
        puVar4 = PTR_DAT_04cb99d8;
        if (*(uint *)(lVar7 + 0x18) < 3) goto code_r0x0244a6cc;
        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_04cb99d8;
        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30));
        uVar9 = System_Int32__ToString_482d750(&iStack_58,0);
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto code_r0x0244a6cc;
        *(undefined8 *)(lVar7 + 0x38) = uVar9;
        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x38),uVar9);
        if (*(uint *)(lVar7 + 0x18) < 5) goto code_r0x0244a6cc;
        *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)puVar4;
        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x40));
        uVar9 = System_Int32__ToString_482d750(&iStack_5c,0);
        if (*(uint *)(lVar7 + 0x18) < 6) goto code_r0x0244a6cc;
        *(undefined8 *)(lVar7 + 0x48) = uVar9;
        thunk_FUN_02134474();
        uVar9 = System_String__Concat_46d31f0(lVar7,0);
        Dino_BusSand_Cheat_AutoQa__Add_23430d8(lVar13,bVar5,*(undefined8 *)PTR_DAT_04cb9a30,uVar9);
        if (lStack_50 == 0) goto code_r0x0244a6c8;
        iVar1 = *(int *)(lStack_50 + 0x48);
        iStack_60 = *(int *)(lStack_50 + 0x4c);
        uStack_68 = CONCAT44(iVar1,(undefined4)uStack_68);
        if (((lStack_48 == 0) ||
            (Dino_BusSand_App_Meta_StreakRateFeature__WinOnce_224dee4(lStack_48,0,0), lStack_48 == 0
            )) || (Dino_BusSand_App_Meta_StreakRateFeature__AutoExecutePendingCommand_224e360
                             (lStack_48,lStack_50,1,0), lStack_50 == 0)) goto code_r0x0244a6c8;
        if (*(int *)(lStack_50 + 0x4c) == iStack_60) {
          bVar5 = *(int *)(lStack_50 + 0x48) != iVar1;
        }
        else {
          bVar5 = true;
        }
        lVar7 = FUN_02133068(*(undefined8 *)puVar3,8);
        if (lVar7 == 0) goto code_r0x0244a6c8;
        if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x0244a6cc;
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_04cb99f0;
        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x20));
        uVar9 = System_Int32__ToString_482d750(&iStack_60,0);
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto code_r0x0244a6cc;
        *(undefined8 *)(lVar7 + 0x28) = uVar9;
        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x28),uVar9);
        puVar3 = PTR_DAT_04cb1e48;
        if (*(uint *)(lVar7 + 0x18) < 3) goto code_r0x0244a6cc;
        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_04cb1e48;
        thunk_FUN_02134474();
        if (lStack_50 == 0) goto code_r0x0244a6c8;
        uVar9 = System_Int32__ToString_482d750(lStack_50 + 0x4c,0);
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto code_r0x0244a6cc;
        *(undefined8 *)(lVar7 + 0x38) = uVar9;
        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x38),uVar9);
        if (*(uint *)(lVar7 + 0x18) < 5) goto code_r0x0244a6cc;
        *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_04cb99e8;
        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x40));
        uVar9 = System_Int32__ToString_482d750((long)&uStack_68 + 4,0);
        if (*(uint *)(lVar7 + 0x18) < 6) goto code_r0x0244a6cc;
        *(undefined8 *)(lVar7 + 0x48) = uVar9;
        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x48),uVar9);
        if (*(uint *)(lVar7 + 0x18) < 7) goto code_r0x0244a6cc;
        *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)puVar3;
        thunk_FUN_02134474();
        if (lStack_50 == 0) goto code_r0x0244a6c8;
        uVar9 = System_Int32__ToString_482d750(lStack_50 + 0x48,0);
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffff8) == 0) goto code_r0x0244a6cc;
        *(undefined8 *)(lVar7 + 0x58) = uVar9;
        thunk_FUN_02134474();
        uVar9 = System_String__Concat_46d31f0(lVar7,0);
        Dino_BusSand_Cheat_AutoQa__Add_23430d8(lVar13,bVar5,*(undefined8 *)PTR_DAT_04cb9a20,uVar9);
        if (lStack_50 == 0) goto code_r0x0244a6c8;
        iVar2 = *(int *)(lStack_50 + 0x14);
        iVar1 = *(int *)(lStack_50 + 0x4c);
        uVar9 = System_Int32__ToString_482d750((int *)(lStack_50 + 0x14),0);
        puVar3 = PTR_DAT_04cb99c8;
        uVar9 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb99c8,uVar9,0);
        Dino_BusSand_Cheat_AutoQa__Add_23430d8
                  (lVar13,0 < iVar2,*(undefined8 *)PTR_DAT_04cb9a28,uVar9);
        if (((lStack_48 == 0) ||
            (Dino_BusSand_App_Meta_StreakRateFeature__LoseOnce_224dfc4(lStack_48,0), lStack_48 == 0)
            ) || (Dino_BusSand_App_Meta_StreakRateFeature__AutoExecutePendingCommand_224e360
                            (lStack_48,lStack_50,1,0), lStack_50 == 0)) goto code_r0x0244a6c8;
        if (*(int *)(lStack_50 + 0x14) == 0) {
          bVar5 = *(int *)(lStack_50 + 0x4c) == iVar1;
        }
        else {
          bVar5 = false;
        }
        uVar9 = System_Int32__ToString_482d750((int *)(lStack_50 + 0x14),0);
        if (lStack_50 == 0) goto code_r0x0244a6c8;
        uVar10 = System_Int32__ToString_482d750(lStack_50 + 0x4c,0);
        uVar9 = System_String__Concat_46d30e8
                          (*(undefined8 *)puVar3,uVar9,*(undefined8 *)PTR_DAT_04cb9a10,uVar10,0);
        uVar9 = Dino_BusSand_Cheat_AutoQa__Add_23430d8
                          (lVar13,bVar5,*(undefined8 *)PTR_DAT_04cb99e0,uVar9);
      }
      uVar9 = Dino_BusSand_Cheat_AutoQa__Fresh_23421dc(uVar9,*(int *)(param_1 + 0x28) + 1);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
      uVar15 = 6;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      Dino_BusSand_App_Meta_SystemOpen__MarkGuided_224333c(3,0);
      lVar7 = Dino_BusSand_App_Meta_StreakRateFeature__get_I_224b6e0(0);
      if (lVar7 != 0) {
        lVar7 = Dino_BusSand_App_Meta_StreakRateFeature__get_I_224b6e0(0);
        if (lVar7 == 0) goto code_r0x0244a6c8;
        lVar7 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(lVar7,0);
        if (lVar7 == 0) {
          lVar7 = Dino_BusSand_App_Meta_StreakRateFeature__get_I_224b6e0();
          if (lVar7 == 0) goto code_r0x0244a6c8;
          Dino_BusSand_App_Meta_StreakRateFeature__WinOnce_224dee4(lVar7,0,0);
        }
      }
      if (lVar13 == 0) goto code_r0x0244a6c8;
      uVar9 = Dino_BusSand_Cheat_AutoQa__Play_2342540(lVar13,*(int *)(param_1 + 0x28) + 1);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
      uVar15 = 7;
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
      if (lVar7 == 0) goto code_r0x0244a6c8;
      Dino_BusSand_App_Gameplay_GameplayController__ForceWin_229fb40(lVar7,0);
      puVar3 = PTR_DAT_04cb9778;
      lVar7 = *(long *)PTR_DAT_04cb9778;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      puVar12 = *(undefined8 **)(lVar7 + 0xb8);
      lVar14 = puVar12[0x2b];
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar9 = *puVar12;
        lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar14,uVar9,*(undefined8 *)PTR_DAT_04cb9980,0);
        lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
        *(long *)(lVar7 + 0x158) = lVar14;
        thunk_FUN_02134474(lVar7 + 0x158,lVar14);
      }
      if (lVar13 == 0) goto code_r0x0244a6c8;
      uVar9 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x41200000,lVar13,lVar14);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
      uVar15 = 8;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
      if (lVar7 == 0) goto code_r0x0244a6c8;
      lVar7 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                        (lVar7,*(undefined8 *)PTR_DAT_04cb99b0);
      if (lVar7 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar7,*(undefined8 *)PTR_DAT_04caf588,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Cheat_AutoQa__Click_2342d10(uVar9);
      puVar3 = PTR_DAT_04cb9778;
      lVar7 = *(long *)PTR_DAT_04cb9778;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      puVar12 = *(undefined8 **)(lVar7 + 0xb8);
      lVar14 = puVar12[0x2c];
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar9 = *puVar12;
        lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar14,uVar9,*(undefined8 *)PTR_DAT_04cb9988,0);
        lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
        *(long *)(lVar7 + 0x160) = lVar14;
        thunk_FUN_02134474(lVar7 + 0x160,lVar14);
      }
      if (lVar13 == 0) goto code_r0x0244a6c8;
      uVar9 = Dino_BusSand_Cheat_AutoQa__Settle_23425e4(0x41f00000,lVar13,lVar14,0);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
      uVar15 = 9;
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar13 == 0) goto code_r0x0244a6c8;
      Dino_BusSand_Cheat_AutoQa__Add_23430d8
                (lVar13,*(undefined1 *)(lVar13 + 0x28),*(undefined8 *)PTR_DAT_04cb9a38,
                 *(undefined8 *)PTR_DAT_04ca9c30);
      uVar15 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      puVar3 = PTR_DAT_04cb9778;
      *(undefined4 *)(param_1 + 0x2c) = uVar15;
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      puVar12 = *(undefined8 **)(lVar7 + 0xb8);
      lVar14 = puVar12[0x2d];
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar9 = *puVar12;
        lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar14,uVar9,*(undefined8 *)PTR_DAT_04cb9990,0);
        lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
        *(long *)(lVar7 + 0x168) = lVar14;
        thunk_FUN_02134474(lVar7 + 0x168,lVar14);
      }
      uVar9 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x41200000,lVar13,lVar14);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
      uVar15 = 10;
      break;
    case 10:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar13 == 0) goto code_r0x0244a6c8;
      uVar11 = *(undefined1 *)(lVar13 + 0x28);
      fVar16 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      uStack_68 = CONCAT44(uStack_68._4_4_,fVar16 - *(float *)(param_1 + 0x2c));
      uVar9 = System_Single__ToString_48426d8(&uStack_68,*(undefined8 *)PTR_DAT_04cabd48,0);
      uVar9 = System_String__Concat_46c82e0(uVar9,*(undefined8 *)PTR_DAT_04cb9710,0);
      Dino_BusSand_Cheat_AutoQa__Add_23430d8(lVar13,uVar11,*(undefined8 *)PTR_DAT_04cb99f8,uVar9);
      puVar3 = PTR_DAT_04cb9778;
      lVar7 = *(long *)PTR_DAT_04cb9778;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      puVar12 = *(undefined8 **)(lVar7 + 0xb8);
      lVar14 = puVar12[0x2e];
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar9 = *puVar12;
        lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar14,uVar9,*(undefined8 *)PTR_DAT_04cb9998,0);
        lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
        *(long *)(lVar7 + 0x170) = lVar14;
        thunk_FUN_02134474(lVar7 + 0x170,lVar14);
      }
      uVar9 = Dino_BusSand_Cheat_AutoQa__Settle_23425e4(0x41700000,lVar13,lVar14,0);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
      uVar15 = 0xb;
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar4;
      }
      puVar12 = *(undefined8 **)(lVar7 + 0xb8);
      lVar14 = puVar12[0x2f];
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar9 = *puVar12;
        lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar14,uVar9,*(undefined8 *)PTR_DAT_04cb99a0,0);
        lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
        *(long *)(lVar7 + 0x178) = lVar14;
        thunk_FUN_02134474(lVar7 + 0x178,lVar14);
      }
      if (lVar13 == 0) goto code_r0x0244a6c8;
      uVar9 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x40800000,lVar13,lVar14);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
      uVar15 = 0xc;
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar13 == 0) goto code_r0x0244a6c8;
      uVar11 = *(undefined1 *)(lVar13 + 0x28);
      puVar12 = (undefined8 *)PTR_DAT_04cb9a00;
code_r0x0244a0b4:
      Dino_BusSand_Cheat_AutoQa__Add_23430d8(lVar13,uVar11,*puVar12,*(undefined8 *)PTR_DAT_04ca9c30)
      ;
      goto LAB_0244a0c0;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar15;
    uVar9 = 1;
  }
  else {
LAB_0244a0c0:
    uVar9 = 0;
  }
  return uVar9;
}

