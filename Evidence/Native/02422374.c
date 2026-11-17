/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_RoyaleOn
bool Dino_BusSand_App_UI_LiveOpsHome__get_RoyaleOn (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_RoyaleOn
   bool Dino_BusSand_App_UI_LiveOpsHome__get_RoyaleOn (const MethodInfo* method); */

bool Dino_BusSand_App_UI_LiveOpsHome__get_RoyaleOn_2322374(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  puVar3 = PTR_DAT_04cac668;
  if ((bRam0000000004f9c5b9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04caf7b8);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9c5b9 = 1;
  }
  puVar4 = PTR_DAT_04caf7b8;
  puVar2 = PTR_DAT_04cac458;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(10,0);
  if ((lVar5 != 0) && ((uVar6 & 1) != 0)) {
    uVar6 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(lVar5,0);
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar6;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar6;
    lVar5 = *(long *)(uVar6 + 0x10);
    if (lVar5 != 0) {
      if ((*(long *)(lVar5 + 0x28) < 1) || (*(long *)(lVar5 + 0x30) < 1)) {
        return false;
      }
      lVar5 = *(long *)(uVar6 + 0x20);
      auVar7 = auVar1;
      if (lVar5 != 0) {
        auVar7 = (**(code **)(lVar5 + 0x18))
                           (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        if (*(long *)(uVar6 + 0x10) != 0) {
          if (auVar7._0_8_ < *(long *)(*(long *)(uVar6 + 0x10) + 0x28)) {
            return false;
          }
          lVar5 = *(long *)(uVar6 + 0x20);
          if (lVar5 != 0) {
            auVar7 = (**(code **)(lVar5 + 0x18))
                               (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
            if (*(long *)(uVar6 + 0x10) != 0) {
              return auVar7._0_8_ <= *(long *)(*(long *)(uVar6 + 0x10) + 0x30);
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224(auVar7._0_8_,auVar7._8_8_);
  }
  return false;
}

