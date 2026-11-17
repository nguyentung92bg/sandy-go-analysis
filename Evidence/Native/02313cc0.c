/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapTimeStart
void Dino_BusSand_App_Meta_GameTracking__IapTimeStart (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapTimeStart
   void Dino_BusSand_App_Meta_GameTracking__IapTimeStart (const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__IapTimeStart_2213cc0(void)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd4b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    bRam0000000004f9bd4b = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  pcVar3 = *(char **)(lVar2 + 0xb8);
  if (*pcVar3 != '\0') {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
                    /* try { // try from 02313d20 to 02413d27 has its CatchHandler @ 02313e54 */
      pcVar3 = *(char **)(*(long *)puVar1 + 0xb8);
    }
    if (*(float *)(pcVar3 + 0x3c) < 0.0) {
      fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar2 = *(long *)puVar1;
      }
      lVar4 = *(long *)(lVar2 + 0xb8);
      fVar6 = *(float *)(lVar4 + 0x38);
                    /* try { // try from 02313d60 to 02413d6b has its CatchHandler @ 02313e6c */
      if (0.0 <= fVar6) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* try { // try from 02313d6c to 02413e2b has its CatchHandler @ 023139ac */
          thunk_FUN_0218fdac();
          lVar2 = *(long *)puVar1;
          lVar4 = *(long *)(lVar2 + 0xb8);
          fVar6 = *(float *)(lVar4 + 0x38);
        }
        *(undefined4 *)(lVar4 + 0x38) = 0xbf800000;
        *(float *)(lVar4 + 0x30) = *(float *)(lVar4 + 0x30) + (fVar5 - fVar6);
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar2 = *(long *)puVar1;
      }
      *(float *)(*(long *)(lVar2 + 0xb8) + 0x3c) = fVar5;
    }
  }
  return;
}

