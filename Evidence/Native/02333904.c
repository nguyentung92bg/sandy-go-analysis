/* IL2CPP: Dino.BusSand.App.Meta.GoldenGiftState$$SyncPassLevelCount
void Dino_BusSand_App_Meta_GoldenGiftState__SyncPassLevelCount (Dino_BusSand_App_Meta_GoldenGiftState_o* __this, int32_t currentLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GoldenGiftState$$SyncPassLevelCount
   void Dino_BusSand_App_Meta_GoldenGiftState__SyncPassLevelCount
   (Dino_BusSand_App_Meta_GoldenGiftState_o* __this, int32_t currentLevel, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_GoldenGiftState__SyncPassLevelCount_2233904(long param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((bRam0000000004f9be8f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9be8f = 1;
  }
  puVar1 = PTR_DAT_04caa200;
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 < 1) {
    iVar3 = param_2 - *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x38) = iVar3;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = System_Math__Max_4830fc8(0,param_2 - iVar3,0);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  return;
}

