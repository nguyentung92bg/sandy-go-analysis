/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$HaveValidGroup
bool Dino_BusSand_App_Meta_BattleRoyaleCore__HaveValidGroup (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$HaveValidGroup
   bool Dino_BusSand_App_Meta_BattleRoyaleCore__HaveValidGroup
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_BattleRoyaleCore__HaveValidGroup_2220f34(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_14;
  
  if ((bRam0000000004f9bdbe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2180);
    bRam0000000004f9bdbe = 1;
  }
  puVar1 = PTR_DAT_04cb2180;
  lVar4 = *(long *)(param_1 + 0x20);
  uStack_14 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  if (lVar4 != 0) {
    uVar3 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
    ;
    uVar2 = Dino_BusSand_App_Meta_BattleYachtPeriods__Current_2220824
                      (*(undefined8 *)puVar1,1,uVar3,&uStack_14,&uStack_28,&uStack_30,&uStack_38);
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

