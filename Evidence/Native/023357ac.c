/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$CurrentTheme
Dino_BusSand_App_Meta_GiftPackTheme_o* Dino_BusSand_App_Meta_GiftPackFeature__CurrentTheme (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$CurrentTheme
   Dino_BusSand_App_Meta_GiftPackTheme_o* Dino_BusSand_App_Meta_GiftPackFeature__CurrentTheme
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_GiftPackFeature__CurrentTheme_22357ac(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((bRam0000000004f9bea2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3400);
    FUN_02132f7c(PTR_DAT_04cb3408);
    bRam0000000004f9bea2 = 1;
  }
  uVar1 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
  lVar2 = Dino_BusSand_App_Meta_GiftPackFeature__Themes_2235350(param_1,uVar1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
      return 0;
    }
    lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
    if (lVar3 != 0) {
      uVar4 = *(uint *)(lVar3 + 0x88);
      if (((int)uVar4 < 0) || (*(int *)(lVar2 + 0x18) <= (int)uVar4)) {
        uVar4 = 0;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_48509f0
                  (0,uVar4,*(undefined8 *)PTR_DAT_04cb3408);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if (uVar4 < *(uint *)(lVar2 + 0x18)) {
          return *(undefined8 *)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

