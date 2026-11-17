/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$get_CurLevel
int32_t Dino_BusSand_App_Meta_GiftPackFeature__get_CurLevel (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$get_CurLevel
   int32_t Dino_BusSand_App_Meta_GiftPackFeature__get_CurLevel (const MethodInfo* method); */

int Dino_BusSand_App_Meta_GiftPackFeature__get_CurLevel_22352c4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9be9f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9be9f = 1;
  }
  puVar2 = PTR_DAT_04caa200;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar4 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  iVar1 = 1;
  if (0 < iVar4) {
    iVar1 = iVar4;
  }
  return iVar1;
}

