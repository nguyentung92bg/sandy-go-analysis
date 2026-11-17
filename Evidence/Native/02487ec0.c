/* IL2CPP: Dino.BusSand.GameAudio.<CloseCue>d__84$$MoveNext
bool Dino_BusSand_GameAudio__CloseCue_d__84__MoveNext (Dino_BusSand_GameAudio__CloseCue_d__84_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<CloseCue>d__84$$MoveNext
   bool Dino_BusSand_GameAudio__CloseCue_d__84__MoveNext (Dino_BusSand_GameAudio__CloseCue_d__84_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_GameAudio__CloseCue_d__84__MoveNext_2387ec0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f9c87d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cbb3f8);
    bRam0000000004f9c87d = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20328,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(float *)(*(long *)(param_1 + 0x20) + 0x130) < *(float *)(param_1 + 0x28)) {
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_GameAudio__Play_2382750(0x3f800000,0x3f800000,0,*(undefined8 *)PTR_DAT_04cbb3f8);
    }
  }
  return iVar1 == 0;
}

