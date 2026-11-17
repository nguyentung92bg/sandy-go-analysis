/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$StartNewRound
bool Dino_BusSand_App_Meta_BattleRoyaleCore__StartNewRound (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$StartNewRound
   bool Dino_BusSand_App_Meta_BattleRoyaleCore__StartNewRound
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_BattleRoyaleCore__StartNewRound_2222184(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  uint uStack_34;
  
  if ((bRam0000000004f9bdc5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04cb2180);
    bRam0000000004f9bdc5 = 1;
  }
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  Dino_BusSand_App_Meta_BattleRoyaleCore__ResetData_2222470(param_1);
  puVar3 = PTR_DAT_04cb2180;
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 != 0) {
    uVar6 = (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28))
    ;
    uVar7 = Dino_BusSand_App_Meta_BattleYachtPeriods__Current_2220824
                      (*(undefined8 *)puVar3,1,uVar6,&uStack_34,&uStack_40,&uStack_48,&lStack_50);
    if ((((uVar7 & 1) == 0) || (uStack_34 == 0)) ||
       (lVar9 = Dino_BusSand_App_Meta_BattleRoyaleConfig__Load_2220700(), lVar9 == 0)) {
      return 0;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24) = *(undefined4 *)(lVar9 + 0x10);
      Dino_BusSand_App_Meta_BattleRoyaleRules__ClearGroup_22224c4();
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      iVar1 = *(int *)(lVar9 + 0x18);
      uVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_HeadIds_22202e0(param_1);
      iVar14 = iVar1;
      if (iVar1 < 0) {
        iVar14 = iVar1 + 1;
      }
      Dino_BusSand_App_Meta_BattleRoyaleRules__CreateGroup_222257c
                (uVar11,iVar1 + -1,iVar14 >> 1,iVar14 >> 1,uVar6,*(undefined8 *)(param_1 + 0x18));
      lVar13 = *(long *)(param_1 + 0x10);
      if (lVar13 != 0) {
        *(undefined4 *)(lVar13 + 0x20) = 0;
        *(undefined8 *)(lVar13 + 0x28) = uStack_40;
        *(undefined8 *)(lVar13 + 0x30) = uStack_48;
        *(undefined4 *)(lVar13 + 0x48) = 1;
        uVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Personas_221f600(param_1);
        uVar4 = Dino_BusSand_App_Meta_BattleRoyaleRules__PickPersona_2222908
                          (uVar6,*(undefined4 *)(lVar9 + 0x28),*(undefined8 *)(param_1 + 0x18));
        lVar12 = *(long *)(param_1 + 0x10);
        *(undefined4 *)(lVar13 + 100) = uVar4;
        if (lVar12 != 0) {
          lVar13 = *(long *)(lVar12 + 0x68);
          *(undefined8 *)(lVar12 + 0x18) = 0;
          *(undefined4 *)(lVar12 + 0x50) = 0;
          *(undefined4 *)(lVar12 + 0x38) = 0;
          if (lVar13 != 0) {
            iVar14 = *(int *)(lVar9 + 0x1c);
            *(undefined4 *)(lVar13 + 0x18) = 0;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            puVar3 = PTR_DAT_04caa160;
            if (0 < iVar14) {
              iVar14 = 0;
              do {
                if ((*(long *)(param_1 + 0x10) == 0) ||
                   (plVar8 = *(long **)(param_1 + 0x18), plVar8 == (long *)0x0)) goto LAB_0232246c;
                lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x68);
                uVar4 = (**(code **)(*plVar8 + 0x198))(plVar8,0,4,*(undefined8 *)(*plVar8 + 0x1a0));
                if (lVar13 == 0) goto LAB_0232246c;
                lVar12 = *(long *)(lVar13 + 0x10);
                lVar10 = *(long *)puVar3;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar12 == 0) goto LAB_0232246c;
                uVar2 = *(uint *)(lVar13 + 0x18);
                if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                  *(undefined4 *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = uVar4;
                }
                else {
                  System_Collections_Generic_List_int___AddWithResize_3a2c06c
                            (lVar13,uVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < *(int *)(lVar9 + 0x1c));
              lVar12 = *(long *)(param_1 + 0x10);
              if (lVar12 == 0) goto LAB_0232246c;
            }
            lVar9 = *(long *)(param_1 + 0x20);
            *(long *)(lVar12 + 0x70) = lStack_50 + 1000;
            if (lVar9 != 0) {
              lVar9 = (**(code **)(lVar9 + 0x18))
                                (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
              lVar13 = *(long *)(param_1 + 0x10);
              *(long *)(lVar12 + 0x40) = lVar9 / 86400000;
              if (lVar13 != 0) {
                iVar14 = *(int *)(lVar13 + 0x7c) + 1;
                *(int *)(lVar13 + 0x7c) = iVar14;
                lVar9 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
                if (lVar9 == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = *(undefined4 *)(lVar9 + 0x18);
                }
                uVar5 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_RemainDurationSeconds_222127c
                                  (param_1);
                Dino_BusSand_App_Meta_BattleRoyaleTrack__StageAdvance_22250c0
                          (iVar14,0,0,0,uVar4,uVar4,0,uVar5,0);
                lVar9 = *(long *)(param_1 + 0x28);
                if (lVar9 != 0) {
                  (**(code **)(lVar9 + 0x18))
                            (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
                }
                return 1;
              }
            }
          }
        }
      }
    }
  }
LAB_0232246c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

