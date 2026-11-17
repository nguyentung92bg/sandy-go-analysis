/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$get_ExternalNow
bool Dino_BusSand_App_Meta_GameTracking__get_ExternalNow (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$get_ExternalNow
   bool Dino_BusSand_App_Meta_GameTracking__get_ExternalNow (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_GameTracking__get_ExternalNow_2214ba4(void)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  puVar1 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd51 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    bRam0000000004f9bd51 = 1;
  }
  fVar3 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  fVar4 = *(float *)(*(long *)(lVar2 + 0xb8) + 0x38);
  if (0.0 <= fVar4) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
      fVar4 = *(float *)(*(long *)(lVar2 + 0xb8) + 0x38);
    }
    if (fVar3 - fVar4 < 180.0) {
      return true;
    }
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return fVar3 - *(float *)(*(long *)(lVar2 + 0xb8) + 0x60) < 2.0;
}

