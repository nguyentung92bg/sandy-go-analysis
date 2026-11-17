/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$SetFirstForceShow
void Dino_BusSand_App_Meta_NoAdsFeature__SetFirstForceShow (Dino_BusSand_App_Meta_NoAdsFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$SetFirstForceShow
   void Dino_BusSand_App_Meta_NoAdsFeature__SetFirstForceShow (Dino_BusSand_App_Meta_NoAdsFeature_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_NoAdsFeature__SetFirstForceShow_2243b8c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_28;
  
  puVar3 = PTR_DAT_04cb3918;
  if ((bRam0000000004f9bf29 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa468);
    FUN_02132f7c(PTR_DAT_04cb3920);
    FUN_02132f7c(PTR_DAT_04cb3918);
    FUN_02132f7c(PTR_DAT_04cb2748);
    bRam0000000004f9bf29 = 1;
  }
  uStack_28 = 0;
  lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar3)
  ;
  puVar2 = PTR_DAT_04cb2748;
  puVar1 = PTR_DAT_04caa468;
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)puVar3;
    *(undefined1 *)(lVar4 + 0x10) = 1;
    lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar5);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uStack_28 = System_DateTime__get_Now_48114b8(0);
    uVar5 = System_DateTime__ToString_4812530(&uStack_28,*(undefined8 *)puVar2,0);
    puVar3 = PTR_DAT_04cb3920;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x18) = uVar5;
      thunk_FUN_02134474((undefined8 *)(lVar4 + 0x18),uVar5);
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

