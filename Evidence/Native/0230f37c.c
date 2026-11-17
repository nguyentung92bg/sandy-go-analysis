/* IL2CPP: Dino.BusSand.App.Meta.Segments$$set_LifeNow
void Dino_BusSand_App_Meta_Segments__set_LifeNow (int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Segments$$set_LifeNow
   void Dino_BusSand_App_Meta_Segments__set_LifeNow (int32_t value, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Segments__set_LifeNow_220f37c(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cacfe0;
  if ((bRam0000000004f9bd2f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfe0);
    bRam0000000004f9bd2f = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  **(undefined4 **)(lVar2 + 0xb8) = param_1;
  return;
}

