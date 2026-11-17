/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ExternalUi
void Dino_BusSand_App_Meta_GameTracking__ExternalUi (bool open, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ExternalUi
   void Dino_BusSand_App_Meta_GameTracking__ExternalUi (bool open, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd50 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bd50 = 1;
  }
  puVar2 = PTR_DAT_04cac498;
  fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  uVar5 = 2;
  if ((param_1 & 1) == 0) {
    uVar5 = 3;
  }
                    /* catch() { ... } // from try @ 02314ab4 with catch @ 023148d8 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_JourneyTracking__UiMark_22149d0(uVar5,0,0,0);
  lVar3 = *(long *)puVar2;
  if ((param_1 & 1) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(lVar3 + 0xb8);
    fVar7 = *(float *)(lVar4 + 0x38);
    *(float *)(lVar4 + 0x60) = fVar6;
    if (0.0 <= fVar7) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
        fVar7 = *(float *)(lVar4 + 0x38);
      }
      *(undefined4 *)(lVar4 + 0x38) = 0xbf800000;
      *(float *)(lVar4 + 0x30) = *(float *)(lVar4 + 0x30) + (fVar6 - fVar7);
    }
  }
  else {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(lVar3 + 0xb8);
    if (*(float *)(lVar4 + 0x38) < 0.0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
        lVar4 = *(long *)(lVar3 + 0xb8);
      }
      if (*(float *)(lVar4 + 0x3c) < 0.0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar2;
          lVar4 = *(long *)(lVar3 + 0xb8);
        }
        *(float *)(lVar4 + 0x38) = fVar6;
      }
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x60) = fVar6;
  }
  return;
}

