/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CollectHallCommands
void Dino_BusSand_App_Meta_StreakRateFeature__CollectHallCommands (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_HallQueue_o* q, bool fromGame, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CollectHallCommands
   void Dino_BusSand_App_Meta_StreakRateFeature__CollectHallCommands
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_HallQueue_o* q, bool
   fromGame, const MethodInfo* method); */

void Dino_BusSand_App_Meta_StreakRateFeature__CollectHallCommands_22505f0
               (undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9bfc1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2cb8);
    FUN_02132f7c(PTR_DAT_04cb3c18);
    FUN_02132f7c(PTR_DAT_04cb3c20);
    FUN_02132f7c(PTR_DAT_04cb3c28);
    FUN_02132f7c(PTR_DAT_04cb3c30);
    bRam0000000004f9bfc1 = 1;
  }
  uVar5 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(3);
  if ((uVar5 & 1) != 0) {
    lVar6 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
    if ((((param_3 & 1) != 0) && (lVar6 != 0)) && (*(char *)(lVar6 + 0x54) != '\0')) {
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2cb8);
      System_Func_object____ctor_379de3c(uVar7,param_1,*(undefined8 *)PTR_DAT_04cb3c20,0);
      if (param_2 == 0) goto LAB_02350754;
      Dino_BusSand_App_Meta_HallQueue__Add_222ca74
                (param_2,9,*(undefined8 *)PTR_DAT_04cb3c30,uVar7,0);
    }
    uVar5 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(3);
    if ((((uVar5 & 1) != 0) && (lVar6 != 0)) && (*(char *)(lVar6 + 0x5c) != '\0')) {
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2cb8);
      System_Func_object____ctor_379de3c(uVar7,param_1,*(undefined8 *)PTR_DAT_04cb3c18,0);
      if (param_2 != 0) {
        uVar8 = *(undefined8 *)PTR_DAT_04cb3c28;
        if ((bRam0000000004f9bef9 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb2e70);
          FUN_02132f7c(PTR_DAT_04cb2e78);
          FUN_02132f7c(PTR_DAT_04cb2e80);
          FUN_02132f7c(PTR_DAT_04cb2e88);
          FUN_02132f7c(PTR_DAT_04cb2e90);
          bRam0000000004f9bef9 = 1;
        }
        puVar4 = PTR_DAT_04cb2e88;
        puVar3 = PTR_DAT_04cb2e78;
        puVar2 = PTR_DAT_04cb2e70;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        if (*(long *)(param_2 + 0x10) != 0) {
          System_Collections_Generic_List_HallQueue_Cmd___GetEnumerator_3b3e3ac
                    (&uStack_c0,*(long *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_04cb2e90);
          uStack_70 = 0;
          puStack_68 = &uStack_c0;
          while (uVar5 = System_Collections_Generic_List_Enumerator_HallQueue_Cmd___MoveNext_3611124
                                   (&uStack_c0,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
            uVar5 = System_String__op_Equality_46d1108(uStack_a8,uVar8,0);
            if ((uVar5 & 1) != 0) {
              System_Collections_Generic_List_Enumerator_HallQueue_Cmd___Dispose_3611120
                        (&uStack_c0,*(undefined8 *)puVar2);
              return;
            }
          }
          System_Collections_Generic_List_Enumerator_HallQueue_Cmd___Dispose_3611120
                    (&uStack_c0,*(undefined8 *)puVar2);
          lVar6 = *(long *)(param_2 + 0x10);
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_e0 = 0xc;
          uStack_d8 = uVar8;
          thunk_FUN_02134474((ulong)&uStack_e0 | 8,uVar8);
          uStack_d0 = uVar7;
          thunk_FUN_02134474(&uStack_d0,uVar7);
          uStack_c8 = CONCAT44(uStack_c8._4_4_,*(int *)(param_2 + 0x18));
          *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
          if (lVar6 != 0) {
            lVar9 = *(long *)(lVar6 + 0x10);
            lVar10 = *(long *)puVar4;
            uStack_88 = uStack_d8;
            uStack_90 = uStack_e0;
            uStack_78 = uStack_c8;
            uStack_80 = uStack_d0;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                lVar9 = lVar9 + (long)(int)uVar1 * 0x20;
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar9 + 0x28) = uStack_d8;
                *(undefined8 *)(lVar9 + 0x20) = uStack_e0;
                *(undefined8 *)(lVar9 + 0x38) = uStack_c8;
                *(undefined8 *)(lVar9 + 0x30) = uStack_d0;
                thunk_FUN_02134474(lVar9 + 0x28,0);
                return;
              }
              puStack_68 = (undefined8 *)uStack_d8;
              uStack_70 = uStack_e0;
              uStack_58 = uStack_c8;
              uStack_60 = uStack_d0;
              System_Collections_Generic_List_HallQueue_Cmd___AddWithResize_3b3d888
                        (lVar6,&uStack_70,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
LAB_02350754:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

