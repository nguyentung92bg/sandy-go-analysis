/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$NeedShowGuide
bool Dino_BusSand_App_Meta_SystemOpenFeature__NeedShowGuide (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$NeedShowGuide
   bool Dino_BusSand_App_Meta_SystemOpenFeature__NeedShowGuide (int32_t id, const MethodInfo*
   method); */

uint Dino_BusSand_App_Meta_SystemOpenFeature__NeedShowGuide_2252820(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04cb3d00;
  if ((bRam0000000004f9bfdd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3d00);
    FUN_02132f7c(PTR_DAT_04cb3d08);
    bRam0000000004f9bfdd = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_SystemOpenFeature__Row_22527b0(param_1);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar5 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar4,*(undefined8 *)PTR_DAT_04cb3d08,0);
    iVar2 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar5,0,0);
    uVar3 = 0;
    if (iVar2 == 1) {
      uVar3 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(param_1);
      uVar3 = uVar3 ^ 1;
    }
  }
  return uVar3 & 1;
}

