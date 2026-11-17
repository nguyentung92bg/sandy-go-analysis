/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$Covers
bool Dino_BusSand_App_Meta_Monetization__Covers (int32_t shopId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$Covers
   bool Dino_BusSand_App_Meta_Monetization__Covers (int32_t shopId, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_Monetization__Covers_2265c6c(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  if ((bRam0000000004f9c057 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb2130);
    FUN_02132f7c(PTR_DAT_04cb45f8);
    FUN_02132f7c(PTR_DAT_04cb4600);
    FUN_02132f7c(PTR_DAT_04cb1f80);
    bRam0000000004f9c057 = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_Monetization__BoosterByShop_2265914(param_1);
  if (lVar2 != 0) {
    uVar3 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar2,*(undefined8 *)PTR_DAT_04cb1f80,0);
    iVar1 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar3,0,0);
    if (0 < iVar1) {
      uVar3 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar2,*(undefined8 *)PTR_DAT_04cb2130,0);
      iVar1 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar3,0,0);
      if (0 < iVar1) {
        return 1;
      }
    }
    uVar3 = System_Int32__ToString_482d750(&uStack_14,0);
    uVar3 = System_String__Concat_46d2b84
                      (*(undefined8 *)PTR_DAT_04cb4600,uVar3,*(undefined8 *)PTR_DAT_04cb45f8,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
    }
    UnityEngine_Debug__LogError_4361614(uVar3,0);
  }
  return 0;
}

