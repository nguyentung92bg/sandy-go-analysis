/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$AdCount
int32_t Dino_BusSand_App_Meta_Monetization__AdCount (int32_t shopId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$AdCount
   int32_t Dino_BusSand_App_Meta_Monetization__AdCount (int32_t shopId, const MethodInfo* method);
    */

int Dino_BusSand_App_Meta_Monetization__AdCount_2265f2c(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f9c05b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb1f38);
    bRam0000000004f9c05b = 1;
  }
  lVar4 = Dino_BusSand_App_Meta_Monetization__BoosterByShop_2265914(param_1);
  puVar2 = PTR_DAT_04caa200;
  if (lVar4 != 0) {
    uVar5 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar4,*(undefined8 *)PTR_DAT_04cb1f38,0);
    iVar3 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar5,0,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    iVar1 = 1;
    if (0 < iVar3) {
      iVar1 = iVar3;
    }
    return iVar1;
  }
  return 1;
}

