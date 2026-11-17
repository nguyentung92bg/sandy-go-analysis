/* IL2CPP: Dino.BusSand.RenderQuality$$SetTier
void Dino_BusSand_RenderQuality__SetTier (int32_t tier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$SetTier
   void Dino_BusSand_RenderQuality__SetTier (int32_t tier, const MethodInfo* method); */

void Dino_BusSand_RenderQuality__SetTier_238ac68(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb27f8;
  if ((bRam0000000004f9c897 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb27f8);
    bRam0000000004f9c897 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_RenderQuality__ForceTier_238ac04(param_1);
  lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0248acd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

