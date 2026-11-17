/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$RefreshTime
void Dino_BusSand_App_Meta_BattleRoyaleCore__RefreshTime (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$RefreshTime
   void Dino_BusSand_App_Meta_BattleRoyaleCore__RefreshTime
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore__RefreshTime_2221ee0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  undefined8 uStack_18;
  
  if ((bRam0000000004f9bdc4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2180);
    bRam0000000004f9bdc4 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_18 = 0;
  uStack_24 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  if (lVar5 == 0) goto LAB_023220dc;
  if (*(int *)(lVar5 + 0x48) == 4) {
    uVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsInColdTimeStamp_222123c(param_1);
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_023220dc;
      goto LAB_02321f44;
    }
LAB_02321fc0:
    Dino_BusSand_App_Meta_BattleRoyaleCore__ChangeState_22220e0(param_1,0);
  }
  else {
LAB_02321f44:
    if (*(int *)(lVar5 + 0x48) == 5) {
      uVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsInColdTimeStamp_222123c(param_1);
      if ((uVar2 & 1) == 0) goto LAB_02321fc0;
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_023220dc;
    }
    if (*(int *)(lVar5 + 0x48) == 2) {
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 == 0) goto LAB_023220dc;
      lVar5 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_023220dc;
      if (*(long *)(lVar6 + 0x30) <= lVar5) {
        iVar1 = *(int *)(lVar6 + 0x38);
        lVar5 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
        if (lVar5 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(lVar5 + 0x14);
        }
        if (iVar1 < iVar4) goto LAB_02321fc0;
      }
    }
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    lVar5 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
    ;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x40);
      if (lVar5 / 86400000 == lVar7) {
        return;
      }
      *(long *)(lVar6 + 0x40) = lVar5 / 86400000;
      if (lVar7 != 0) {
        *(undefined4 *)(lVar6 + 0x38) = 0;
        *(undefined4 *)(lVar6 + 0x4c) = 0;
        *(undefined4 *)(lVar6 + 0x14) = 0;
        if ((*(uint *)(lVar6 + 0x48) < 7) &&
           ((1 << (ulong)(*(uint *)(lVar6 + 0x48) & 0x1f) & 0x4cU) != 0)) {
          *(undefined4 *)(lVar6 + 0x48) = 0;
        }
        *(undefined1 *)(lVar6 + 0x78) = 1;
      }
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 != 0) {
        uVar3 = (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        Dino_BusSand_App_Meta_BattleYachtPeriods__Current_2220824
                  (*(undefined8 *)PTR_DAT_04cb2180,1,uVar3,&uStack_24,&uStack_30,&uStack_18,
                   &uStack_38);
        if (*(long *)(param_1 + 0x10) != 0) {
          lVar5 = *(long *)(param_1 + 0x28);
          *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70) = uStack_18;
          if (lVar5 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x023220c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
          return;
        }
      }
    }
  }
LAB_023220dc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

