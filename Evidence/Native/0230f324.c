/* IL2CPP: Dino.BusSand.App.Meta.Segments$$get_LifeNow
int32_t Dino_BusSand_App_Meta_Segments__get_LifeNow (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Segments$$get_LifeNow
   int32_t Dino_BusSand_App_Meta_Segments__get_LifeNow (const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_Segments__get_LifeNow_220f324(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cacfe0;
  if ((bRam0000000004f9bd2e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfe0);
    bRam0000000004f9bd2e = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined4 **)(lVar2 + 0xb8);
}

