/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ExternalUiRecently
bool Dino_BusSand_App_Meta_GameTracking__ExternalUiRecently (float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ExternalUiRecently
   bool Dino_BusSand_App_Meta_GameTracking__ExternalUiRecently (float seconds, const MethodInfo*
   method); */

bool Dino_BusSand_App_Meta_GameTracking__ExternalUiRecently_221505c(float param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  puVar1 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd53 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    bRam0000000004f9bd53 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar3 = *(long *)(lVar2 + 0xb8);
  if (*(float *)(lVar3 + 0x38) < 0.0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    if (*(float *)(lVar3 + 0x3c) < 0.0) {
      fVar4 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar2 = *(long *)puVar1;
      }
      return fVar4 - *(float *)(*(long *)(lVar2 + 0xb8) + 0x60) < param_1;
    }
  }
  return true;
}

