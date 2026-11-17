/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$IsPackDisabled
bool Dino_BusSand_App_Meta_GiftPackFeature__IsPackDisabled (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$IsPackDisabled
   bool Dino_BusSand_App_Meta_GiftPackFeature__IsPackDisabled
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t id, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_GiftPackFeature__IsPackDisabled_2234ee8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((bRam0000000004f9be9d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9be9d = 1;
  }
  lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
  puVar2 = PTR_DAT_04caec48;
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = *(long *)PTR_DAT_04caec48;
    if (*(int *)(lVar4 + 0x54) == 6) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      if (*(char *)(*(long *)(lVar5 + 0xb8) + 1) == '\0') {
        uVar3 = 1;
        goto LAB_02334fc8;
      }
    }
    puVar2 = PTR_DAT_04cac458;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = 0xc;
    if (param_2 != 0x3ef) {
      uVar6 = 6;
    }
    uVar1 = 9;
    if (param_2 != 0x3ed) {
      uVar1 = uVar6;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(uVar1,0);
    uVar3 = uVar3 ^ 1;
  }
LAB_02334fc8:
  return uVar3 & 1;
}

